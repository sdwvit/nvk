#include "utils.h"
#include "VkDescriptorPool.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorPool::constructor;

_VkDescriptorPool::_VkDescriptorPool() {
  instance = (VkDescriptorPool*) malloc(sizeof(VkDescriptorPool));
}

_VkDescriptorPool::~_VkDescriptorPool() { }

void _VkDescriptorPool::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorPool::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorPool").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkDescriptorPool").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDescriptorPool::New) {
  _VkDescriptorPool* self = new _VkDescriptorPool();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
