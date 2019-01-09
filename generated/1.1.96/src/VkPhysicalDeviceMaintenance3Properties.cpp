/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceMaintenance3Properties.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceMaintenance3Properties::constructor;

_VkPhysicalDeviceMaintenance3Properties::_VkPhysicalDeviceMaintenance3Properties() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES;
  
}

_VkPhysicalDeviceMaintenance3Properties::~_VkPhysicalDeviceMaintenance3Properties() {
  //printf("VkPhysicalDeviceMaintenance3Properties deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceMaintenance3Properties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceMaintenance3Properties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceMaintenance3Properties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxPerSetDescriptors").ToLocalChecked(), GetmaxPerSetDescriptors, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxMemoryAllocationSize").ToLocalChecked(), GetmaxMemoryAllocationSize, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceMaintenance3Properties").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceMaintenance3Properties::flush() {
  _VkPhysicalDeviceMaintenance3Properties *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceMaintenance3Properties::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceMaintenance3Properties* self = new _VkPhysicalDeviceMaintenance3Properties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceMaintenance3Properties constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceMaintenance3Properties::GetsType) {
  _VkPhysicalDeviceMaintenance3Properties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMaintenance3Properties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// maxPerSetDescriptors
NAN_GETTER(_VkPhysicalDeviceMaintenance3Properties::GetmaxPerSetDescriptors) {
  _VkPhysicalDeviceMaintenance3Properties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMaintenance3Properties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxPerSetDescriptors));
}// maxMemoryAllocationSize
NAN_GETTER(_VkPhysicalDeviceMaintenance3Properties::GetmaxMemoryAllocationSize) {
  _VkPhysicalDeviceMaintenance3Properties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMaintenance3Properties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxMemoryAllocationSize));
}