/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include <string.h>
#include "index.h"
#include "VkPhysicalDeviceIDProperties.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceIDProperties::constructor;

_VkPhysicalDeviceIDProperties::_VkPhysicalDeviceIDProperties() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;
  vdeviceUUID = new std::vector<uint8_t>;
  vdriverUUID = new std::vector<uint8_t>;
  vdeviceLUID = new std::vector<uint8_t>;
  
}

_VkPhysicalDeviceIDProperties::~_VkPhysicalDeviceIDProperties() {
  //printf("VkPhysicalDeviceIDProperties deconstructed!!\n");
  
  
  vdeviceUUID->clear();
  delete vdeviceUUID;
  
  
  vdriverUUID->clear();
  delete vdriverUUID;
  
  
  vdeviceLUID->clear();
  delete vdeviceLUID;
  
  
  
  
}

void _VkPhysicalDeviceIDProperties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceIDProperties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceIDProperties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceUUID").ToLocalChecked(), GetdeviceUUID, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("driverUUID").ToLocalChecked(), GetdriverUUID, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceLUID").ToLocalChecked(), GetdeviceLUID, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceNodeMask").ToLocalChecked(), GetdeviceNodeMask, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceLUIDValid").ToLocalChecked(), GetdeviceLUIDValid, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceIDProperties").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceIDProperties::flush() {
  _VkPhysicalDeviceIDProperties *self = this;
  if (!(self->deviceUUID.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->deviceUUID);
    
  }if (!(self->driverUUID.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->driverUUID);
    
  }if (!(self->deviceLUID.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->deviceLUID);
    
  }
  return true;
}

NAN_METHOD(_VkPhysicalDeviceIDProperties::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceIDProperties* self = new _VkPhysicalDeviceIDProperties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceIDProperties constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceIDProperties::GetsType) {
  _VkPhysicalDeviceIDProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceIDProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// deviceUUID
NAN_GETTER(_VkPhysicalDeviceIDProperties::GetdeviceUUID) {
  _VkPhysicalDeviceIDProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceIDProperties>(info.This());
  if (self->deviceUUID.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->deviceUUID));
  }
}// driverUUID
NAN_GETTER(_VkPhysicalDeviceIDProperties::GetdriverUUID) {
  _VkPhysicalDeviceIDProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceIDProperties>(info.This());
  if (self->driverUUID.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->driverUUID));
  }
}// deviceLUID
NAN_GETTER(_VkPhysicalDeviceIDProperties::GetdeviceLUID) {
  _VkPhysicalDeviceIDProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceIDProperties>(info.This());
  if (self->deviceLUID.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->deviceLUID));
  }
}// deviceNodeMask
NAN_GETTER(_VkPhysicalDeviceIDProperties::GetdeviceNodeMask) {
  _VkPhysicalDeviceIDProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceIDProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.deviceNodeMask));
}// deviceLUIDValid
NAN_GETTER(_VkPhysicalDeviceIDProperties::GetdeviceLUIDValid) {
  _VkPhysicalDeviceIDProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceIDProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.deviceLUIDValid));
}