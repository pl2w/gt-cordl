#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemShapeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemShapeType)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemShapeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemShapeType);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemShapeType, "UnityEngine", "ParticleSystemShapeType");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemShapeType
struct CORDL_TYPE ParticleSystemShapeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParticleSystemShapeType_Unwrapped
enum struct __ParticleSystemShapeType_Unwrapped : int32_t {
__E_Sphere = static_cast<int32_t>(0x0),
__E_SphereShell = static_cast<int32_t>(0x1),
__E_Hemisphere = static_cast<int32_t>(0x2),
__E_HemisphereShell = static_cast<int32_t>(0x3),
__E_Cone = static_cast<int32_t>(0x4),
__E_Box = static_cast<int32_t>(0x5),
__E_Mesh = static_cast<int32_t>(0x6),
__E_ConeShell = static_cast<int32_t>(0x7),
__E_ConeVolume = static_cast<int32_t>(0x8),
__E_ConeVolumeShell = static_cast<int32_t>(0x9),
__E_Circle = static_cast<int32_t>(0xa),
__E_CircleEdge = static_cast<int32_t>(0xb),
__E_SingleSidedEdge = static_cast<int32_t>(0xc),
__E_MeshRenderer = static_cast<int32_t>(0xd),
__E_SkinnedMeshRenderer = static_cast<int32_t>(0xe),
__E_BoxShell = static_cast<int32_t>(0xf),
__E_BoxEdge = static_cast<int32_t>(0x10),
__E_Donut = static_cast<int32_t>(0x11),
__E_Rectangle = static_cast<int32_t>(0x12),
__E_Sprite = static_cast<int32_t>(0x13),
__E_SpriteRenderer = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParticleSystemShapeType_Unwrapped () const noexcept {
return static_cast<__ParticleSystemShapeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemShapeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystemShapeType(int32_t  value__) noexcept;

/// @brief Field Box value: I32(5)
static ::UnityEngine::ParticleSystemShapeType const Box;

/// @brief Field BoxEdge value: I32(16)
static ::UnityEngine::ParticleSystemShapeType const BoxEdge;

/// @brief Field BoxShell value: I32(15)
static ::UnityEngine::ParticleSystemShapeType const BoxShell;

/// @brief Field Circle value: I32(10)
static ::UnityEngine::ParticleSystemShapeType const Circle;

/// @brief Field CircleEdge value: I32(11)
static ::UnityEngine::ParticleSystemShapeType const CircleEdge;

/// @brief Field Cone value: I32(4)
static ::UnityEngine::ParticleSystemShapeType const Cone;

/// @brief Field ConeShell value: I32(7)
static ::UnityEngine::ParticleSystemShapeType const ConeShell;

/// @brief Field ConeVolume value: I32(8)
static ::UnityEngine::ParticleSystemShapeType const ConeVolume;

/// @brief Field ConeVolumeShell value: I32(9)
static ::UnityEngine::ParticleSystemShapeType const ConeVolumeShell;

/// @brief Field Donut value: I32(17)
static ::UnityEngine::ParticleSystemShapeType const Donut;

/// @brief Field Hemisphere value: I32(2)
static ::UnityEngine::ParticleSystemShapeType const Hemisphere;

/// @brief Field HemisphereShell value: I32(3)
static ::UnityEngine::ParticleSystemShapeType const HemisphereShell;

/// @brief Field Mesh value: I32(6)
static ::UnityEngine::ParticleSystemShapeType const Mesh;

/// @brief Field MeshRenderer value: I32(13)
static ::UnityEngine::ParticleSystemShapeType const MeshRenderer;

/// @brief Field Rectangle value: I32(18)
static ::UnityEngine::ParticleSystemShapeType const Rectangle;

/// @brief Field SingleSidedEdge value: I32(12)
static ::UnityEngine::ParticleSystemShapeType const SingleSidedEdge;

/// @brief Field SkinnedMeshRenderer value: I32(14)
static ::UnityEngine::ParticleSystemShapeType const SkinnedMeshRenderer;

/// @brief Field Sphere value: I32(0)
static ::UnityEngine::ParticleSystemShapeType const Sphere;

/// @brief Field SphereShell value: I32(1)
static ::UnityEngine::ParticleSystemShapeType const SphereShell;

/// @brief Field Sprite value: I32(19)
static ::UnityEngine::ParticleSystemShapeType const Sprite;

/// @brief Field SpriteRenderer value: I32(20)
static ::UnityEngine::ParticleSystemShapeType const SpriteRenderer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30841};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemShapeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystemShapeType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
