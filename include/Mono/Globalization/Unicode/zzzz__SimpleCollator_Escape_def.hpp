#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/SimpleCollator_Escape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleCollator_Escape)
// Forward declare root types
namespace GlobalNamespace {
struct SimpleCollator_Escape;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimpleCollator_Escape);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleCollator_Escape, "Mono.Globalization.Unicode", "SimpleCollator/Escape");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Globalization.Unicode.SimpleCollator/Escape
struct CORDL_TYPE SimpleCollator_Escape {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SimpleCollator_Escape() ;

// Ctor Parameters [CppParam { name: "Source", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Optional", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimpleCollator_Escape(::StringW  Source, int32_t  Index, int32_t  Start, int32_t  End, int32_t  Optional) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5369};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Source, offset: 0x0, size: 0x8, def value: None
 ::StringW  Source;

/// @brief Field Index, offset: 0x8, size: 0x4, def value: None
 int32_t  Index;

/// @brief Field Start, offset: 0xc, size: 0x4, def value: None
 int32_t  Start;

/// @brief Field End, offset: 0x10, size: 0x4, def value: None
 int32_t  End;

/// @brief Field Optional, offset: 0x14, size: 0x4, def value: None
 int32_t  Optional;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleCollator_Escape, Source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCollator_Escape, Index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCollator_Escape, Start) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCollator_Escape, End) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCollator_Escape, Optional) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleCollator_Escape) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
