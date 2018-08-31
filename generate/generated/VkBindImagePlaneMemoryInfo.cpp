#include "utils.h"
#include "index.h"
#include "VkBindImagePlaneMemoryInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkBindImagePlaneMemoryInfo::constructor;

_VkBindImagePlaneMemoryInfo::_VkBindImagePlaneMemoryInfo() {
  instance = (VkBindImagePlaneMemoryInfo*) malloc(sizeof(VkBindImagePlaneMemoryInfo));
}

_VkBindImagePlaneMemoryInfo::~_VkBindImagePlaneMemoryInfo() { }

void _VkBindImagePlaneMemoryInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBindImagePlaneMemoryInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBindImagePlaneMemoryInfo").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("planeAspect").ToLocalChecked(), GetplaneAspect, SetplaneAspect, ctor);
  
  Nan::Set(target, Nan::New("VkBindImagePlaneMemoryInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkBindImagePlaneMemoryInfo::New) {
  _VkBindImagePlaneMemoryInfo* self = new _VkBindImagePlaneMemoryInfo();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// sType
NAN_GETTER(_VkBindImagePlaneMemoryInfo::GetsType) {
  _VkBindImagePlaneMemoryInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImagePlaneMemoryInfo>(info.This());
  VkBindImagePlaneMemoryInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->sType));
}
NAN_SETTER(_VkBindImagePlaneMemoryInfo::SetsType) {
  _VkBindImagePlaneMemoryInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImagePlaneMemoryInfo>(info.This());
  VkBindImagePlaneMemoryInfo *instance = self->instance;
  self->instance->sType = static_cast<VkStructureType>(value->Uint32Value());
}// planeAspect
NAN_GETTER(_VkBindImagePlaneMemoryInfo::GetplaneAspect) {
  _VkBindImagePlaneMemoryInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImagePlaneMemoryInfo>(info.This());
  VkBindImagePlaneMemoryInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(static_cast<uint8_t>(self->instance->planeAspect)));
}
NAN_SETTER(_VkBindImagePlaneMemoryInfo::SetplaneAspect) {
  _VkBindImagePlaneMemoryInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImagePlaneMemoryInfo>(info.This());
  VkBindImagePlaneMemoryInfo *instance = self->instance;
  self->instance->planeAspect = static_cast<VkImageAspectFlagBits>(value->Uint32Value());
}