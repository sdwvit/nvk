/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#include "VkPhysicalDevice.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDevice::constructor;

_VkPhysicalDevice::_VkPhysicalDevice() {}
_VkPhysicalDevice::~_VkPhysicalDevice() {}

void _VkPhysicalDevice::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDevice::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDevice").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkPhysicalDevice").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPhysicalDevice::New) {
  _VkPhysicalDevice* self = new _VkPhysicalDevice();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
