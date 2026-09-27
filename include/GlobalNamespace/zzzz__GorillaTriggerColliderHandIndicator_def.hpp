#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTriggerColliderHandIndicator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GorillaTriggerColliderHandIndicator)
namespace GlobalNamespace {
class GorillaThrowableController;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTriggerColliderHandIndicator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTriggerColliderHandIndicator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTriggerColliderHandIndicator*, "", "GorillaTriggerColliderHandIndicator");
// Dependencies MonoBehaviourTick, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTriggerColliderHandIndicator
class CORDL_TYPE GorillaTriggerColliderHandIndicator : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field currentVelocity, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentVelocity, put=__cordl_internal_set_currentVelocity)) ::UnityEngine::Vector3  currentVelocity;

/// @brief Field isLeftHand, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field lastPosition, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field throwableController, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwableController, put=__cordl_internal_set_throwableController)) ::UnityW<::GlobalNamespace::GorillaThrowableController>  throwableController;

static inline ::GlobalNamespace::GorillaTriggerColliderHandIndicator* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x59a2340, size 0x84, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method Tick, addr 0x59a22c0, size 0x80, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentVelocity() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr ::UnityW<::GlobalNamespace::GorillaThrowableController> const& __cordl_internal_get_throwableController() const;

constexpr ::UnityW<::GlobalNamespace::GorillaThrowableController>& __cordl_internal_get_throwableController() ;

constexpr void __cordl_internal_set_currentVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_throwableController(::UnityW<::GlobalNamespace::GorillaThrowableController>  value) ;

/// @brief Method .ctor, addr 0x59a23c4, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTriggerColliderHandIndicator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerColliderHandIndicator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTriggerColliderHandIndicator(GorillaTriggerColliderHandIndicator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerColliderHandIndicator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTriggerColliderHandIndicator(GorillaTriggerColliderHandIndicator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2625};

/// @brief Field currentVelocity, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentVelocity;

/// @brief Field lastPosition, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field isLeftHand, offset: 0x3c, size: 0x1, def value: None
 bool  ___isLeftHand;

/// @brief Field throwableController, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaThrowableController>  ___throwableController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTriggerColliderHandIndicator, ___currentVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTriggerColliderHandIndicator, ___lastPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTriggerColliderHandIndicator, ___isLeftHand) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTriggerColliderHandIndicator, ___throwableController) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTriggerColliderHandIndicator) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
