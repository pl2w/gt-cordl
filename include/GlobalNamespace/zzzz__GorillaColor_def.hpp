#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
CORDL_MODULE_EXPORT(GorillaColor)
// Forward declare root types
namespace GlobalNamespace {
class GorillaColor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaColor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaColor*, "", "GorillaColor");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaColor
class CORDL_TYPE GorillaColor : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field setRandomly, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_setRandomly, put=__cordl_internal_set_setRandomly)) bool  setRandomly;

static inline ::GlobalNamespace::GorillaColor* New_ctor() ;

constexpr bool const& __cordl_internal_get_setRandomly() const;

constexpr bool& __cordl_internal_get_setRandomly() ;

constexpr void __cordl_internal_set_setRandomly(bool  value) ;

/// @brief Method .ctor, addr 0x5904204, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaColor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaColor(GorillaColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaColor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaColor(GorillaColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2153};

/// @brief Field setRandomly, offset: 0x20, size: 0x1, def value: None
 bool  ___setRandomly;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaColor, ___setRandomly) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaColor) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
