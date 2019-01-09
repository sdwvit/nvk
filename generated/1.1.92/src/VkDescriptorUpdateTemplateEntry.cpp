/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorUpdateTemplateEntry.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorUpdateTemplateEntry::constructor;

_VkDescriptorUpdateTemplateEntry::_VkDescriptorUpdateTemplateEntry() {
  
  
}

_VkDescriptorUpdateTemplateEntry::~_VkDescriptorUpdateTemplateEntry() {
  //printf("VkDescriptorUpdateTemplateEntry deconstructed!!\n");
  
  
  
  
  
  
  
}

void _VkDescriptorUpdateTemplateEntry::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorUpdateTemplateEntry::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorUpdateTemplateEntry").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("dstBinding").ToLocalChecked(), GetdstBinding, SetdstBinding, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstArrayElement").ToLocalChecked(), GetdstArrayElement, SetdstArrayElement, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorCount").ToLocalChecked(), GetdescriptorCount, SetdescriptorCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorType").ToLocalChecked(), GetdescriptorType, SetdescriptorType, ctor);
  SetPrototypeAccessor(proto, Nan::New("offset").ToLocalChecked(), Getoffset, Setoffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("stride").ToLocalChecked(), Getstride, Setstride, ctor);
  Nan::Set(target, Nan::New("VkDescriptorUpdateTemplateEntry").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDescriptorUpdateTemplateEntry::flush() {
  _VkDescriptorUpdateTemplateEntry *self = this;
  
  return true;
}

NAN_METHOD(_VkDescriptorUpdateTemplateEntry::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorUpdateTemplateEntry* self = new _VkDescriptorUpdateTemplateEntry();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("dstBinding").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("dstArrayElement").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("descriptorCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("descriptorType").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("offset").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("stride").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorUpdateTemplateEntry constructor cannot be invoked without 'new'");
  }
};

// dstBinding
NAN_GETTER(_VkDescriptorUpdateTemplateEntry::GetdstBinding) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstBinding));
}NAN_SETTER(_VkDescriptorUpdateTemplateEntry::SetdstBinding) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  if (value->IsNumber()) {
    self->instance.dstBinding = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateEntry.dstBinding' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// dstArrayElement
NAN_GETTER(_VkDescriptorUpdateTemplateEntry::GetdstArrayElement) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstArrayElement));
}NAN_SETTER(_VkDescriptorUpdateTemplateEntry::SetdstArrayElement) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  if (value->IsNumber()) {
    self->instance.dstArrayElement = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateEntry.dstArrayElement' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// descriptorCount
NAN_GETTER(_VkDescriptorUpdateTemplateEntry::GetdescriptorCount) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorCount));
}NAN_SETTER(_VkDescriptorUpdateTemplateEntry::SetdescriptorCount) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  if (value->IsNumber()) {
    self->instance.descriptorCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateEntry.descriptorCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// descriptorType
NAN_GETTER(_VkDescriptorUpdateTemplateEntry::GetdescriptorType) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorType));
}NAN_SETTER(_VkDescriptorUpdateTemplateEntry::SetdescriptorType) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  if (value->IsNumber()) {
    self->instance.descriptorType = static_cast<VkDescriptorType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateEntry.descriptorType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// offset
NAN_GETTER(_VkDescriptorUpdateTemplateEntry::Getoffset) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.offset));
}NAN_SETTER(_VkDescriptorUpdateTemplateEntry::Setoffset) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  if (value->IsNumber()) {
    self->instance.offset = static_cast<size_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateEntry.offset' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// stride
NAN_GETTER(_VkDescriptorUpdateTemplateEntry::Getstride) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stride));
}NAN_SETTER(_VkDescriptorUpdateTemplateEntry::Setstride) {
  _VkDescriptorUpdateTemplateEntry *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(info.This());
  if (value->IsNumber()) {
    self->instance.stride = static_cast<size_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateEntry.stride' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}