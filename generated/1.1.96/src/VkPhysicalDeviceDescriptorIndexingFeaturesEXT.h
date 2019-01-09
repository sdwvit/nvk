/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKPHYSICALDEVICEDESCRIPTORINDEXINGFEATURESEXT_H__
#define __VK_VKPHYSICALDEVICEDESCRIPTORINDEXINGFEATURESEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceDescriptorIndexingFeaturesEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetshaderInputAttachmentArrayDynamicIndexing);
    static NAN_SETTER(SetshaderInputAttachmentArrayDynamicIndexing);
    
    static NAN_GETTER(GetshaderUniformTexelBufferArrayDynamicIndexing);
    static NAN_SETTER(SetshaderUniformTexelBufferArrayDynamicIndexing);
    
    static NAN_GETTER(GetshaderStorageTexelBufferArrayDynamicIndexing);
    static NAN_SETTER(SetshaderStorageTexelBufferArrayDynamicIndexing);
    
    static NAN_GETTER(GetshaderUniformBufferArrayNonUniformIndexing);
    static NAN_SETTER(SetshaderUniformBufferArrayNonUniformIndexing);
    
    static NAN_GETTER(GetshaderSampledImageArrayNonUniformIndexing);
    static NAN_SETTER(SetshaderSampledImageArrayNonUniformIndexing);
    
    static NAN_GETTER(GetshaderStorageBufferArrayNonUniformIndexing);
    static NAN_SETTER(SetshaderStorageBufferArrayNonUniformIndexing);
    
    static NAN_GETTER(GetshaderStorageImageArrayNonUniformIndexing);
    static NAN_SETTER(SetshaderStorageImageArrayNonUniformIndexing);
    
    static NAN_GETTER(GetshaderInputAttachmentArrayNonUniformIndexing);
    static NAN_SETTER(SetshaderInputAttachmentArrayNonUniformIndexing);
    
    static NAN_GETTER(GetshaderUniformTexelBufferArrayNonUniformIndexing);
    static NAN_SETTER(SetshaderUniformTexelBufferArrayNonUniformIndexing);
    
    static NAN_GETTER(GetshaderStorageTexelBufferArrayNonUniformIndexing);
    static NAN_SETTER(SetshaderStorageTexelBufferArrayNonUniformIndexing);
    
    static NAN_GETTER(GetdescriptorBindingUniformBufferUpdateAfterBind);
    static NAN_SETTER(SetdescriptorBindingUniformBufferUpdateAfterBind);
    
    static NAN_GETTER(GetdescriptorBindingSampledImageUpdateAfterBind);
    static NAN_SETTER(SetdescriptorBindingSampledImageUpdateAfterBind);
    
    static NAN_GETTER(GetdescriptorBindingStorageImageUpdateAfterBind);
    static NAN_SETTER(SetdescriptorBindingStorageImageUpdateAfterBind);
    
    static NAN_GETTER(GetdescriptorBindingStorageBufferUpdateAfterBind);
    static NAN_SETTER(SetdescriptorBindingStorageBufferUpdateAfterBind);
    
    static NAN_GETTER(GetdescriptorBindingUniformTexelBufferUpdateAfterBind);
    static NAN_SETTER(SetdescriptorBindingUniformTexelBufferUpdateAfterBind);
    
    static NAN_GETTER(GetdescriptorBindingStorageTexelBufferUpdateAfterBind);
    static NAN_SETTER(SetdescriptorBindingStorageTexelBufferUpdateAfterBind);
    
    static NAN_GETTER(GetdescriptorBindingUpdateUnusedWhilePending);
    static NAN_SETTER(SetdescriptorBindingUpdateUnusedWhilePending);
    
    static NAN_GETTER(GetdescriptorBindingPartiallyBound);
    static NAN_SETTER(SetdescriptorBindingPartiallyBound);
    
    static NAN_GETTER(GetdescriptorBindingVariableDescriptorCount);
    static NAN_SETTER(SetdescriptorBindingVariableDescriptorCount);
    
    static NAN_GETTER(GetruntimeDescriptorArray);
    static NAN_SETTER(SetruntimeDescriptorArray);
    

    // real instance
    VkPhysicalDeviceDescriptorIndexingFeaturesEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceDescriptorIndexingFeaturesEXT();
    ~_VkPhysicalDeviceDescriptorIndexingFeaturesEXT();

};

#endif