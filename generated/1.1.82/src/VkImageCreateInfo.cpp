/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.3
 */
#include "utils.h"
#include "index.h"
#include "VkImageCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkImageCreateInfo::constructor;

_VkImageCreateInfo::_VkImageCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
}

_VkImageCreateInfo::~_VkImageCreateInfo() {
  //printf("VkImageCreateInfo deconstructed!!\n");
}

void _VkImageCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImageCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImageCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageType").ToLocalChecked(), GetimageType, SetimageType, ctor);
  SetPrototypeAccessor(proto, Nan::New("format").ToLocalChecked(), Getformat, Setformat, ctor);
  SetPrototypeAccessor(proto, Nan::New("extent").ToLocalChecked(), Getextent, Setextent, ctor);
  SetPrototypeAccessor(proto, Nan::New("mipLevels").ToLocalChecked(), GetmipLevels, SetmipLevels, ctor);
  SetPrototypeAccessor(proto, Nan::New("arrayLayers").ToLocalChecked(), GetarrayLayers, SetarrayLayers, ctor);
  SetPrototypeAccessor(proto, Nan::New("samples").ToLocalChecked(), Getsamples, Setsamples, ctor);
  SetPrototypeAccessor(proto, Nan::New("tiling").ToLocalChecked(), Gettiling, Settiling, ctor);
  SetPrototypeAccessor(proto, Nan::New("usage").ToLocalChecked(), Getusage, Setusage, ctor);
  SetPrototypeAccessor(proto, Nan::New("sharingMode").ToLocalChecked(), GetsharingMode, SetsharingMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueFamilyIndexCount").ToLocalChecked(), GetqueueFamilyIndexCount, SetqueueFamilyIndexCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pQueueFamilyIndices").ToLocalChecked(), GetpQueueFamilyIndices, SetpQueueFamilyIndices, ctor);
  SetPrototypeAccessor(proto, Nan::New("initialLayout").ToLocalChecked(), GetinitialLayout, SetinitialLayout, ctor);
  Nan::Set(target, Nan::New("VkImageCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkImageCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkImageCreateInfo* self = new _VkImageCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("imageType").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("format").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("extent").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("mipLevels").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("arrayLayers").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("samples").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("tiling").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("usage").ToLocalChecked();
      v8::Local<v8::String> sAccess11 = Nan::New("sharingMode").ToLocalChecked();
      v8::Local<v8::String> sAccess12 = Nan::New("queueFamilyIndexCount").ToLocalChecked();
      v8::Local<v8::String> sAccess13 = Nan::New("pQueueFamilyIndices").ToLocalChecked();
      v8::Local<v8::String> sAccess14 = Nan::New("initialLayout").ToLocalChecked();
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
      if (obj->Has(sAccess10)) info.This()->Set(sAccess10, obj->Get(sAccess10));
      if (obj->Has(sAccess11)) info.This()->Set(sAccess11, obj->Get(sAccess11));
      if (obj->Has(sAccess12)) info.This()->Set(sAccess12, obj->Get(sAccess12));
      if (obj->Has(sAccess13)) info.This()->Set(sAccess13, obj->Get(sAccess13));
      if (obj->Has(sAccess14)) info.This()->Set(sAccess14, obj->Get(sAccess14));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkImageCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkImageCreateInfo::GetsType) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkImageCreateInfo::SetsType) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// pNext
NAN_GETTER(_VkImageCreateInfo::GetpNext) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
}NAN_SETTER(_VkImageCreateInfo::SetpNext) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkImageCreateInfo::Getflags) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkImageCreateInfo::Setflags) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.flags = static_cast<VkImageCreateFlags>((int32_t)value->NumberValue());
}// imageType
NAN_GETTER(_VkImageCreateInfo::GetimageType) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageType));
}NAN_SETTER(_VkImageCreateInfo::SetimageType) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.imageType = static_cast<VkImageType>((int32_t)value->NumberValue());
}// format
NAN_GETTER(_VkImageCreateInfo::Getformat) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.format));
}NAN_SETTER(_VkImageCreateInfo::Setformat) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.format = static_cast<VkFormat>((int32_t)value->NumberValue());
}// extent
NAN_GETTER(_VkImageCreateInfo::Getextent) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  if (self->extent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->extent);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkImageCreateInfo::Setextent) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->extent = obj;
  } else {
    //self->extent = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkExtent3D* obj = Nan::ObjectWrap::Unwrap<_VkExtent3D>(value->ToObject());
    self->instance.extent = obj->instance;
  } else {
    memset(&self->instance.extent, 0, sizeof(VkExtent3D));
  }
}// mipLevels
NAN_GETTER(_VkImageCreateInfo::GetmipLevels) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.mipLevels));
}NAN_SETTER(_VkImageCreateInfo::SetmipLevels) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.mipLevels = static_cast<uint32_t>(value->NumberValue());
}// arrayLayers
NAN_GETTER(_VkImageCreateInfo::GetarrayLayers) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.arrayLayers));
}NAN_SETTER(_VkImageCreateInfo::SetarrayLayers) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.arrayLayers = static_cast<uint32_t>(value->NumberValue());
}// samples
NAN_GETTER(_VkImageCreateInfo::Getsamples) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.samples));
}NAN_SETTER(_VkImageCreateInfo::Setsamples) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.samples = static_cast<VkSampleCountFlagBits>((int32_t)value->NumberValue());
}// tiling
NAN_GETTER(_VkImageCreateInfo::Gettiling) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.tiling));
}NAN_SETTER(_VkImageCreateInfo::Settiling) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.tiling = static_cast<VkImageTiling>((int32_t)value->NumberValue());
}// usage
NAN_GETTER(_VkImageCreateInfo::Getusage) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.usage));
}NAN_SETTER(_VkImageCreateInfo::Setusage) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.usage = static_cast<VkImageUsageFlags>((int32_t)value->NumberValue());
}// sharingMode
NAN_GETTER(_VkImageCreateInfo::GetsharingMode) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sharingMode));
}NAN_SETTER(_VkImageCreateInfo::SetsharingMode) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.sharingMode = static_cast<VkSharingMode>((int32_t)value->NumberValue());
}// queueFamilyIndexCount
NAN_GETTER(_VkImageCreateInfo::GetqueueFamilyIndexCount) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueFamilyIndexCount));
}NAN_SETTER(_VkImageCreateInfo::SetqueueFamilyIndexCount) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.queueFamilyIndexCount = static_cast<uint32_t>(value->NumberValue());
}// pQueueFamilyIndices
NAN_GETTER(_VkImageCreateInfo::GetpQueueFamilyIndices) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  if (self->pQueueFamilyIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pQueueFamilyIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkImageCreateInfo::SetpQueueFamilyIndices) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pQueueFamilyIndices = obj;
    } else {
      if (!self->pQueueFamilyIndices.IsEmpty()) self->pQueueFamilyIndices.Empty();
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pQueueFamilyIndices = getTypedArrayData<uint32_t>(value->ToObject(), nullptr);
  } else {
    self->instance.pQueueFamilyIndices = nullptr;
  }
}// initialLayout
NAN_GETTER(_VkImageCreateInfo::GetinitialLayout) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.initialLayout));
}NAN_SETTER(_VkImageCreateInfo::SetinitialLayout) {
  _VkImageCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkImageCreateInfo>(info.This());
  self->instance.initialLayout = static_cast<VkImageLayout>((int32_t)value->NumberValue());
}