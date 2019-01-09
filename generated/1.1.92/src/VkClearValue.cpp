/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkClearValue.h"

Nan::Persistent<v8::FunctionTemplate> _VkClearValue::constructor;

_VkClearValue::_VkClearValue() {
  
  
}

_VkClearValue::~_VkClearValue() {
  //printf("VkClearValue deconstructed!!\n");
  
  
  
}

void _VkClearValue::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkClearValue::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkClearValue").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("color").ToLocalChecked(), Getcolor, Setcolor, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthStencil").ToLocalChecked(), GetdepthStencil, SetdepthStencil, ctor);
  Nan::Set(target, Nan::New("VkClearValue").ToLocalChecked(), ctor->GetFunction());
}

bool _VkClearValue::flush() {
  _VkClearValue *self = this;
  if (!(self->color.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->color);
    
    _VkClearColorValue* result = Nan::ObjectWrap::Unwrap<_VkClearColorValue>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.color = result->instance;
  }if (!(self->depthStencil.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->depthStencil);
    
    _VkClearDepthStencilValue* result = Nan::ObjectWrap::Unwrap<_VkClearDepthStencilValue>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.depthStencil = result->instance;
  }
  return true;
}

NAN_METHOD(_VkClearValue::New) {
  if (info.IsConstructCall()) {
    _VkClearValue* self = new _VkClearValue();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("color").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("depthStencil").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkClearValue constructor cannot be invoked without 'new'");
  }
};

// color
NAN_GETTER(_VkClearValue::Getcolor) {
  _VkClearValue *self = Nan::ObjectWrap::Unwrap<_VkClearValue>(info.This());
  if (self->color.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->color);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkClearValue::Setcolor) {
  _VkClearValue *self = Nan::ObjectWrap::Unwrap<_VkClearValue>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkClearColorValue::constructor)->HasInstance(obj)) {
      self->color.Reset<v8::Object>(value.As<v8::Object>());
      _VkClearColorValue* inst = Nan::ObjectWrap::Unwrap<_VkClearColorValue>(obj);
      inst->flush();
      self->instance.color = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkClearColorValue]' for 'VkClearValue.color' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->color.Reset();
    memset(&self->instance.color, 0, sizeof(VkClearColorValue));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkClearColorValue]' for 'VkClearValue.color' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// depthStencil
NAN_GETTER(_VkClearValue::GetdepthStencil) {
  _VkClearValue *self = Nan::ObjectWrap::Unwrap<_VkClearValue>(info.This());
  if (self->depthStencil.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->depthStencil);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkClearValue::SetdepthStencil) {
  _VkClearValue *self = Nan::ObjectWrap::Unwrap<_VkClearValue>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkClearDepthStencilValue::constructor)->HasInstance(obj)) {
      self->depthStencil.Reset<v8::Object>(value.As<v8::Object>());
      _VkClearDepthStencilValue* inst = Nan::ObjectWrap::Unwrap<_VkClearDepthStencilValue>(obj);
      inst->flush();
      self->instance.depthStencil = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkClearDepthStencilValue]' for 'VkClearValue.depthStencil' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->depthStencil.Reset();
    memset(&self->instance.depthStencil, 0, sizeof(VkClearDepthStencilValue));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkClearDepthStencilValue]' for 'VkClearValue.depthStencil' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}