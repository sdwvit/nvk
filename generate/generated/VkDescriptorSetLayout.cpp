#include "utils.h"
#include "VkDescriptorSetLayout.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorSetLayout::constructor;

_VkDescriptorSetLayout::_VkDescriptorSetLayout() {
  instance = (VkDescriptorSetLayout*) malloc(sizeof(VkDescriptorSetLayout));
}

_VkDescriptorSetLayout::~_VkDescriptorSetLayout() { }

void _VkDescriptorSetLayout::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorSetLayout::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorSetLayout").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkDescriptorSetLayout").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDescriptorSetLayout::New) {
  _VkDescriptorSetLayout* self = new _VkDescriptorSetLayout();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
