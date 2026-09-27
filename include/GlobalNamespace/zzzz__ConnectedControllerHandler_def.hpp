#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedControllerHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OverrideControllers_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConnectedControllerHandler)
namespace GlobalNamespace {
class HandTransformFollowOffset;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class GorillaSnapTurn;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRController;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectedControllerHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConnectedControllerHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConnectedControllerHandler*, "", "ConnectedControllerHandler");
// Dependencies OverrideControllers, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectedControllerHandler
class CORDL_TYPE ConnectedControllerHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_LeftValid)) bool  LeftValid;

 __declspec(property(get=get_RightValid)) bool  RightValid;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::ConnectedControllerHandler>  _Instance_k__BackingField;

/// @brief Field lastLeftPos, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastLeftPos, put=__cordl_internal_set_lastLeftPos)) ::UnityEngine::Vector3  lastLeftPos;

/// @brief Field lastRightPos, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRightPos, put=__cordl_internal_set_lastRightPos)) ::UnityEngine::Vector3  lastRightPos;

/// @brief Field leftHandFollower, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandFollower, put=__cordl_internal_set_leftHandFollower)) ::GlobalNamespace::HandTransformFollowOffset*  leftHandFollower;

/// @brief [SerializeField]
 __declspec(property(get=get_leftValid)) bool  leftValid;

/// @brief Field leftXRController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftXRController, put=__cordl_internal_set_leftXRController)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  leftXRController;

/// @brief Field leftcontrollerList, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftcontrollerList, put=__cordl_internal_set_leftcontrollerList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  leftcontrollerList;

/// @brief Field oculusLeftPosOffset, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get_oculusLeftPosOffset, put=__cordl_internal_set_oculusLeftPosOffset)) ::UnityEngine::Vector3  oculusLeftPosOffset;

/// @brief Field oculusLeftRotOffset, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_oculusLeftRotOffset, put=__cordl_internal_set_oculusLeftRotOffset)) ::UnityEngine::Quaternion  oculusLeftRotOffset;

/// @brief Field oculusRightPosOffset, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get_oculusRightPosOffset, put=__cordl_internal_set_oculusRightPosOffset)) ::UnityEngine::Vector3  oculusRightPosOffset;

/// @brief Field oculusRightRotOffset, offset 0xb4, size 0x10 
 __declspec(property(get=__cordl_internal_get_oculusRightRotOffset, put=__cordl_internal_set_oculusRightRotOffset)) ::UnityEngine::Quaternion  oculusRightRotOffset;

/// @brief Field overriddenControllers, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_overriddenControllers, put=__cordl_internal_set_overriddenControllers)) ::GlobalNamespace::OverrideControllers  overriddenControllers;

/// @brief Field overrideEnabled, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideEnabled, put=__cordl_internal_set_overrideEnabled)) bool  overrideEnabled;

/// @brief Field overrideLeftEnable, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideLeftEnable, put=__cordl_internal_set_overrideLeftEnable)) bool  overrideLeftEnable;

/// @brief Field overrideRightEnable, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideRightEnable, put=__cordl_internal_set_overrideRightEnable)) bool  overrideRightEnable;

/// @brief Field playerHandler, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerHandler, put=__cordl_internal_set_playerHandler)) ::UnityW<::GorillaLocomotion::GTPlayer>  playerHandler;

/// @brief Field rightControllerList, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightControllerList, put=__cordl_internal_set_rightControllerList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  rightControllerList;

/// @brief Field rightHandFollower, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandFollower, put=__cordl_internal_set_rightHandFollower)) ::GlobalNamespace::HandTransformFollowOffset*  rightHandFollower;

/// @brief [SerializeField]
 __declspec(property(get=get_rightValid)) bool  rightValid;

/// @brief Field rightXRController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightXRController, put=__cordl_internal_set_rightXRController)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  rightXRController;

/// @brief Field snapTurnController, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapTurnController, put=__cordl_internal_set_snapTurnController)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  snapTurnController;

/// @brief Field stoppedDurationMinimum, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_stoppedDurationMinimum, put=__cordl_internal_set_stoppedDurationMinimum)) float_t  stoppedDurationMinimum;

/// @brief Field tempLeftPos, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_tempLeftPos, put=__cordl_internal_set_tempLeftPos)) ::UnityEngine::Vector3  tempLeftPos;

/// @brief Field tempRightPos, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_tempRightPos, put=__cordl_internal_set_tempRightPos)) ::UnityEngine::Vector3  tempRightPos;

/// @brief Field timeStoppedMovingLeft, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeStoppedMovingLeft, put=__cordl_internal_set_timeStoppedMovingLeft)) float_t  timeStoppedMovingLeft;

/// @brief Field timeStoppedMovingRight, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeStoppedMovingRight, put=__cordl_internal_set_timeStoppedMovingRight)) float_t  timeStoppedMovingRight;

/// @brief Field updateControllers, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateControllers, put=__cordl_internal_set_updateControllers)) bool  updateControllers;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AssignSnapturnController, addr 0x57e4a50, size 0x60, virtual false, abstract: false, final false
inline void AssignSnapturnController() ;

/// @brief Method Awake, addr 0x57e3e24, size 0x348, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetValidForXRNode, addr 0x57e4ab0, size 0x20, virtual false, abstract: false, final false
inline bool GetValidForXRNode(::UnityEngine::XR::XRNode  controllerNode) ;

/// @brief Method LateUpdate, addr 0x57e4608, size 0x44, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::ConnectedControllerHandler* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57e44d4, size 0x134, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x57e44cc, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57e44c4, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetLeftHandOffsets, addr 0x57e4438, size 0x30, virtual false, abstract: false, final false
inline void SetLeftHandOffsets(::UnityEngine::Vector3  positionOffset, ::UnityEngine::Quaternion  rotationOffset) ;

/// @brief Method SetOculusOffsets, addr 0x57e4468, size 0x5c, virtual false, abstract: false, final false
inline void SetOculusOffsets(bool  rightHand, bool  leftHand) ;

/// @brief Method SetRightHandOffsets, addr 0x57e4408, size 0x30, virtual false, abstract: false, final false
inline void SetRightHandOffsets(::UnityEngine::Vector3  positionOffset, ::UnityEngine::Quaternion  rotationOffset) ;

/// @brief Method SliceUpdate, addr 0x57e464c, size 0x2b8, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x57e41c8, size 0x240, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateControllerStates, addr 0x57e416c, size 0x5c, virtual false, abstract: false, final false
inline void UpdateControllerStates() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastLeftPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastLeftPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRightPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRightPos() ;

constexpr ::GlobalNamespace::HandTransformFollowOffset* const& __cordl_internal_get_leftHandFollower() const;

constexpr ::GlobalNamespace::HandTransformFollowOffset*& __cordl_internal_get_leftHandFollower() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> const& __cordl_internal_get_leftXRController() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>& __cordl_internal_get_leftXRController() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>* const& __cordl_internal_get_leftcontrollerList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*& __cordl_internal_get_leftcontrollerList() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_oculusLeftPosOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_oculusLeftPosOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_oculusLeftRotOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_oculusLeftRotOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_oculusRightPosOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_oculusRightPosOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_oculusRightRotOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_oculusRightRotOffset() ;

constexpr ::GlobalNamespace::OverrideControllers const& __cordl_internal_get_overriddenControllers() const;

constexpr ::GlobalNamespace::OverrideControllers& __cordl_internal_get_overriddenControllers() ;

constexpr bool const& __cordl_internal_get_overrideEnabled() const;

constexpr bool& __cordl_internal_get_overrideEnabled() ;

constexpr bool const& __cordl_internal_get_overrideLeftEnable() const;

constexpr bool& __cordl_internal_get_overrideLeftEnable() ;

constexpr bool const& __cordl_internal_get_overrideRightEnable() const;

constexpr bool& __cordl_internal_get_overrideRightEnable() ;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& __cordl_internal_get_playerHandler() const;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& __cordl_internal_get_playerHandler() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>* const& __cordl_internal_get_rightControllerList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*& __cordl_internal_get_rightControllerList() ;

constexpr ::GlobalNamespace::HandTransformFollowOffset* const& __cordl_internal_get_rightHandFollower() const;

constexpr ::GlobalNamespace::HandTransformFollowOffset*& __cordl_internal_get_rightHandFollower() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> const& __cordl_internal_get_rightXRController() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>& __cordl_internal_get_rightXRController() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> const& __cordl_internal_get_snapTurnController() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>& __cordl_internal_get_snapTurnController() ;

constexpr float_t const& __cordl_internal_get_stoppedDurationMinimum() const;

constexpr float_t& __cordl_internal_get_stoppedDurationMinimum() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tempLeftPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_tempLeftPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tempRightPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_tempRightPos() ;

constexpr float_t const& __cordl_internal_get_timeStoppedMovingLeft() const;

constexpr float_t& __cordl_internal_get_timeStoppedMovingLeft() ;

constexpr float_t const& __cordl_internal_get_timeStoppedMovingRight() const;

constexpr float_t& __cordl_internal_get_timeStoppedMovingRight() ;

constexpr bool const& __cordl_internal_get_updateControllers() const;

constexpr bool& __cordl_internal_get_updateControllers() ;

constexpr void __cordl_internal_set_lastLeftPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRightPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHandFollower(::GlobalNamespace::HandTransformFollowOffset*  value) ;

constexpr void __cordl_internal_set_leftXRController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  value) ;

constexpr void __cordl_internal_set_leftcontrollerList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  value) ;

constexpr void __cordl_internal_set_oculusLeftPosOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_oculusLeftRotOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_oculusRightPosOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_oculusRightRotOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_overriddenControllers(::GlobalNamespace::OverrideControllers  value) ;

constexpr void __cordl_internal_set_overrideEnabled(bool  value) ;

constexpr void __cordl_internal_set_overrideLeftEnable(bool  value) ;

constexpr void __cordl_internal_set_overrideRightEnable(bool  value) ;

constexpr void __cordl_internal_set_playerHandler(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

constexpr void __cordl_internal_set_rightControllerList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  value) ;

constexpr void __cordl_internal_set_rightHandFollower(::GlobalNamespace::HandTransformFollowOffset*  value) ;

constexpr void __cordl_internal_set_rightXRController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  value) ;

constexpr void __cordl_internal_set_snapTurnController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  value) ;

constexpr void __cordl_internal_set_stoppedDurationMinimum(float_t  value) ;

constexpr void __cordl_internal_set_tempLeftPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_tempRightPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_timeStoppedMovingLeft(float_t  value) ;

constexpr void __cordl_internal_set_timeStoppedMovingRight(float_t  value) ;

constexpr void __cordl_internal_set_updateControllers(bool  value) ;

/// @brief Method .ctor, addr 0x57e4ad0, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::ConnectedControllerHandler> getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x57e3c04, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::ConnectedControllerHandler> get_Instance() ;

/// @brief Method get_LeftValid, addr 0x57e3e20, size 0x4, virtual false, abstract: false, final false
inline bool get_LeftValid() ;

/// @brief Method get_RightValid, addr 0x57e3e1c, size 0x4, virtual false, abstract: false, final false
inline bool get_RightValid() ;

/// @brief Method get_leftValid, addr 0x57e3d60, size 0x9c, virtual false, abstract: false, final false
inline bool get_leftValid() ;

/// @brief Method get_rightValid, addr 0x57e3ca4, size 0x9c, virtual false, abstract: false, final false
inline bool get_rightValid() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::ConnectedControllerHandler>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x57e3c4c, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::ConnectedControllerHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectedControllerHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectedControllerHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectedControllerHandler(ConnectedControllerHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedControllerHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectedControllerHandler(ConnectedControllerHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1655};

/// [SerializeField]
/// @brief Field rightHandFollower, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::HandTransformFollowOffset*  ___rightHandFollower;

/// [SerializeField]
/// @brief Field leftHandFollower, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::HandTransformFollowOffset*  ___leftHandFollower;

/// [SerializeField]
/// @brief Field rightXRController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  ___rightXRController;

/// [SerializeField]
/// @brief Field leftXRController, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  ___leftXRController;

/// [SerializeField]
/// @brief Field snapTurnController, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  ___snapTurnController;

/// @brief Field rightControllerList, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  ___rightControllerList;

/// @brief Field leftcontrollerList, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  ___leftcontrollerList;

/// [SerializeField]
/// @brief Field overrideEnabled, offset: 0x58, size: 0x1, def value: None
 bool  ___overrideEnabled;

/// @brief Field overrideLeftEnable, offset: 0x59, size: 0x1, def value: None
 bool  ___overrideLeftEnable;

/// @brief Field overrideRightEnable, offset: 0x5a, size: 0x1, def value: None
 bool  ___overrideRightEnable;

/// [SerializeField]
/// @brief Field lastRightPos, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRightPos;

/// [SerializeField]
/// @brief Field lastLeftPos, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastLeftPos;

/// @brief Field tempRightPos, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___tempRightPos;

/// @brief Field tempLeftPos, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___tempLeftPos;

/// @brief Field updateControllers, offset: 0x8c, size: 0x1, def value: None
 bool  ___updateControllers;

/// @brief Field playerHandler, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  ___playerHandler;

/// [Tooltip("The rate at which controllers are checked to be moving, if they not moving, overrides and enables one hand mode")]
/// [SerializeField]
/// @brief Field stoppedDurationMinimum, offset: 0x98, size: 0x4, def value: None
 float_t  ___stoppedDurationMinimum;

/// [SerializeField]
/// @brief Field overriddenControllers, offset: 0x9c, size: 0x4, def value: None
 ::GlobalNamespace::OverrideControllers  ___overriddenControllers;

/// @brief Field timeStoppedMovingLeft, offset: 0xa0, size: 0x4, def value: None
 float_t  ___timeStoppedMovingLeft;

/// @brief Field timeStoppedMovingRight, offset: 0xa4, size: 0x4, def value: None
 float_t  ___timeStoppedMovingRight;

/// @brief Field oculusRightPosOffset, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___oculusRightPosOffset;

/// @brief Field oculusRightRotOffset, offset: 0xb4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___oculusRightRotOffset;

/// @brief Field oculusLeftPosOffset, offset: 0xc4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___oculusLeftPosOffset;

/// @brief Field oculusLeftRotOffset, offset: 0xd0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___oculusLeftRotOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___rightHandFollower) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___leftHandFollower) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___rightXRController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___leftXRController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___snapTurnController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___rightControllerList) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___leftcontrollerList) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___overrideEnabled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___overrideLeftEnable) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___overrideRightEnable) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___lastRightPos) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___lastLeftPos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___tempRightPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___tempLeftPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___updateControllers) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___playerHandler) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___stoppedDurationMinimum) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___overriddenControllers) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___timeStoppedMovingLeft) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___timeStoppedMovingRight) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___oculusRightPosOffset) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___oculusRightRotOffset) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___oculusLeftPosOffset) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectedControllerHandler, ___oculusLeftRotOffset) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConnectedControllerHandler) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
