#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf8FormatSegment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Buffers/zzzz__StandardFormat_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Utf8FormatSegment)
namespace System::Buffers {
struct StandardFormat;
}
// Forward declare root types
namespace Cysharp::Text {
struct Utf8FormatSegment;
}
// Write type traits
MARK_VAL_T(::Cysharp::Text::Utf8FormatSegment);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::Utf8FormatSegment, "Cysharp.Text", "Utf8FormatSegment");
// [IsReadOnly]
// Dependencies System.Buffers.StandardFormat
namespace Cysharp::Text {
// Is value type: true
// CS Name: Cysharp.Text.Utf8FormatSegment
struct CORDL_TYPE Utf8FormatSegment {
public:
// Declarations
 __declspec(property(get=get_IsFormatArgument)) bool  IsFormatArgument;

/// @brief Method .ctor, addr 0xb9ab520, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  offset, int32_t  count, int32_t  formatIndex, ::System::Buffers::StandardFormat  format, int32_t  alignment) ;

/// @brief Method get_IsFormatArgument, addr 0xb9ab534, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFormatArgument() ;

// Ctor Parameters []
// @brief default ctor
constexpr Utf8FormatSegment() ;

// Ctor Parameters [CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FormatIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "StandardFormat", ty: "::System::Buffers::StandardFormat", modifiers: "", def_value: None, comment: None }, CppParam { name: "Alignment", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Utf8FormatSegment(int32_t  Offset, int32_t  Count, int32_t  FormatIndex, ::System::Buffers::StandardFormat  StandardFormat, int32_t  Alignment) noexcept;

/// @brief Field NotFormatIndex offset 0xffffffff size 0x4
static constexpr int32_t  NotFormatIndex{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26381};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field Offset, offset: 0x0, size: 0x4, def value: None
 int32_t  Offset;

/// @brief Field Count, offset: 0x4, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field FormatIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  FormatIndex;

/// @brief Field StandardFormat, offset: 0xc, size: 0x2, def value: None
 ::System::Buffers::StandardFormat  StandardFormat;

/// @brief Field Alignment, offset: 0x10, size: 0x4, def value: None
 int32_t  Alignment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Text::Utf8FormatSegment, Offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::Utf8FormatSegment, Count) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::Utf8FormatSegment, FormatIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::Utf8FormatSegment, StandardFormat) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::Utf8FormatSegment, Alignment) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Text::Utf8FormatSegment) == 0x14, "Size mismatch!");

} // namespace end def Cysharp::Text
