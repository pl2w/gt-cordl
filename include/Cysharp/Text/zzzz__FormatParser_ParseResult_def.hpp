#pragma once
// IWYU pragma private; include "Cysharp/Text/FormatParser_ParseResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatParser_ParseResult)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct FormatParser_ParseResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FormatParser_ParseResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FormatParser_ParseResult, "Cysharp.Text", "FormatParser/ParseResult");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [IsReadOnly]
// Dependencies System.ReadOnlySpan`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Text.FormatParser/ParseResult
struct CORDL_TYPE FormatParser_ParseResult {
public:
// Declarations
/// @brief Method .ctor, addr 0xb9aaa78, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  index, ::System::ReadOnlySpan_1<char16_t>  formatString, int32_t  lastIndex, int32_t  alignment) ;

// Ctor Parameters []
// @brief default ctor
constexpr FormatParser_ParseResult() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FormatString", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "LastIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Alignment", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FormatParser_ParseResult(int32_t  Index, ::System::ReadOnlySpan_1<char16_t>  FormatString, int32_t  LastIndex, int32_t  Alignment) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

/// @brief Field FormatString, offset: 0x8, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  FormatString;

/// @brief Field LastIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  LastIndex;

/// @brief Field Alignment, offset: 0x1c, size: 0x4, def value: None
 int32_t  Alignment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FormatParser_ParseResult, Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormatParser_ParseResult, FormatString) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormatParser_ParseResult, LastIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormatParser_ParseResult, Alignment) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FormatParser_ParseResult) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
