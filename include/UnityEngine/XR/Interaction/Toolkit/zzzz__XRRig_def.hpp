#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRRig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRRig)
namespace GlobalNamespace {
struct XROrigin_TrackingOriginMode;
}
namespace UnityEngine::XR {
struct TrackingOriginModeFlags;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRRig;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRRig*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRRig*, "UnityEngine.XR.Interaction.Toolkit", "XRRig");
// [AddComponentMenu("")]
// [DisallowMultipleComponent]
// [Obsolete("XRRig has been deprecated. Use the XROrigin component instead.", true)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.XRRig.html")]
// Dependencies Unity.XR.CoreUtils.XROrigin
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRRig
class CORDL_TYPE XRRig : public ::Unity::XR::CoreUtils::XROrigin {
public:
// Declarations
 __declspec(property(get=get_cameraFloorOffsetObject, put=set_cameraFloorOffsetObject)) ::UnityW<::UnityEngine::GameObject>  cameraFloorOffsetObject;

 __declspec(property(get=get_cameraGameObject, put=set_cameraGameObject)) ::UnityW<::UnityEngine::GameObject>  cameraGameObject;

 __declspec(property(get=get_cameraInRigSpaceHeight)) float_t  cameraInRigSpaceHeight;

 __declspec(property(get=get_cameraInRigSpacePos)) ::UnityEngine::Vector3  cameraInRigSpacePos;

 __declspec(property(get=get_cameraYOffset, put=set_cameraYOffset)) float_t  cameraYOffset;

 __declspec(property(get=get_currentTrackingOriginMode)) ::UnityEngine::XR::TrackingOriginModeFlags  currentTrackingOriginMode;

/// @brief Field m_CameraGameObject, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraGameObject, put=__cordl_internal_set_m_CameraGameObject)) ::UnityW<::UnityEngine::GameObject>  m_CameraGameObject;

 __declspec(property(get=get_requestedTrackingOriginMode, put=set_requestedTrackingOriginMode)) ::GlobalNamespace::XROrigin_TrackingOriginMode  requestedTrackingOriginMode;

 __declspec(property(get=get_rig, put=set_rig)) ::UnityW<::UnityEngine::GameObject>  rig;

 __declspec(property(get=get_rigInCameraSpacePos)) ::UnityEngine::Vector3  rigInCameraSpacePos;

/// @brief Method Awake, addr 0xb41d5d4, size 0x7c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MatchRigUp, addr 0xb41d6c4, size 0x8, virtual false, abstract: false, final false
inline bool MatchRigUp(::UnityEngine::Vector3  destinationUp) ;

/// @brief Method MatchRigUpCameraForward, addr 0xb41d6cc, size 0x8, virtual false, abstract: false, final false
inline bool MatchRigUpCameraForward(::UnityEngine::Vector3  destinationUp, ::UnityEngine::Vector3  destinationForward) ;

/// @brief Method MatchRigUpRigForward, addr 0xb41d6d4, size 0x8, virtual false, abstract: false, final false
inline bool MatchRigUpRigForward(::UnityEngine::Vector3  destinationUp, ::UnityEngine::Vector3  destinationForward) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRRig* New_ctor() ;

/// @brief Method RotateAroundCameraUsingRigUp, addr 0xb41d6bc, size 0x8, virtual false, abstract: false, final false
inline bool RotateAroundCameraUsingRigUp(float_t  angleDegrees) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_CameraGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_CameraGameObject() ;

constexpr void __cordl_internal_set_m_CameraGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0xb41d6dc, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_cameraFloorOffsetObject, addr 0xb41d668, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_cameraFloorOffsetObject() ;

/// @brief Method get_cameraGameObject, addr 0xb41d65c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_cameraGameObject() ;

/// @brief Method get_cameraInRigSpaceHeight, addr 0xb41d6b4, size 0x8, virtual false, abstract: false, final false
inline float_t get_cameraInRigSpaceHeight() ;

/// @brief Method get_cameraInRigSpacePos, addr 0xb41d6a4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_cameraInRigSpacePos() ;

/// @brief Method get_cameraYOffset, addr 0xb41d680, size 0x8, virtual false, abstract: false, final false
inline float_t get_cameraYOffset() ;

/// @brief Method get_currentTrackingOriginMode, addr 0xb41d68c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::TrackingOriginModeFlags get_currentTrackingOriginMode() ;

/// @brief Method get_requestedTrackingOriginMode, addr 0xb41d674, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XROrigin_TrackingOriginMode get_requestedTrackingOriginMode() ;

/// @brief Method get_rig, addr 0xb41d650, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_rig() ;

/// @brief Method get_rigInCameraSpacePos, addr 0xb41d694, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_rigInCameraSpacePos() ;

/// @brief Method set_cameraFloorOffsetObject, addr 0xb41d670, size 0x4, virtual false, abstract: false, final false
inline void set_cameraFloorOffsetObject(::UnityEngine::GameObject*  value) ;

/// @brief Method set_cameraGameObject, addr 0xb41d664, size 0x4, virtual false, abstract: false, final false
inline void set_cameraGameObject(::UnityEngine::GameObject*  value) ;

/// @brief Method set_cameraYOffset, addr 0xb41d688, size 0x4, virtual false, abstract: false, final false
inline void set_cameraYOffset(float_t  value) ;

/// @brief Method set_requestedTrackingOriginMode, addr 0xb41d67c, size 0x4, virtual false, abstract: false, final false
inline void set_requestedTrackingOriginMode(::GlobalNamespace::XROrigin_TrackingOriginMode  value) ;

/// @brief Method set_rig, addr 0xb41d658, size 0x4, virtual false, abstract: false, final false
inline void set_rig(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRRig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRRig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRRig(XRRig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRRig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRRig(XRRig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11141};

/// @brief Field k_ObsoleteMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ObsoleteMessage{u"XRRig has been deprecated. Use the XROrigin component instead."};

/// [SerializeField]
/// @brief Field m_CameraGameObject, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_CameraGameObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRRig, ___m_CameraGameObject) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRRig) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
