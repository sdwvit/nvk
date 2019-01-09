/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkQueueFamilyCheckpointPropertiesNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkQueueFamilyCheckpointPropertiesNV::constructor;

_VkQueueFamilyCheckpointPropertiesNV::_VkQueueFamilyCheckpointPropertiesNV() {
  instance.sType = VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV;
  
}

_VkQueueFamilyCheckpointPropertiesNV::~_VkQueueFamilyCheckpointPropertiesNV() {
  //printf("VkQueueFamilyCheckpointPropertiesNV deconstructed!!\n");
  
  
  
}

void _VkQueueFamilyCheckpointPropertiesNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkQueueFamilyCheckpointPropertiesNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkQueueFamilyCheckpointPropertiesNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("checkpointExecutionStageMask").ToLocalChecked(), GetcheckpointExecutionStageMask, nullptr, ctor);
  Nan::Set(target, Nan::New("VkQueueFamilyCheckpointPropertiesNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkQueueFamilyCheckpointPropertiesNV::flush() {
  _VkQueueFamilyCheckpointPropertiesNV *self = this;
  
  return true;
}

NAN_METHOD(_VkQueueFamilyCheckpointPropertiesNV::New) {
  if (info.IsConstructCall()) {
    _VkQueueFamilyCheckpointPropertiesNV* self = new _VkQueueFamilyCheckpointPropertiesNV();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkQueueFamilyCheckpointPropertiesNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkQueueFamilyCheckpointPropertiesNV::GetsType) {
  _VkQueueFamilyCheckpointPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkQueueFamilyCheckpointPropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// checkpointExecutionStageMask
NAN_GETTER(_VkQueueFamilyCheckpointPropertiesNV::GetcheckpointExecutionStageMask) {
  _VkQueueFamilyCheckpointPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkQueueFamilyCheckpointPropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.checkpointExecutionStageMask));
}