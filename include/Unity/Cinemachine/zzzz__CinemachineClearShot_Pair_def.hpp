#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineClearShot_Pair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineClearShot_Pair)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineClearShot_Pair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineClearShot_Pair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineClearShot_Pair, "Unity.Cinemachine", "CinemachineClearShot/Pair");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineClearShot/Pair
struct CORDL_TYPE CinemachineClearShot_Pair {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineClearShot_Pair() ;

// Ctor Parameters [CppParam { name: "a", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineClearShot_Pair(int32_t  a, float_t  b) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22147};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field a, offset: 0x0, size: 0x4, def value: None
 int32_t  a;

/// @brief Field b, offset: 0x4, size: 0x4, def value: None
 float_t  b;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineClearShot_Pair, a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineClearShot_Pair, b) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineClearShot_Pair) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
