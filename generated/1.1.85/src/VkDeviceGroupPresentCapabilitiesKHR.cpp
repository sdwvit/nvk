/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include <string.h>
#include "index.h"
#include "VkDeviceGroupPresentCapabilitiesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceGroupPresentCapabilitiesKHR::constructor;

_VkDeviceGroupPresentCapabilitiesKHR::_VkDeviceGroupPresentCapabilitiesKHR() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR;
  vpresentMask = new std::vector<uint32_t>;
  
}

_VkDeviceGroupPresentCapabilitiesKHR::~_VkDeviceGroupPresentCapabilitiesKHR() {
  //printf("VkDeviceGroupPresentCapabilitiesKHR deconstructed!!\n");
  
  
  vpresentMask->clear();
  delete vpresentMask;
  
  
  
}

void _VkDeviceGroupPresentCapabilitiesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceGroupPresentCapabilitiesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceGroupPresentCapabilitiesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("presentMask").ToLocalChecked(), GetpresentMask, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("modes").ToLocalChecked(), Getmodes, nullptr, ctor);
  Nan::Set(target, Nan::New("VkDeviceGroupPresentCapabilitiesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceGroupPresentCapabilitiesKHR::flush() {
  _VkDeviceGroupPresentCapabilitiesKHR *self = this;
  if (!(self->presentMask.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->presentMask);
    
  }
  return true;
}

NAN_METHOD(_VkDeviceGroupPresentCapabilitiesKHR::New) {
  if (info.IsConstructCall()) {
    _VkDeviceGroupPresentCapabilitiesKHR* self = new _VkDeviceGroupPresentCapabilitiesKHR();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceGroupPresentCapabilitiesKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceGroupPresentCapabilitiesKHR::GetsType) {
  _VkDeviceGroupPresentCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupPresentCapabilitiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// presentMask
NAN_GETTER(_VkDeviceGroupPresentCapabilitiesKHR::GetpresentMask) {
  _VkDeviceGroupPresentCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupPresentCapabilitiesKHR>(info.This());
  if (self->presentMask.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->presentMask));
  }
}// modes
NAN_GETTER(_VkDeviceGroupPresentCapabilitiesKHR::Getmodes) {
  _VkDeviceGroupPresentCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupPresentCapabilitiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.modes));
}