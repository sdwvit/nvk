/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKDESCRIPTORSETALLOCATEINFO_H__
#define __VK_VKDESCRIPTORSETALLOCATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDescriptorSetAllocateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> descriptorPool;
      static NAN_GETTER(GetdescriptorPool);
    static NAN_SETTER(SetdescriptorPool);
    
    static NAN_GETTER(GetdescriptorSetCount);
    static NAN_SETTER(SetdescriptorSetCount);
    
    std::vector<VkDescriptorSetLayout>* vpSetLayouts;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pSetLayouts;
    static NAN_GETTER(GetpSetLayouts);
    static NAN_SETTER(SetpSetLayouts);
    

    // real instance
    VkDescriptorSetAllocateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDescriptorSetAllocateInfo();
    ~_VkDescriptorSetAllocateInfo();

};

#endif