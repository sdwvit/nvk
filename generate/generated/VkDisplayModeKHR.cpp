#include "utils.h"
#include "VkDisplayModeKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDisplayModeKHR::constructor;

_VkDisplayModeKHR::_VkDisplayModeKHR() {
  instance = (VkDisplayModeKHR*) malloc(sizeof(VkDisplayModeKHR));
}

_VkDisplayModeKHR::~_VkDisplayModeKHR() { }

void _VkDisplayModeKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDisplayModeKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDisplayModeKHR").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkDisplayModeKHR").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDisplayModeKHR::New) {
  _VkDisplayModeKHR* self = new _VkDisplayModeKHR();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
