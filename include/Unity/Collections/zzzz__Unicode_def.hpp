#pragma once
// IWYU pragma private; include "Unity/Collections/Unicode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Unicode)
namespace GlobalNamespace {
struct Unicode_Rune;
}
namespace Unity::Collections {
struct ConversionError;
}
// Forward declare root types
namespace Unity::Collections {
struct Unicode;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Unicode);
DEFINE_IL2CPP_CLASS(::Unity::Collections::Unicode, "Unity.Collections", "Unicode");
// [GenerateTestsForBurstCompatibility]
// Dependencies 
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Unicode
#pragma pack(push, 0)
struct CORDL_TYPE Unicode {
public:
// Declarations
using Rune = ::GlobalNamespace::Unicode_Rune;

/// @brief Method IsLeadingSurrogate, addr 0xaf07294, size 0x10, virtual false, abstract: false, final false
static inline bool IsLeadingSurrogate(char16_t  c) ;

/// @brief Method IsTrailingSurrogate, addr 0xaf072a4, size 0x10, virtual false, abstract: false, final false
static inline bool IsTrailingSurrogate(char16_t  c) ;

/// @brief Method IsValidCodePoint, addr 0xaf070ec, size 0xc, virtual false, abstract: false, final false
static inline bool IsValidCodePoint(int32_t  codepoint) ;

/// @brief Method NotTrailer, addr 0xaf070f8, size 0x10, virtual false, abstract: false, final false
static inline bool NotTrailer(uint8_t  b) ;

/// @brief Method UcsToUtf16, addr 0xaf0743c, size 0x7c, virtual false, abstract: false, final false
static inline ::Unity::Collections::ConversionError UcsToUtf16(char16_t*  buffer, ::by_ref<int32_t>  index, int32_t  capacity, ::GlobalNamespace::Unicode_Rune  rune) ;

/// @brief Method UcsToUtf8, addr 0xaf0733c, size 0x100, virtual false, abstract: false, final false
static inline ::Unity::Collections::ConversionError UcsToUtf8(uint8_t*  buffer, ::by_ref<int32_t>  index, int32_t  capacity, ::GlobalNamespace::Unicode_Rune  rune) ;

/// @brief Method Utf16ToUcs, addr 0xaf072b4, size 0x88, virtual false, abstract: false, final false
static inline ::Unity::Collections::ConversionError Utf16ToUcs(::by_ref<::GlobalNamespace::Unicode_Rune>  rune, char16_t*  buffer, ::by_ref<int32_t>  index, int32_t  capacity) ;

/// @brief Method Utf16ToUtf8, addr 0xaf074b8, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Collections::ConversionError Utf16ToUtf8(char16_t*  utf16Buffer, int32_t  utf16Length, uint8_t*  utf8Buffer, ::by_ref<int32_t>  utf8Length, int32_t  utf8Capacity) ;

/// @brief Method Utf8ToUcs, addr 0xaf07110, size 0x184, virtual false, abstract: false, final false
static inline ::Unity::Collections::ConversionError Utf8ToUcs(::by_ref<::GlobalNamespace::Unicode_Rune>  rune, uint8_t*  buffer, ::by_ref<int32_t>  index, int32_t  capacity) ;

/// @brief Method Utf8ToUtf16, addr 0xaf0753c, size 0x84, virtual false, abstract: false, final false
static inline ::Unity::Collections::ConversionError Utf8ToUtf16(uint8_t*  utf8Buffer, int32_t  utf8Length, char16_t*  utf16Buffer, ::by_ref<int32_t>  utf16Length, int32_t  utf16Capacity) ;

/// @brief Method get_ReplacementCharacter, addr 0xaf07108, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Unicode_Rune get_ReplacementCharacter() ;

// Ctor Parameters []
// @brief default ctor
constexpr Unicode() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30210};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Unity::Collections::Unicode) == 0x1, "Size mismatch!");

} // namespace end def Unity::Collections
