/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkRectLayerKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkRectLayerKHR::constructor;

_VkRectLayerKHR::_VkRectLayerKHR() {
  
  
}

_VkRectLayerKHR::~_VkRectLayerKHR() {
  //printf("VkRectLayerKHR deconstructed!!\n");
  
  
  
  
}

void _VkRectLayerKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRectLayerKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRectLayerKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("offset").ToLocalChecked(), Getoffset, Setoffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("extent").ToLocalChecked(), Getextent, Setextent, ctor);
  SetPrototypeAccessor(proto, Nan::New("layer").ToLocalChecked(), Getlayer, Setlayer, ctor);
  Nan::Set(target, Nan::New("VkRectLayerKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkRectLayerKHR::flush() {
  _VkRectLayerKHR *self = this;
  if (!(self->offset.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->offset);
    
    _VkOffset2D* result = Nan::ObjectWrap::Unwrap<_VkOffset2D>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.offset = result->instance;
  }if (!(self->extent.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->extent);
    
    _VkExtent2D* result = Nan::ObjectWrap::Unwrap<_VkExtent2D>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.extent = result->instance;
  }
  return true;
}

NAN_METHOD(_VkRectLayerKHR::New) {
  if (info.IsConstructCall()) {
    _VkRectLayerKHR* self = new _VkRectLayerKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("offset").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("extent").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("layer").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkRectLayerKHR constructor cannot be invoked without 'new'");
  }
};

// offset
NAN_GETTER(_VkRectLayerKHR::Getoffset) {
  _VkRectLayerKHR *self = Nan::ObjectWrap::Unwrap<_VkRectLayerKHR>(info.This());
  if (self->offset.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->offset);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRectLayerKHR::Setoffset) {
  _VkRectLayerKHR *self = Nan::ObjectWrap::Unwrap<_VkRectLayerKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkOffset2D::constructor)->HasInstance(obj)) {
      self->offset.Reset<v8::Object>(value.As<v8::Object>());
      _VkOffset2D* inst = Nan::ObjectWrap::Unwrap<_VkOffset2D>(obj);
      inst->flush();
      self->instance.offset = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkOffset2D]' for 'VkRectLayerKHR.offset' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->offset.Reset();
    memset(&self->instance.offset, 0, sizeof(VkOffset2D));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkOffset2D]' for 'VkRectLayerKHR.offset' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// extent
NAN_GETTER(_VkRectLayerKHR::Getextent) {
  _VkRectLayerKHR *self = Nan::ObjectWrap::Unwrap<_VkRectLayerKHR>(info.This());
  if (self->extent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->extent);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRectLayerKHR::Setextent) {
  _VkRectLayerKHR *self = Nan::ObjectWrap::Unwrap<_VkRectLayerKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkExtent2D::constructor)->HasInstance(obj)) {
      self->extent.Reset<v8::Object>(value.As<v8::Object>());
      _VkExtent2D* inst = Nan::ObjectWrap::Unwrap<_VkExtent2D>(obj);
      inst->flush();
      self->instance.extent = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkExtent2D]' for 'VkRectLayerKHR.extent' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->extent.Reset();
    memset(&self->instance.extent, 0, sizeof(VkExtent2D));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkExtent2D]' for 'VkRectLayerKHR.extent' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// layer
NAN_GETTER(_VkRectLayerKHR::Getlayer) {
  _VkRectLayerKHR *self = Nan::ObjectWrap::Unwrap<_VkRectLayerKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.layer));
}NAN_SETTER(_VkRectLayerKHR::Setlayer) {
  _VkRectLayerKHR *self = Nan::ObjectWrap::Unwrap<_VkRectLayerKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.layer = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRectLayerKHR.layer' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}