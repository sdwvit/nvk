/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkVertexInputBindingDivisorDescriptionEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkVertexInputBindingDivisorDescriptionEXT::constructor;

_VkVertexInputBindingDivisorDescriptionEXT::_VkVertexInputBindingDivisorDescriptionEXT() {
  
  
}

_VkVertexInputBindingDivisorDescriptionEXT::~_VkVertexInputBindingDivisorDescriptionEXT() {
  //printf("VkVertexInputBindingDivisorDescriptionEXT deconstructed!!\n");
  
  
  
}

void _VkVertexInputBindingDivisorDescriptionEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkVertexInputBindingDivisorDescriptionEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkVertexInputBindingDivisorDescriptionEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("binding").ToLocalChecked(), Getbinding, Setbinding, ctor);
  SetPrototypeAccessor(proto, Nan::New("divisor").ToLocalChecked(), Getdivisor, Setdivisor, ctor);
  Nan::Set(target, Nan::New("VkVertexInputBindingDivisorDescriptionEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkVertexInputBindingDivisorDescriptionEXT::flush() {
  _VkVertexInputBindingDivisorDescriptionEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkVertexInputBindingDivisorDescriptionEXT::New) {
  if (info.IsConstructCall()) {
    _VkVertexInputBindingDivisorDescriptionEXT* self = new _VkVertexInputBindingDivisorDescriptionEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("binding").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("divisor").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkVertexInputBindingDivisorDescriptionEXT constructor cannot be invoked without 'new'");
  }
};

// binding
NAN_GETTER(_VkVertexInputBindingDivisorDescriptionEXT::Getbinding) {
  _VkVertexInputBindingDivisorDescriptionEXT *self = Nan::ObjectWrap::Unwrap<_VkVertexInputBindingDivisorDescriptionEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.binding));
}NAN_SETTER(_VkVertexInputBindingDivisorDescriptionEXT::Setbinding) {
  _VkVertexInputBindingDivisorDescriptionEXT *self = Nan::ObjectWrap::Unwrap<_VkVertexInputBindingDivisorDescriptionEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.binding = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkVertexInputBindingDivisorDescriptionEXT.binding' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// divisor
NAN_GETTER(_VkVertexInputBindingDivisorDescriptionEXT::Getdivisor) {
  _VkVertexInputBindingDivisorDescriptionEXT *self = Nan::ObjectWrap::Unwrap<_VkVertexInputBindingDivisorDescriptionEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.divisor));
}NAN_SETTER(_VkVertexInputBindingDivisorDescriptionEXT::Setdivisor) {
  _VkVertexInputBindingDivisorDescriptionEXT *self = Nan::ObjectWrap::Unwrap<_VkVertexInputBindingDivisorDescriptionEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.divisor = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkVertexInputBindingDivisorDescriptionEXT.divisor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}