/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkExportFenceCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkExportFenceCreateInfoKHR::constructor;

_VkExportFenceCreateInfoKHR::_VkExportFenceCreateInfoKHR() {
  
  
}

_VkExportFenceCreateInfoKHR::~_VkExportFenceCreateInfoKHR() {
  //printf("VkExportFenceCreateInfoKHR deconstructed!!\n");
  
}

void _VkExportFenceCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExportFenceCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExportFenceCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkExportFenceCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkExportFenceCreateInfoKHR::flush() {
  _VkExportFenceCreateInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkExportFenceCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkExportFenceCreateInfoKHR* self = new _VkExportFenceCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkExportFenceCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

