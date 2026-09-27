#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/PickupableVariant.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PickupableVariant)
namespace GlobalNamespace {
class HoldableObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class PickupableVariant;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::PickupableVariant*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::PickupableVariant*, "GorillaTag.Cosmetics", "PickupableVariant");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.PickupableVariant
class CORDL_TYPE PickupableVariant : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method DelayedPickup, addr 0x5d758a4, size 0x4, virtual true, abstract: false, final false
inline void DelayedPickup() ;

static inline ::GorillaTag::Cosmetics::PickupableVariant* New_ctor() ;

/// @brief Method Pickup, addr 0x5d758a0, size 0x4, virtual true, abstract: false, final false
inline void Pickup(bool  isAutoPickup) ;

/// @brief Method Release, addr 0x5d7589c, size 0x4, virtual true, abstract: false, final false
inline void Release(::GlobalNamespace::HoldableObject*  holdable, ::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  releaseVelocity, float_t  playerScale) ;

/// @brief Method .ctor, addr 0x5d758a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PickupableVariant() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PickupableVariant", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PickupableVariant(PickupableVariant && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PickupableVariant", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PickupableVariant(PickupableVariant const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4858};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Cosmetics::PickupableVariant) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
