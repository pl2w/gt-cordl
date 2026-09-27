#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSettings)
namespace GlobalNamespace {
struct XRSettings_StereoRenderingMode;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::XRSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::XRSettings*, "UnityEngine.XR", "XRSettings");
// [NativeHeader("Modules/VR/ScriptBindings/XR.bindings.h")]
// [NativeHeader("Runtime/Interfaces/IVRDevice.h")]
// [NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
// [NativeConditional("ENABLE_VR")]
// [NativeHeader("Modules/VR/VRModule.h")]
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRSettings
class CORDL_TYPE XRSettings : public ::System::Object {
public:
// Declarations
using StereoRenderingMode = ::GlobalNamespace::XRSettings_StereoRenderingMode;

/// [StaticAccessor("GetIVRDeviceScripting()", (UnityEngine.Bindings.StaticAccessorType)3)]
/// @brief Method get_enabled, addr 0xb932004, size 0x28, virtual false, abstract: false, final false
static inline bool get_enabled() ;

/// @brief Method get_eyeTextureDesc, addr 0xb932104, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureDescriptor get_eyeTextureDesc() ;

/// @brief Method get_eyeTextureDesc_Injected, addr 0xb932174, size 0x3c, virtual false, abstract: false, final false
static inline void get_eyeTextureDesc_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor>  ret) ;

/// @brief Method get_eyeTextureHeight, addr 0xb9320dc, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_eyeTextureHeight() ;

/// @brief Method get_eyeTextureResolutionScale, addr 0xb932054, size 0x28, virtual false, abstract: false, final false
static inline float_t get_eyeTextureResolutionScale() ;

/// @brief Method get_eyeTextureWidth, addr 0xb9320b4, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_eyeTextureWidth() ;

/// @brief Method get_isDeviceActive, addr 0xb93202c, size 0x28, virtual false, abstract: false, final false
static inline bool get_isDeviceActive() ;

/// @brief Method get_loadedDeviceName, addr 0xb9322e8, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW get_loadedDeviceName() ;

/// @brief Method get_loadedDeviceName_Injected, addr 0xb9323ac, size 0x3c, virtual false, abstract: false, final false
static inline void get_loadedDeviceName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_renderViewportScale, addr 0xb9321b0, size 0x28, virtual false, abstract: false, final false
static inline float_t get_renderViewportScale() ;

/// @brief Method get_renderViewportScaleInternal, addr 0xb9321d8, size 0x28, virtual false, abstract: false, final false
static inline float_t get_renderViewportScaleInternal() ;

/// @brief Method get_stereoRenderingMode, addr 0xb932410, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::XRSettings_StereoRenderingMode get_stereoRenderingMode() ;

/// @brief Method get_supportedDevices, addr 0xb9323e8, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_supportedDevices() ;

/// @brief Method set_eyeTextureResolutionScale, addr 0xb93207c, size 0x38, virtual false, abstract: false, final false
static inline void set_eyeTextureResolutionScale(float_t  value) ;

/// @brief Method set_renderViewportScale, addr 0xb932200, size 0xb0, virtual false, abstract: false, final false
static inline void set_renderViewportScale(float_t  value) ;

/// @brief Method set_renderViewportScaleInternal, addr 0xb9322b0, size 0x38, virtual false, abstract: false, final false
static inline void set_renderViewportScaleInternal(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSettings(XRSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSettings(XRSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32869};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::XRSettings) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR
