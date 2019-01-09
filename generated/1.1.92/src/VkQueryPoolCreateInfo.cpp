/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkQueryPoolCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkQueryPoolCreateInfo::constructor;

_VkQueryPoolCreateInfo::_VkQueryPoolCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
  
}

_VkQueryPoolCreateInfo::~_VkQueryPoolCreateInfo() {
  //printf("VkQueryPoolCreateInfo deconstructed!!\n");
  
  
  
  
  
  
}

void _VkQueryPoolCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkQueryPoolCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkQueryPoolCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("queryType").ToLocalChecked(), GetqueryType, SetqueryType, ctor);
  SetPrototypeAccessor(proto, Nan::New("queryCount").ToLocalChecked(), GetqueryCount, SetqueryCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pipelineStatistics").ToLocalChecked(), GetpipelineStatistics, SetpipelineStatistics, ctor);
  Nan::Set(target, Nan::New("VkQueryPoolCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkQueryPoolCreateInfo::flush() {
  _VkQueryPoolCreateInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkQueryPoolCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkQueryPoolCreateInfo* self = new _VkQueryPoolCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("queryType").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("queryCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pipelineStatistics").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkQueryPoolCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkQueryPoolCreateInfo::GetsType) {
  _VkQueryPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkQueryPoolCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkQueryPoolCreateInfo::SetsType) {
  _VkQueryPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkQueryPoolCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkQueryPoolCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkQueryPoolCreateInfo::Getflags) {
  _VkQueryPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkQueryPoolCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkQueryPoolCreateInfo::Setflags) {
  _VkQueryPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkQueryPoolCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkQueryPoolCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkQueryPoolCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// queryType
NAN_GETTER(_VkQueryPoolCreateInfo::GetqueryType) {
  _VkQueryPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkQueryPoolCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queryType));
}NAN_SETTER(_VkQueryPoolCreateInfo::SetqueryType) {
  _VkQueryPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkQueryPoolCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.queryType = static_cast<VkQueryType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkQueryPoolCreateInfo.queryType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// queryCount
NAN_GETTER(_VkQueryPoolCreateInfo::GetqueryCount) {
  _VkQueryPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkQueryPoolCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queryCount));
}NAN_SETTER(_VkQueryPoolCreateInfo::SetqueryCount) {
  _VkQueryPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkQueryPoolCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.queryCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkQueryPoolCreateInfo.queryCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pipelineStatistics
NAN_GETTER(_VkQueryPoolCreateInfo::GetpipelineStatistics) {
  _VkQueryPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkQueryPoolCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.pipelineStatistics));
}NAN_SETTER(_VkQueryPoolCreateInfo::SetpipelineStatistics) {
  _VkQueryPoolCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkQueryPoolCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.pipelineStatistics = static_cast<VkQueryPipelineStatisticFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkQueryPoolCreateInfo.pipelineStatistics' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}