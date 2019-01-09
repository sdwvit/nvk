/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkProtectedSubmitInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkProtectedSubmitInfo::constructor;

_VkProtectedSubmitInfo::_VkProtectedSubmitInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO;
  
}

_VkProtectedSubmitInfo::~_VkProtectedSubmitInfo() {
  //printf("VkProtectedSubmitInfo deconstructed!!\n");
  
  
  
}

void _VkProtectedSubmitInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkProtectedSubmitInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkProtectedSubmitInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("protectedSubmit").ToLocalChecked(), GetprotectedSubmit, SetprotectedSubmit, ctor);
  Nan::Set(target, Nan::New("VkProtectedSubmitInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkProtectedSubmitInfo::flush() {
  _VkProtectedSubmitInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkProtectedSubmitInfo::New) {
  if (info.IsConstructCall()) {
    _VkProtectedSubmitInfo* self = new _VkProtectedSubmitInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("protectedSubmit").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkProtectedSubmitInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkProtectedSubmitInfo::GetsType) {
  _VkProtectedSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkProtectedSubmitInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkProtectedSubmitInfo::SetsType) {
  _VkProtectedSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkProtectedSubmitInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkProtectedSubmitInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// protectedSubmit
NAN_GETTER(_VkProtectedSubmitInfo::GetprotectedSubmit) {
  _VkProtectedSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkProtectedSubmitInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.protectedSubmit));
}NAN_SETTER(_VkProtectedSubmitInfo::SetprotectedSubmit) {
  _VkProtectedSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkProtectedSubmitInfo>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.protectedSubmit = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkProtectedSubmitInfo.protectedSubmit' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}