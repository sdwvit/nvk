/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineTessellationDomainOriginStateCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineTessellationDomainOriginStateCreateInfoKHR::constructor;

_VkPipelineTessellationDomainOriginStateCreateInfoKHR::_VkPipelineTessellationDomainOriginStateCreateInfoKHR() {
  
  
}

_VkPipelineTessellationDomainOriginStateCreateInfoKHR::~_VkPipelineTessellationDomainOriginStateCreateInfoKHR() {
  //printf("VkPipelineTessellationDomainOriginStateCreateInfoKHR deconstructed!!\n");
  
}

void _VkPipelineTessellationDomainOriginStateCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineTessellationDomainOriginStateCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineTessellationDomainOriginStateCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkPipelineTessellationDomainOriginStateCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineTessellationDomainOriginStateCreateInfoKHR::flush() {
  _VkPipelineTessellationDomainOriginStateCreateInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPipelineTessellationDomainOriginStateCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkPipelineTessellationDomainOriginStateCreateInfoKHR* self = new _VkPipelineTessellationDomainOriginStateCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineTessellationDomainOriginStateCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

