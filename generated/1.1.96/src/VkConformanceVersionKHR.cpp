/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkConformanceVersionKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkConformanceVersionKHR::constructor;

_VkConformanceVersionKHR::_VkConformanceVersionKHR() {
  
  
}

_VkConformanceVersionKHR::~_VkConformanceVersionKHR() {
  //printf("VkConformanceVersionKHR deconstructed!!\n");
  
  
  
  
  
}

void _VkConformanceVersionKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkConformanceVersionKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkConformanceVersionKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("major").ToLocalChecked(), Getmajor, Setmajor, ctor);
  SetPrototypeAccessor(proto, Nan::New("minor").ToLocalChecked(), Getminor, Setminor, ctor);
  SetPrototypeAccessor(proto, Nan::New("subminor").ToLocalChecked(), Getsubminor, Setsubminor, ctor);
  SetPrototypeAccessor(proto, Nan::New("patch").ToLocalChecked(), Getpatch, Setpatch, ctor);
  Nan::Set(target, Nan::New("VkConformanceVersionKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkConformanceVersionKHR::flush() {
  _VkConformanceVersionKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkConformanceVersionKHR::New) {
  if (info.IsConstructCall()) {
    _VkConformanceVersionKHR* self = new _VkConformanceVersionKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("major").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("minor").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("subminor").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("patch").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkConformanceVersionKHR constructor cannot be invoked without 'new'");
  }
};

// major
NAN_GETTER(_VkConformanceVersionKHR::Getmajor) {
  _VkConformanceVersionKHR *self = Nan::ObjectWrap::Unwrap<_VkConformanceVersionKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.major));
}NAN_SETTER(_VkConformanceVersionKHR::Setmajor) {
  _VkConformanceVersionKHR *self = Nan::ObjectWrap::Unwrap<_VkConformanceVersionKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.major = static_cast<uint8_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkConformanceVersionKHR.major' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// minor
NAN_GETTER(_VkConformanceVersionKHR::Getminor) {
  _VkConformanceVersionKHR *self = Nan::ObjectWrap::Unwrap<_VkConformanceVersionKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minor));
}NAN_SETTER(_VkConformanceVersionKHR::Setminor) {
  _VkConformanceVersionKHR *self = Nan::ObjectWrap::Unwrap<_VkConformanceVersionKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.minor = static_cast<uint8_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkConformanceVersionKHR.minor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// subminor
NAN_GETTER(_VkConformanceVersionKHR::Getsubminor) {
  _VkConformanceVersionKHR *self = Nan::ObjectWrap::Unwrap<_VkConformanceVersionKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.subminor));
}NAN_SETTER(_VkConformanceVersionKHR::Setsubminor) {
  _VkConformanceVersionKHR *self = Nan::ObjectWrap::Unwrap<_VkConformanceVersionKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.subminor = static_cast<uint8_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkConformanceVersionKHR.subminor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// patch
NAN_GETTER(_VkConformanceVersionKHR::Getpatch) {
  _VkConformanceVersionKHR *self = Nan::ObjectWrap::Unwrap<_VkConformanceVersionKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.patch));
}NAN_SETTER(_VkConformanceVersionKHR::Setpatch) {
  _VkConformanceVersionKHR *self = Nan::ObjectWrap::Unwrap<_VkConformanceVersionKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.patch = static_cast<uint8_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkConformanceVersionKHR.patch' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}