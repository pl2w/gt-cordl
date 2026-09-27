#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ContinuousMoveProviderBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_GravityApplicationMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ContinuousMoveProviderBase)
namespace GlobalNamespace {
struct ContinuousMoveProviderBase_GravityApplicationMode;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ContinuousMoveProviderBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*, "UnityEngine.XR.Interaction.Toolkit", "ContinuousMoveProviderBase");
// [Obsolete("The ContinuousMoveProviderBase has been deprecated in XRI 3.0.0 and will be removed in a future version of XRI. Please use ContinuousMoveProvider instead.", false)]
// Dependencies UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::GravityApplicationMode, UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase
class CORDL_TYPE ContinuousMoveProviderBase : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
using GravityApplicationMode = ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode;

 __declspec(property(get=get_enableFly, put=set_enableFly)) bool  enableFly;

 __declspec(property(get=get_enableStrafe, put=set_enableStrafe)) bool  enableStrafe;

 __declspec(property(get=get_forwardSource, put=set_forwardSource)) ::UnityW<::UnityEngine::Transform>  forwardSource;

 __declspec(property(get=get_gravityApplicationMode, put=set_gravityApplicationMode)) ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode  gravityApplicationMode;

/// @brief Field m_AttemptedGetCharacterController, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AttemptedGetCharacterController, put=__cordl_internal_set_m_AttemptedGetCharacterController)) bool  m_AttemptedGetCharacterController;

/// @brief Field m_CharacterController, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CharacterController, put=__cordl_internal_set_m_CharacterController)) ::UnityW<::UnityEngine::CharacterController>  m_CharacterController;

/// @brief Field m_EnableFly, offset 0x9d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableFly, put=__cordl_internal_set_m_EnableFly)) bool  m_EnableFly;

/// @brief Field m_EnableStrafe, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableStrafe, put=__cordl_internal_set_m_EnableStrafe)) bool  m_EnableStrafe;

/// @brief Field m_ForwardSource, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ForwardSource, put=__cordl_internal_set_m_ForwardSource)) ::UnityW<::UnityEngine::Transform>  m_ForwardSource;

/// @brief Field m_GravityApplicationMode, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GravityApplicationMode, put=__cordl_internal_set_m_GravityApplicationMode)) ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode  m_GravityApplicationMode;

/// @brief Field m_IsMovingXROrigin, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsMovingXROrigin, put=__cordl_internal_set_m_IsMovingXROrigin)) bool  m_IsMovingXROrigin;

/// @brief Field m_MoveSpeed, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveSpeed, put=__cordl_internal_set_m_MoveSpeed)) float_t  m_MoveSpeed;

/// @brief Field m_UseGravity, offset 0x9e, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseGravity, put=__cordl_internal_set_m_UseGravity)) bool  m_UseGravity;

/// @brief Field m_VerticalVelocity, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_VerticalVelocity, put=__cordl_internal_set_m_VerticalVelocity)) ::UnityEngine::Vector3  m_VerticalVelocity;

 __declspec(property(get=get_moveSpeed, put=set_moveSpeed)) float_t  moveSpeed;

 __declspec(property(get=get_useGravity, put=set_useGravity)) bool  useGravity;

/// @brief Method ComputeDesiredMove, addr 0xb417c8c, size 0x450, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ComputeDesiredMove(::UnityEngine::Vector2  input) ;

/// @brief Method FindCharacterController, addr 0xb418390, size 0x168, virtual false, abstract: false, final false
inline void FindCharacterController() ;

/// @brief Method MoveRig, addr 0xb4180dc, size 0x2b4, virtual true, abstract: false, final false
inline void MoveRig(::UnityEngine::Vector3  translationInWorldSpace) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase* New_ctor() ;

/// @brief Method ReadInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector2 ReadInput() ;

/// @brief Method Update, addr 0xb417a90, size 0x1fc, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_m_AttemptedGetCharacterController() const;

constexpr bool& __cordl_internal_get_m_AttemptedGetCharacterController() ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_m_CharacterController() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_m_CharacterController() ;

constexpr bool const& __cordl_internal_get_m_EnableFly() const;

constexpr bool& __cordl_internal_get_m_EnableFly() ;

constexpr bool const& __cordl_internal_get_m_EnableStrafe() const;

constexpr bool& __cordl_internal_get_m_EnableStrafe() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ForwardSource() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ForwardSource() ;

constexpr ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode const& __cordl_internal_get_m_GravityApplicationMode() const;

constexpr ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode& __cordl_internal_get_m_GravityApplicationMode() ;

constexpr bool const& __cordl_internal_get_m_IsMovingXROrigin() const;

constexpr bool& __cordl_internal_get_m_IsMovingXROrigin() ;

constexpr float_t const& __cordl_internal_get_m_MoveSpeed() const;

constexpr float_t& __cordl_internal_get_m_MoveSpeed() ;

constexpr bool const& __cordl_internal_get_m_UseGravity() const;

constexpr bool& __cordl_internal_get_m_UseGravity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_VerticalVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_VerticalVelocity() ;

constexpr void __cordl_internal_set_m_AttemptedGetCharacterController(bool  value) ;

constexpr void __cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController>  value) ;

constexpr void __cordl_internal_set_m_EnableFly(bool  value) ;

constexpr void __cordl_internal_set_m_EnableStrafe(bool  value) ;

constexpr void __cordl_internal_set_m_ForwardSource(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_GravityApplicationMode(::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode  value) ;

constexpr void __cordl_internal_set_m_IsMovingXROrigin(bool  value) ;

constexpr void __cordl_internal_set_m_MoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_UseGravity(bool  value) ;

constexpr void __cordl_internal_set_m_VerticalVelocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xb4168b0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enableFly, addr 0xb417a50, size 0x8, virtual false, abstract: false, final false
inline bool get_enableFly() ;

/// @brief Method get_enableStrafe, addr 0xb417a40, size 0x8, virtual false, abstract: false, final false
inline bool get_enableStrafe() ;

/// @brief Method get_forwardSource, addr 0xb417a80, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_forwardSource() ;

/// @brief Method get_gravityApplicationMode, addr 0xb417a70, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode get_gravityApplicationMode() ;

/// @brief Method get_moveSpeed, addr 0xb417a30, size 0x8, virtual false, abstract: false, final false
inline float_t get_moveSpeed() ;

/// @brief Method get_useGravity, addr 0xb417a60, size 0x8, virtual false, abstract: false, final false
inline bool get_useGravity() ;

/// @brief Method set_enableFly, addr 0xb417a58, size 0x8, virtual false, abstract: false, final false
inline void set_enableFly(bool  value) ;

/// @brief Method set_enableStrafe, addr 0xb417a48, size 0x8, virtual false, abstract: false, final false
inline void set_enableStrafe(bool  value) ;

/// @brief Method set_forwardSource, addr 0xb417a88, size 0x8, virtual false, abstract: false, final false
inline void set_forwardSource(::UnityEngine::Transform*  value) ;

/// @brief Method set_gravityApplicationMode, addr 0xb417a78, size 0x8, virtual false, abstract: false, final false
inline void set_gravityApplicationMode(::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode  value) ;

/// @brief Method set_moveSpeed, addr 0xb417a38, size 0x8, virtual false, abstract: false, final false
inline void set_moveSpeed(float_t  value) ;

/// @brief Method set_useGravity, addr 0xb417a68, size 0x8, virtual false, abstract: false, final false
inline void set_useGravity(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousMoveProviderBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousMoveProviderBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousMoveProviderBase(ContinuousMoveProviderBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousMoveProviderBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousMoveProviderBase(ContinuousMoveProviderBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11116};

/// [SerializeField]
/// [Tooltip("The speed, in units per second, to move forward.")]
/// @brief Field m_MoveSpeed, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_MoveSpeed;

/// [SerializeField]
/// [Tooltip("Controls whether to enable strafing (sideways movement).")]
/// @brief Field m_EnableStrafe, offset: 0x9c, size: 0x1, def value: None
 bool  ___m_EnableStrafe;

/// [SerializeField]
/// [Tooltip("Controls whether to enable flying (unconstrained movement). This overrides the use of gravity.")]
/// @brief Field m_EnableFly, offset: 0x9d, size: 0x1, def value: None
 bool  ___m_EnableFly;

/// [SerializeField]
/// [Tooltip("Controls whether gravity affects this provider when a Character Controller is used and flying is disabled.")]
/// @brief Field m_UseGravity, offset: 0x9e, size: 0x1, def value: None
 bool  ___m_UseGravity;

/// [SerializeField]
/// [Tooltip("Controls when gravity begins to take effect.")]
/// @brief Field m_GravityApplicationMode, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode  ___m_GravityApplicationMode;

/// [SerializeField]
/// [Tooltip("The source Transform to define the forward direction.")]
/// @brief Field m_ForwardSource, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ForwardSource;

/// @brief Field m_CharacterController, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ___m_CharacterController;

/// @brief Field m_AttemptedGetCharacterController, offset: 0xb8, size: 0x1, def value: None
 bool  ___m_AttemptedGetCharacterController;

/// @brief Field m_IsMovingXROrigin, offset: 0xb9, size: 0x1, def value: None
 bool  ___m_IsMovingXROrigin;

/// @brief Field m_VerticalVelocity, offset: 0xbc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_VerticalVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_MoveSpeed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_EnableStrafe) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_EnableFly) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_UseGravity) == 0x9e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_GravityApplicationMode) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_ForwardSource) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_CharacterController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_AttemptedGetCharacterController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_IsMovingXROrigin) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase, ___m_VerticalVelocity) == 0xbc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase) == 0xc8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
