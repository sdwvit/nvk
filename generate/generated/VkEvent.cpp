#include "utils.h"
#include "VkEvent.h"

Nan::Persistent<v8::FunctionTemplate> _VkEvent::constructor;

_VkEvent::_VkEvent() {
  instance = (VkEvent*) malloc(sizeof(VkEvent));
}

_VkEvent::~_VkEvent() { }

void _VkEvent::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkEvent::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkEvent").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkEvent").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkEvent::New) {
  _VkEvent* self = new _VkEvent();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
