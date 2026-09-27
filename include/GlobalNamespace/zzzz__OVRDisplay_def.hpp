#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRDisplay_EyeRenderDesc_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDisplay)
namespace GlobalNamespace {
struct OVRDisplay_EyeFov;
}
namespace GlobalNamespace {
struct OVRDisplay_EyeRenderDesc;
}
namespace GlobalNamespace {
struct OVRDisplay_LatencyData;
}
namespace System {
class Action;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDisplay*, "", "OVRDisplay");
// [HelpURL("https://developer.oculus.com/reference/unity/v67/class_o_v_r_display")]
// Dependencies OVRDisplay::EyeRenderDesc, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRDisplay
class CORDL_TYPE OVRDisplay : public ::System::Object {
public:
// Declarations
using EyeFov = ::GlobalNamespace::OVRDisplay_EyeFov;

using EyeRenderDesc = ::GlobalNamespace::OVRDisplay_EyeRenderDesc;

using LatencyData = ::GlobalNamespace::OVRDisplay_LatencyData;

/// @brief Field RecenteredPose, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecenteredPose, put=__cordl_internal_set_RecenteredPose)) ::System::Action*  RecenteredPose;

/// @brief [Obsolete("Deprecated. Acceleration is not supported in OpenXR", false)]
 __declspec(property(get=get_acceleration)) ::UnityEngine::Vector3  acceleration;

/// @brief [Obsolete("Deprecated. Acceleration is not supported in OpenXR", false)]
 __declspec(property(get=get_angularAcceleration)) ::UnityEngine::Vector3  angularAcceleration;

 __declspec(property(get=get_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

 __declspec(property(get=get_appFramerate)) float_t  appFramerate;

 __declspec(property(get=get_displayFrequenciesAvailable)) ::ArrayW<float_t>  displayFrequenciesAvailable;

 __declspec(property(get=get_displayFrequency, put=set_displayFrequency)) float_t  displayFrequency;

/// @brief Field eyeDescs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeDescs, put=__cordl_internal_set_eyeDescs)) ::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc>  eyeDescs;

 __declspec(property(get=get_latency)) ::GlobalNamespace::OVRDisplay_LatencyData  latency;

/// @brief Field localTrackingSpaceRecenterCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_localTrackingSpaceRecenterCount, put=__cordl_internal_set_localTrackingSpaceRecenterCount)) int32_t  localTrackingSpaceRecenterCount;

/// @brief Field needsConfigureTexture, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_needsConfigureTexture, put=__cordl_internal_set_needsConfigureTexture)) bool  needsConfigureTexture;

/// @brief Field recenterRequested, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_recenterRequested, put=__cordl_internal_set_recenterRequested)) bool  recenterRequested;

/// @brief Field recenterRequestedFrameCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_recenterRequestedFrameCount, put=__cordl_internal_set_recenterRequestedFrameCount)) int32_t  recenterRequestedFrameCount;

 __declspec(property(get=get_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method ConfigureEyeDesc, addr 0xa584cb8, size 0x268, virtual false, abstract: false, final false
inline void ConfigureEyeDesc(::UnityEngine::XR::XRNode  eye) ;

/// @brief Method GetEyeRenderDesc, addr 0xa584920, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRDisplay_EyeRenderDesc GetEyeRenderDesc(::UnityEngine::XR::XRNode  eye) ;

static inline ::GlobalNamespace::OVRDisplay* New_ctor() ;

/// @brief Method RecenterPose, addr 0xa584378, size 0x78, virtual false, abstract: false, final false
inline void RecenterPose() ;

/// @brief Method Update, addr 0xa5840b4, size 0x18c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateTextures, addr 0xa584094, size 0x20, virtual false, abstract: false, final false
inline void UpdateTextures() ;

constexpr ::System::Action* const& __cordl_internal_get_RecenteredPose() const;

constexpr ::System::Action*& __cordl_internal_get_RecenteredPose() ;

constexpr ::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc> const& __cordl_internal_get_eyeDescs() const;

constexpr ::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc>& __cordl_internal_get_eyeDescs() ;

constexpr int32_t const& __cordl_internal_get_localTrackingSpaceRecenterCount() const;

constexpr int32_t& __cordl_internal_get_localTrackingSpaceRecenterCount() ;

constexpr bool const& __cordl_internal_get_needsConfigureTexture() const;

constexpr bool& __cordl_internal_get_needsConfigureTexture() ;

constexpr bool const& __cordl_internal_get_recenterRequested() const;

constexpr bool& __cordl_internal_get_recenterRequested() ;

constexpr int32_t const& __cordl_internal_get_recenterRequestedFrameCount() const;

constexpr int32_t& __cordl_internal_get_recenterRequestedFrameCount() ;

constexpr void __cordl_internal_set_RecenteredPose(::System::Action*  value) ;

constexpr void __cordl_internal_set_eyeDescs(::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc>  value) ;

constexpr void __cordl_internal_set_localTrackingSpaceRecenterCount(int32_t  value) ;

constexpr void __cordl_internal_set_needsConfigureTexture(bool  value) ;

constexpr void __cordl_internal_set_recenterRequested(bool  value) ;

constexpr void __cordl_internal_set_recenterRequestedFrameCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xa584010, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_RecenteredPose, addr 0xa584240, size 0x9c, virtual false, abstract: false, final false
inline void add_RecenteredPose(::System::Action*  value) ;

/// @brief Method get_acceleration, addr 0xa5843f0, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_acceleration() ;

/// @brief Method get_angularAcceleration, addr 0xa58453c, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_angularAcceleration() ;

/// @brief Method get_angularVelocity, addr 0xa5847d4, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_angularVelocity() ;

/// @brief Method get_appFramerate, addr 0xa584b28, size 0x90, virtual false, abstract: false, final false
inline float_t get_appFramerate() ;

/// @brief Method get_displayFrequenciesAvailable, addr 0xa584bb8, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<float_t> get_displayFrequenciesAvailable() ;

/// @brief Method get_displayFrequency, addr 0xa584c08, size 0x50, virtual false, abstract: false, final false
inline float_t get_displayFrequency() ;

/// @brief Method get_latency, addr 0xa584958, size 0x1d0, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRDisplay_LatencyData get_latency() ;

/// @brief Method get_velocity, addr 0xa584688, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_velocity() ;

/// [CompilerGenerated]
/// @brief Method remove_RecenteredPose, addr 0xa5842dc, size 0x9c, virtual false, abstract: false, final false
inline void remove_RecenteredPose(::System::Action*  value) ;

/// @brief Method set_displayFrequency, addr 0xa584c58, size 0x60, virtual false, abstract: false, final false
inline void set_displayFrequency(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRDisplay(OVRDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRDisplay(OVRDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11885};

/// @brief Field needsConfigureTexture, offset: 0x10, size: 0x1, def value: None
 bool  ___needsConfigureTexture;

/// @brief Field eyeDescs, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRDisplay_EyeRenderDesc>  ___eyeDescs;

/// @brief Field recenterRequested, offset: 0x20, size: 0x1, def value: None
 bool  ___recenterRequested;

/// @brief Field recenterRequestedFrameCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___recenterRequestedFrameCount;

/// @brief Field localTrackingSpaceRecenterCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___localTrackingSpaceRecenterCount;

/// [CompilerGenerated]
/// @brief Field RecenteredPose, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___RecenteredPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___needsConfigureTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___eyeDescs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___recenterRequested) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___recenterRequestedFrameCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___localTrackingSpaceRecenterCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay, ___RecenteredPose) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDisplay) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
