/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorUpdateTemplateCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorUpdateTemplateCreateInfoKHR::constructor;

_VkDescriptorUpdateTemplateCreateInfoKHR::_VkDescriptorUpdateTemplateCreateInfoKHR() {
  
  
}

_VkDescriptorUpdateTemplateCreateInfoKHR::~_VkDescriptorUpdateTemplateCreateInfoKHR() {
  //printf("VkDescriptorUpdateTemplateCreateInfoKHR deconstructed!!\n");
  
}

void _VkDescriptorUpdateTemplateCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorUpdateTemplateCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorUpdateTemplateCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkDescriptorUpdateTemplateCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDescriptorUpdateTemplateCreateInfoKHR::flush() {
  _VkDescriptorUpdateTemplateCreateInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkDescriptorUpdateTemplateCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorUpdateTemplateCreateInfoKHR* self = new _VkDescriptorUpdateTemplateCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorUpdateTemplateCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

