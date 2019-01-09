/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceInlineUniformBlockPropertiesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceInlineUniformBlockPropertiesEXT::constructor;

_VkPhysicalDeviceInlineUniformBlockPropertiesEXT::_VkPhysicalDeviceInlineUniformBlockPropertiesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT;
  
}

_VkPhysicalDeviceInlineUniformBlockPropertiesEXT::~_VkPhysicalDeviceInlineUniformBlockPropertiesEXT() {
  //printf("VkPhysicalDeviceInlineUniformBlockPropertiesEXT deconstructed!!\n");
  
  
  
  
  
  
  
}

void _VkPhysicalDeviceInlineUniformBlockPropertiesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceInlineUniformBlockPropertiesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceInlineUniformBlockPropertiesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxInlineUniformBlockSize").ToLocalChecked(), GetmaxInlineUniformBlockSize, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxPerStageDescriptorInlineUniformBlocks").ToLocalChecked(), GetmaxPerStageDescriptorInlineUniformBlocks, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks").ToLocalChecked(), GetmaxPerStageDescriptorUpdateAfterBindInlineUniformBlocks, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxDescriptorSetInlineUniformBlocks").ToLocalChecked(), GetmaxDescriptorSetInlineUniformBlocks, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxDescriptorSetUpdateAfterBindInlineUniformBlocks").ToLocalChecked(), GetmaxDescriptorSetUpdateAfterBindInlineUniformBlocks, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceInlineUniformBlockPropertiesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceInlineUniformBlockPropertiesEXT::flush() {
  _VkPhysicalDeviceInlineUniformBlockPropertiesEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceInlineUniformBlockPropertiesEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceInlineUniformBlockPropertiesEXT* self = new _VkPhysicalDeviceInlineUniformBlockPropertiesEXT();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceInlineUniformBlockPropertiesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockPropertiesEXT::GetsType) {
  _VkPhysicalDeviceInlineUniformBlockPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// maxInlineUniformBlockSize
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockPropertiesEXT::GetmaxInlineUniformBlockSize) {
  _VkPhysicalDeviceInlineUniformBlockPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxInlineUniformBlockSize));
}// maxPerStageDescriptorInlineUniformBlocks
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockPropertiesEXT::GetmaxPerStageDescriptorInlineUniformBlocks) {
  _VkPhysicalDeviceInlineUniformBlockPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxPerStageDescriptorInlineUniformBlocks));
}// maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockPropertiesEXT::GetmaxPerStageDescriptorUpdateAfterBindInlineUniformBlocks) {
  _VkPhysicalDeviceInlineUniformBlockPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks));
}// maxDescriptorSetInlineUniformBlocks
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockPropertiesEXT::GetmaxDescriptorSetInlineUniformBlocks) {
  _VkPhysicalDeviceInlineUniformBlockPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxDescriptorSetInlineUniformBlocks));
}// maxDescriptorSetUpdateAfterBindInlineUniformBlocks
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockPropertiesEXT::GetmaxDescriptorSetUpdateAfterBindInlineUniformBlocks) {
  _VkPhysicalDeviceInlineUniformBlockPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxDescriptorSetUpdateAfterBindInlineUniformBlocks));
}