/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkMemoryDedicatedRequirementsKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkMemoryDedicatedRequirementsKHR::constructor;

_VkMemoryDedicatedRequirementsKHR::_VkMemoryDedicatedRequirementsKHR() {
  
  
}

_VkMemoryDedicatedRequirementsKHR::~_VkMemoryDedicatedRequirementsKHR() {
  //printf("VkMemoryDedicatedRequirementsKHR deconstructed!!\n");
  
}

void _VkMemoryDedicatedRequirementsKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkMemoryDedicatedRequirementsKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkMemoryDedicatedRequirementsKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkMemoryDedicatedRequirementsKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkMemoryDedicatedRequirementsKHR::flush() {
  _VkMemoryDedicatedRequirementsKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkMemoryDedicatedRequirementsKHR::New) {
  if (info.IsConstructCall()) {
    _VkMemoryDedicatedRequirementsKHR* self = new _VkMemoryDedicatedRequirementsKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkMemoryDedicatedRequirementsKHR constructor cannot be invoked without 'new'");
  }
};

