#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemJobs/NativeParticleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_Array3_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_Array4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeParticleData)
namespace GlobalNamespace {
struct NativeParticleData_Array3;
}
namespace GlobalNamespace {
struct NativeParticleData_Array4;
}
// Forward declare root types
namespace UnityEngine::ParticleSystemJobs {
struct NativeParticleData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemJobs::NativeParticleData);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemJobs::NativeParticleData, "UnityEngine.ParticleSystemJobs", "NativeParticleData");
// Dependencies UnityEngine.ParticleSystemJobs.NativeParticleData::Array3, UnityEngine.ParticleSystemJobs.NativeParticleData::Array4
namespace UnityEngine::ParticleSystemJobs {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemJobs.NativeParticleData
struct CORDL_TYPE NativeParticleData {
public:
// Declarations
using Array3 = ::GlobalNamespace::NativeParticleData_Array3;

using Array4 = ::GlobalNamespace::NativeParticleData_Array4;

// Ctor Parameters []
// @brief default ctor
constexpr NativeParticleData() ;

// Ctor Parameters [CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "positions", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocities", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: None, comment: None }, CppParam { name: "axisOfRotations", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotations", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotationalSpeeds", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: None, comment: None }, CppParam { name: "sizes", ty: "::GlobalNamespace::NativeParticleData_Array3", modifiers: "", def_value: None, comment: None }, CppParam { name: "startColors", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "aliveTimePercent", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "inverseStartLifetimes", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "randomSeeds", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "customData1", ty: "::GlobalNamespace::NativeParticleData_Array4", modifiers: "", def_value: None, comment: None }, CppParam { name: "customData2", ty: "::GlobalNamespace::NativeParticleData_Array4", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshIndices", ty: "void*", modifiers: "", def_value: None, comment: None }]
constexpr NativeParticleData(int32_t  count, ::GlobalNamespace::NativeParticleData_Array3  positions, ::GlobalNamespace::NativeParticleData_Array3  velocities, ::GlobalNamespace::NativeParticleData_Array3  axisOfRotations, ::GlobalNamespace::NativeParticleData_Array3  rotations, ::GlobalNamespace::NativeParticleData_Array3  rotationalSpeeds, ::GlobalNamespace::NativeParticleData_Array3  sizes, void*  startColors, void*  aliveTimePercent, void*  inverseStartLifetimes, void*  randomSeeds, ::GlobalNamespace::NativeParticleData_Array4  customData1, ::GlobalNamespace::NativeParticleData_Array4  customData2, void*  meshIndices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30862};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x100};

/// @brief Field count, offset: 0x0, size: 0x4, def value: None
 int32_t  count;

/// @brief Field positions, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::NativeParticleData_Array3  positions;

/// @brief Field velocities, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::NativeParticleData_Array3  velocities;

/// @brief Field axisOfRotations, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::NativeParticleData_Array3  axisOfRotations;

/// @brief Field rotations, offset: 0x50, size: 0x18, def value: None
 ::GlobalNamespace::NativeParticleData_Array3  rotations;

/// @brief Field rotationalSpeeds, offset: 0x68, size: 0x18, def value: None
 ::GlobalNamespace::NativeParticleData_Array3  rotationalSpeeds;

/// @brief Field sizes, offset: 0x80, size: 0x18, def value: None
 ::GlobalNamespace::NativeParticleData_Array3  sizes;

/// @brief Field startColors, offset: 0x98, size: 0x8, def value: None
 void*  startColors;

/// @brief Field aliveTimePercent, offset: 0xa0, size: 0x8, def value: None
 void*  aliveTimePercent;

/// @brief Field inverseStartLifetimes, offset: 0xa8, size: 0x8, def value: None
 void*  inverseStartLifetimes;

/// @brief Field randomSeeds, offset: 0xb0, size: 0x8, def value: None
 void*  randomSeeds;

/// @brief Field customData1, offset: 0xb8, size: 0x20, def value: None
 ::GlobalNamespace::NativeParticleData_Array4  customData1;

/// @brief Field customData2, offset: 0xd8, size: 0x20, def value: None
 ::GlobalNamespace::NativeParticleData_Array4  customData2;

/// @brief Field meshIndices, offset: 0xf8, size: 0x8, def value: None
 void*  meshIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, positions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, velocities) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, axisOfRotations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, rotations) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, rotationalSpeeds) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, sizes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, startColors) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, aliveTimePercent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, inverseStartLifetimes) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, randomSeeds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, customData1) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, customData2) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, meshIndices) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystemJobs::NativeParticleData) == 0x100, "Size mismatch!");

} // namespace end def UnityEngine::ParticleSystemJobs
