#pragma once
// IWYU pragma private; include "GlobalNamespace/LegacyBalloonHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LegacyTransferrableObject_def.hpp"
CORDL_MODULE_EXPORT(LegacyBalloonHoldable)
// Forward declare root types
namespace GlobalNamespace {
class LegacyBalloonHoldable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LegacyBalloonHoldable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegacyBalloonHoldable*, "", "LegacyBalloonHoldable");
// Dependencies LegacyTransferrableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LegacyBalloonHoldable
class CORDL_TYPE LegacyBalloonHoldable : public ::GlobalNamespace::LegacyTransferrableObject {
public:
// Declarations
static inline ::GlobalNamespace::LegacyBalloonHoldable* New_ctor() ;

/// @brief Method .ctor, addr 0x573690c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyBalloonHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyBalloonHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyBalloonHoldable(LegacyBalloonHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyBalloonHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyBalloonHoldable(LegacyBalloonHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1208};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LegacyBalloonHoldable) == 0x108, "Size mismatch!");

} // namespace end def GlobalNamespace
