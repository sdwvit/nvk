#include "utils.h"
#include "index.h"
#include "VkDeviceQueueCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceQueueCreateInfo::constructor;

_VkDeviceQueueCreateInfo::_VkDeviceQueueCreateInfo() {
  instance = (VkDeviceQueueCreateInfo*) malloc(sizeof(VkDeviceQueueCreateInfo));
  instance->pQueuePriorities = nullptr;
}

_VkDeviceQueueCreateInfo::~_VkDeviceQueueCreateInfo() { }

void _VkDeviceQueueCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceQueueCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceQueueCreateInfo").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueFamilyIndex").ToLocalChecked(), GetqueueFamilyIndex, SetqueueFamilyIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueCount").ToLocalChecked(), GetqueueCount, SetqueueCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pQueuePriorities").ToLocalChecked(), GetpQueuePriorities, SetpQueuePriorities, ctor);
  
  Nan::Set(target, Nan::New("VkDeviceQueueCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDeviceQueueCreateInfo::New) {
  _VkDeviceQueueCreateInfo* self = new _VkDeviceQueueCreateInfo();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// sType
NAN_GETTER(_VkDeviceQueueCreateInfo::GetsType) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  VkDeviceQueueCreateInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->sType));
}
NAN_SETTER(_VkDeviceQueueCreateInfo::SetsType) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  VkDeviceQueueCreateInfo *instance = self->instance;
  self->instance->sType = static_cast<VkStructureType>(value->Uint32Value());
}// queueFamilyIndex
NAN_GETTER(_VkDeviceQueueCreateInfo::GetqueueFamilyIndex) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  VkDeviceQueueCreateInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->queueFamilyIndex));
}
NAN_SETTER(_VkDeviceQueueCreateInfo::SetqueueFamilyIndex) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  VkDeviceQueueCreateInfo *instance = self->instance;
  self->instance->queueFamilyIndex = static_cast<uint32_t>(value->NumberValue());
}// queueCount
NAN_GETTER(_VkDeviceQueueCreateInfo::GetqueueCount) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  VkDeviceQueueCreateInfo *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->queueCount));
}
NAN_SETTER(_VkDeviceQueueCreateInfo::SetqueueCount) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  VkDeviceQueueCreateInfo *instance = self->instance;
  self->instance->queueCount = static_cast<uint32_t>(value->NumberValue());
}// pQueuePriorities
NAN_GETTER(_VkDeviceQueueCreateInfo::GetpQueuePriorities) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  VkDeviceQueueCreateInfo *instance = self->instance;
  if (instance->pQueuePriorities != nullptr) {
    info.GetReturnValue().Set(Nan::New(self->pQueuePriorities));
  } else {
    info.GetReturnValue().SetNull();
  }
}
NAN_SETTER(_VkDeviceQueueCreateInfo::SetpQueuePriorities) {
  _VkDeviceQueueCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceQueueCreateInfo>(info.This());
  VkDeviceQueueCreateInfo *instance = self->instance;
  
    // js
    {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pQueuePriorities = obj;
    }
  
  // vulkan
  {
    instance->pQueuePriorities = createArrayOfV8Floats(value);
  }
}