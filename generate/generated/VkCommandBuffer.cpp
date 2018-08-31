#include "utils.h"
#include "VkCommandBuffer.h"

Nan::Persistent<v8::FunctionTemplate> _VkCommandBuffer::constructor;

_VkCommandBuffer::_VkCommandBuffer() {
  instance = (VkCommandBuffer*) malloc(sizeof(VkCommandBuffer));
}

_VkCommandBuffer::~_VkCommandBuffer() { }

void _VkCommandBuffer::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkCommandBuffer::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkCommandBuffer").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkCommandBuffer").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkCommandBuffer::New) {
  _VkCommandBuffer* self = new _VkCommandBuffer();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
