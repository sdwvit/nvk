/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.3
 */
#include "utils.h"
#include "index.h"
#include "VkWriteDescriptorSet.h"

Nan::Persistent<v8::FunctionTemplate> _VkWriteDescriptorSet::constructor;

_VkWriteDescriptorSet::_VkWriteDescriptorSet() {
  instance.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
}

_VkWriteDescriptorSet::~_VkWriteDescriptorSet() {
  //printf("VkWriteDescriptorSet deconstructed!!\n");
}

void _VkWriteDescriptorSet::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkWriteDescriptorSet::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkWriteDescriptorSet").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstSet").ToLocalChecked(), GetdstSet, SetdstSet, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstBinding").ToLocalChecked(), GetdstBinding, SetdstBinding, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstArrayElement").ToLocalChecked(), GetdstArrayElement, SetdstArrayElement, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorCount").ToLocalChecked(), GetdescriptorCount, SetdescriptorCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorType").ToLocalChecked(), GetdescriptorType, SetdescriptorType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pImageInfo").ToLocalChecked(), GetpImageInfo, SetpImageInfo, ctor);
  SetPrototypeAccessor(proto, Nan::New("pBufferInfo").ToLocalChecked(), GetpBufferInfo, SetpBufferInfo, ctor);
  SetPrototypeAccessor(proto, Nan::New("pTexelBufferView").ToLocalChecked(), GetpTexelBufferView, SetpTexelBufferView, ctor);
  Nan::Set(target, Nan::New("VkWriteDescriptorSet").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkWriteDescriptorSet::New) {
  if (info.IsConstructCall()) {
    _VkWriteDescriptorSet* self = new _VkWriteDescriptorSet();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("dstSet").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("dstBinding").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("dstArrayElement").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("descriptorCount").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("descriptorType").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pImageInfo").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("pBufferInfo").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("pTexelBufferView").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkWriteDescriptorSet constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkWriteDescriptorSet::GetsType) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkWriteDescriptorSet::SetsType) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// pNext
NAN_GETTER(_VkWriteDescriptorSet::GetpNext) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
}NAN_SETTER(_VkWriteDescriptorSet::SetpNext) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
}// dstSet
NAN_GETTER(_VkWriteDescriptorSet::GetdstSet) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (self->dstSet.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->dstSet);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWriteDescriptorSet::SetdstSet) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->dstSet = obj;
  } else {
    //self->dstSet = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkDescriptorSet* obj = Nan::ObjectWrap::Unwrap<_VkDescriptorSet>(value->ToObject());
    self->instance.dstSet = obj->instance;
  } else {
    self->instance.dstSet = VK_NULL_HANDLE;
  }
}// dstBinding
NAN_GETTER(_VkWriteDescriptorSet::GetdstBinding) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstBinding));
}NAN_SETTER(_VkWriteDescriptorSet::SetdstBinding) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  self->instance.dstBinding = static_cast<uint32_t>(value->NumberValue());
}// dstArrayElement
NAN_GETTER(_VkWriteDescriptorSet::GetdstArrayElement) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstArrayElement));
}NAN_SETTER(_VkWriteDescriptorSet::SetdstArrayElement) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  self->instance.dstArrayElement = static_cast<uint32_t>(value->NumberValue());
}// descriptorCount
NAN_GETTER(_VkWriteDescriptorSet::GetdescriptorCount) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorCount));
}NAN_SETTER(_VkWriteDescriptorSet::SetdescriptorCount) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  self->instance.descriptorCount = static_cast<uint32_t>(value->NumberValue());
}// descriptorType
NAN_GETTER(_VkWriteDescriptorSet::GetdescriptorType) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorType));
}NAN_SETTER(_VkWriteDescriptorSet::SetdescriptorType) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  self->instance.descriptorType = static_cast<VkDescriptorType>((int32_t)value->NumberValue());
}// pImageInfo
NAN_GETTER(_VkWriteDescriptorSet::GetpImageInfo) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (self->pImageInfo.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pImageInfo);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWriteDescriptorSet::SetpImageInfo) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pImageInfo = obj;
    } else {
      if (!self->pImageInfo.IsEmpty()) self->pImageInfo.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pImageInfo = copyArrayOfV8Objects<VkDescriptorImageInfo, _VkDescriptorImageInfo>(value);
  } else {
    self->instance.pImageInfo = nullptr;
  }
}// pBufferInfo
NAN_GETTER(_VkWriteDescriptorSet::GetpBufferInfo) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (self->pBufferInfo.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pBufferInfo);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWriteDescriptorSet::SetpBufferInfo) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pBufferInfo = obj;
    } else {
      if (!self->pBufferInfo.IsEmpty()) self->pBufferInfo.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pBufferInfo = copyArrayOfV8Objects<VkDescriptorBufferInfo, _VkDescriptorBufferInfo>(value);
  } else {
    self->instance.pBufferInfo = nullptr;
  }
}// pTexelBufferView
NAN_GETTER(_VkWriteDescriptorSet::GetpTexelBufferView) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  if (self->pTexelBufferView.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pTexelBufferView);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWriteDescriptorSet::SetpTexelBufferView) {
  _VkWriteDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSet>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pTexelBufferView = obj;
    } else {
      if (!self->pTexelBufferView.IsEmpty()) self->pTexelBufferView.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pTexelBufferView = copyArrayOfV8Objects<VkBufferView, _VkBufferView>(value);
  } else {
    self->instance.pTexelBufferView = VK_NULL_HANDLE;
  }
}