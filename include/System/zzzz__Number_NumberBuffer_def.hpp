#pragma once
// IWYU pragma private; include "System/Number_NumberBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Number_NumberBufferKind_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Number_NumberBuffer)
namespace GlobalNamespace {
struct Number_NumberBufferKind;
}
// Forward declare root types
namespace GlobalNamespace {
struct Number_NumberBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Number_NumberBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Number_NumberBuffer, "System", "Number/NumberBuffer");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies System.Number::NumberBufferKind, System.Span`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Number/NumberBuffer
struct CORDL_TYPE Number_NumberBuffer {
public:
// Declarations
/// [Conditional("DEBUG")]
/// @brief Method CheckConsistency, addr 0xb9a77b4, size 0x4, virtual false, abstract: false, final false
inline void CheckConsistency() ;

/// @brief Method GetDigitsPointer, addr 0xb9a77b8, size 0x18, virtual false, abstract: false, final false
inline uint8_t* GetDigitsPointer() ;

/// [NullableContext(1)]
/// @brief Method ToString, addr 0xb9a77d0, size 0x238, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb9a7734, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Number_NumberBufferKind  kind, uint8_t*  digits, int32_t  digitsLength) ;

// Ctor Parameters []
// @brief default ctor
constexpr Number_NumberBuffer() ;

// Ctor Parameters [CppParam { name: "DigitsCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Scale", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "HasNonZeroTail", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Kind", ty: "::GlobalNamespace::Number_NumberBufferKind", modifiers: "", def_value: None, comment: None }, CppParam { name: "Digits", ty: "::System::Span_1<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr Number_NumberBuffer(int32_t  DigitsCount, int32_t  Scale, bool  IsNegative, bool  HasNonZeroTail, ::GlobalNamespace::Number_NumberBufferKind  Kind, ::System::Span_1<uint8_t>  Digits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26329};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field DigitsCount, offset: 0x0, size: 0x4, def value: None
 int32_t  DigitsCount;

/// @brief Field Scale, offset: 0x4, size: 0x4, def value: None
 int32_t  Scale;

/// @brief Field IsNegative, offset: 0x8, size: 0x1, def value: None
 bool  IsNegative;

/// @brief Field HasNonZeroTail, offset: 0x9, size: 0x1, def value: None
 bool  HasNonZeroTail;

/// @brief Field Kind, offset: 0xa, size: 0x1, def value: None
 ::GlobalNamespace::Number_NumberBufferKind  Kind;

/// @brief Field Digits, offset: 0x10, size: 0x10, def value: None
 ::System::Span_1<uint8_t>  Digits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Number_NumberBuffer, DigitsCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_NumberBuffer, Scale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_NumberBuffer, IsNegative) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_NumberBuffer, HasNonZeroTail) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_NumberBuffer, Kind) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_NumberBuffer, Digits) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Number_NumberBuffer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
