/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineRasterizationStateCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineRasterizationStateCreateInfo::constructor;

_VkPipelineRasterizationStateCreateInfo::_VkPipelineRasterizationStateCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
  
}

_VkPipelineRasterizationStateCreateInfo::~_VkPipelineRasterizationStateCreateInfo() {
  //printf("VkPipelineRasterizationStateCreateInfo deconstructed!!\n");
  
  
  
  
  
  
  
  
  
  
  
  
  
}

void _VkPipelineRasterizationStateCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineRasterizationStateCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineRasterizationStateCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthClampEnable").ToLocalChecked(), GetdepthClampEnable, SetdepthClampEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("rasterizerDiscardEnable").ToLocalChecked(), GetrasterizerDiscardEnable, SetrasterizerDiscardEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("polygonMode").ToLocalChecked(), GetpolygonMode, SetpolygonMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("cullMode").ToLocalChecked(), GetcullMode, SetcullMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("frontFace").ToLocalChecked(), GetfrontFace, SetfrontFace, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthBiasEnable").ToLocalChecked(), GetdepthBiasEnable, SetdepthBiasEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthBiasConstantFactor").ToLocalChecked(), GetdepthBiasConstantFactor, SetdepthBiasConstantFactor, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthBiasClamp").ToLocalChecked(), GetdepthBiasClamp, SetdepthBiasClamp, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthBiasSlopeFactor").ToLocalChecked(), GetdepthBiasSlopeFactor, SetdepthBiasSlopeFactor, ctor);
  SetPrototypeAccessor(proto, Nan::New("lineWidth").ToLocalChecked(), GetlineWidth, SetlineWidth, ctor);
  Nan::Set(target, Nan::New("VkPipelineRasterizationStateCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineRasterizationStateCreateInfo::flush() {
  _VkPipelineRasterizationStateCreateInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkPipelineRasterizationStateCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineRasterizationStateCreateInfo* self = new _VkPipelineRasterizationStateCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("depthClampEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("rasterizerDiscardEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("polygonMode").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("cullMode").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("frontFace").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("depthBiasEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("depthBiasConstantFactor").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("depthBiasClamp").ToLocalChecked();
      v8::Local<v8::String> sAccess11 = Nan::New("depthBiasSlopeFactor").ToLocalChecked();
      v8::Local<v8::String> sAccess12 = Nan::New("lineWidth").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
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
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineRasterizationStateCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::GetsType) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::SetsType) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::Getflags) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::Setflags) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineRasterizationStateCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// depthClampEnable
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::GetdepthClampEnable) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depthClampEnable));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::SetdepthClampEnable) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.depthClampEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.depthClampEnable' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// rasterizerDiscardEnable
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::GetrasterizerDiscardEnable) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.rasterizerDiscardEnable));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::SetrasterizerDiscardEnable) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.rasterizerDiscardEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.rasterizerDiscardEnable' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// polygonMode
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::GetpolygonMode) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.polygonMode));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::SetpolygonMode) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.polygonMode = static_cast<VkPolygonMode>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.polygonMode' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// cullMode
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::GetcullMode) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.cullMode));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::SetcullMode) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.cullMode = static_cast<VkCullModeFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.cullMode' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// frontFace
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::GetfrontFace) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.frontFace));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::SetfrontFace) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.frontFace = static_cast<VkFrontFace>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.frontFace' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// depthBiasEnable
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::GetdepthBiasEnable) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depthBiasEnable));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::SetdepthBiasEnable) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.depthBiasEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.depthBiasEnable' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// depthBiasConstantFactor
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::GetdepthBiasConstantFactor) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depthBiasConstantFactor));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::SetdepthBiasConstantFactor) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.depthBiasConstantFactor = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.depthBiasConstantFactor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// depthBiasClamp
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::GetdepthBiasClamp) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depthBiasClamp));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::SetdepthBiasClamp) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.depthBiasClamp = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.depthBiasClamp' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// depthBiasSlopeFactor
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::GetdepthBiasSlopeFactor) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depthBiasSlopeFactor));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::SetdepthBiasSlopeFactor) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.depthBiasSlopeFactor = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.depthBiasSlopeFactor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// lineWidth
NAN_GETTER(_VkPipelineRasterizationStateCreateInfo::GetlineWidth) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.lineWidth));
}NAN_SETTER(_VkPipelineRasterizationStateCreateInfo::SetlineWidth) {
  _VkPipelineRasterizationStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.lineWidth = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineRasterizationStateCreateInfo.lineWidth' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}