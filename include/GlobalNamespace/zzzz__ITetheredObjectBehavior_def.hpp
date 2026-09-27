#pragma once
// IWYU pragma private; include "GlobalNamespace/ITetheredObjectBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ITetheredObjectBehavior)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ITetheredObjectBehavior;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ITetheredObjectBehavior*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ITetheredObjectBehavior*, "", "ITetheredObjectBehavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ITetheredObjectBehavior
class CORDL_TYPE ITetheredObjectBehavior {
public:
// Declarations
/// @brief Method DbgClear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DbgClear() ;

/// @brief Method EnableDistanceConstraints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EnableDistanceConstraints(bool  v, float_t  playerScale) ;

/// @brief Method EnableDynamics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EnableDynamics(bool  enable, bool  collider, bool  kinematic) ;

/// @brief Method IsEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsEnabled() ;

/// @brief Method ReParent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ReParent() ;

/// @brief Method ReturnStep, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ReturnStep() ;

/// @brief Method TriggerEnter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void TriggerEnter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Vector3>  force, ::by_ref<::UnityEngine::Vector3>  collisionPt, ::by_ref<bool>  transferOwnership) ;

// Ctor Parameters [CppParam { name: "", ty: "ITetheredObjectBehavior", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITetheredObjectBehavior(ITetheredObjectBehavior const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1206};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
