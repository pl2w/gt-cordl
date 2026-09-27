#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemJobs/NativeParticleData_Array3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(NativeParticleData_Array3)
// Forward declare root types
namespace GlobalNamespace {
struct NativeParticleData_Array3;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NativeParticleData_Array3);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeParticleData_Array3, "UnityEngine.ParticleSystemJobs", "NativeParticleData/Array3");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemJobs.NativeParticleData/Array3
struct CORDL_TYPE NativeParticleData_Array3 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NativeParticleData_Array3() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "float_t*", modifiers: "", def_value: None, comment: None }]
constexpr NativeParticleData_Array3(float_t*  x, float_t*  y, float_t*  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30860};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field x, offset: 0x0, size: 0x8, def value: None
 float_t*  x;

/// @brief Field y, offset: 0x8, size: 0x8, def value: None
 float_t*  y;

/// @brief Field z, offset: 0x10, size: 0x8, def value: None
 float_t*  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeParticleData_Array3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeParticleData_Array3, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeParticleData_Array3, z) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeParticleData_Array3) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
