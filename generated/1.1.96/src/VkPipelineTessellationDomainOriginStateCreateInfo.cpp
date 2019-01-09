/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineTessellationDomainOriginStateCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineTessellationDomainOriginStateCreateInfo::constructor;

_VkPipelineTessellationDomainOriginStateCreateInfo::_VkPipelineTessellationDomainOriginStateCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO;
  
}

_VkPipelineTessellationDomainOriginStateCreateInfo::~_VkPipelineTessellationDomainOriginStateCreateInfo() {
  //printf("VkPipelineTessellationDomainOriginStateCreateInfo deconstructed!!\n");
  
  
  
}

void _VkPipelineTessellationDomainOriginStateCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineTessellationDomainOriginStateCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineTessellationDomainOriginStateCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("domainOrigin").ToLocalChecked(), GetdomainOrigin, SetdomainOrigin, ctor);
  Nan::Set(target, Nan::New("VkPipelineTessellationDomainOriginStateCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineTessellationDomainOriginStateCreateInfo::flush() {
  _VkPipelineTessellationDomainOriginStateCreateInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkPipelineTessellationDomainOriginStateCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineTessellationDomainOriginStateCreateInfo* self = new _VkPipelineTessellationDomainOriginStateCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("domainOrigin").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineTessellationDomainOriginStateCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineTessellationDomainOriginStateCreateInfo::GetsType) {
  _VkPipelineTessellationDomainOriginStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineTessellationDomainOriginStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineTessellationDomainOriginStateCreateInfo::SetsType) {
  _VkPipelineTessellationDomainOriginStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineTessellationDomainOriginStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineTessellationDomainOriginStateCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// domainOrigin
NAN_GETTER(_VkPipelineTessellationDomainOriginStateCreateInfo::GetdomainOrigin) {
  _VkPipelineTessellationDomainOriginStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineTessellationDomainOriginStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.domainOrigin));
}NAN_SETTER(_VkPipelineTessellationDomainOriginStateCreateInfo::SetdomainOrigin) {
  _VkPipelineTessellationDomainOriginStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineTessellationDomainOriginStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.domainOrigin = static_cast<VkTessellationDomainOrigin>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineTessellationDomainOriginStateCreateInfo.domainOrigin' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}