#include "utils.h"
#include "index.h"
#include "VkApplicationInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkApplicationInfo::constructor;

_VkApplicationInfo::_VkApplicationInfo() {
  instance = (VkApplicationInfo*) malloc(sizeof(VkApplicationInfo));
  instance->pApplicationName = nullptr;
  instance->pEngineName = nullptr;
}

_VkApplicationInfo::~_VkApplicationInfo() { }

void _VkApplicationInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkApplicationInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkApplicationInfo").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pApplicationName").ToLocalChecked(), GetpApplicationName, SetpApplicationName, ctor);
  SetPrototypeAccessor(proto, Nan::New("applicationVersion").ToLocalChecked(), GetapplicationVersion, SetapplicationVersion, ctor);
  SetPrototypeAccessor(proto, Nan::New("pEngineName").ToLocalChecked(), GetpEngineName, SetpEngineName, ctor);
  SetPrototypeAccessor(proto, Nan::New("engineVersion").ToLocalChecked(), GetengineVersion, SetengineVersion, ctor);
  SetPrototypeAccessor(proto, Nan::New("apiVersion").ToLocalChecked(), GetapiVersion, SetapiVersion, ctor);
  
  Nan::Set(target, Nan::New("VkApplicationInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkApplicationInfo::New) {
  _VkApplicationInfo* self = new _VkApplicationInfo();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// sType
NAN_GETTER(_VkApplicationInfo::GetsType) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->sType));
}
NAN_SETTER(_VkApplicationInfo::SetsType) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  self->instance->sType = static_cast<VkStructureType>(value->Uint32Value());
}// pApplicationName
NAN_GETTER(_VkApplicationInfo::GetpApplicationName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  if (instance->pApplicationName != nullptr) {
    info.GetReturnValue().Set(Nan::New(self->pApplicationName));
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkApplicationInfo::SetpApplicationName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> str(Nan::To<v8::String>(value).ToLocalChecked());
  self->pApplicationName = str;
  instance->pApplicationName = copyV8String(value);
}// applicationVersion
NAN_GETTER(_VkApplicationInfo::GetapplicationVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->applicationVersion));
}
NAN_SETTER(_VkApplicationInfo::SetapplicationVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  self->instance->applicationVersion = static_cast<uint32_t>(value->NumberValue());
}// pEngineName
NAN_GETTER(_VkApplicationInfo::GetpEngineName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  if (instance->pEngineName != nullptr) {
    info.GetReturnValue().Set(Nan::New(self->pEngineName));
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkApplicationInfo::SetpEngineName) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> str(Nan::To<v8::String>(value).ToLocalChecked());
  self->pEngineName = str;
  instance->pEngineName = copyV8String(value);
}// engineVersion
NAN_GETTER(_VkApplicationInfo::GetengineVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->engineVersion));
}
NAN_SETTER(_VkApplicationInfo::SetengineVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  self->instance->engineVersion = static_cast<uint32_t>(value->NumberValue());
}// apiVersion
NAN_GETTER(_VkApplicationInfo::GetapiVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->apiVersion));
}
NAN_SETTER(_VkApplicationInfo::SetapiVersion) {
  _VkApplicationInfo *self = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(info.This());
  VkApplicationInfo *instance = self->instance;
  self->instance->apiVersion = static_cast<uint32_t>(value->NumberValue());
}