/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceVulkanMemoryModelFeaturesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::constructor;

_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR;
  
}

_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::~_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR() {
  //printf("VkPhysicalDeviceVulkanMemoryModelFeaturesKHR deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceVulkanMemoryModelFeaturesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("vulkanMemoryModel").ToLocalChecked(), GetvulkanMemoryModel, SetvulkanMemoryModel, ctor);
  SetPrototypeAccessor(proto, Nan::New("vulkanMemoryModelDeviceScope").ToLocalChecked(), GetvulkanMemoryModelDeviceScope, SetvulkanMemoryModelDeviceScope, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceVulkanMemoryModelFeaturesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::flush() {
  _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR* self = new _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("vulkanMemoryModel").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("vulkanMemoryModelDeviceScope").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceVulkanMemoryModelFeaturesKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::GetsType) {
  _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::SetsType) {
  _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceVulkanMemoryModelFeaturesKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// vulkanMemoryModel
NAN_GETTER(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::GetvulkanMemoryModel) {
  _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vulkanMemoryModel));
}NAN_SETTER(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::SetvulkanMemoryModel) {
  _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.vulkanMemoryModel = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceVulkanMemoryModelFeaturesKHR.vulkanMemoryModel' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// vulkanMemoryModelDeviceScope
NAN_GETTER(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::GetvulkanMemoryModelDeviceScope) {
  _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vulkanMemoryModelDeviceScope));
}NAN_SETTER(_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::SetvulkanMemoryModelDeviceScope) {
  _VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.vulkanMemoryModelDeviceScope = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceVulkanMemoryModelFeaturesKHR.vulkanMemoryModelDeviceScope' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}