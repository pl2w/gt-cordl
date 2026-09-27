#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/ConstrainedMoveProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/zzzz__ConstrainedMoveProvider_GravityApplicationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ConstrainedMoveProvider)
namespace GlobalNamespace {
struct ConstrainedMoveProvider_GravityApplicationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity {
class GravityProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XROriginMovement;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement {
class ConstrainedMoveProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement", "ConstrainedMoveProvider");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider, UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ConstrainedMoveProvider::GravityApplicationMode
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ConstrainedMoveProvider
class CORDL_TYPE ConstrainedMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
using GravityApplicationMode = ::GlobalNamespace::ConstrainedMoveProvider_GravityApplicationMode;

/// @brief Field <transformation>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformation_k__BackingField, put=__cordl_internal_set__transformation_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  _transformation_k__BackingField;

 __declspec(property(get=get_enableFreeXMovement, put=set_enableFreeXMovement)) bool  enableFreeXMovement;

 __declspec(property(get=get_enableFreeYMovement, put=set_enableFreeYMovement)) bool  enableFreeYMovement;

 __declspec(property(get=get_enableFreeZMovement, put=set_enableFreeZMovement)) bool  enableFreeZMovement;

/// @brief [Obsolete("gravityMode has been deprecated in XRI 3.0.0 and will be removed in a future version.")]
 __declspec(property(get=get_gravityMode, put=set_gravityMode)) ::GlobalNamespace::ConstrainedMoveProvider_GravityApplicationMode  gravityMode;

/// @brief Field m_AttemptedGetCharacterController, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AttemptedGetCharacterController, put=__cordl_internal_set_m_AttemptedGetCharacterController)) bool  m_AttemptedGetCharacterController;

/// @brief Field m_CharacterController, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CharacterController, put=__cordl_internal_set_m_CharacterController)) ::UnityW<::UnityEngine::CharacterController>  m_CharacterController;

/// @brief Field m_EnableFreeXMovement, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableFreeXMovement, put=__cordl_internal_set_m_EnableFreeXMovement)) bool  m_EnableFreeXMovement;

/// @brief Field m_EnableFreeYMovement, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableFreeYMovement, put=__cordl_internal_set_m_EnableFreeYMovement)) bool  m_EnableFreeYMovement;

/// @brief Field m_EnableFreeZMovement, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableFreeZMovement, put=__cordl_internal_set_m_EnableFreeZMovement)) bool  m_EnableFreeZMovement;

/// @brief Field m_GravityApplicationMode, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GravityApplicationMode, put=__cordl_internal_set_m_GravityApplicationMode)) ::GlobalNamespace::ConstrainedMoveProvider_GravityApplicationMode  m_GravityApplicationMode;

/// @brief Field m_GravityDrivenVelocity, offset 0xc8, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_GravityDrivenVelocity, put=__cordl_internal_set_m_GravityDrivenVelocity)) ::UnityEngine::Vector3  m_GravityDrivenVelocity;

/// @brief Field m_GravityProvider, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GravityProvider, put=__cordl_internal_set_m_GravityProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  m_GravityProvider;

/// @brief Field m_IsMovingXROrigin, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsMovingXROrigin, put=__cordl_internal_set_m_IsMovingXROrigin)) bool  m_IsMovingXROrigin;

/// @brief Field m_UseGravity, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseGravity, put=__cordl_internal_set_m_UseGravity)) bool  m_UseGravity;

 __declspec(property(get=get_transformation, put=set_transformation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  transformation;

/// @brief [Obsolete("Controlling gravity directly in the move provider has been deprecated in XRI 3.1.0, use Gravity Provider instead.")]
 __declspec(property(get=get_useGravity, put=set_useGravity)) bool  useGravity;

/// @brief Method Awake, addr 0xb44fab4, size 0x98, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeDesiredMove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 ComputeDesiredMove(::by_ref<bool>  attemptingMove) ;

/// @brief Method FindCharacterController, addr 0xb450068, size 0x174, virtual false, abstract: false, final false
inline void FindCharacterController() ;

/// [Obsolete("Private migration helper.")]
/// @brief Method MigrateUseGravityToGravityProvider, addr 0xb44fb4c, size 0x114, virtual false, abstract: false, final false
inline void MigrateUseGravityToGravityProvider() ;

/// @brief Method MoveRig, addr 0xb44fdd8, size 0x290, virtual true, abstract: false, final false
inline void MoveRig(::UnityEngine::Vector3  translationInWorldSpace) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider* New_ctor() ;

/// @brief Method Update, addr 0xb44fc60, size 0x178, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* const& __cordl_internal_get__transformation_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*& __cordl_internal_get__transformation_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_AttemptedGetCharacterController() const;

constexpr bool& __cordl_internal_get_m_AttemptedGetCharacterController() ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_m_CharacterController() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_m_CharacterController() ;

constexpr bool const& __cordl_internal_get_m_EnableFreeXMovement() const;

constexpr bool& __cordl_internal_get_m_EnableFreeXMovement() ;

constexpr bool const& __cordl_internal_get_m_EnableFreeYMovement() const;

constexpr bool& __cordl_internal_get_m_EnableFreeYMovement() ;

constexpr bool const& __cordl_internal_get_m_EnableFreeZMovement() const;

constexpr bool& __cordl_internal_get_m_EnableFreeZMovement() ;

constexpr ::GlobalNamespace::ConstrainedMoveProvider_GravityApplicationMode const& __cordl_internal_get_m_GravityApplicationMode() const;

constexpr ::GlobalNamespace::ConstrainedMoveProvider_GravityApplicationMode& __cordl_internal_get_m_GravityApplicationMode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_GravityDrivenVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_GravityDrivenVelocity() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider> const& __cordl_internal_get_m_GravityProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>& __cordl_internal_get_m_GravityProvider() ;

constexpr bool const& __cordl_internal_get_m_IsMovingXROrigin() const;

constexpr bool& __cordl_internal_get_m_IsMovingXROrigin() ;

constexpr bool const& __cordl_internal_get_m_UseGravity() const;

constexpr bool& __cordl_internal_get_m_UseGravity() ;

constexpr void __cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value) ;

constexpr void __cordl_internal_set_m_AttemptedGetCharacterController(bool  value) ;

constexpr void __cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController>  value) ;

constexpr void __cordl_internal_set_m_EnableFreeXMovement(bool  value) ;

constexpr void __cordl_internal_set_m_EnableFreeYMovement(bool  value) ;

constexpr void __cordl_internal_set_m_EnableFreeZMovement(bool  value) ;

constexpr void __cordl_internal_set_m_GravityApplicationMode(::GlobalNamespace::ConstrainedMoveProvider_GravityApplicationMode  value) ;

constexpr void __cordl_internal_set_m_GravityDrivenVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_GravityProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  value) ;

constexpr void __cordl_internal_set_m_IsMovingXROrigin(bool  value) ;

constexpr void __cordl_internal_set_m_UseGravity(bool  value) ;

/// @brief Method .ctor, addr 0xb4502b0, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enableFreeXMovement, addr 0xb44fa74, size 0x8, virtual false, abstract: false, final false
inline bool get_enableFreeXMovement() ;

/// @brief Method get_enableFreeYMovement, addr 0xb44fa84, size 0x8, virtual false, abstract: false, final false
inline bool get_enableFreeYMovement() ;

/// @brief Method get_enableFreeZMovement, addr 0xb44fa94, size 0x8, virtual false, abstract: false, final false
inline bool get_enableFreeZMovement() ;

/// @brief Method get_gravityMode, addr 0xb4501dc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ConstrainedMoveProvider_GravityApplicationMode get_gravityMode() ;

/// [CompilerGenerated]
/// @brief Method get_transformation, addr 0xb44faa4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* get_transformation() ;

/// @brief Method get_useGravity, addr 0xb4501ec, size 0x8, virtual false, abstract: false, final false
inline bool get_useGravity() ;

/// @brief Method set_enableFreeXMovement, addr 0xb44fa7c, size 0x8, virtual false, abstract: false, final false
inline void set_enableFreeXMovement(bool  value) ;

/// @brief Method set_enableFreeYMovement, addr 0xb44fa8c, size 0x8, virtual false, abstract: false, final false
inline void set_enableFreeYMovement(bool  value) ;

/// @brief Method set_enableFreeZMovement, addr 0xb44fa9c, size 0x8, virtual false, abstract: false, final false
inline void set_enableFreeZMovement(bool  value) ;

/// @brief Method set_gravityMode, addr 0xb4501e4, size 0x8, virtual false, abstract: false, final false
inline void set_gravityMode(::GlobalNamespace::ConstrainedMoveProvider_GravityApplicationMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_transformation, addr 0xb44faac, size 0x8, virtual false, abstract: false, final false
inline void set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value) ;

/// @brief Method set_useGravity, addr 0xb4501f4, size 0xbc, virtual false, abstract: false, final false
inline void set_useGravity(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstrainedMoveProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstrainedMoveProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstrainedMoveProvider(ConstrainedMoveProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstrainedMoveProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstrainedMoveProvider(ConstrainedMoveProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11371};

/// [SerializeField]
/// [Tooltip("Controls whether to enable unconstrained movement along the x-axis.")]
/// @brief Field m_EnableFreeXMovement, offset: 0x98, size: 0x1, def value: None
 bool  ___m_EnableFreeXMovement;

/// [SerializeField]
/// [Tooltip("Controls whether to enable unconstrained movement along the y-axis.")]
/// @brief Field m_EnableFreeYMovement, offset: 0x99, size: 0x1, def value: None
 bool  ___m_EnableFreeYMovement;

/// [SerializeField]
/// [Tooltip("Controls whether to enable unconstrained movement along the z-axis.")]
/// @brief Field m_EnableFreeZMovement, offset: 0x9a, size: 0x1, def value: None
 bool  ___m_EnableFreeZMovement;

/// [CompilerGenerated]
/// @brief Field <transformation>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  ____transformation_k__BackingField;

/// @brief Field m_CharacterController, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ___m_CharacterController;

/// @brief Field m_AttemptedGetCharacterController, offset: 0xb0, size: 0x1, def value: None
 bool  ___m_AttemptedGetCharacterController;

/// @brief Field m_IsMovingXROrigin, offset: 0xb1, size: 0x1, def value: None
 bool  ___m_IsMovingXROrigin;

/// @brief Field m_GravityProvider, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  ___m_GravityProvider;

/// [SerializeField]
/// [Tooltip("Controls when gravity begins to take effect.")]
/// [Obsolete("m_GravityApplicationMode has been deprecated in XRI 3.0.0 and will be removed in a future version.")]
/// @brief Field m_GravityApplicationMode, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::ConstrainedMoveProvider_GravityApplicationMode  ___m_GravityApplicationMode;

/// [SerializeField]
/// [Tooltip("Controls whether gravity applies to constrained axes when a Character Controller is used. Ignored when a Gravity Provider component is found in the scene.")]
/// [Obsolete("Controlling gravity directly in the move provider has been deprecated in XRI 3.1.0, use Gravity Provider instead.")]
/// @brief Field m_UseGravity, offset: 0xc4, size: 0x1, def value: None
 bool  ___m_UseGravity;

/// [Obsolete("Controlling gravity directly in the move provider has been deprecated in XRI 3.1.0, use Gravity Provider instead.")]
/// @brief Field m_GravityDrivenVelocity, offset: 0xc8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_GravityDrivenVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider, ___m_EnableFreeXMovement) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider, ___m_EnableFreeYMovement) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider, ___m_EnableFreeZMovement) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider, ____transformation_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider, ___m_CharacterController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider, ___m_AttemptedGetCharacterController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider, ___m_IsMovingXROrigin) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider, ___m_GravityProvider) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider, ___m_GravityApplicationMode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider, ___m_UseGravity) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider, ___m_GravityDrivenVelocity) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ConstrainedMoveProvider) == 0xd8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement
