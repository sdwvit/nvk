/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorSetAllocateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorSetAllocateInfo::constructor;

_VkDescriptorSetAllocateInfo::_VkDescriptorSetAllocateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
}

_VkDescriptorSetAllocateInfo::~_VkDescriptorSetAllocateInfo() {
  //printf("VkDescriptorSetAllocateInfo deconstructed!!\n");
}

void _VkDescriptorSetAllocateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorSetAllocateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorSetAllocateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorPool").ToLocalChecked(), GetdescriptorPool, SetdescriptorPool, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorSetCount").ToLocalChecked(), GetdescriptorSetCount, SetdescriptorSetCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSetLayouts").ToLocalChecked(), GetpSetLayouts, SetpSetLayouts, ctor);
  Nan::Set(target, Nan::New("VkDescriptorSetAllocateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDescriptorSetAllocateInfo::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorSetAllocateInfo* self = new _VkDescriptorSetAllocateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("descriptorPool").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("descriptorSetCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pSetLayouts").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorSetAllocateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDescriptorSetAllocateInfo::GetsType) {
  _VkDescriptorSetAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetAllocateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDescriptorSetAllocateInfo::SetsType) {
  _VkDescriptorSetAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetAllocateInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// pNext
NAN_GETTER(_VkDescriptorSetAllocateInfo::GetpNext) {
  _VkDescriptorSetAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetAllocateInfo>(info.This());
}NAN_SETTER(_VkDescriptorSetAllocateInfo::SetpNext) {
  _VkDescriptorSetAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetAllocateInfo>(info.This());
}// descriptorPool
NAN_GETTER(_VkDescriptorSetAllocateInfo::GetdescriptorPool) {
  _VkDescriptorSetAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetAllocateInfo>(info.This());
  if (self->descriptorPool.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->descriptorPool);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorSetAllocateInfo::SetdescriptorPool) {
  _VkDescriptorSetAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetAllocateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->descriptorPool = obj;
  } else {
    //self->descriptorPool = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkDescriptorPool* obj = Nan::ObjectWrap::Unwrap<_VkDescriptorPool>(value->ToObject());
    self->instance.descriptorPool = obj->instance;
  } else {
    self->instance.descriptorPool = VK_NULL_HANDLE;
  }
}// descriptorSetCount
NAN_GETTER(_VkDescriptorSetAllocateInfo::GetdescriptorSetCount) {
  _VkDescriptorSetAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetAllocateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorSetCount));
}NAN_SETTER(_VkDescriptorSetAllocateInfo::SetdescriptorSetCount) {
  _VkDescriptorSetAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetAllocateInfo>(info.This());
  self->instance.descriptorSetCount = static_cast<uint32_t>(value->NumberValue());
}// pSetLayouts
NAN_GETTER(_VkDescriptorSetAllocateInfo::GetpSetLayouts) {
  _VkDescriptorSetAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetAllocateInfo>(info.This());
  if (self->pSetLayouts.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSetLayouts);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorSetAllocateInfo::SetpSetLayouts) {
  _VkDescriptorSetAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetAllocateInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pSetLayouts = obj;
    } else {
      if (!self->pSetLayouts.IsEmpty()) self->pSetLayouts.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pSetLayouts = copyArrayOfV8Objects<VkDescriptorSetLayout, _VkDescriptorSetLayout>(value);
  } else {
    self->instance.pSetLayouts = VK_NULL_HANDLE;
  }
}