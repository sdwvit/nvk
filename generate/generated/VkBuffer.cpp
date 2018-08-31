#include "utils.h"
#include "VkBuffer.h"

Nan::Persistent<v8::FunctionTemplate> _VkBuffer::constructor;

_VkBuffer::_VkBuffer() {
  instance = (VkBuffer*) malloc(sizeof(VkBuffer));
}

_VkBuffer::~_VkBuffer() { }

void _VkBuffer::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBuffer::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBuffer").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkBuffer").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkBuffer::New) {
  _VkBuffer* self = new _VkBuffer();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
