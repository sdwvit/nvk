/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "VkSamplerYcbcrConversion.h"

Nan::Persistent<v8::FunctionTemplate> _VkSamplerYcbcrConversion::constructor;

_VkSamplerYcbcrConversion::_VkSamplerYcbcrConversion() {}
_VkSamplerYcbcrConversion::~_VkSamplerYcbcrConversion() {}

void _VkSamplerYcbcrConversion::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSamplerYcbcrConversion::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSamplerYcbcrConversion").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkSamplerYcbcrConversion").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSamplerYcbcrConversion::New) {
  _VkSamplerYcbcrConversion* self = new _VkSamplerYcbcrConversion();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
