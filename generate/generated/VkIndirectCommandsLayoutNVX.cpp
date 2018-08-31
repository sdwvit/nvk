#include "utils.h"
#include "VkIndirectCommandsLayoutNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkIndirectCommandsLayoutNVX::constructor;

_VkIndirectCommandsLayoutNVX::_VkIndirectCommandsLayoutNVX() {
  instance = (VkIndirectCommandsLayoutNVX*) malloc(sizeof(VkIndirectCommandsLayoutNVX));
}

_VkIndirectCommandsLayoutNVX::~_VkIndirectCommandsLayoutNVX() { }

void _VkIndirectCommandsLayoutNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkIndirectCommandsLayoutNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkIndirectCommandsLayoutNVX").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkIndirectCommandsLayoutNVX").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkIndirectCommandsLayoutNVX::New) {
  _VkIndirectCommandsLayoutNVX* self = new _VkIndirectCommandsLayoutNVX();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
