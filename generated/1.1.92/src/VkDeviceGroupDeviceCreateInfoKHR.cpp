/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceGroupDeviceCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceGroupDeviceCreateInfoKHR::constructor;

_VkDeviceGroupDeviceCreateInfoKHR::_VkDeviceGroupDeviceCreateInfoKHR() {
  
  
}

_VkDeviceGroupDeviceCreateInfoKHR::~_VkDeviceGroupDeviceCreateInfoKHR() {
  //printf("VkDeviceGroupDeviceCreateInfoKHR deconstructed!!\n");
  
}

void _VkDeviceGroupDeviceCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceGroupDeviceCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceGroupDeviceCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkDeviceGroupDeviceCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceGroupDeviceCreateInfoKHR::flush() {
  _VkDeviceGroupDeviceCreateInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkDeviceGroupDeviceCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkDeviceGroupDeviceCreateInfoKHR* self = new _VkDeviceGroupDeviceCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceGroupDeviceCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

