/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceExternalBufferInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceExternalBufferInfoKHR::constructor;

_VkPhysicalDeviceExternalBufferInfoKHR::_VkPhysicalDeviceExternalBufferInfoKHR() {
  
  
}

_VkPhysicalDeviceExternalBufferInfoKHR::~_VkPhysicalDeviceExternalBufferInfoKHR() {
  //printf("VkPhysicalDeviceExternalBufferInfoKHR deconstructed!!\n");
  
}

void _VkPhysicalDeviceExternalBufferInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceExternalBufferInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceExternalBufferInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkPhysicalDeviceExternalBufferInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceExternalBufferInfoKHR::flush() {
  _VkPhysicalDeviceExternalBufferInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceExternalBufferInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceExternalBufferInfoKHR* self = new _VkPhysicalDeviceExternalBufferInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceExternalBufferInfoKHR constructor cannot be invoked without 'new'");
  }
};

