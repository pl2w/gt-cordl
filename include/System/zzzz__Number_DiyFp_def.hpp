#pragma once
// IWYU pragma private; include "System/Number_DiyFp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Number_DiyFp)
// Forward declare root types
namespace GlobalNamespace {
struct Number_DiyFp;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Number_DiyFp);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Number_DiyFp, "System", "Number/DiyFp");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Number/DiyFp
struct CORDL_TYPE Number_DiyFp {
public:
// Declarations
/// @brief Method CreateAndGetBoundaries, addr 0xb9a6478, size 0x48, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_DiyFp CreateAndGetBoundaries(double_t  value, ::by_ref<::GlobalNamespace::Number_DiyFp>  mMinus, ::by_ref<::GlobalNamespace::Number_DiyFp>  mPlus) ;

/// @brief Method CreateAndGetBoundaries, addr 0xb9a65d0, size 0x48, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Number_DiyFp CreateAndGetBoundaries(float_t  value, ::by_ref<::GlobalNamespace::Number_DiyFp>  mMinus, ::by_ref<::GlobalNamespace::Number_DiyFp>  mPlus) ;

/// @brief Method GetBoundaries, addr 0xb9a6530, size 0xa0, virtual false, abstract: false, final false
inline void GetBoundaries(int32_t  implicitBitIndex, ::by_ref<::GlobalNamespace::Number_DiyFp>  mMinus, ::by_ref<::GlobalNamespace::Number_DiyFp>  mPlus) ;

/// @brief Method Multiply, addr 0xb9a6698, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::Number_DiyFp Multiply(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  other) ;

/// @brief Method Normalize, addr 0xb9a66f4, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::Number_DiyFp Normalize() ;

/// @brief Method Subtract, addr 0xb9a674c, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::Number_DiyFp Subtract(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  other) ;

/// @brief Method .ctor, addr 0xb9a668c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint64_t  f, int32_t  e) ;

/// @brief Method .ctor, addr 0xb9a64c0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(double_t  value) ;

/// @brief Method .ctor, addr 0xb9a6618, size 0x74, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Number_DiyFp() ;

// Ctor Parameters [CppParam { name: "f", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "e", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Number_DiyFp(uint64_t  f, int32_t  e) noexcept;

/// @brief Field DoubleImplicitBitIndex offset 0xffffffff size 0x4
static constexpr int32_t  DoubleImplicitBitIndex{static_cast<int32_t>(0x34)};

/// @brief Field SignificandSize offset 0xffffffff size 0x4
static constexpr int32_t  SignificandSize{static_cast<int32_t>(0x40)};

/// @brief Field SingleImplicitBitIndex offset 0xffffffff size 0x4
static constexpr int32_t  SingleImplicitBitIndex{static_cast<int32_t>(0x17)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field f, offset: 0x0, size: 0x8, def value: None
 uint64_t  f;

/// @brief Field e, offset: 0x8, size: 0x4, def value: None
 int32_t  e;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Number_DiyFp, f) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Number_DiyFp, e) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Number_DiyFp) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
