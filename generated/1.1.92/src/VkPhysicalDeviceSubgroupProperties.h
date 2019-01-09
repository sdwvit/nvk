/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKPHYSICALDEVICESUBGROUPPROPERTIES_H__
#define __VK_VKPHYSICALDEVICESUBGROUPPROPERTIES_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceSubgroupProperties: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_GETTER(GetsubgroupSize);
    static NAN_GETTER(GetsupportedStages);
    static NAN_GETTER(GetsupportedOperations);
    static NAN_GETTER(GetquadOperationsInAllStages);

    // real instance
    VkPhysicalDeviceSubgroupProperties instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceSubgroupProperties();
    ~_VkPhysicalDeviceSubgroupProperties();

};

#endif