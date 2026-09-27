#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/ValveOpenXRFoveatedRenderingFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ValveOpenXRFoveatedRenderingFeature)
namespace GlobalNamespace {
struct ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA;
}
namespace GlobalNamespace {
struct ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
namespace UnityEngine {
struct Vector2;
}
namespace Valve::OpenXR::Utils {
class ValveOpenXRFoveatedRenderingFeature_NativeMethods;
}
namespace Valve::OpenXR::Utils {
class ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate;
}
// Forward declare root types
namespace Valve::OpenXR::Utils {
class ValveOpenXRFoveatedRenderingFeature;
}
namespace Valve::OpenXR::Utils {
class ValveOpenXRFoveatedRenderingFeature_NativeMethods;
}
namespace Valve::OpenXR::Utils {
class ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate;
}
// Write type traits
MARK_REF_T(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*);
MARK_REF_T(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*);
MARK_REF_T(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*);
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*, "Valve.OpenXR.Utils", "ValveOpenXRFoveatedRenderingFeature");
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*, "Valve.OpenXR.Utils", "ValveOpenXRFoveatedRenderingFeature/NativeMethods");
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*, "Valve.OpenXR.Utils", "ValveOpenXRFoveatedRenderingFeature/XrGetFoveationEyeTrackedStateMETADelegate");
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace Valve::OpenXR::Utils {
// Is value type: false
// CS Name: Valve.OpenXR.Utils.ValveOpenXRFoveatedRenderingFeature
class CORDL_TYPE ValveOpenXRFoveatedRenderingFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
using XrFoveationEyeTrackedStateFlagsMETA = ::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA;

using XrFoveationEyeTrackedStateMETA = ::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA;

using NativeMethods = ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods;

using XrGetFoveationEyeTrackedStateMETADelegate = ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate;

/// @brief Field _xrGetFoveationEyeTrackedStateMETA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__xrGetFoveationEyeTrackedStateMETA, put=__cordl_internal_set__xrGetFoveationEyeTrackedStateMETA)) ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*  _xrGetFoveationEyeTrackedStateMETA;

/// @brief Field _xrSession, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__xrSession, put=__cordl_internal_set__xrSession)) uint64_t  _xrSession;

/// @brief Field applySettingsOnStartup, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get_applySettingsOnStartup, put=__cordl_internal_set_applySettingsOnStartup)) bool  applySettingsOnStartup;

 __declspec(property(get=get_eyeTrackedFoveation, put=set_eyeTrackedFoveation)) bool  eyeTrackedFoveation;

 __declspec(property(get=get_foveatedRenderingLevel, put=set_foveatedRenderingLevel)) float_t  foveatedRenderingLevel;

/// @brief Field initialFoveationLevel, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialFoveationLevel, put=__cordl_internal_set_initialFoveationLevel)) float_t  initialFoveationLevel;

/// @brief Field initialUseEyeTracking, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialUseEyeTracking, put=__cordl_internal_set_initialUseEyeTracking)) bool  initialUseEyeTracking;

/// @brief Method GetFoveationEyeTrackedCenter, addr 0xb941068, size 0x12c, virtual false, abstract: false, final false
inline bool GetFoveationEyeTrackedCenter(::by_ref<::UnityEngine::Vector2>  leftEye, ::by_ref<::UnityEngine::Vector2>  rightEye) ;

static inline ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature* New_ctor() ;

/// @brief Method OnSessionCreate, addr 0xb941194, size 0x10, virtual true, abstract: false, final false
inline void OnSessionCreate(uint64_t  xrSession) ;

/// @brief Method OnSessionStateChange, addr 0xb941220, size 0x3c, virtual true, abstract: false, final false
inline void OnSessionStateChange(int32_t  oldState, int32_t  newState) ;

constexpr ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate* const& __cordl_internal_get__xrGetFoveationEyeTrackedStateMETA() const;

constexpr ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*& __cordl_internal_get__xrGetFoveationEyeTrackedStateMETA() ;

constexpr uint64_t const& __cordl_internal_get__xrSession() const;

constexpr uint64_t& __cordl_internal_get__xrSession() ;

constexpr bool const& __cordl_internal_get_applySettingsOnStartup() const;

constexpr bool& __cordl_internal_get_applySettingsOnStartup() ;

constexpr float_t const& __cordl_internal_get_initialFoveationLevel() const;

constexpr float_t& __cordl_internal_get_initialFoveationLevel() ;

constexpr bool const& __cordl_internal_get_initialUseEyeTracking() const;

constexpr bool& __cordl_internal_get_initialUseEyeTracking() ;

constexpr void __cordl_internal_set__xrGetFoveationEyeTrackedStateMETA(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*  value) ;

constexpr void __cordl_internal_set__xrSession(uint64_t  value) ;

constexpr void __cordl_internal_set_applySettingsOnStartup(bool  value) ;

constexpr void __cordl_internal_set_initialFoveationLevel(float_t  value) ;

constexpr void __cordl_internal_set_initialUseEyeTracking(bool  value) ;

/// @brief Method .ctor, addr 0xb94125c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_eyeTrackedFoveation, addr 0xb940cd0, size 0x1dc, virtual false, abstract: false, final false
inline bool get_eyeTrackedFoveation() ;

/// @brief Method get_foveatedRenderingLevel, addr 0xb940914, size 0x1e4, virtual false, abstract: false, final false
inline float_t get_foveatedRenderingLevel() ;

/// @brief Method set_eyeTrackedFoveation, addr 0xb940eac, size 0x1bc, virtual false, abstract: false, final false
inline void set_eyeTrackedFoveation(bool  value) ;

/// @brief Method set_foveatedRenderingLevel, addr 0xb940af8, size 0x1d8, virtual false, abstract: false, final false
inline void set_foveatedRenderingLevel(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRFoveatedRenderingFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRFoveatedRenderingFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRFoveatedRenderingFeature(ValveOpenXRFoveatedRenderingFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRFoveatedRenderingFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRFoveatedRenderingFeature(ValveOpenXRFoveatedRenderingFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31835};

/// @brief Field extensionStrings offset 0xffffffff size 0x8
static constexpr ::ConstString  extensionStrings{u"XR_FB_foveation XR_FB_foveation_configuration XR_FB_foveation_vulkan XR_FB_swapchain_update_state XR_META_foveation_eye_tracked XR_META_vulkan_swapchain_create_info"};

/// @brief Field featureId offset 0xffffffff size 0x8
static constexpr ::ConstString  featureId{u"com.valvesoftware.openxr.utils.foveated_rendering"};

/// [SerializeField]
/// @brief Field applySettingsOnStartup, offset: 0x4e, size: 0x1, def value: None
 bool  ___applySettingsOnStartup;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field initialFoveationLevel, offset: 0x50, size: 0x4, def value: None
 float_t  ___initialFoveationLevel;

/// [SerializeField]
/// @brief Field initialUseEyeTracking, offset: 0x54, size: 0x1, def value: None
 bool  ___initialUseEyeTracking;

/// @brief Field _xrGetFoveationEyeTrackedStateMETA, offset: 0x58, size: 0x8, def value: None
 ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*  ____xrGetFoveationEyeTrackedStateMETA;

/// @brief Field _xrSession, offset: 0x60, size: 0x8, def value: None
 uint64_t  ____xrSession;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature, ___applySettingsOnStartup) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature, ___initialFoveationLevel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature, ___initialUseEyeTracking) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature, ____xrGetFoveationEyeTrackedStateMETA) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature, ____xrSession) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature) == 0x68, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils
// Dependencies System.Object
namespace Valve::OpenXR::Utils {
// Is value type: false
// CS Name: Valve.OpenXR.Utils.ValveOpenXRFoveatedRenderingFeature/NativeMethods
class CORDL_TYPE ValveOpenXRFoveatedRenderingFeature_NativeMethods : public ::System::Object {
public:
// Declarations
/// @brief Method FBGetFoveationDynamic, addr 0xb941510, size 0x7c, virtual false, abstract: false, final false
static inline void FBGetFoveationDynamic(::by_ref<uint32_t>  dynamic) ;

/// @brief Method FBGetFoveationLevel, addr 0xb941494, size 0x7c, virtual false, abstract: false, final false
static inline void FBGetFoveationLevel(::by_ref<uint32_t>  level) ;

/// @brief Method FBSetFoveationLevel, addr 0xb9413f0, size 0xa4, virtual false, abstract: false, final false
static inline void FBSetFoveationLevel(uint64_t  session, uint32_t  level, float_t  verticalOffset, uint32_t  dynamic) ;

/// @brief Method Internal_SetHasEyeTrackingPermissions, addr 0xb9411a4, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetHasEyeTrackingPermissions(bool  value) ;

/// @brief Method MetaGetFoveationEyeTracked, addr 0xb941610, size 0x90, virtual false, abstract: false, final false
static inline void MetaGetFoveationEyeTracked(::by_ref<bool>  isEyeTracked) ;

/// @brief Method MetaSetFoveationEyeTracked, addr 0xb94158c, size 0x84, virtual false, abstract: false, final false
static inline void MetaSetFoveationEyeTracked(uint64_t  session, bool  isEyeTracked) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRFoveatedRenderingFeature_NativeMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRFoveatedRenderingFeature_NativeMethods", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRFoveatedRenderingFeature_NativeMethods(ValveOpenXRFoveatedRenderingFeature_NativeMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRFoveatedRenderingFeature_NativeMethods", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRFoveatedRenderingFeature_NativeMethods(ValveOpenXRFoveatedRenderingFeature_NativeMethods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31832};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods) == 0x10, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils
// Dependencies System.MulticastDelegate
namespace Valve::OpenXR::Utils {
// Is value type: false
// CS Name: Valve.OpenXR.Utils.ValveOpenXRFoveatedRenderingFeature/XrGetFoveationEyeTrackedStateMETADelegate
class CORDL_TYPE ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb941318, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  session, ::by_ref<::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA>  foveationState, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb9413c8, size 0x28, virtual true, abstract: false, final false
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult EndInvoke(::by_ref<::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA>  foveationState, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb941304, size 0x14, virtual true, abstract: false, final false
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult Invoke(uint64_t  session, ::by_ref<::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA>  foveationState) ;

static inline ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb941264, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate(ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate(ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31831};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate) == 0x80, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils
