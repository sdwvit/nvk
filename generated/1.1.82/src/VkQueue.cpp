/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#include "VkQueue.h"

Nan::Persistent<v8::FunctionTemplate> _VkQueue::constructor;

_VkQueue::_VkQueue() {}
_VkQueue::~_VkQueue() {}

void _VkQueue::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkQueue::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkQueue").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkQueue").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkQueue::New) {
  _VkQueue* self = new _VkQueue();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
