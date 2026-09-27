#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ConfettiPopperHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
CORDL_MODULE_EXPORT(ConfettiPopperHoldable)
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ConfettiPopperHoldable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ConfettiPopperHoldable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ConfettiPopperHoldable*, "GorillaTag.Cosmetics", "ConfettiPopperHoldable");
// Dependencies TransferrableObject
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ConfettiPopperHoldable
class CORDL_TYPE ConfettiPopperHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
static inline ::GorillaTag::Cosmetics::ConfettiPopperHoldable* New_ctor() ;

/// @brief Method .ctor, addr 0x5d6dee4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfettiPopperHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfettiPopperHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfettiPopperHoldable(ConfettiPopperHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfettiPopperHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfettiPopperHoldable(ConfettiPopperHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4847};

/// @brief Size padding 0x368 - 0x338 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Cosmetics::ConfettiPopperHoldable) == 0x368, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
