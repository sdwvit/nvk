#include "utils.h"
#include "VkFence.h"

Nan::Persistent<v8::FunctionTemplate> _VkFence::constructor;

_VkFence::_VkFence() {
  instance = (VkFence*) malloc(sizeof(VkFence));
}

_VkFence::~_VkFence() { }

void _VkFence::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkFence::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkFence").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkFence").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkFence::New) {
  _VkFence* self = new _VkFence();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
