#pragma once
// IWYU pragma private; include "UnityEngine/SystemInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SystemInfo)
namespace System {
class Enum;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct CopyTextureSupport;
}
namespace UnityEngine::Rendering {
struct FoveatedRenderingCaps;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine {
struct BatteryStatus;
}
namespace UnityEngine {
struct DeviceType;
}
namespace UnityEngine {
struct HDRDisplaySupportFlags;
}
namespace UnityEngine {
struct OperatingSystemFamily;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class SystemInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::SystemInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
// [NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
// [NativeHeader("Runtime/Misc/SystemInfo.h")]
// [NativeHeader("Runtime/Input/GetInput.h")]
// [NativeHeader("Runtime/Misc/SystemInfoMemory.h")]
// [NativeHeader("Runtime/Camera/RenderLoops/MotionVectorRenderLoop.h")]
// [NativeHeader("Runtime/Shaders/GraphicsCapsScriptBindings.h")]
// [NativeHeader("Runtime/Graphics/GraphicsFormatUtility.bindings.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SystemInfo
class CORDL_TYPE SystemInfo : public ::System::Object {
public:
// Declarations
/// [FreeFunction("systeminfo::GetBatteryLevel")]
/// @brief Method GetBatteryLevel, addr 0xb5eccb8, size 0x28, virtual false, abstract: false, final false
static inline float_t GetBatteryLevel() ;

/// [FreeFunction("systeminfo::GetBatteryStatus")]
/// @brief Method GetBatteryStatus, addr 0xb5ecd08, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::BatteryStatus GetBatteryStatus() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetCompatibleFormat")]
/// @brief Method GetCompatibleFormat, addr 0xb5ee390, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  usage) ;

/// [FreeFunction("ScriptingGraphicsCaps::GetCopyTextureSupport")]
/// @brief Method GetCopyTextureSupport, addr 0xb5ed8f4, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::CopyTextureSupport GetCopyTextureSupport() ;

/// [FreeFunction("systeminfo::GetDeviceModel")]
/// @brief Method GetDeviceModel, addr 0xb5ed0c0, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW GetDeviceModel() ;

/// @brief Method GetDeviceModel_Injected, addr 0xb5ee25c, size 0x3c, virtual false, abstract: false, final false
static inline void GetDeviceModel_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("systeminfo::GetDeviceType")]
/// @brief Method GetDeviceType, addr 0xb5ed2e8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::DeviceType GetDeviceType() ;

/// [FreeFunction("systeminfo::GetDeviceUniqueIdentifier")]
/// @brief Method GetDeviceUniqueIdentifier, addr 0xb5ecffc, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW GetDeviceUniqueIdentifier() ;

/// @brief Method GetDeviceUniqueIdentifier_Injected, addr 0xb5ee220, size 0x3c, virtual false, abstract: false, final false
static inline void GetDeviceUniqueIdentifier_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("ScriptingGraphicsCaps::GetFoveatedRenderingCaps")]
/// @brief Method GetFoveatedRenderingCaps, addr 0xb5ed7b4, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::FoveatedRenderingCaps GetFoveatedRenderingCaps() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceID")]
/// @brief Method GetGraphicsDeviceID, addr 0xb5ed510, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsDeviceID() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceName")]
/// @brief Method GetGraphicsDeviceName, addr 0xb5ed364, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceName() ;

/// @brief Method GetGraphicsDeviceName_Injected, addr 0xb5ee298, size 0x3c, virtual false, abstract: false, final false
static inline void GetGraphicsDeviceName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceType")]
/// @brief Method GetGraphicsDeviceType, addr 0xb5ed5b0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceVendor")]
/// @brief Method GetGraphicsDeviceVendor, addr 0xb5ed428, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceVendor() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceVendorID")]
/// @brief Method GetGraphicsDeviceVendorID, addr 0xb5ed560, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsDeviceVendorID() ;

/// @brief Method GetGraphicsDeviceVendor_Injected, addr 0xb5ee2d4, size 0x3c, virtual false, abstract: false, final false
static inline void GetGraphicsDeviceVendor_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsDeviceVersion")]
/// @brief Method GetGraphicsDeviceVersion, addr 0xb5ed62c, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceVersion() ;

/// @brief Method GetGraphicsDeviceVersion_Injected, addr 0xb5ee310, size 0x3c, virtual false, abstract: false, final false
static inline void GetGraphicsDeviceVersion_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsFormat")]
/// @brief Method GetGraphicsFormat, addr 0xb5ee3d4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsMemorySize")]
/// @brief Method GetGraphicsMemorySize, addr 0xb5ed338, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsMemorySize() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsMultiThreaded")]
/// @brief Method GetGraphicsMultiThreaded, addr 0xb5ed764, size 0x28, virtual false, abstract: false, final false
static inline bool GetGraphicsMultiThreaded() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsShaderLevel")]
/// @brief Method GetGraphicsShaderLevel, addr 0xb5ed714, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsShaderLevel() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetGraphicsUVStartsAtTop")]
/// @brief Method GetGraphicsUVStartsAtTop, addr 0xb5ed600, size 0x28, virtual false, abstract: false, final false
static inline bool GetGraphicsUVStartsAtTop() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetHDRDisplaySupportFlags")]
/// @brief Method GetHDRDisplaySupportFlags, addr 0xb5edff0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::HDRDisplaySupportFlags GetHDRDisplaySupportFlags() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetMaxRenderTextureSize")]
/// @brief Method GetMaxRenderTextureSize, addr 0xb5eded8, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetMaxRenderTextureSize() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetMaxTextureArraySlices")]
/// @brief Method GetMaxTextureArraySlices, addr 0xb5ede88, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetMaxTextureArraySlices() ;

/// [FreeFunction("ScriptingGraphicsCaps::GetMaxTextureSize")]
/// @brief Method GetMaxTextureSize, addr 0xb5ede38, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetMaxTextureSize() ;

/// [FreeFunction("systeminfo::GetOperatingSystem")]
/// @brief Method GetOperatingSystem, addr 0xb5ecd34, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW GetOperatingSystem() ;

/// [FreeFunction("systeminfo::GetOperatingSystemFamily")]
/// @brief Method GetOperatingSystemFamily, addr 0xb5ece1c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily() ;

/// @brief Method GetOperatingSystem_Injected, addr 0xb5ee1a8, size 0x3c, virtual false, abstract: false, final false
static inline void GetOperatingSystem_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("systeminfo::GetPhysicalMemoryMB")]
/// @brief Method GetPhysicalMemoryMB, addr 0xb5ecfd0, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetPhysicalMemoryMB() ;

/// [FreeFunction("systeminfo::GetProcessorCount")]
/// @brief Method GetProcessorCount, addr 0xb5ecf80, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetProcessorCount() ;

/// [FreeFunction("systeminfo::GetProcessorFrequencyMHz")]
/// @brief Method GetProcessorFrequencyMHz, addr 0xb5ecf30, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetProcessorFrequencyMHz() ;

/// [FreeFunction("systeminfo::GetProcessorType")]
/// @brief Method GetProcessorType, addr 0xb5ece48, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW GetProcessorType() ;

/// @brief Method GetProcessorType_Injected, addr 0xb5ee1e4, size 0x3c, virtual false, abstract: false, final false
static inline void GetProcessorType_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [FreeFunction("ScriptingGraphicsCaps::GetRenderTextureSupportedMSAASampleCount")]
/// @brief Method GetRenderTextureSupportedMSAASampleCount, addr 0xb5ee410, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetRenderTextureSupportedMSAASampleCount(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method GetRenderTextureSupportedMSAASampleCount_Injected, addr 0xb5ee44c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetRenderTextureSupportedMSAASampleCount_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor>  desc) ;

/// [FreeFunction("ScriptingGraphicsCaps::HasHiddenSurfaceRemovalOnGPU")]
/// @brief Method HasHiddenSurfaceRemovalOnGPU, addr 0xb5ed804, size 0x28, virtual false, abstract: false, final false
static inline bool HasHiddenSurfaceRemovalOnGPU() ;

/// [FreeFunction("ScriptingGraphicsCaps::HasRenderTexture")]
/// @brief Method HasRenderTextureNative, addr 0xb5edcc4, size 0x3c, virtual false, abstract: false, final false
static inline bool HasRenderTextureNative(::UnityEngine::RenderTextureFormat  format) ;

/// [FreeFunction("ScriptingGraphicsCaps::IsFormatSupported")]
/// @brief Method IsFormatSupported, addr 0xb5ee34c, size 0x44, virtual false, abstract: false, final false
static inline bool IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  usage) ;

/// [FreeFunction]
/// @brief Method IsGyroAvailable, addr 0xb5ed1f8, size 0x28, virtual false, abstract: false, final false
static inline bool IsGyroAvailable() ;

/// @brief Method IsValidEnumValue, addr 0xb5edb9c, size 0x54, virtual false, abstract: false, final false
static inline bool IsValidEnumValue(::System::Enum*  value) ;

/// [FreeFunction("ScriptingGraphicsCaps::MaxGraphicsBufferSize")]
/// @brief Method MaxGraphicsBufferSize, addr 0xb5edf50, size 0x28, virtual false, abstract: false, final false
static inline int64_t MaxGraphicsBufferSize() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportedRenderTargetCount")]
/// @brief Method SupportedRenderTargetCount, addr 0xb5eda34, size 0x28, virtual false, abstract: false, final false
static inline int32_t SupportedRenderTargetCount() ;

/// [FreeFunction("ScriptingGraphicsCaps::Supports2DArrayTextures")]
/// @brief Method Supports2DArrayTextures, addr 0xb5ed8a4, size 0x28, virtual false, abstract: false, final false
static inline bool Supports2DArrayTextures() ;

/// [FreeFunction("systeminfo::SupportsAccelerometer")]
/// @brief Method SupportsAccelerometer, addr 0xb5ed1a8, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsAccelerometer() ;

/// [FreeFunction("systeminfo::SupportsAudio")]
/// @brief Method SupportsAudio, addr 0xb5ed298, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsAudio() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsComputeShaders")]
/// @brief Method SupportsComputeShaders, addr 0xb5ed944, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsComputeShaders() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsGPUFence")]
/// @brief Method SupportsGPUFence, addr 0xb5edf28, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsGPUFence() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsIndirectArgumentsBuffer")]
/// @brief Method SupportsIndirectArgumentsBuffer, addr 0xb5ee180, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsIndirectArgumentsBuffer() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsInstancing")]
/// @brief Method SupportsInstancing, addr 0xb5ed9e4, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsInstancing() ;

/// [FreeFunction("systeminfo::SupportsLocationService")]
/// @brief Method SupportsLocationService, addr 0xb5ed248, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsLocationService() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleAutoResolve")]
/// @brief Method SupportsMultisampleAutoResolve, addr 0xb5edb24, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsMultisampleAutoResolve() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleResolveDepth")]
/// @brief Method SupportsMultisampleResolveDepth, addr 0xb5ee0e0, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsMultisampleResolveDepth() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsMultisampleResolveStencil")]
/// @brief Method SupportsMultisampleResolveStencil, addr 0xb5ee130, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsMultisampleResolveStencil() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsMultisampledBackBuffer")]
/// @brief Method SupportsMultisampledBackBuffer, addr 0xb5edad4, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsMultisampledBackBuffer() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsMultisampledTextures")]
/// @brief Method SupportsMultisampledTextures, addr 0xb5eda84, size 0x28, virtual false, abstract: false, final false
static inline int32_t SupportsMultisampledTextures() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsMultiview")]
/// @brief Method SupportsMultiview, addr 0xb5ee040, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsMultiview() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsRenderTargetArrayIndexFromVertexShader")]
/// @brief Method SupportsRenderTargetArrayIndexFromVertexShader, addr 0xb5ed994, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsRenderTargetArrayIndexFromVertexShader() ;

/// @brief Method SupportsRenderTextureFormat, addr 0xb5edbf0, size 0xd4, virtual false, abstract: false, final false
static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat  format) ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsShadows")]
/// @brief Method SupportsShadows, addr 0xb5ed854, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsShadows() ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsStoreAndResolveAction")]
/// @brief Method SupportsStoreAndResolveAction, addr 0xb5ee090, size 0x28, virtual false, abstract: false, final false
static inline bool SupportsStoreAndResolveAction() ;

/// @brief Method SupportsTextureFormat, addr 0xb5edd00, size 0xd4, virtual false, abstract: false, final false
static inline bool SupportsTextureFormat(::UnityEngine::TextureFormat  format) ;

/// [FreeFunction("ScriptingGraphicsCaps::SupportsTextureFormat")]
/// @brief Method SupportsTextureFormatNative, addr 0xb5eddd4, size 0x3c, virtual false, abstract: false, final false
static inline bool SupportsTextureFormatNative(::UnityEngine::TextureFormat  format) ;

/// [FreeFunction("ScriptingGraphicsCaps::UsesLoadStoreActions")]
/// @brief Method UsesLoadStoreActions, addr 0xb5edfa0, size 0x28, virtual false, abstract: false, final false
static inline bool UsesLoadStoreActions() ;

/// [FreeFunction("ScriptingGraphicsCaps::UsesReversedZBuffer")]
/// @brief Method UsesReversedZBuffer, addr 0xb5edb74, size 0x28, virtual false, abstract: false, final false
static inline bool UsesReversedZBuffer() ;

/// @brief Method get_batteryLevel, addr 0xb5ecc90, size 0x28, virtual false, abstract: false, final false
static inline float_t get_batteryLevel() ;

/// @brief Method get_batteryStatus, addr 0xb5ecce0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::BatteryStatus get_batteryStatus() ;

/// @brief Method get_copyTextureSupport, addr 0xb5ed8cc, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::CopyTextureSupport get_copyTextureSupport() ;

/// @brief Method get_deviceModel, addr 0xb5ed0bc, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_deviceModel() ;

/// @brief Method get_deviceType, addr 0xb5ed2c0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::DeviceType get_deviceType() ;

/// @brief Method get_deviceUniqueIdentifier, addr 0xb5ecff8, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_deviceUniqueIdentifier() ;

/// @brief Method get_foveatedRenderingCaps, addr 0xb5ed78c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::FoveatedRenderingCaps get_foveatedRenderingCaps() ;

/// @brief Method get_graphicsDeviceID, addr 0xb5ed4e8, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsDeviceID() ;

/// @brief Method get_graphicsDeviceName, addr 0xb5ed360, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceName() ;

/// @brief Method get_graphicsDeviceType, addr 0xb5ed588, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType() ;

/// @brief Method get_graphicsDeviceVendor, addr 0xb5ed424, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceVendor() ;

/// @brief Method get_graphicsDeviceVendorID, addr 0xb5ed538, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsDeviceVendorID() ;

/// @brief Method get_graphicsDeviceVersion, addr 0xb5ed628, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceVersion() ;

/// @brief Method get_graphicsMemorySize, addr 0xb5ed310, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsMemorySize() ;

/// @brief Method get_graphicsMultiThreaded, addr 0xb5ed73c, size 0x28, virtual false, abstract: false, final false
static inline bool get_graphicsMultiThreaded() ;

/// @brief Method get_graphicsShaderLevel, addr 0xb5ed6ec, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsShaderLevel() ;

/// @brief Method get_graphicsUVStartsAtTop, addr 0xb5ed5d8, size 0x28, virtual false, abstract: false, final false
static inline bool get_graphicsUVStartsAtTop() ;

/// @brief Method get_hasHiddenSurfaceRemovalOnGPU, addr 0xb5ed7dc, size 0x28, virtual false, abstract: false, final false
static inline bool get_hasHiddenSurfaceRemovalOnGPU() ;

/// @brief Method get_hdrDisplaySupportFlags, addr 0xb5edfc8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::HDRDisplaySupportFlags get_hdrDisplaySupportFlags() ;

/// @brief Method get_maxGraphicsBufferSize, addr 0xb5eaec0, size 0x28, virtual false, abstract: false, final false
static inline int64_t get_maxGraphicsBufferSize() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method get_maxRenderTextureSize, addr 0xb5edeb0, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maxRenderTextureSize() ;

/// @brief Method get_maxTextureArraySlices, addr 0xb5ede60, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maxTextureArraySlices() ;

/// @brief Method get_maxTextureSize, addr 0xb5ede10, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maxTextureSize() ;

/// @brief Method get_operatingSystem, addr 0xb5ecd30, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_operatingSystem() ;

/// @brief Method get_operatingSystemFamily, addr 0xb5ecdf4, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily() ;

/// @brief Method get_processorCount, addr 0xb5ecf58, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_processorCount() ;

/// @brief Method get_processorFrequency, addr 0xb5ecf08, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_processorFrequency() ;

/// @brief Method get_processorType, addr 0xb5ece44, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_processorType() ;

/// @brief Method get_supportedRenderTargetCount, addr 0xb5eda0c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_supportedRenderTargetCount() ;

/// @brief Method get_supports2DArrayTextures, addr 0xb5ed87c, size 0x28, virtual false, abstract: false, final false
static inline bool get_supports2DArrayTextures() ;

/// @brief Method get_supportsAccelerometer, addr 0xb5ed180, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsAccelerometer() ;

/// @brief Method get_supportsAudio, addr 0xb5ed270, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsAudio() ;

/// @brief Method get_supportsComputeShaders, addr 0xb5ed91c, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsComputeShaders() ;

/// @brief Method get_supportsGraphicsFence, addr 0xb5edf00, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsGraphicsFence() ;

/// @brief Method get_supportsGyroscope, addr 0xb5ed1d0, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsGyroscope() ;

/// @brief Method get_supportsIndirectArgumentsBuffer, addr 0xb5ee158, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsIndirectArgumentsBuffer() ;

/// @brief Method get_supportsInstancing, addr 0xb5ed9bc, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsInstancing() ;

/// @brief Method get_supportsLocationService, addr 0xb5ed220, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsLocationService() ;

/// @brief Method get_supportsMultisampleAutoResolve, addr 0xb5edafc, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsMultisampleAutoResolve() ;

/// @brief Method get_supportsMultisampleResolveDepth, addr 0xb5ee0b8, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsMultisampleResolveDepth() ;

/// @brief Method get_supportsMultisampleResolveStencil, addr 0xb5ee108, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsMultisampleResolveStencil() ;

/// @brief Method get_supportsMultisampledBackBuffer, addr 0xb5edaac, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsMultisampledBackBuffer() ;

/// @brief Method get_supportsMultisampledTextures, addr 0xb5eda5c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_supportsMultisampledTextures() ;

/// @brief Method get_supportsMultiview, addr 0xb5ee018, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsMultiview() ;

/// @brief Method get_supportsRenderTargetArrayIndexFromVertexShader, addr 0xb5ed96c, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsRenderTargetArrayIndexFromVertexShader() ;

/// @brief Method get_supportsShadows, addr 0xb5ed82c, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsShadows() ;

/// @brief Method get_supportsStoreAndResolveAction, addr 0xb5ee068, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsStoreAndResolveAction() ;

/// @brief Method get_systemMemorySize, addr 0xb5ecfa8, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_systemMemorySize() ;

/// @brief Method get_usesLoadStoreActions, addr 0xb5edf78, size 0x28, virtual false, abstract: false, final false
static inline bool get_usesLoadStoreActions() ;

/// @brief Method get_usesReversedZBuffer, addr 0xb5edb4c, size 0x28, virtual false, abstract: false, final false
static inline bool get_usesReversedZBuffer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemInfo(SystemInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemInfo(SystemInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15141};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SystemInfo) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
