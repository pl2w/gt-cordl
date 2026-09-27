#pragma once
// IWYU pragma private; include "System/GuidEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GuidEx)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System {
struct GuidEx;
}
// Write type traits
MARK_VAL_T(::System::GuidEx);
DEFINE_IL2CPP_CLASS(::System::GuidEx, "System", "GuidEx");
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.GuidEx
struct CORDL_TYPE GuidEx {
public:
// Declarations
/// @brief Method HexsToChars, addr 0xb993dac, size 0x7c, virtual false, abstract: false, final false
static inline int32_t HexsToChars(char16_t*  guidChars, int32_t  a, int32_t  b) ;

/// @brief Method HexsToCharsHexOutput, addr 0xb993e28, size 0x9c, virtual false, abstract: false, final false
static inline int32_t HexsToCharsHexOutput(char16_t*  guidChars, int32_t  a, int32_t  b) ;

/// @brief Method TryFormat, addr 0xb993ec4, size 0x420, virtual false, abstract: false, final false
inline bool TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format) ;

// Ctor Parameters []
// @brief default ctor
constexpr GuidEx() ;

// Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_c", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_d", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_e", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_f", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_g", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_h", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_j", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_k", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr GuidEx(int32_t  _a, int16_t  _b, int16_t  _c, uint8_t  _d, uint8_t  _e, uint8_t  _f, uint8_t  _g, uint8_t  _h, uint8_t  _i, uint8_t  _j, uint8_t  _k) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26320};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _a, offset: 0x0, size: 0x4, def value: None
 int32_t  _a;

/// @brief Field _b, offset: 0x4, size: 0x2, def value: None
 int16_t  _b;

/// @brief Field _c, offset: 0x6, size: 0x2, def value: None
 int16_t  _c;

/// @brief Field _d, offset: 0x8, size: 0x1, def value: None
 uint8_t  _d;

/// @brief Field _e, offset: 0x9, size: 0x1, def value: None
 uint8_t  _e;

/// @brief Field _f, offset: 0xa, size: 0x1, def value: None
 uint8_t  _f;

/// @brief Field _g, offset: 0xb, size: 0x1, def value: None
 uint8_t  _g;

/// @brief Field _h, offset: 0xc, size: 0x1, def value: None
 uint8_t  _h;

/// @brief Field _i, offset: 0xd, size: 0x1, def value: None
 uint8_t  _i;

/// @brief Field _j, offset: 0xe, size: 0x1, def value: None
 uint8_t  _j;

/// @brief Field _k, offset: 0xf, size: 0x1, def value: None
 uint8_t  _k;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::GuidEx, _a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::GuidEx, _b) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::GuidEx, _c) == 0x6, "Offset mismatch!");

static_assert(offsetof(::System::GuidEx, _d) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::GuidEx, _e) == 0x9, "Offset mismatch!");

static_assert(offsetof(::System::GuidEx, _f) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::GuidEx, _g) == 0xb, "Offset mismatch!");

static_assert(offsetof(::System::GuidEx, _h) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::GuidEx, _i) == 0xd, "Offset mismatch!");

static_assert(offsetof(::System::GuidEx, _j) == 0xe, "Offset mismatch!");

static_assert(offsetof(::System::GuidEx, _k) == 0xf, "Offset mismatch!");

static_assert(sizeof(::System::GuidEx) == 0x10, "Size mismatch!");

} // namespace end def System
