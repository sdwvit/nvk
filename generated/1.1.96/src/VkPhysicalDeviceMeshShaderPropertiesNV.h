/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKPHYSICALDEVICEMESHSHADERPROPERTIESNV_H__
#define __VK_VKPHYSICALDEVICEMESHSHADERPROPERTIESNV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceMeshShaderPropertiesNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetmaxDrawMeshTasksCount);
    static NAN_SETTER(SetmaxDrawMeshTasksCount);
    
    static NAN_GETTER(GetmaxTaskWorkGroupInvocations);
    static NAN_SETTER(SetmaxTaskWorkGroupInvocations);
    
    std::vector<uint32_t>* vmaxTaskWorkGroupSize;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> maxTaskWorkGroupSize;
    static NAN_GETTER(GetmaxTaskWorkGroupSize);
    static NAN_SETTER(SetmaxTaskWorkGroupSize);
    
    static NAN_GETTER(GetmaxTaskTotalMemorySize);
    static NAN_SETTER(SetmaxTaskTotalMemorySize);
    
    static NAN_GETTER(GetmaxTaskOutputCount);
    static NAN_SETTER(SetmaxTaskOutputCount);
    
    static NAN_GETTER(GetmaxMeshWorkGroupInvocations);
    static NAN_SETTER(SetmaxMeshWorkGroupInvocations);
    
    std::vector<uint32_t>* vmaxMeshWorkGroupSize;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> maxMeshWorkGroupSize;
    static NAN_GETTER(GetmaxMeshWorkGroupSize);
    static NAN_SETTER(SetmaxMeshWorkGroupSize);
    
    static NAN_GETTER(GetmaxMeshTotalMemorySize);
    static NAN_SETTER(SetmaxMeshTotalMemorySize);
    
    static NAN_GETTER(GetmaxMeshOutputVertices);
    static NAN_SETTER(SetmaxMeshOutputVertices);
    
    static NAN_GETTER(GetmaxMeshOutputPrimitives);
    static NAN_SETTER(SetmaxMeshOutputPrimitives);
    
    static NAN_GETTER(GetmaxMeshMultiviewViewCount);
    static NAN_SETTER(SetmaxMeshMultiviewViewCount);
    
    static NAN_GETTER(GetmeshOutputPerVertexGranularity);
    static NAN_SETTER(SetmeshOutputPerVertexGranularity);
    
    static NAN_GETTER(GetmeshOutputPerPrimitiveGranularity);
    static NAN_SETTER(SetmeshOutputPerPrimitiveGranularity);
    

    // real instance
    VkPhysicalDeviceMeshShaderPropertiesNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceMeshShaderPropertiesNV();
    ~_VkPhysicalDeviceMeshShaderPropertiesNV();

};

#endif