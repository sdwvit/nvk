#ifndef __VK_VKPHYSICALDEVICEFEATURES_H__
#define __VK_VKPHYSICALDEVICEFEATURES_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceFeatures: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      static NAN_GETTER(GetrobustBufferAccess);
    static NAN_SETTER(SetrobustBufferAccess);
    
      static NAN_GETTER(GetfullDrawIndexUint32);
    static NAN_SETTER(SetfullDrawIndexUint32);
    
      static NAN_GETTER(GetimageCubeArray);
    static NAN_SETTER(SetimageCubeArray);
    
      static NAN_GETTER(GetindependentBlend);
    static NAN_SETTER(SetindependentBlend);
    
      static NAN_GETTER(GetgeometryShader);
    static NAN_SETTER(SetgeometryShader);
    
      static NAN_GETTER(GettessellationShader);
    static NAN_SETTER(SettessellationShader);
    
      static NAN_GETTER(GetsampleRateShading);
    static NAN_SETTER(SetsampleRateShading);
    
      static NAN_GETTER(GetdualSrcBlend);
    static NAN_SETTER(SetdualSrcBlend);
    
      static NAN_GETTER(GetlogicOp);
    static NAN_SETTER(SetlogicOp);
    
      static NAN_GETTER(GetmultiDrawIndirect);
    static NAN_SETTER(SetmultiDrawIndirect);
    
      static NAN_GETTER(GetdrawIndirectFirstInstance);
    static NAN_SETTER(SetdrawIndirectFirstInstance);
    
      static NAN_GETTER(GetdepthClamp);
    static NAN_SETTER(SetdepthClamp);
    
      static NAN_GETTER(GetdepthBiasClamp);
    static NAN_SETTER(SetdepthBiasClamp);
    
      static NAN_GETTER(GetfillModeNonSolid);
    static NAN_SETTER(SetfillModeNonSolid);
    
      static NAN_GETTER(GetdepthBounds);
    static NAN_SETTER(SetdepthBounds);
    
      static NAN_GETTER(GetwideLines);
    static NAN_SETTER(SetwideLines);
    
      static NAN_GETTER(GetlargePoints);
    static NAN_SETTER(SetlargePoints);
    
      static NAN_GETTER(GetalphaToOne);
    static NAN_SETTER(SetalphaToOne);
    
      static NAN_GETTER(GetmultiViewport);
    static NAN_SETTER(SetmultiViewport);
    
      static NAN_GETTER(GetsamplerAnisotropy);
    static NAN_SETTER(SetsamplerAnisotropy);
    
      static NAN_GETTER(GettextureCompressionETC2);
    static NAN_SETTER(SettextureCompressionETC2);
    
      static NAN_GETTER(GettextureCompressionASTC_LDR);
    static NAN_SETTER(SettextureCompressionASTC_LDR);
    
      static NAN_GETTER(GettextureCompressionBC);
    static NAN_SETTER(SettextureCompressionBC);
    
      static NAN_GETTER(GetocclusionQueryPrecise);
    static NAN_SETTER(SetocclusionQueryPrecise);
    
      static NAN_GETTER(GetpipelineStatisticsQuery);
    static NAN_SETTER(SetpipelineStatisticsQuery);
    
      static NAN_GETTER(GetvertexPipelineStoresAndAtomics);
    static NAN_SETTER(SetvertexPipelineStoresAndAtomics);
    
      static NAN_GETTER(GetfragmentStoresAndAtomics);
    static NAN_SETTER(SetfragmentStoresAndAtomics);
    
      static NAN_GETTER(GetshaderTessellationAndGeometryPointSize);
    static NAN_SETTER(SetshaderTessellationAndGeometryPointSize);
    
      static NAN_GETTER(GetshaderImageGatherExtended);
    static NAN_SETTER(SetshaderImageGatherExtended);
    
      static NAN_GETTER(GetshaderStorageImageExtendedFormats);
    static NAN_SETTER(SetshaderStorageImageExtendedFormats);
    
      static NAN_GETTER(GetshaderStorageImageMultisample);
    static NAN_SETTER(SetshaderStorageImageMultisample);
    
      static NAN_GETTER(GetshaderStorageImageReadWithoutFormat);
    static NAN_SETTER(SetshaderStorageImageReadWithoutFormat);
    
      static NAN_GETTER(GetshaderStorageImageWriteWithoutFormat);
    static NAN_SETTER(SetshaderStorageImageWriteWithoutFormat);
    
      static NAN_GETTER(GetshaderUniformBufferArrayDynamicIndexing);
    static NAN_SETTER(SetshaderUniformBufferArrayDynamicIndexing);
    
      static NAN_GETTER(GetshaderSampledImageArrayDynamicIndexing);
    static NAN_SETTER(SetshaderSampledImageArrayDynamicIndexing);
    
      static NAN_GETTER(GetshaderStorageBufferArrayDynamicIndexing);
    static NAN_SETTER(SetshaderStorageBufferArrayDynamicIndexing);
    
      static NAN_GETTER(GetshaderStorageImageArrayDynamicIndexing);
    static NAN_SETTER(SetshaderStorageImageArrayDynamicIndexing);
    
      static NAN_GETTER(GetshaderClipDistance);
    static NAN_SETTER(SetshaderClipDistance);
    
      static NAN_GETTER(GetshaderCullDistance);
    static NAN_SETTER(SetshaderCullDistance);
    
      static NAN_GETTER(GetshaderFloat64);
    static NAN_SETTER(SetshaderFloat64);
    
      static NAN_GETTER(GetshaderInt64);
    static NAN_SETTER(SetshaderInt64);
    
      static NAN_GETTER(GetshaderInt16);
    static NAN_SETTER(SetshaderInt16);
    
      static NAN_GETTER(GetshaderResourceResidency);
    static NAN_SETTER(SetshaderResourceResidency);
    
      static NAN_GETTER(GetshaderResourceMinLod);
    static NAN_SETTER(SetshaderResourceMinLod);
    
      static NAN_GETTER(GetsparseBinding);
    static NAN_SETTER(SetsparseBinding);
    
      static NAN_GETTER(GetsparseResidencyBuffer);
    static NAN_SETTER(SetsparseResidencyBuffer);
    
      static NAN_GETTER(GetsparseResidencyImage2D);
    static NAN_SETTER(SetsparseResidencyImage2D);
    
      static NAN_GETTER(GetsparseResidencyImage3D);
    static NAN_SETTER(SetsparseResidencyImage3D);
    
      static NAN_GETTER(GetsparseResidency2Samples);
    static NAN_SETTER(SetsparseResidency2Samples);
    
      static NAN_GETTER(GetsparseResidency4Samples);
    static NAN_SETTER(SetsparseResidency4Samples);
    
      static NAN_GETTER(GetsparseResidency8Samples);
    static NAN_SETTER(SetsparseResidency8Samples);
    
      static NAN_GETTER(GetsparseResidency16Samples);
    static NAN_SETTER(SetsparseResidency16Samples);
    
      static NAN_GETTER(GetsparseResidencyAliased);
    static NAN_SETTER(SetsparseResidencyAliased);
    
      static NAN_GETTER(GetvariableMultisampleRate);
    static NAN_SETTER(SetvariableMultisampleRate);
    
      static NAN_GETTER(GetinheritedQueries);
    static NAN_SETTER(SetinheritedQueries);
    

    // real instance
    VkPhysicalDeviceFeatures *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkPhysicalDeviceFeatures();
    ~_VkPhysicalDeviceFeatures();

};

#endif