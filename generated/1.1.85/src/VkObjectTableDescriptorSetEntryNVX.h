/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKOBJECTTABLEDESCRIPTORSETENTRYNVX_H__
#define __VK_VKOBJECTTABLEDESCRIPTORSETENTRYNVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkObjectTableDescriptorSetEntryNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Gettype);
    static NAN_SETTER(Settype);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pipelineLayout;
      static NAN_GETTER(GetpipelineLayout);
    static NAN_SETTER(SetpipelineLayout);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> descriptorSet;
      static NAN_GETTER(GetdescriptorSet);
    static NAN_SETTER(SetdescriptorSet);
    

    // real instance
    VkObjectTableDescriptorSetEntryNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkObjectTableDescriptorSetEntryNVX();
    ~_VkObjectTableDescriptorSetEntryNVX();

};

#endif