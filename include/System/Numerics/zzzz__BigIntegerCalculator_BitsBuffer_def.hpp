#pragma once
// IWYU pragma private; include "System/Numerics/BigIntegerCalculator_BitsBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigIntegerCalculator_BitsBuffer)
namespace GlobalNamespace {
struct BigIntegerCalculator_FastReducer;
}
// Forward declare root types
namespace GlobalNamespace {
struct BigIntegerCalculator_BitsBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BigIntegerCalculator_BitsBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BigIntegerCalculator_BitsBuffer, "System.Numerics", "BigIntegerCalculator/BitsBuffer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Numerics.BigIntegerCalculator/BitsBuffer
struct CORDL_TYPE BigIntegerCalculator_BitsBuffer {
public:
// Declarations
/// @brief Method Apply, addr 0xa9fc248, size 0xac, virtual false, abstract: false, final false
inline void Apply(::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  temp, int32_t  maxLength) ;

/// @brief Method GetBits, addr 0xa9fc390, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint32_t> GetBits() ;

/// @brief Method GetSize, addr 0xa9fb024, size 0x18, virtual false, abstract: false, final false
inline int32_t GetSize() ;

/// @brief Method MultiplySelf, addr 0xa9fb4f4, size 0x130, virtual false, abstract: false, final false
inline void MultiplySelf(::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  value, ::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  temp) ;

/// @brief Method Reduce, addr 0xa9fb624, size 0xdc, virtual false, abstract: false, final false
inline void Reduce(::ArrayW<uint32_t>  modulus) ;

/// @brief Method Reduce, addr 0xa9fb7c4, size 0x28, virtual false, abstract: false, final false
inline void Reduce(::by_ref<::GlobalNamespace::BigIntegerCalculator_FastReducer>  reducer) ;

/// @brief Method SquareSelf, addr 0xa9fb700, size 0xc4, virtual false, abstract: false, final false
inline void SquareSelf(::by_ref<::GlobalNamespace::BigIntegerCalculator_BitsBuffer>  temp) ;

/// @brief Method .ctor, addr 0xa9fae40, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, ::ArrayW<uint32_t>  value) ;

/// @brief Method .ctor, addr 0xa9fac84, size 0x94, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BigIntegerCalculator_BitsBuffer() ;

// Ctor Parameters [CppParam { name: "_bits", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BigIntegerCalculator_BitsBuffer(::ArrayW<uint32_t>  _bits, int32_t  _length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31669};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _bits, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _bits;

/// @brief Field _length, offset: 0x8, size: 0x4, def value: None
 int32_t  _length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BigIntegerCalculator_BitsBuffer, _bits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BigIntegerCalculator_BitsBuffer, _length) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BigIntegerCalculator_BitsBuffer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
