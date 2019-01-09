/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkExportSemaphoreWin32HandleInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkExportSemaphoreWin32HandleInfoKHR::constructor;

_VkExportSemaphoreWin32HandleInfoKHR::_VkExportSemaphoreWin32HandleInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
  
}

_VkExportSemaphoreWin32HandleInfoKHR::~_VkExportSemaphoreWin32HandleInfoKHR() {
  //printf("VkExportSemaphoreWin32HandleInfoKHR deconstructed!!\n");
  
  
}

void _VkExportSemaphoreWin32HandleInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExportSemaphoreWin32HandleInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExportSemaphoreWin32HandleInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  Nan::Set(target, Nan::New("VkExportSemaphoreWin32HandleInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkExportSemaphoreWin32HandleInfoKHR::flush() {
  _VkExportSemaphoreWin32HandleInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkExportSemaphoreWin32HandleInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkExportSemaphoreWin32HandleInfoKHR* self = new _VkExportSemaphoreWin32HandleInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkExportSemaphoreWin32HandleInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkExportSemaphoreWin32HandleInfoKHR::GetsType) {
  _VkExportSemaphoreWin32HandleInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkExportSemaphoreWin32HandleInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkExportSemaphoreWin32HandleInfoKHR::SetsType) {
  _VkExportSemaphoreWin32HandleInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkExportSemaphoreWin32HandleInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkExportSemaphoreWin32HandleInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}