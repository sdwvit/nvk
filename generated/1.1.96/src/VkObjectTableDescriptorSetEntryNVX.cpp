/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkObjectTableDescriptorSetEntryNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkObjectTableDescriptorSetEntryNVX::constructor;

_VkObjectTableDescriptorSetEntryNVX::_VkObjectTableDescriptorSetEntryNVX() {
  
  
}

_VkObjectTableDescriptorSetEntryNVX::~_VkObjectTableDescriptorSetEntryNVX() {
  //printf("VkObjectTableDescriptorSetEntryNVX deconstructed!!\n");
  
  
  
  
  
}

void _VkObjectTableDescriptorSetEntryNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkObjectTableDescriptorSetEntryNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkObjectTableDescriptorSetEntryNVX").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("type").ToLocalChecked(), Gettype, Settype, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("pipelineLayout").ToLocalChecked(), GetpipelineLayout, SetpipelineLayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorSet").ToLocalChecked(), GetdescriptorSet, SetdescriptorSet, ctor);
  Nan::Set(target, Nan::New("VkObjectTableDescriptorSetEntryNVX").ToLocalChecked(), ctor->GetFunction());
}

bool _VkObjectTableDescriptorSetEntryNVX::flush() {
  _VkObjectTableDescriptorSetEntryNVX *self = this;
  
  return true;
}

NAN_METHOD(_VkObjectTableDescriptorSetEntryNVX::New) {
  if (info.IsConstructCall()) {
    _VkObjectTableDescriptorSetEntryNVX* self = new _VkObjectTableDescriptorSetEntryNVX();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("type").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("pipelineLayout").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("descriptorSet").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkObjectTableDescriptorSetEntryNVX constructor cannot be invoked without 'new'");
  }
};

// type
NAN_GETTER(_VkObjectTableDescriptorSetEntryNVX::Gettype) {
  _VkObjectTableDescriptorSetEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableDescriptorSetEntryNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.type));
}NAN_SETTER(_VkObjectTableDescriptorSetEntryNVX::Settype) {
  _VkObjectTableDescriptorSetEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableDescriptorSetEntryNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.type = static_cast<VkObjectEntryTypeNVX>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableDescriptorSetEntryNVX.type' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkObjectTableDescriptorSetEntryNVX::Getflags) {
  _VkObjectTableDescriptorSetEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableDescriptorSetEntryNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkObjectTableDescriptorSetEntryNVX::Setflags) {
  _VkObjectTableDescriptorSetEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableDescriptorSetEntryNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkObjectEntryUsageFlagsNVX>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableDescriptorSetEntryNVX.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pipelineLayout
NAN_GETTER(_VkObjectTableDescriptorSetEntryNVX::GetpipelineLayout) {
  _VkObjectTableDescriptorSetEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableDescriptorSetEntryNVX>(info.This());
  if (self->pipelineLayout.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pipelineLayout);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkObjectTableDescriptorSetEntryNVX::SetpipelineLayout) {
  _VkObjectTableDescriptorSetEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableDescriptorSetEntryNVX>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineLayout::constructor)->HasInstance(obj)) {
      self->pipelineLayout.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineLayout* inst = Nan::ObjectWrap::Unwrap<_VkPipelineLayout>(obj);
      ;
      self->instance.pipelineLayout = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineLayout]' for 'VkObjectTableDescriptorSetEntryNVX.pipelineLayout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->pipelineLayout.Reset();
    self->instance.pipelineLayout = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineLayout]' for 'VkObjectTableDescriptorSetEntryNVX.pipelineLayout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// descriptorSet
NAN_GETTER(_VkObjectTableDescriptorSetEntryNVX::GetdescriptorSet) {
  _VkObjectTableDescriptorSetEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableDescriptorSetEntryNVX>(info.This());
  if (self->descriptorSet.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->descriptorSet);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkObjectTableDescriptorSetEntryNVX::SetdescriptorSet) {
  _VkObjectTableDescriptorSetEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableDescriptorSetEntryNVX>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkDescriptorSet::constructor)->HasInstance(obj)) {
      self->descriptorSet.Reset<v8::Object>(value.As<v8::Object>());
      _VkDescriptorSet* inst = Nan::ObjectWrap::Unwrap<_VkDescriptorSet>(obj);
      ;
      self->instance.descriptorSet = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorSet]' for 'VkObjectTableDescriptorSetEntryNVX.descriptorSet' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->descriptorSet.Reset();
    self->instance.descriptorSet = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorSet]' for 'VkObjectTableDescriptorSetEntryNVX.descriptorSet' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}