#pragma once
// IWYU pragma private; include "GorillaTag/GTColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GTColor)
namespace GlobalNamespace {
struct GTColor_HSVRanges;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GorillaTag {
class GTColor;
}
// Write type traits
MARK_REF_T(::GorillaTag::GTColor*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GTColor*, "GorillaTag", "GTColor");
// Dependencies System.Object
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.GTColor
class CORDL_TYPE GTColor : public ::System::Object {
public:
// Declarations
using HSVRanges = ::GlobalNamespace::GTColor_HSVRanges;

/// @brief Method RandomHSV, addr 0x5d22f40, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Color RandomHSV(::GlobalNamespace::GTColor_HSVRanges  ranges) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTColor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTColor(GTColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTColor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTColor(GTColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4606};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::GTColor) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag
