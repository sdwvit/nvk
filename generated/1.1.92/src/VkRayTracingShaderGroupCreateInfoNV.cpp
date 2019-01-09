/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkRayTracingShaderGroupCreateInfoNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkRayTracingShaderGroupCreateInfoNV::constructor;

_VkRayTracingShaderGroupCreateInfoNV::_VkRayTracingShaderGroupCreateInfoNV() {
  instance.sType = VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV;
  
}

_VkRayTracingShaderGroupCreateInfoNV::~_VkRayTracingShaderGroupCreateInfoNV() {
  //printf("VkRayTracingShaderGroupCreateInfoNV deconstructed!!\n");
  
  
  
  
  
  
  
}

void _VkRayTracingShaderGroupCreateInfoNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRayTracingShaderGroupCreateInfoNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRayTracingShaderGroupCreateInfoNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("type").ToLocalChecked(), Gettype, Settype, ctor);
  SetPrototypeAccessor(proto, Nan::New("generalShader").ToLocalChecked(), GetgeneralShader, SetgeneralShader, ctor);
  SetPrototypeAccessor(proto, Nan::New("closestHitShader").ToLocalChecked(), GetclosestHitShader, SetclosestHitShader, ctor);
  SetPrototypeAccessor(proto, Nan::New("anyHitShader").ToLocalChecked(), GetanyHitShader, SetanyHitShader, ctor);
  SetPrototypeAccessor(proto, Nan::New("intersectionShader").ToLocalChecked(), GetintersectionShader, SetintersectionShader, ctor);
  Nan::Set(target, Nan::New("VkRayTracingShaderGroupCreateInfoNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkRayTracingShaderGroupCreateInfoNV::flush() {
  _VkRayTracingShaderGroupCreateInfoNV *self = this;
  
  return true;
}

NAN_METHOD(_VkRayTracingShaderGroupCreateInfoNV::New) {
  if (info.IsConstructCall()) {
    _VkRayTracingShaderGroupCreateInfoNV* self = new _VkRayTracingShaderGroupCreateInfoNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("type").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("generalShader").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("closestHitShader").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("anyHitShader").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("intersectionShader").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkRayTracingShaderGroupCreateInfoNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkRayTracingShaderGroupCreateInfoNV::GetsType) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkRayTracingShaderGroupCreateInfoNV::SetsType) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRayTracingShaderGroupCreateInfoNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// type
NAN_GETTER(_VkRayTracingShaderGroupCreateInfoNV::Gettype) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.type));
}NAN_SETTER(_VkRayTracingShaderGroupCreateInfoNV::Settype) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.type = static_cast<VkRayTracingShaderGroupTypeNV>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRayTracingShaderGroupCreateInfoNV.type' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// generalShader
NAN_GETTER(_VkRayTracingShaderGroupCreateInfoNV::GetgeneralShader) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.generalShader));
}NAN_SETTER(_VkRayTracingShaderGroupCreateInfoNV::SetgeneralShader) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.generalShader = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRayTracingShaderGroupCreateInfoNV.generalShader' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// closestHitShader
NAN_GETTER(_VkRayTracingShaderGroupCreateInfoNV::GetclosestHitShader) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.closestHitShader));
}NAN_SETTER(_VkRayTracingShaderGroupCreateInfoNV::SetclosestHitShader) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.closestHitShader = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRayTracingShaderGroupCreateInfoNV.closestHitShader' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// anyHitShader
NAN_GETTER(_VkRayTracingShaderGroupCreateInfoNV::GetanyHitShader) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.anyHitShader));
}NAN_SETTER(_VkRayTracingShaderGroupCreateInfoNV::SetanyHitShader) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.anyHitShader = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRayTracingShaderGroupCreateInfoNV.anyHitShader' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// intersectionShader
NAN_GETTER(_VkRayTracingShaderGroupCreateInfoNV::GetintersectionShader) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.intersectionShader));
}NAN_SETTER(_VkRayTracingShaderGroupCreateInfoNV::SetintersectionShader) {
  _VkRayTracingShaderGroupCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkRayTracingShaderGroupCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.intersectionShader = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRayTracingShaderGroupCreateInfoNV.intersectionShader' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}