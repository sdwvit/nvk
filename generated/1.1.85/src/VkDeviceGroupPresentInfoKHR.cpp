/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceGroupPresentInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceGroupPresentInfoKHR::constructor;

_VkDeviceGroupPresentInfoKHR::_VkDeviceGroupPresentInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR;
  
}

_VkDeviceGroupPresentInfoKHR::~_VkDeviceGroupPresentInfoKHR() {
  //printf("VkDeviceGroupPresentInfoKHR deconstructed!!\n");
  
  
  
  pDeviceMasks.Reset();
  
  
}

void _VkDeviceGroupPresentInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceGroupPresentInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceGroupPresentInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("swapchainCount").ToLocalChecked(), GetswapchainCount, SetswapchainCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDeviceMasks").ToLocalChecked(), GetpDeviceMasks, SetpDeviceMasks, ctor);
  SetPrototypeAccessor(proto, Nan::New("mode").ToLocalChecked(), Getmode, Setmode, ctor);
  Nan::Set(target, Nan::New("VkDeviceGroupPresentInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceGroupPresentInfoKHR::flush() {
  _VkDeviceGroupPresentInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkDeviceGroupPresentInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkDeviceGroupPresentInfoKHR* self = new _VkDeviceGroupPresentInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("swapchainCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pDeviceMasks").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("mode").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceGroupPresentInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceGroupPresentInfoKHR::GetsType) {
  _VkDeviceGroupPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupPresentInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDeviceGroupPresentInfoKHR::SetsType) {
  _VkDeviceGroupPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupPresentInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupPresentInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// swapchainCount
NAN_GETTER(_VkDeviceGroupPresentInfoKHR::GetswapchainCount) {
  _VkDeviceGroupPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupPresentInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.swapchainCount));
}NAN_SETTER(_VkDeviceGroupPresentInfoKHR::SetswapchainCount) {
  _VkDeviceGroupPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupPresentInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.swapchainCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupPresentInfoKHR.swapchainCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pDeviceMasks
NAN_GETTER(_VkDeviceGroupPresentInfoKHR::GetpDeviceMasks) {
  _VkDeviceGroupPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupPresentInfoKHR>(info.This());
  if (self->pDeviceMasks.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDeviceMasks);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDeviceGroupPresentInfoKHR::SetpDeviceMasks) {
  _VkDeviceGroupPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupPresentInfoKHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pDeviceMasks.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkDeviceGroupPresentInfoKHR.pDeviceMasks' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pDeviceMasks.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkDeviceGroupPresentInfoKHR.pDeviceMasks' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pDeviceMasks = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pDeviceMasks = nullptr;
  }
}// mode
NAN_GETTER(_VkDeviceGroupPresentInfoKHR::Getmode) {
  _VkDeviceGroupPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupPresentInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.mode));
}NAN_SETTER(_VkDeviceGroupPresentInfoKHR::Setmode) {
  _VkDeviceGroupPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupPresentInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.mode = static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupPresentInfoKHR.mode' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}