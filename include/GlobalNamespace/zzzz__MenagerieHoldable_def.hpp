#pragma once
// IWYU pragma private; include "GlobalNamespace/MenagerieHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
CORDL_MODULE_EXPORT(MenagerieHoldable)
namespace GlobalNamespace {
class InteractionPoint;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MenagerieHoldable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MenagerieHoldable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenagerieHoldable*, "", "MenagerieHoldable");
// Dependencies HoldableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenagerieHoldable
class CORDL_TYPE MenagerieHoldable : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
/// @brief Method DropItemCleanup, addr 0x56fcb14, size 0x4, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

static inline ::GlobalNamespace::MenagerieHoldable* New_ctor() ;

/// @brief Method OnGrab, addr 0x56fcb10, size 0x4, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x56fcb0c, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method .ctor, addr 0x56fcb18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenagerieHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenagerieHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MenagerieHoldable(MenagerieHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenagerieHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenagerieHoldable(MenagerieHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MenagerieHoldable) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
