/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include <string.h>
#include "index.h"
#include "VkPhysicalDeviceProperties.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceProperties::constructor;

_VkPhysicalDeviceProperties::_VkPhysicalDeviceProperties() {
  
  vpipelineCacheUUID = new std::vector<uint8_t>;
  
}

_VkPhysicalDeviceProperties::~_VkPhysicalDeviceProperties() {
  //printf("VkPhysicalDeviceProperties deconstructed!!\n");
  
  
  
  
  
  
  
  vpipelineCacheUUID->clear();
  delete vpipelineCacheUUID;
  
  
  
  
}

void _VkPhysicalDeviceProperties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceProperties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceProperties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("apiVersion").ToLocalChecked(), GetapiVersion, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("driverVersion").ToLocalChecked(), GetdriverVersion, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("vendorID").ToLocalChecked(), GetvendorID, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceID").ToLocalChecked(), GetdeviceID, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceType").ToLocalChecked(), GetdeviceType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceName").ToLocalChecked(), GetdeviceName, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("pipelineCacheUUID").ToLocalChecked(), GetpipelineCacheUUID, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("limits").ToLocalChecked(), Getlimits, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("sparseProperties").ToLocalChecked(), GetsparseProperties, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceProperties").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceProperties::flush() {
  _VkPhysicalDeviceProperties *self = this;
  if (!(self->pipelineCacheUUID.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pipelineCacheUUID);
    
  }if (!(self->limits.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->limits);
    
  }if (!(self->sparseProperties.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->sparseProperties);
    
  }
  return true;
}

NAN_METHOD(_VkPhysicalDeviceProperties::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceProperties* self = new _VkPhysicalDeviceProperties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceProperties constructor cannot be invoked without 'new'");
  }
};

// apiVersion
NAN_GETTER(_VkPhysicalDeviceProperties::GetapiVersion) {
  _VkPhysicalDeviceProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.apiVersion));
}// driverVersion
NAN_GETTER(_VkPhysicalDeviceProperties::GetdriverVersion) {
  _VkPhysicalDeviceProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.driverVersion));
}// vendorID
NAN_GETTER(_VkPhysicalDeviceProperties::GetvendorID) {
  _VkPhysicalDeviceProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vendorID));
}// deviceID
NAN_GETTER(_VkPhysicalDeviceProperties::GetdeviceID) {
  _VkPhysicalDeviceProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.deviceID));
}// deviceType
NAN_GETTER(_VkPhysicalDeviceProperties::GetdeviceType) {
  _VkPhysicalDeviceProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.deviceType));
}// deviceName
NAN_GETTER(_VkPhysicalDeviceProperties::GetdeviceName) {
  _VkPhysicalDeviceProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceProperties>(info.This());
  if (self->deviceName.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->deviceName));
  }
}// pipelineCacheUUID
NAN_GETTER(_VkPhysicalDeviceProperties::GetpipelineCacheUUID) {
  _VkPhysicalDeviceProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceProperties>(info.This());
  if (self->pipelineCacheUUID.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->pipelineCacheUUID));
  }
}// limits
NAN_GETTER(_VkPhysicalDeviceProperties::Getlimits) {
  _VkPhysicalDeviceProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceProperties>(info.This());
  if (self->limits.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->limits);
    info.GetReturnValue().Set(obj);
  }
}// sparseProperties
NAN_GETTER(_VkPhysicalDeviceProperties::GetsparseProperties) {
  _VkPhysicalDeviceProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceProperties>(info.This());
  if (self->sparseProperties.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->sparseProperties);
    info.GetReturnValue().Set(obj);
  }
}