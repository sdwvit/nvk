/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.3
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineDynamicStateCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineDynamicStateCreateInfo::constructor;

_VkPipelineDynamicStateCreateInfo::_VkPipelineDynamicStateCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
}

_VkPipelineDynamicStateCreateInfo::~_VkPipelineDynamicStateCreateInfo() {
  //printf("VkPipelineDynamicStateCreateInfo deconstructed!!\n");
}

void _VkPipelineDynamicStateCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineDynamicStateCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineDynamicStateCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("dynamicStateCount").ToLocalChecked(), GetdynamicStateCount, SetdynamicStateCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDynamicStates").ToLocalChecked(), GetpDynamicStates, SetpDynamicStates, ctor);
  Nan::Set(target, Nan::New("VkPipelineDynamicStateCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPipelineDynamicStateCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineDynamicStateCreateInfo* self = new _VkPipelineDynamicStateCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("dynamicStateCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pDynamicStates").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineDynamicStateCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineDynamicStateCreateInfo::GetsType) {
  _VkPipelineDynamicStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineDynamicStateCreateInfo::SetsType) {
  _VkPipelineDynamicStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// pNext
NAN_GETTER(_VkPipelineDynamicStateCreateInfo::GetpNext) {
  _VkPipelineDynamicStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(info.This());
}NAN_SETTER(_VkPipelineDynamicStateCreateInfo::SetpNext) {
  _VkPipelineDynamicStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkPipelineDynamicStateCreateInfo::Getflags) {
  _VkPipelineDynamicStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineDynamicStateCreateInfo::Setflags) {
  _VkPipelineDynamicStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(info.This());
  self->instance.flags = static_cast<VkPipelineDynamicStateCreateFlags>((int32_t)value->NumberValue());
}// dynamicStateCount
NAN_GETTER(_VkPipelineDynamicStateCreateInfo::GetdynamicStateCount) {
  _VkPipelineDynamicStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dynamicStateCount));
}NAN_SETTER(_VkPipelineDynamicStateCreateInfo::SetdynamicStateCount) {
  _VkPipelineDynamicStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(info.This());
  self->instance.dynamicStateCount = static_cast<uint32_t>(value->NumberValue());
}// pDynamicStates
NAN_GETTER(_VkPipelineDynamicStateCreateInfo::GetpDynamicStates) {
  _VkPipelineDynamicStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(info.This());
  if (self->pDynamicStates.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDynamicStates);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineDynamicStateCreateInfo::SetpDynamicStates) {
  _VkPipelineDynamicStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pDynamicStates = obj;
    } else {
      if (!self->pDynamicStates.IsEmpty()) self->pDynamicStates.Empty();
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pDynamicStates = reinterpret_cast<const VkDynamicState *>(getTypedArrayData<int32_t>(value->ToObject(), nullptr));
  } else {
    self->instance.pDynamicStates = nullptr;
  }
}