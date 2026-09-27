#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_Trails.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem_Trails)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_Trails;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_Trails);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_Trails, "UnityEngine", "ParticleSystem/Trails");
// [NativeType((UnityEngine.Bindings.CodegenOptions)1, "MonoParticleTrails")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/Trails
struct CORDL_TYPE ParticleSystem_Trails {
public:
// Declarations
/// @brief Method Allocate, addr 0xb66cb08, size 0x1b4, virtual false, abstract: false, final false
inline void Allocate() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_Trails() ;

// Ctor Parameters [CppParam { name: "positions", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector4>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "frontPositions", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "backPositions", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "positionCounts", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "textureOffsets", ty: "::System::Collections::Generic::List_1<float_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxTrailCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxPositionsPerTrailCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_Trails(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  positions, ::System::Collections::Generic::List_1<int32_t>*  frontPositions, ::System::Collections::Generic::List_1<int32_t>*  backPositions, ::System::Collections::Generic::List_1<int32_t>*  positionCounts, ::System::Collections::Generic::List_1<float_t>*  textureOffsets, int32_t  maxTrailCount, int32_t  maxPositionsPerTrailCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30816};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field positions, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  positions;

/// @brief Field frontPositions, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  frontPositions;

/// @brief Field backPositions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  backPositions;

/// @brief Field positionCounts, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  positionCounts;

/// @brief Field textureOffsets, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  textureOffsets;

/// @brief Field maxTrailCount, offset: 0x28, size: 0x4, def value: None
 int32_t  maxTrailCount;

/// @brief Field maxPositionsPerTrailCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  maxPositionsPerTrailCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_Trails, positions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Trails, frontPositions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Trails, backPositions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Trails, positionCounts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Trails, textureOffsets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Trails, maxTrailCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Trails, maxPositionsPerTrailCount) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_Trails) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
