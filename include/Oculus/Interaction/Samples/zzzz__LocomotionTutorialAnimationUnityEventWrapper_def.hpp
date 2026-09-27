#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/LocomotionTutorialAnimationUnityEventWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LocomotionTutorialAnimationUnityEventWrapper)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class LocomotionTutorialAnimationUnityEventWrapper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*, "Oculus.Interaction.Samples", "LocomotionTutorialAnimationUnityEventWrapper");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.LocomotionTutorialAnimationUnityEventWrapper
class CORDL_TYPE LocomotionTutorialAnimationUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field WhenDisableTeleportRay, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenDisableTeleportRay, put=__cordl_internal_set_WhenDisableTeleportRay)) ::UnityEngine::Events::UnityEvent*  WhenDisableTeleportRay;

/// @brief Field WhenDisableTurningRing, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenDisableTurningRing, put=__cordl_internal_set_WhenDisableTurningRing)) ::UnityEngine::Events::UnityEvent*  WhenDisableTurningRing;

/// @brief Field WhenEnableTeleportRay, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenEnableTeleportRay, put=__cordl_internal_set_WhenEnableTeleportRay)) ::UnityEngine::Events::UnityEvent*  WhenEnableTeleportRay;

/// @brief Field WhenEnableTurningRing, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenEnableTurningRing, put=__cordl_internal_set_WhenEnableTurningRing)) ::UnityEngine::Events::UnityEvent*  WhenEnableTurningRing;

/// @brief Method DisableTeleportRay, addr 0xa4386b4, size 0x18, virtual false, abstract: false, final false
inline void DisableTeleportRay() ;

/// @brief Method DisableTurningRing, addr 0xa4386e4, size 0x18, virtual false, abstract: false, final false
inline void DisableTurningRing() ;

/// @brief Method EnableTeleportRay, addr 0xa43869c, size 0x18, virtual false, abstract: false, final false
inline void EnableTeleportRay() ;

/// @brief Method EnableTurningRing, addr 0xa4386cc, size 0x18, virtual false, abstract: false, final false
inline void EnableTurningRing() ;

static inline ::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenDisableTeleportRay() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenDisableTeleportRay() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenDisableTurningRing() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenDisableTurningRing() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenEnableTeleportRay() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenEnableTeleportRay() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenEnableTurningRing() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenEnableTurningRing() ;

constexpr void __cordl_internal_set_WhenDisableTeleportRay(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_WhenDisableTurningRing(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_WhenEnableTeleportRay(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_WhenEnableTurningRing(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xa4386fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionTutorialAnimationUnityEventWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTutorialAnimationUnityEventWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionTutorialAnimationUnityEventWrapper(LocomotionTutorialAnimationUnityEventWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTutorialAnimationUnityEventWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionTutorialAnimationUnityEventWrapper(LocomotionTutorialAnimationUnityEventWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28305};

/// @brief Field WhenEnableTeleportRay, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenEnableTeleportRay;

/// @brief Field WhenDisableTeleportRay, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenDisableTeleportRay;

/// @brief Field WhenEnableTurningRing, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenEnableTurningRing;

/// @brief Field WhenDisableTurningRing, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenDisableTurningRing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper, ___WhenEnableTeleportRay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper, ___WhenDisableTeleportRay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper, ___WhenEnableTurningRing) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper, ___WhenDisableTurningRing) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
