#pragma once
// IWYU pragma private; include "System/Numerics/BigIntegerCalculator_FastReducer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigIntegerCalculator_FastReducer)
// Forward declare root types
namespace GlobalNamespace {
struct BigIntegerCalculator_FastReducer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BigIntegerCalculator_FastReducer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BigIntegerCalculator_FastReducer, "System.Numerics", "BigIntegerCalculator/FastReducer");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Numerics.BigIntegerCalculator/FastReducer
struct CORDL_TYPE BigIntegerCalculator_FastReducer {
public:
// Declarations
/// @brief Method DivMul, addr 0xa9fc398, size 0x158, virtual false, abstract: false, final false
static inline int32_t DivMul(::ArrayW<uint32_t>  left, int32_t  leftLength, ::ArrayW<uint32_t>  right, int32_t  rightLength, ::ArrayW<uint32_t>  bits, int32_t  k) ;

/// @brief Method Reduce, addr 0xa9fc2f4, size 0x9c, virtual false, abstract: false, final false
inline int32_t Reduce(::ArrayW<uint32_t>  value, int32_t  length) ;

/// @brief Method SubMod, addr 0xa9fc4f0, size 0x1b8, virtual false, abstract: false, final false
static inline int32_t SubMod(::ArrayW<uint32_t>  left, int32_t  leftLength, ::ArrayW<uint32_t>  right, int32_t  rightLength, ::ArrayW<uint32_t>  modulus, int32_t  k) ;

/// @brief Method .ctor, addr 0xa9fb170, size 0x134, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint32_t>  modulus) ;

// Ctor Parameters []
// @brief default ctor
constexpr BigIntegerCalculator_FastReducer() ;

// Ctor Parameters [CppParam { name: "_modulus", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_mu", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_q1", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_q2", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_muLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BigIntegerCalculator_FastReducer(::ArrayW<uint32_t>  _modulus, ::ArrayW<uint32_t>  _mu, ::ArrayW<uint32_t>  _q1, ::ArrayW<uint32_t>  _q2, int32_t  _muLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31670};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _modulus, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _modulus;

/// @brief Field _mu, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _mu;

/// @brief Field _q1, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _q1;

/// @brief Field _q2, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _q2;

/// @brief Field _muLength, offset: 0x20, size: 0x4, def value: None
 int32_t  _muLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BigIntegerCalculator_FastReducer, _modulus) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BigIntegerCalculator_FastReducer, _mu) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BigIntegerCalculator_FastReducer, _q1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BigIntegerCalculator_FastReducer, _q2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BigIntegerCalculator_FastReducer, _muLength) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BigIntegerCalculator_FastReducer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
