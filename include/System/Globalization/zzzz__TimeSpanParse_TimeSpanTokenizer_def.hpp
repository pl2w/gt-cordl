#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_TimeSpanTokenizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanParse_TimeSpanTokenizer)
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanToken;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanTokenizer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer, "System.Globalization", "TimeSpanParse/TimeSpanTokenizer");
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [IsByRefLike]
// Dependencies System.ReadOnlySpan`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/TimeSpanTokenizer
struct CORDL_TYPE TimeSpanParse_TimeSpanTokenizer {
public:
// Declarations
 __declspec(property(get=get_EOL)) bool  EOL;

 __declspec(property(get=get_NextChar)) char16_t  NextChar;

/// @brief Method BackOne, addr 0xa23cbcc, size 0x14, virtual false, abstract: false, final false
inline void BackOne() ;

/// @brief Method GetNextToken, addr 0xa238308, size 0x27c, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimeSpanParse_TimeSpanToken GetNextToken() ;

/// @brief Method .ctor, addr 0xa2382a8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<char16_t>  input) ;

/// @brief Method .ctor, addr 0xa23c980, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<char16_t>  input, int32_t  startPosition) ;

/// @brief Method get_EOL, addr 0xa23cb6c, size 0x4c, virtual false, abstract: false, final false
inline bool get_EOL() ;

/// @brief Method get_NextChar, addr 0xa23cb0c, size 0x60, virtual false, abstract: false, final false
inline char16_t get_NextChar() ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanParse_TimeSpanTokenizer() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeSpanParse_TimeSpanTokenizer(::System::ReadOnlySpan_1<char16_t>  _value, int32_t  _pos) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6739};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _value, offset: 0x0, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _value;

/// @brief Field _pos, offset: 0x10, size: 0x4, def value: None
 int32_t  _pos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer, _value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer, _pos) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
