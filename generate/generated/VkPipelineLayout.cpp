#include "utils.h"
#include "VkPipelineLayout.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineLayout::constructor;

_VkPipelineLayout::_VkPipelineLayout() {
  instance = (VkPipelineLayout*) malloc(sizeof(VkPipelineLayout));
}

_VkPipelineLayout::~_VkPipelineLayout() { }

void _VkPipelineLayout::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineLayout::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineLayout").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkPipelineLayout").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPipelineLayout::New) {
  _VkPipelineLayout* self = new _VkPipelineLayout();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
