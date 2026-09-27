#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/CodePointIndexer_TableRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CodePointIndexer_TableRange)
// Forward declare root types
namespace GlobalNamespace {
struct CodePointIndexer_TableRange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CodePointIndexer_TableRange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CodePointIndexer_TableRange, "Mono.Globalization.Unicode", "CodePointIndexer/TableRange");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Globalization.Unicode.CodePointIndexer/TableRange
struct CORDL_TYPE CodePointIndexer_TableRange {
public:
// Declarations
/// @brief Method .ctor, addr 0xa110f70, size 0x18, virtual false, abstract: false, final false
inline void _ctor(int32_t  start, int32_t  end, int32_t  indexStart) ;

// Ctor Parameters []
// @brief default ctor
constexpr CodePointIndexer_TableRange() ;

// Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IndexStart", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IndexEnd", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CodePointIndexer_TableRange(int32_t  Start, int32_t  End, int32_t  Count, int32_t  IndexStart, int32_t  IndexEnd) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5357};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field Start, offset: 0x0, size: 0x4, def value: None
 int32_t  Start;

/// @brief Field End, offset: 0x4, size: 0x4, def value: None
 int32_t  End;

/// @brief Field Count, offset: 0x8, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field IndexStart, offset: 0xc, size: 0x4, def value: None
 int32_t  IndexStart;

/// @brief Field IndexEnd, offset: 0x10, size: 0x4, def value: None
 int32_t  IndexEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CodePointIndexer_TableRange, Start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodePointIndexer_TableRange, End) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodePointIndexer_TableRange, Count) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodePointIndexer_TableRange, IndexStart) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodePointIndexer_TableRange, IndexEnd) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CodePointIndexer_TableRange) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
