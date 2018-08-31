#include "utils.h"
#include "index.h"
#include "VkImageSubresourceRange.h"

Nan::Persistent<v8::FunctionTemplate> _VkImageSubresourceRange::constructor;

_VkImageSubresourceRange::_VkImageSubresourceRange() {
  instance = (VkImageSubresourceRange*) malloc(sizeof(VkImageSubresourceRange));
}

_VkImageSubresourceRange::~_VkImageSubresourceRange() { }

void _VkImageSubresourceRange::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImageSubresourceRange::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImageSubresourceRange").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  SetPrototypeAccessor(proto, Nan::New("aspectMask").ToLocalChecked(), GetaspectMask, SetaspectMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("baseMipLevel").ToLocalChecked(), GetbaseMipLevel, SetbaseMipLevel, ctor);
  SetPrototypeAccessor(proto, Nan::New("levelCount").ToLocalChecked(), GetlevelCount, SetlevelCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("baseArrayLayer").ToLocalChecked(), GetbaseArrayLayer, SetbaseArrayLayer, ctor);
  SetPrototypeAccessor(proto, Nan::New("layerCount").ToLocalChecked(), GetlayerCount, SetlayerCount, ctor);
  
  Nan::Set(target, Nan::New("VkImageSubresourceRange").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkImageSubresourceRange::New) {
  _VkImageSubresourceRange* self = new _VkImageSubresourceRange();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// aspectMask
NAN_GETTER(_VkImageSubresourceRange::GetaspectMask) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  VkImageSubresourceRange *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(static_cast<uint8_t>(self->instance->aspectMask)));
}
NAN_SETTER(_VkImageSubresourceRange::SetaspectMask) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  VkImageSubresourceRange *instance = self->instance;
  self->instance->aspectMask = static_cast<VkImageAspectFlags>(value->Uint32Value());
}// baseMipLevel
NAN_GETTER(_VkImageSubresourceRange::GetbaseMipLevel) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  VkImageSubresourceRange *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->baseMipLevel));
}
NAN_SETTER(_VkImageSubresourceRange::SetbaseMipLevel) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  VkImageSubresourceRange *instance = self->instance;
  self->instance->baseMipLevel = static_cast<uint32_t>(value->NumberValue());
}// levelCount
NAN_GETTER(_VkImageSubresourceRange::GetlevelCount) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  VkImageSubresourceRange *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->levelCount));
}
NAN_SETTER(_VkImageSubresourceRange::SetlevelCount) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  VkImageSubresourceRange *instance = self->instance;
  self->instance->levelCount = static_cast<uint32_t>(value->NumberValue());
}// baseArrayLayer
NAN_GETTER(_VkImageSubresourceRange::GetbaseArrayLayer) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  VkImageSubresourceRange *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->baseArrayLayer));
}
NAN_SETTER(_VkImageSubresourceRange::SetbaseArrayLayer) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  VkImageSubresourceRange *instance = self->instance;
  self->instance->baseArrayLayer = static_cast<uint32_t>(value->NumberValue());
}// layerCount
NAN_GETTER(_VkImageSubresourceRange::GetlayerCount) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  VkImageSubresourceRange *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->layerCount));
}
NAN_SETTER(_VkImageSubresourceRange::SetlayerCount) {
  _VkImageSubresourceRange *self = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(info.This());
  VkImageSubresourceRange *instance = self->instance;
  self->instance->layerCount = static_cast<uint32_t>(value->NumberValue());
}