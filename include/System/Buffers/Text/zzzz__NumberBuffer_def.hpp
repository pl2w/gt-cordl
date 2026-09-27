#pragma once
// IWYU pragma private; include "System/Buffers/Text/NumberBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NumberBuffer)
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Buffers::Text {
struct NumberBuffer;
}
// Write type traits
MARK_VAL_T(::System::Buffers::Text::NumberBuffer);
DEFINE_IL2CPP_CLASS(::System::Buffers::Text::NumberBuffer, "System.Buffers.Text", "NumberBuffer");
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [IsByRefLike]
// Dependencies 
namespace System::Buffers::Text {
// Is value type: true
// CS Name: System.Buffers.Text.NumberBuffer
struct CORDL_TYPE NumberBuffer {
public:
// Declarations
 __declspec(property(get=get_Digits)) ::System::Span_1<uint8_t>  Digits;

 __declspec(property(get=get_NumDigits)) int32_t  NumDigits;

 __declspec(property(get=get_UnsafeDigits)) uint8_t*  UnsafeDigits;

/// @brief Method ToString, addr 0xa27f1d4, size 0x194, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_Digits, addr 0xa2746b0, size 0x40, virtual false, abstract: false, final false
inline ::System::Span_1<uint8_t> get_Digits() ;

/// @brief Method get_NumDigits, addr 0xa274c20, size 0x70, virtual false, abstract: false, final false
inline int32_t get_NumDigits() ;

/// @brief Method get_UnsafeDigits, addr 0xa27eeb8, size 0x8, virtual false, abstract: false, final false
inline uint8_t* get_UnsafeDigits() ;

// Ctor Parameters []
// @brief default ctor
constexpr NumberBuffer() ;

// Ctor Parameters [CppParam { name: "Scale", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b0", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b1", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b2", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b3", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b4", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b5", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b6", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b7", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b8", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b9", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b10", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b11", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b12", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b13", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b14", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b15", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b16", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b17", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b18", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b19", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b20", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b21", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b22", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b23", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b24", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b25", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b26", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b27", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b28", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b29", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b30", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b31", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b32", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b33", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b34", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b35", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b36", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b37", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b38", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b39", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b40", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b41", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b42", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b43", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b44", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b45", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b46", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b47", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b48", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b49", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b50", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr NumberBuffer(int32_t  Scale, bool  IsNegative, uint8_t  _b0, uint8_t  _b1, uint8_t  _b2, uint8_t  _b3, uint8_t  _b4, uint8_t  _b5, uint8_t  _b6, uint8_t  _b7, uint8_t  _b8, uint8_t  _b9, uint8_t  _b10, uint8_t  _b11, uint8_t  _b12, uint8_t  _b13, uint8_t  _b14, uint8_t  _b15, uint8_t  _b16, uint8_t  _b17, uint8_t  _b18, uint8_t  _b19, uint8_t  _b20, uint8_t  _b21, uint8_t  _b22, uint8_t  _b23, uint8_t  _b24, uint8_t  _b25, uint8_t  _b26, uint8_t  _b27, uint8_t  _b28, uint8_t  _b29, uint8_t  _b30, uint8_t  _b31, uint8_t  _b32, uint8_t  _b33, uint8_t  _b34, uint8_t  _b35, uint8_t  _b36, uint8_t  _b37, uint8_t  _b38, uint8_t  _b39, uint8_t  _b40, uint8_t  _b41, uint8_t  _b42, uint8_t  _b43, uint8_t  _b44, uint8_t  _b45, uint8_t  _b46, uint8_t  _b47, uint8_t  _b48, uint8_t  _b49, uint8_t  _b50) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6984};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field Scale, offset: 0x0, size: 0x4, def value: None
 int32_t  Scale;

/// @brief Field IsNegative, offset: 0x4, size: 0x1, def value: None
 bool  IsNegative;

/// @brief Field _b0, offset: 0x5, size: 0x1, def value: None
 uint8_t  _b0;

/// @brief Field _b1, offset: 0x6, size: 0x1, def value: None
 uint8_t  _b1;

/// @brief Field _b2, offset: 0x7, size: 0x1, def value: None
 uint8_t  _b2;

/// @brief Field _b3, offset: 0x8, size: 0x1, def value: None
 uint8_t  _b3;

/// @brief Field _b4, offset: 0x9, size: 0x1, def value: None
 uint8_t  _b4;

/// @brief Field _b5, offset: 0xa, size: 0x1, def value: None
 uint8_t  _b5;

/// @brief Field _b6, offset: 0xb, size: 0x1, def value: None
 uint8_t  _b6;

/// @brief Field _b7, offset: 0xc, size: 0x1, def value: None
 uint8_t  _b7;

/// @brief Field _b8, offset: 0xd, size: 0x1, def value: None
 uint8_t  _b8;

/// @brief Field _b9, offset: 0xe, size: 0x1, def value: None
 uint8_t  _b9;

/// @brief Field _b10, offset: 0xf, size: 0x1, def value: None
 uint8_t  _b10;

/// @brief Field _b11, offset: 0x10, size: 0x1, def value: None
 uint8_t  _b11;

/// @brief Field _b12, offset: 0x11, size: 0x1, def value: None
 uint8_t  _b12;

/// @brief Field _b13, offset: 0x12, size: 0x1, def value: None
 uint8_t  _b13;

/// @brief Field _b14, offset: 0x13, size: 0x1, def value: None
 uint8_t  _b14;

/// @brief Field _b15, offset: 0x14, size: 0x1, def value: None
 uint8_t  _b15;

/// @brief Field _b16, offset: 0x15, size: 0x1, def value: None
 uint8_t  _b16;

/// @brief Field _b17, offset: 0x16, size: 0x1, def value: None
 uint8_t  _b17;

/// @brief Field _b18, offset: 0x17, size: 0x1, def value: None
 uint8_t  _b18;

/// @brief Field _b19, offset: 0x18, size: 0x1, def value: None
 uint8_t  _b19;

/// @brief Field _b20, offset: 0x19, size: 0x1, def value: None
 uint8_t  _b20;

/// @brief Field _b21, offset: 0x1a, size: 0x1, def value: None
 uint8_t  _b21;

/// @brief Field _b22, offset: 0x1b, size: 0x1, def value: None
 uint8_t  _b22;

/// @brief Field _b23, offset: 0x1c, size: 0x1, def value: None
 uint8_t  _b23;

/// @brief Field _b24, offset: 0x1d, size: 0x1, def value: None
 uint8_t  _b24;

/// @brief Field _b25, offset: 0x1e, size: 0x1, def value: None
 uint8_t  _b25;

/// @brief Field _b26, offset: 0x1f, size: 0x1, def value: None
 uint8_t  _b26;

/// @brief Field _b27, offset: 0x20, size: 0x1, def value: None
 uint8_t  _b27;

/// @brief Field _b28, offset: 0x21, size: 0x1, def value: None
 uint8_t  _b28;

/// @brief Field _b29, offset: 0x22, size: 0x1, def value: None
 uint8_t  _b29;

/// @brief Field _b30, offset: 0x23, size: 0x1, def value: None
 uint8_t  _b30;

/// @brief Field _b31, offset: 0x24, size: 0x1, def value: None
 uint8_t  _b31;

/// @brief Field _b32, offset: 0x25, size: 0x1, def value: None
 uint8_t  _b32;

/// @brief Field _b33, offset: 0x26, size: 0x1, def value: None
 uint8_t  _b33;

/// @brief Field _b34, offset: 0x27, size: 0x1, def value: None
 uint8_t  _b34;

/// @brief Field _b35, offset: 0x28, size: 0x1, def value: None
 uint8_t  _b35;

/// @brief Field _b36, offset: 0x29, size: 0x1, def value: None
 uint8_t  _b36;

/// @brief Field _b37, offset: 0x2a, size: 0x1, def value: None
 uint8_t  _b37;

/// @brief Field _b38, offset: 0x2b, size: 0x1, def value: None
 uint8_t  _b38;

/// @brief Field _b39, offset: 0x2c, size: 0x1, def value: None
 uint8_t  _b39;

/// @brief Field _b40, offset: 0x2d, size: 0x1, def value: None
 uint8_t  _b40;

/// @brief Field _b41, offset: 0x2e, size: 0x1, def value: None
 uint8_t  _b41;

/// @brief Field _b42, offset: 0x2f, size: 0x1, def value: None
 uint8_t  _b42;

/// @brief Field _b43, offset: 0x30, size: 0x1, def value: None
 uint8_t  _b43;

/// @brief Field _b44, offset: 0x31, size: 0x1, def value: None
 uint8_t  _b44;

/// @brief Field _b45, offset: 0x32, size: 0x1, def value: None
 uint8_t  _b45;

/// @brief Field _b46, offset: 0x33, size: 0x1, def value: None
 uint8_t  _b46;

/// @brief Field _b47, offset: 0x34, size: 0x1, def value: None
 uint8_t  _b47;

/// @brief Field _b48, offset: 0x35, size: 0x1, def value: None
 uint8_t  _b48;

/// @brief Field _b49, offset: 0x36, size: 0x1, def value: None
 uint8_t  _b49;

/// @brief Field _b50, offset: 0x37, size: 0x1, def value: None
 uint8_t  _b50;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Buffers::Text::NumberBuffer, Scale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, IsNegative) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b0) == 0x5, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b1) == 0x6, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b2) == 0x7, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b3) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b4) == 0x9, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b5) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b6) == 0xb, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b7) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b8) == 0xd, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b9) == 0xe, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b10) == 0xf, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b11) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b12) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b13) == 0x12, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b14) == 0x13, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b15) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b16) == 0x15, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b17) == 0x16, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b18) == 0x17, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b19) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b20) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b21) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b22) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b23) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b24) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b25) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b26) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b27) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b28) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b29) == 0x22, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b30) == 0x23, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b31) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b32) == 0x25, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b33) == 0x26, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b34) == 0x27, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b35) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b36) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b37) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b38) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b39) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b40) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b41) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b42) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b43) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b44) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b45) == 0x32, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b46) == 0x33, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b47) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b48) == 0x35, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b49) == 0x36, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::Text::NumberBuffer, _b50) == 0x37, "Offset mismatch!");

static_assert(sizeof(::System::Buffers::Text::NumberBuffer) == 0x38, "Size mismatch!");

} // namespace end def System::Buffers::Text
