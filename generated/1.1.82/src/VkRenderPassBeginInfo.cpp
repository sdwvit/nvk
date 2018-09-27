/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkRenderPassBeginInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkRenderPassBeginInfo::constructor;

_VkRenderPassBeginInfo::_VkRenderPassBeginInfo() {
  instance.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
}

_VkRenderPassBeginInfo::~_VkRenderPassBeginInfo() {
  //printf("VkRenderPassBeginInfo deconstructed!!\n");
}

void _VkRenderPassBeginInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRenderPassBeginInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRenderPassBeginInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("renderPass").ToLocalChecked(), GetrenderPass, SetrenderPass, ctor);
  SetPrototypeAccessor(proto, Nan::New("framebuffer").ToLocalChecked(), Getframebuffer, Setframebuffer, ctor);
  SetPrototypeAccessor(proto, Nan::New("renderArea").ToLocalChecked(), GetrenderArea, SetrenderArea, ctor);
  SetPrototypeAccessor(proto, Nan::New("clearValueCount").ToLocalChecked(), GetclearValueCount, SetclearValueCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pClearValues").ToLocalChecked(), GetpClearValues, SetpClearValues, ctor);
  Nan::Set(target, Nan::New("VkRenderPassBeginInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkRenderPassBeginInfo::New) {
  if (info.IsConstructCall()) {
    _VkRenderPassBeginInfo* self = new _VkRenderPassBeginInfo();
    self->Wrap(info.Holder());
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkRenderPassBeginInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkRenderPassBeginInfo::GetsType) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkRenderPassBeginInfo::SetsType) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// renderPass
NAN_GETTER(_VkRenderPassBeginInfo::GetrenderPass) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  if (self->renderPass.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->renderPass);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassBeginInfo::SetrenderPass) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->renderPass = obj;
  } else {
    //self->renderPass = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkRenderPass* obj = Nan::ObjectWrap::Unwrap<_VkRenderPass>(value->ToObject());
    self->instance.renderPass = obj->instance;
  } else {
    self->instance.renderPass = VK_NULL_HANDLE;
  }
}// framebuffer
NAN_GETTER(_VkRenderPassBeginInfo::Getframebuffer) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  if (self->framebuffer.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->framebuffer);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassBeginInfo::Setframebuffer) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->framebuffer = obj;
  } else {
    //self->framebuffer = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkFramebuffer* obj = Nan::ObjectWrap::Unwrap<_VkFramebuffer>(value->ToObject());
    self->instance.framebuffer = obj->instance;
  } else {
    self->instance.framebuffer = VK_NULL_HANDLE;
  }
}// renderArea
NAN_GETTER(_VkRenderPassBeginInfo::GetrenderArea) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  if (self->renderArea.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->renderArea);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassBeginInfo::SetrenderArea) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->renderArea = obj;
  } else {
    //self->renderArea = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkRect2D* obj = Nan::ObjectWrap::Unwrap<_VkRect2D>(value->ToObject());
    self->instance.renderArea = obj->instance;
  } else {
    memset(&self->instance.renderArea, 0, sizeof(VkRect2D));
  }
}// clearValueCount
NAN_GETTER(_VkRenderPassBeginInfo::GetclearValueCount) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.clearValueCount));
}NAN_SETTER(_VkRenderPassBeginInfo::SetclearValueCount) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  self->instance.clearValueCount = static_cast<uint32_t>(value->NumberValue());
}// pClearValues
NAN_GETTER(_VkRenderPassBeginInfo::GetpClearValues) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  if (self->pClearValues.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pClearValues);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassBeginInfo::SetpClearValues) {
  _VkRenderPassBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassBeginInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pClearValues = obj;
    } else {
      if (!self->pClearValues.IsEmpty()) self->pClearValues.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pClearValues = copyArrayOfV8Objects<VkClearValue, _VkClearValue>(value);
  } else {
    self->instance.pClearValues = nullptr;
  }
}