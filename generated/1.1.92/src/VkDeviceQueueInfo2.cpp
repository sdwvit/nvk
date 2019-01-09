/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceQueueInfo2.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceQueueInfo2::constructor;

_VkDeviceQueueInfo2::_VkDeviceQueueInfo2() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2;
  
}

_VkDeviceQueueInfo2::~_VkDeviceQueueInfo2() {
  //printf("VkDeviceQueueInfo2 deconstructed!!\n");
  
  
  
  
  
}

void _VkDeviceQueueInfo2::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceQueueInfo2::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceQueueInfo2").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueFamilyIndex").ToLocalChecked(), GetqueueFamilyIndex, SetqueueFamilyIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueIndex").ToLocalChecked(), GetqueueIndex, SetqueueIndex, ctor);
  Nan::Set(target, Nan::New("VkDeviceQueueInfo2").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceQueueInfo2::flush() {
  _VkDeviceQueueInfo2 *self = this;
  
  return true;
}

NAN_METHOD(_VkDeviceQueueInfo2::New) {
  if (info.IsConstructCall()) {
    _VkDeviceQueueInfo2* self = new _VkDeviceQueueInfo2();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("queueFamilyIndex").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("queueIndex").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceQueueInfo2 constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceQueueInfo2::GetsType) {
  _VkDeviceQueueInfo2 *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDeviceQueueInfo2::SetsType) {
  _VkDeviceQueueInfo2 *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceQueueInfo2.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkDeviceQueueInfo2::Getflags) {
  _VkDeviceQueueInfo2 *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkDeviceQueueInfo2::Setflags) {
  _VkDeviceQueueInfo2 *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkDeviceQueueCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceQueueInfo2.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// queueFamilyIndex
NAN_GETTER(_VkDeviceQueueInfo2::GetqueueFamilyIndex) {
  _VkDeviceQueueInfo2 *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueFamilyIndex));
}NAN_SETTER(_VkDeviceQueueInfo2::SetqueueFamilyIndex) {
  _VkDeviceQueueInfo2 *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.queueFamilyIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceQueueInfo2.queueFamilyIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// queueIndex
NAN_GETTER(_VkDeviceQueueInfo2::GetqueueIndex) {
  _VkDeviceQueueInfo2 *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueIndex));
}NAN_SETTER(_VkDeviceQueueInfo2::SetqueueIndex) {
  _VkDeviceQueueInfo2 *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.queueIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceQueueInfo2.queueIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}