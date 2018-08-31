#include "utils.h"
#include "VkSurfaceKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkSurfaceKHR::constructor;

_VkSurfaceKHR::_VkSurfaceKHR() {
  instance = (VkSurfaceKHR*) malloc(sizeof(VkSurfaceKHR));
}

_VkSurfaceKHR::~_VkSurfaceKHR() { }

void _VkSurfaceKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSurfaceKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSurfaceKHR").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkSurfaceKHR").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSurfaceKHR::New) {
  _VkSurfaceKHR* self = new _VkSurfaceKHR();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
