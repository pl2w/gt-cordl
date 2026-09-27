#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf16FormatSegment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Utf16FormatSegment)
// Forward declare root types
namespace Cysharp::Text {
struct Utf16FormatSegment;
}
// Write type traits
MARK_VAL_T(::Cysharp::Text::Utf16FormatSegment);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::Utf16FormatSegment, "Cysharp.Text", "Utf16FormatSegment");
// [IsReadOnly]
// Dependencies 
namespace Cysharp::Text {
// Is value type: true
// CS Name: Cysharp.Text.Utf16FormatSegment
struct CORDL_TYPE Utf16FormatSegment {
public:
// Declarations
 __declspec(property(get=get_IsFormatArgument)) bool  IsFormatArgument;

/// @brief Method .ctor, addr 0xb9ab148, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  offset, int32_t  count, int32_t  formatIndex, int32_t  alignment) ;

/// @brief Method get_IsFormatArgument, addr 0xb9ab544, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFormatArgument() ;

// Ctor Parameters []
// @brief default ctor
constexpr Utf16FormatSegment() ;

// Ctor Parameters [CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FormatIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Alignment", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Utf16FormatSegment(int32_t  Offset, int32_t  Count, int32_t  FormatIndex, int32_t  Alignment) noexcept;

/// @brief Field NotFormatIndex offset 0xffffffff size 0x4
static constexpr int32_t  NotFormatIndex{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26382};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Offset, offset: 0x0, size: 0x4, def value: None
 int32_t  Offset;

/// @brief Field Count, offset: 0x4, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field FormatIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  FormatIndex;

/// @brief Field Alignment, offset: 0xc, size: 0x4, def value: None
 int32_t  Alignment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Text::Utf16FormatSegment, Offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::Utf16FormatSegment, Count) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::Utf16FormatSegment, FormatIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::Utf16FormatSegment, Alignment) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Text::Utf16FormatSegment) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
