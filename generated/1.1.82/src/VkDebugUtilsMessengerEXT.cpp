/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.3
 */
#include "VkDebugUtilsMessengerEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkDebugUtilsMessengerEXT::constructor;

_VkDebugUtilsMessengerEXT::_VkDebugUtilsMessengerEXT() {}
_VkDebugUtilsMessengerEXT::~_VkDebugUtilsMessengerEXT() {}

void _VkDebugUtilsMessengerEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDebugUtilsMessengerEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDebugUtilsMessengerEXT").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkDebugUtilsMessengerEXT").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDebugUtilsMessengerEXT::New) {
  _VkDebugUtilsMessengerEXT* self = new _VkDebugUtilsMessengerEXT();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
