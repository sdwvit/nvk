/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkDrmFormatModifierPropertiesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkDrmFormatModifierPropertiesEXT::constructor;

_VkDrmFormatModifierPropertiesEXT::_VkDrmFormatModifierPropertiesEXT() {
  
  
}

_VkDrmFormatModifierPropertiesEXT::~_VkDrmFormatModifierPropertiesEXT() {
  //printf("VkDrmFormatModifierPropertiesEXT deconstructed!!\n");
  
  
  
  
}

void _VkDrmFormatModifierPropertiesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDrmFormatModifierPropertiesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDrmFormatModifierPropertiesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("drmFormatModifier").ToLocalChecked(), GetdrmFormatModifier, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("drmFormatModifierPlaneCount").ToLocalChecked(), GetdrmFormatModifierPlaneCount, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("drmFormatModifierTilingFeatures").ToLocalChecked(), GetdrmFormatModifierTilingFeatures, nullptr, ctor);
  Nan::Set(target, Nan::New("VkDrmFormatModifierPropertiesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDrmFormatModifierPropertiesEXT::flush() {
  _VkDrmFormatModifierPropertiesEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkDrmFormatModifierPropertiesEXT::New) {
  if (info.IsConstructCall()) {
    _VkDrmFormatModifierPropertiesEXT* self = new _VkDrmFormatModifierPropertiesEXT();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDrmFormatModifierPropertiesEXT constructor cannot be invoked without 'new'");
  }
};

// drmFormatModifier
NAN_GETTER(_VkDrmFormatModifierPropertiesEXT::GetdrmFormatModifier) {
  _VkDrmFormatModifierPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkDrmFormatModifierPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.drmFormatModifier));
}// drmFormatModifierPlaneCount
NAN_GETTER(_VkDrmFormatModifierPropertiesEXT::GetdrmFormatModifierPlaneCount) {
  _VkDrmFormatModifierPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkDrmFormatModifierPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.drmFormatModifierPlaneCount));
}// drmFormatModifierTilingFeatures
NAN_GETTER(_VkDrmFormatModifierPropertiesEXT::GetdrmFormatModifierTilingFeatures) {
  _VkDrmFormatModifierPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkDrmFormatModifierPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.drmFormatModifierTilingFeatures));
}