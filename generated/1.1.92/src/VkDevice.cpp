/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "VkDevice.h"

Nan::Persistent<v8::FunctionTemplate> _VkDevice::constructor;

_VkDevice::_VkDevice() {}
_VkDevice::~_VkDevice() {}

void _VkDevice::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDevice::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDevice").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkDevice").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDevice::New) {
  _VkDevice* self = new _VkDevice();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
