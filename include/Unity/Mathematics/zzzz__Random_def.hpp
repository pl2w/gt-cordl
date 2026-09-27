#pragma once
// IWYU pragma private; include "Unity/Mathematics/Random.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
// Forward declare root types
namespace Unity::Mathematics {
struct Random;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::Random);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::Random, "Unity.Mathematics", "Random");
// [Il2CppEagerStaticClassConstruction]
// Dependencies 
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.Random
struct CORDL_TYPE Random {
public:
// Declarations
/// @brief Method NextDouble, addr 0xb064ca4, size 0x38, virtual false, abstract: false, final false
inline double_t NextDouble() ;

/// @brief Method NextDouble, addr 0xb064cdc, size 0x44, virtual false, abstract: false, final false
inline double_t NextDouble(double_t  min, double_t  max) ;

/// @brief Method NextFloat, addr 0xb064c40, size 0x2c, virtual false, abstract: false, final false
inline float_t NextFloat() ;

/// @brief Method NextFloat, addr 0xb064c6c, size 0x38, virtual false, abstract: false, final false
inline float_t NextFloat(float_t  min, float_t  max) ;

/// @brief Method NextInt, addr 0xb064c18, size 0x28, virtual false, abstract: false, final false
inline int32_t NextInt(int32_t  max) ;

/// @brief Method NextState, addr 0xb064d20, size 0x1c, virtual false, abstract: false, final false
inline uint32_t NextState() ;

/// @brief Method .ctor, addr 0xb064c04, size 0x14, virtual false, abstract: false, final false
inline void _ctor(uint32_t  seed) ;

// Ctor Parameters []
// @brief default ctor
constexpr Random() ;

// Ctor Parameters [CppParam { name: "state", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr Random(uint32_t  state) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31506};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field state, offset: 0x0, size: 0x4, def value: None
 uint32_t  state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::Random, state) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::Random) == 0x4, "Size mismatch!");

} // namespace end def Unity::Mathematics
