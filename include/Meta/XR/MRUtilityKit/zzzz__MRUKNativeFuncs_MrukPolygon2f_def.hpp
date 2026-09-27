#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukPolygon2f.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukPolygon2f)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukPolygon2f;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukPolygon2f");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukPolygon2f
struct CORDL_TYPE MRUKNativeFuncs_MrukPolygon2f {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukPolygon2f() ;

// Ctor Parameters [CppParam { name: "points", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "numPoints", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukPolygon2f(::ArrayW<::UnityEngine::Vector2>  points, uint32_t  numPoints) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25800};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field points, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  points;

/// @brief Field numPoints, offset: 0x8, size: 0x4, def value: None
 uint32_t  numPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f, points) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f, numPoints) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
