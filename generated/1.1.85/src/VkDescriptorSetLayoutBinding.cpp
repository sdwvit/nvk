/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorSetLayoutBinding.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorSetLayoutBinding::constructor;

_VkDescriptorSetLayoutBinding::_VkDescriptorSetLayoutBinding() {
  
}

_VkDescriptorSetLayoutBinding::~_VkDescriptorSetLayoutBinding() {
  //printf("VkDescriptorSetLayoutBinding deconstructed!!\n");
}

void _VkDescriptorSetLayoutBinding::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorSetLayoutBinding::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorSetLayoutBinding").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("binding").ToLocalChecked(), Getbinding, Setbinding, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorType").ToLocalChecked(), GetdescriptorType, SetdescriptorType, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorCount").ToLocalChecked(), GetdescriptorCount, SetdescriptorCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("stageFlags").ToLocalChecked(), GetstageFlags, SetstageFlags, ctor);
  SetPrototypeAccessor(proto, Nan::New("pImmutableSamplers").ToLocalChecked(), GetpImmutableSamplers, SetpImmutableSamplers, ctor);
  Nan::Set(target, Nan::New("VkDescriptorSetLayoutBinding").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDescriptorSetLayoutBinding::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorSetLayoutBinding* self = new _VkDescriptorSetLayoutBinding();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("binding").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("descriptorType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("descriptorCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("stageFlags").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pImmutableSamplers").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorSetLayoutBinding constructor cannot be invoked without 'new'");
  }
};

// binding
NAN_GETTER(_VkDescriptorSetLayoutBinding::Getbinding) {
  _VkDescriptorSetLayoutBinding *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutBinding>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.binding));
}NAN_SETTER(_VkDescriptorSetLayoutBinding::Setbinding) {
  _VkDescriptorSetLayoutBinding *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutBinding>(info.This());
  self->instance.binding = static_cast<uint32_t>(value->NumberValue());
}// descriptorType
NAN_GETTER(_VkDescriptorSetLayoutBinding::GetdescriptorType) {
  _VkDescriptorSetLayoutBinding *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutBinding>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorType));
}NAN_SETTER(_VkDescriptorSetLayoutBinding::SetdescriptorType) {
  _VkDescriptorSetLayoutBinding *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutBinding>(info.This());
  self->instance.descriptorType = static_cast<VkDescriptorType>((int32_t)value->NumberValue());
}// descriptorCount
NAN_GETTER(_VkDescriptorSetLayoutBinding::GetdescriptorCount) {
  _VkDescriptorSetLayoutBinding *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutBinding>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorCount));
}NAN_SETTER(_VkDescriptorSetLayoutBinding::SetdescriptorCount) {
  _VkDescriptorSetLayoutBinding *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutBinding>(info.This());
  self->instance.descriptorCount = static_cast<uint32_t>(value->NumberValue());
}// stageFlags
NAN_GETTER(_VkDescriptorSetLayoutBinding::GetstageFlags) {
  _VkDescriptorSetLayoutBinding *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutBinding>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stageFlags));
}NAN_SETTER(_VkDescriptorSetLayoutBinding::SetstageFlags) {
  _VkDescriptorSetLayoutBinding *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutBinding>(info.This());
  self->instance.stageFlags = static_cast<VkShaderStageFlags>((int32_t)value->NumberValue());
}// pImmutableSamplers
NAN_GETTER(_VkDescriptorSetLayoutBinding::GetpImmutableSamplers) {
  _VkDescriptorSetLayoutBinding *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutBinding>(info.This());
  if (self->pImmutableSamplers.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pImmutableSamplers);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorSetLayoutBinding::SetpImmutableSamplers) {
  _VkDescriptorSetLayoutBinding *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutBinding>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pImmutableSamplers = obj;
    } else {
      if (!self->pImmutableSamplers.IsEmpty()) self->pImmutableSamplers.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pImmutableSamplers = copyArrayOfV8Objects<VkSampler, _VkSampler>(value);
  } else {
    self->instance.pImmutableSamplers = VK_NULL_HANDLE;
  }
}