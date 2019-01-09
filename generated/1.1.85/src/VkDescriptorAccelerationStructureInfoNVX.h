/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKDESCRIPTORACCELERATIONSTRUCTUREINFONVX_H__
#define __VK_VKDESCRIPTORACCELERATIONSTRUCTUREINFONVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDescriptorAccelerationStructureInfoNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetaccelerationStructureCount);
    static NAN_SETTER(SetaccelerationStructureCount);
    
    std::vector<VkAccelerationStructureNVX>* vpAccelerationStructures;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pAccelerationStructures;
    static NAN_GETTER(GetpAccelerationStructures);
    static NAN_SETTER(SetpAccelerationStructures);
    

    // real instance
    VkDescriptorAccelerationStructureInfoNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDescriptorAccelerationStructureInfoNVX();
    ~_VkDescriptorAccelerationStructureInfoNVX();

};

#endif