/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkComputePipelineCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkComputePipelineCreateInfo::constructor;

_VkComputePipelineCreateInfo::_VkComputePipelineCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
  
}

_VkComputePipelineCreateInfo::~_VkComputePipelineCreateInfo() {
  //printf("VkComputePipelineCreateInfo deconstructed!!\n");
  
  
  
  
  
  
  
}

void _VkComputePipelineCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkComputePipelineCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkComputePipelineCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("stage").ToLocalChecked(), Getstage, Setstage, ctor);
  SetPrototypeAccessor(proto, Nan::New("layout").ToLocalChecked(), Getlayout, Setlayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("basePipelineHandle").ToLocalChecked(), GetbasePipelineHandle, SetbasePipelineHandle, ctor);
  SetPrototypeAccessor(proto, Nan::New("basePipelineIndex").ToLocalChecked(), GetbasePipelineIndex, SetbasePipelineIndex, ctor);
  Nan::Set(target, Nan::New("VkComputePipelineCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkComputePipelineCreateInfo::flush() {
  _VkComputePipelineCreateInfo *self = this;
  if (!(self->stage.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->stage);
    
    _VkPipelineShaderStageCreateInfo* result = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.stage = result->instance;
  }
  return true;
}

NAN_METHOD(_VkComputePipelineCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkComputePipelineCreateInfo* self = new _VkComputePipelineCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("stage").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("layout").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("basePipelineHandle").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("basePipelineIndex").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkComputePipelineCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkComputePipelineCreateInfo::GetsType) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkComputePipelineCreateInfo::SetsType) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkComputePipelineCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkComputePipelineCreateInfo::Getflags) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkComputePipelineCreateInfo::Setflags) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkComputePipelineCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// stage
NAN_GETTER(_VkComputePipelineCreateInfo::Getstage) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  if (self->stage.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->stage);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkComputePipelineCreateInfo::Setstage) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineShaderStageCreateInfo::constructor)->HasInstance(obj)) {
      self->stage.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineShaderStageCreateInfo* inst = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(obj);
      inst->flush();
      self->instance.stage = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineShaderStageCreateInfo]' for 'VkComputePipelineCreateInfo.stage' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->stage.Reset();
    memset(&self->instance.stage, 0, sizeof(VkPipelineShaderStageCreateInfo));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineShaderStageCreateInfo]' for 'VkComputePipelineCreateInfo.stage' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// layout
NAN_GETTER(_VkComputePipelineCreateInfo::Getlayout) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  if (self->layout.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->layout);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkComputePipelineCreateInfo::Setlayout) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineLayout::constructor)->HasInstance(obj)) {
      self->layout.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineLayout* inst = Nan::ObjectWrap::Unwrap<_VkPipelineLayout>(obj);
      ;
      self->instance.layout = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineLayout]' for 'VkComputePipelineCreateInfo.layout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->layout.Reset();
    self->instance.layout = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineLayout]' for 'VkComputePipelineCreateInfo.layout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// basePipelineHandle
NAN_GETTER(_VkComputePipelineCreateInfo::GetbasePipelineHandle) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  if (self->basePipelineHandle.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->basePipelineHandle);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkComputePipelineCreateInfo::SetbasePipelineHandle) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipeline::constructor)->HasInstance(obj)) {
      self->basePipelineHandle.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipeline* inst = Nan::ObjectWrap::Unwrap<_VkPipeline>(obj);
      ;
      self->instance.basePipelineHandle = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipeline]' for 'VkComputePipelineCreateInfo.basePipelineHandle' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->basePipelineHandle.Reset();
    self->instance.basePipelineHandle = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipeline]' for 'VkComputePipelineCreateInfo.basePipelineHandle' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// basePipelineIndex
NAN_GETTER(_VkComputePipelineCreateInfo::GetbasePipelineIndex) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.basePipelineIndex));
}NAN_SETTER(_VkComputePipelineCreateInfo::SetbasePipelineIndex) {
  _VkComputePipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkComputePipelineCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.basePipelineIndex = static_cast<int32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkComputePipelineCreateInfo.basePipelineIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}