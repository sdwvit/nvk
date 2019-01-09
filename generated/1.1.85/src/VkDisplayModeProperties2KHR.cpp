/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkDisplayModeProperties2KHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDisplayModeProperties2KHR::constructor;

_VkDisplayModeProperties2KHR::_VkDisplayModeProperties2KHR() {
  instance.sType = VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR;
  
}

_VkDisplayModeProperties2KHR::~_VkDisplayModeProperties2KHR() {
  //printf("VkDisplayModeProperties2KHR deconstructed!!\n");
  
  
  
}

void _VkDisplayModeProperties2KHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDisplayModeProperties2KHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDisplayModeProperties2KHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("displayModeProperties").ToLocalChecked(), GetdisplayModeProperties, nullptr, ctor);
  Nan::Set(target, Nan::New("VkDisplayModeProperties2KHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDisplayModeProperties2KHR::flush() {
  _VkDisplayModeProperties2KHR *self = this;
  if (!(self->displayModeProperties.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->displayModeProperties);
    
  }
  return true;
}

NAN_METHOD(_VkDisplayModeProperties2KHR::New) {
  if (info.IsConstructCall()) {
    _VkDisplayModeProperties2KHR* self = new _VkDisplayModeProperties2KHR();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDisplayModeProperties2KHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDisplayModeProperties2KHR::GetsType) {
  _VkDisplayModeProperties2KHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayModeProperties2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// displayModeProperties
NAN_GETTER(_VkDisplayModeProperties2KHR::GetdisplayModeProperties) {
  _VkDisplayModeProperties2KHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayModeProperties2KHR>(info.This());
  if (self->displayModeProperties.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->displayModeProperties);
    info.GetReturnValue().Set(obj);
  }
}