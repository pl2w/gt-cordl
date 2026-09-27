#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKHandTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaIKHandTarget)
namespace UnityEngine::XR::Interaction::Toolkit {
class XRController;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaIKHandTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaIKHandTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIKHandTarget*, "", "GorillaIKHandTarget");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaIKHandTarget
class CORDL_TYPE GorillaIKHandTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field controllerReference, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerReference, put=__cordl_internal_set_controllerReference)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  controllerReference;

/// @brief Field handToStickTo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handToStickTo, put=__cordl_internal_set_handToStickTo)) ::UnityW<::UnityEngine::GameObject>  handToStickTo;

/// @brief Field hapticStrength, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field isLeftHand, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field thisRigidbody, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_thisRigidbody, put=__cordl_internal_set_thisRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  thisRigidbody;

/// @brief Method FixedUpdate, addr 0x579da14, size 0x88, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::GorillaIKHandTarget* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x579da9c, size 0x4, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method Start, addr 0x579d9ac, size 0x68, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> const& __cordl_internal_get_controllerReference() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>& __cordl_internal_get_controllerReference() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_handToStickTo() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_handToStickTo() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_thisRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_thisRigidbody() ;

constexpr void __cordl_internal_set_controllerReference(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  value) ;

constexpr void __cordl_internal_set_handToStickTo(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_thisRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x579daa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaIKHandTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaIKHandTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaIKHandTarget(GorillaIKHandTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaIKHandTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaIKHandTarget(GorillaIKHandTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1503};

/// @brief Field handToStickTo, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___handToStickTo;

/// @brief Field isLeftHand, offset: 0x28, size: 0x1, def value: None
 bool  ___isLeftHand;

/// @brief Field hapticStrength, offset: 0x2c, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// @brief Field thisRigidbody, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___thisRigidbody;

/// @brief Field controllerReference, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  ___controllerReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIKHandTarget, ___handToStickTo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKHandTarget, ___isLeftHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKHandTarget, ___hapticStrength) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKHandTarget, ___thisRigidbody) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKHandTarget, ___controllerReference) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIKHandTarget) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
