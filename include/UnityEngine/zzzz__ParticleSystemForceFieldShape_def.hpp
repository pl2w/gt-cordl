#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemForceFieldShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemForceFieldShape)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemForceFieldShape;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemForceFieldShape);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemForceFieldShape, "UnityEngine", "ParticleSystemForceFieldShape");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemForceFieldShape
struct CORDL_TYPE ParticleSystemForceFieldShape {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParticleSystemForceFieldShape_Unwrapped
enum struct __ParticleSystemForceFieldShape_Unwrapped : int32_t {
__E_Sphere = static_cast<int32_t>(0x0),
__E_Hemisphere = static_cast<int32_t>(0x1),
__E_Cylinder = static_cast<int32_t>(0x2),
__E_Box = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParticleSystemForceFieldShape_Unwrapped () const noexcept {
return static_cast<__ParticleSystemForceFieldShape_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemForceFieldShape() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystemForceFieldShape(int32_t  value__) noexcept;

/// @brief Field Box value: I32(3)
static ::UnityEngine::ParticleSystemForceFieldShape const Box;

/// @brief Field Cylinder value: I32(2)
static ::UnityEngine::ParticleSystemForceFieldShape const Cylinder;

/// @brief Field Hemisphere value: I32(1)
static ::UnityEngine::ParticleSystemForceFieldShape const Hemisphere;

/// @brief Field Sphere value: I32(0)
static ::UnityEngine::ParticleSystemForceFieldShape const Sphere;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30848};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemForceFieldShape, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystemForceFieldShape) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
