#include "utils.h"
#include "VkSemaphore.h"

Nan::Persistent<v8::FunctionTemplate> _VkSemaphore::constructor;

_VkSemaphore::_VkSemaphore() {
  instance = (VkSemaphore*) malloc(sizeof(VkSemaphore));
}

_VkSemaphore::~_VkSemaphore() { }

void _VkSemaphore::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSemaphore::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSemaphore").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkSemaphore").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSemaphore::New) {
  _VkSemaphore* self = new _VkSemaphore();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
