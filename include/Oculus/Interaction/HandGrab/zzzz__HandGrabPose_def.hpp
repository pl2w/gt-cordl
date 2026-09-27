#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabPose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabPose_OVROffsetMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandGrabPose)
namespace GlobalNamespace {
struct HandGrabPose_OVROffsetMode;
}
namespace Oculus::Interaction::Grab::GrabSurfaces {
class IGrabSurface;
}
namespace Oculus::Interaction::Grab {
struct GrabPoseScore;
}
namespace Oculus::Interaction::Grab {
struct PoseMeasureParameters;
}
namespace Oculus::Interaction::HandGrab::Visuals {
class HandGhostProvider;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabResult;
}
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class HandGrabPose;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabPose*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabPose*, "Oculus.Interaction.HandGrab", "HandGrabPose");
// Dependencies Oculus.Interaction.HandGrab.HandGrabPose::OVROffsetMode, UnityEngine.MonoBehaviour, UnityEngine.Pose
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabPose
class CORDL_TYPE HandGrabPose : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OVROffsetMode = ::GlobalNamespace::HandGrabPose_OVROffsetMode;

 __declspec(property(get=get_HandPose)) ::Oculus::Interaction::HandGrab::HandPose*  HandPose;

 __declspec(property(get=get_LocalPose)) ::UnityEngine::Pose  LocalPose;

/// @brief Field OVR_OFFSET_LH, offset 0xffffffff, size 0x1c 
 __declspec(property(get=getStaticF_OVR_OFFSET_LH, put=setStaticF_OVR_OFFSET_LH)) ::UnityEngine::Pose  OVR_OFFSET_LH;

/// @brief Field OVR_OFFSET_RH, offset 0xffffffff, size 0x1c 
 __declspec(property(get=getStaticF_OVR_OFFSET_RH, put=setStaticF_OVR_OFFSET_RH)) ::UnityEngine::Pose  OVR_OFFSET_RH;

 __declspec(property(get=get_RelativePose)) ::UnityEngine::Pose  RelativePose;

 __declspec(property(get=get_RelativeScale)) float_t  RelativeScale;

 __declspec(property(get=get_RelativeTo)) ::UnityW<::UnityEngine::Transform>  RelativeTo;

 __declspec(property(get=get_SnapSurface, put=set_SnapSurface)) ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*  SnapSurface;

 __declspec(property(get=get_WorldPose)) ::UnityEngine::Pose  WorldPose;

/// @brief Field _ghostProvider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__ghostProvider, put=__cordl_internal_set__ghostProvider)) ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  _ghostProvider;

/// @brief Field _handGhostProvider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGhostProvider, put=__cordl_internal_set__handGhostProvider)) ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  _handGhostProvider;

/// @brief Field _handPose, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__handPose, put=__cordl_internal_set__handPose)) ::Oculus::Interaction::HandGrab::HandPose*  _handPose;

/// @brief Field _ovrOffsetMode, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__ovrOffsetMode, put=__cordl_internal_set__ovrOffsetMode)) ::GlobalNamespace::HandGrabPose_OVROffsetMode  _ovrOffsetMode;

/// @brief Field _relativeTo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::UnityW<::UnityEngine::Transform>  _relativeTo;

/// @brief Field _snapSurface, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapSurface, put=__cordl_internal_set__snapSurface)) ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*  _snapSurface;

/// @brief Field _surface, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__surface, put=__cordl_internal_set__surface)) ::UnityW<::UnityEngine::Object>  _surface;

/// @brief Field _targetHandPose, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetHandPose, put=__cordl_internal_set__targetHandPose)) ::Oculus::Interaction::HandGrab::HandPose*  _targetHandPose;

/// @brief Field _usesHandPose, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__usesHandPose, put=__cordl_internal_set__usesHandPose)) bool  _usesHandPose;

/// @brief Method Awake, addr 0xa4e186c, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// [Obsolete("Use CalculateBestPose with offset instead")]
/// @brief Method CalculateBestPose, addr 0xa4e1960, size 0xd8, virtual true, abstract: false, final false
inline bool CalculateBestPose(::UnityEngine::Pose  userPose, ::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::UnityEngine::Transform*  relativeTo, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result) ;

/// @brief Method CalculateBestPose, addr 0xa4e1a38, size 0xb8, virtual true, abstract: false, final false
inline void CalculateBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::UnityEngine::Transform*  relativeTo, ::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result) ;

/// @brief Method CompareNearPoses, addr 0xa4e1af0, size 0x164, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabPoseScore CompareNearPoses(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPoint, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::UnityEngine::Transform*  relativeTo, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::by_ref<::UnityEngine::Pose>  bestWorldPose) ;

/// @brief Method GetOVROffset, addr 0xa4e165c, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GetOVROffset(::Oculus::Interaction::Input::Handedness  handedness) ;

/// @brief Method InjectAllHandGrabPose, addr 0xa4e1d68, size 0x8, virtual false, abstract: false, final false
inline void InjectAllHandGrabPose(::UnityEngine::Transform*  relativeTo) ;

/// @brief Method InjectOptionalHandPose, addr 0xa4e1e48, size 0x2c, virtual false, abstract: false, final false
inline void InjectOptionalHandPose(::Oculus::Interaction::HandGrab::HandPose*  handPose) ;

/// @brief Method InjectOptionalSurface, addr 0xa4e1d78, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalSurface(::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*  surface) ;

/// @brief Method InjectRelativeTo, addr 0xa4e1d70, size 0x8, virtual false, abstract: false, final false
inline void InjectRelativeTo(::UnityEngine::Transform*  relativeTo) ;

static inline ::Oculus::Interaction::HandGrab::HandGrabPose* New_ctor() ;

/// @brief Method Reset, addr 0xa4e1870, size 0xe8, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method UsesHandPose, addr 0xa4e1958, size 0x8, virtual false, abstract: false, final false
inline bool UsesHandPose() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider> const& __cordl_internal_get__ghostProvider() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>& __cordl_internal_get__ghostProvider() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider> const& __cordl_internal_get__handGhostProvider() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>& __cordl_internal_get__handGhostProvider() ;

constexpr ::Oculus::Interaction::HandGrab::HandPose* const& __cordl_internal_get__handPose() const;

constexpr ::Oculus::Interaction::HandGrab::HandPose*& __cordl_internal_get__handPose() ;

constexpr ::GlobalNamespace::HandGrabPose_OVROffsetMode const& __cordl_internal_get__ovrOffsetMode() const;

constexpr ::GlobalNamespace::HandGrabPose_OVROffsetMode& __cordl_internal_get__ovrOffsetMode() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__relativeTo() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__relativeTo() ;

constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* const& __cordl_internal_get__snapSurface() const;

constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*& __cordl_internal_get__snapSurface() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__surface() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__surface() ;

constexpr ::Oculus::Interaction::HandGrab::HandPose* const& __cordl_internal_get__targetHandPose() const;

constexpr ::Oculus::Interaction::HandGrab::HandPose*& __cordl_internal_get__targetHandPose() ;

constexpr bool const& __cordl_internal_get__usesHandPose() const;

constexpr bool& __cordl_internal_get__usesHandPose() ;

constexpr void __cordl_internal_set__ghostProvider(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  value) ;

constexpr void __cordl_internal_set__handGhostProvider(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  value) ;

constexpr void __cordl_internal_set__handPose(::Oculus::Interaction::HandGrab::HandPose*  value) ;

constexpr void __cordl_internal_set__ovrOffsetMode(::GlobalNamespace::HandGrabPose_OVROffsetMode  value) ;

constexpr void __cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__snapSurface(::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*  value) ;

constexpr void __cordl_internal_set__surface(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__targetHandPose(::Oculus::Interaction::HandGrab::HandPose*  value) ;

constexpr void __cordl_internal_set__usesHandPose(bool  value) ;

/// @brief Method .ctor, addr 0xa4e1e74, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pose getStaticF_OVR_OFFSET_LH() ;

static inline ::UnityEngine::Pose getStaticF_OVR_OFFSET_RH() ;

/// @brief Method get_HandPose, addr 0xa4dcc8c, size 0x18, virtual false, abstract: false, final false
inline ::Oculus::Interaction::HandGrab::HandPose* get_HandPose() ;

/// @brief Method get_LocalPose, addr 0xa4e1824, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_LocalPose() ;

/// @brief Method get_RelativePose, addr 0xa4e16ec, size 0xf8, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_RelativePose() ;

/// @brief Method get_RelativeScale, addr 0xa4ddcbc, size 0x48, virtual false, abstract: false, final false
inline float_t get_RelativeScale() ;

/// @brief Method get_RelativeTo, addr 0xa4e1864, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_RelativeTo() ;

/// @brief Method get_SnapSurface, addr 0xa4e15f8, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* get_SnapSurface() ;

/// @brief Method get_WorldPose, addr 0xa4e17e4, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_WorldPose() ;

static inline void setStaticF_OVR_OFFSET_LH(::UnityEngine::Pose  value) ;

static inline void setStaticF_OVR_OFFSET_RH(::UnityEngine::Pose  value) ;

/// @brief Method set_SnapSurface, addr 0xa4e1654, size 0x8, virtual false, abstract: false, final false
inline void set_SnapSurface(::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabPose() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabPose", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabPose(HandGrabPose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabPose", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabPose(HandGrabPose const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16325};

/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface), new[] {  })]
/// @brief Field _surface, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____surface;

/// @brief Field _snapSurface, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*  ____snapSurface;

/// [SerializeField]
/// [Tooltip("Transform used as a reference to measure the local data of the HandGrabPose")]
/// @brief Field _relativeTo, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____relativeTo;

/// [SerializeField]
/// @brief Field _usesHandPose, offset: 0x38, size: 0x1, def value: None
 bool  ____usesHandPose;

/// [SerializeField]
/// [Optional]
/// [HideInInspector]
/// [InspectorName("Hand Pose")]
/// @brief Field _handPose, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandPose*  ____handPose;

/// [SerializeField]
/// [Optional]
/// [HideInInspector]
/// @brief Field _targetHandPose, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandPose*  ____targetHandPose;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _ghostProvider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  ____ghostProvider;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _handGhostProvider, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  ____handGhostProvider;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _ovrOffsetMode, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::HandGrabPose_OVROffsetMode  ____ovrOffsetMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabPose, ____surface) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabPose, ____snapSurface) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabPose, ____relativeTo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabPose, ____usesHandPose) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabPose, ____handPose) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabPose, ____targetHandPose) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabPose, ____ghostProvider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabPose, ____handGhostProvider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabPose, ____ovrOffsetMode) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabPose) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
