#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/EffectMesh_WallTextureCoordinateModeU.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EffectMesh_WallTextureCoordinateModeU)
// Forward declare root types
namespace GlobalNamespace {
struct EffectMesh_WallTextureCoordinateModeU;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU, "Meta.XR.MRUtilityKit", "EffectMesh/WallTextureCoordinateModeU");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.EffectMesh/WallTextureCoordinateModeU
struct CORDL_TYPE EffectMesh_WallTextureCoordinateModeU {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EffectMesh_WallTextureCoordinateModeU_Unwrapped
enum struct __EffectMesh_WallTextureCoordinateModeU_Unwrapped : int32_t {
__E_METRIC = static_cast<int32_t>(0x0),
__E_METRIC_SEAMLESS = static_cast<int32_t>(0x1),
__E_MAINTAIN_ASPECT_RATIO = static_cast<int32_t>(0x2),
__E_MAINTAIN_ASPECT_RATIO_SEAMLESS = static_cast<int32_t>(0x3),
__E_STRETCH = static_cast<int32_t>(0x4),
__E_STRETCH_SECTION = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EffectMesh_WallTextureCoordinateModeU_Unwrapped () const noexcept {
return static_cast<__EffectMesh_WallTextureCoordinateModeU_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EffectMesh_WallTextureCoordinateModeU() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EffectMesh_WallTextureCoordinateModeU(int32_t  value__) noexcept;

/// @brief Field MAINTAIN_ASPECT_RATIO value: I32(2)
static ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU const MAINTAIN_ASPECT_RATIO;

/// @brief Field MAINTAIN_ASPECT_RATIO_SEAMLESS value: I32(3)
static ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU const MAINTAIN_ASPECT_RATIO_SEAMLESS;

/// @brief Field METRIC value: I32(0)
static ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU const METRIC;

/// @brief Field METRIC_SEAMLESS value: I32(1)
static ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU const METRIC_SEAMLESS;

/// @brief Field STRETCH value: I32(4)
static ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU const STRETCH;

/// @brief Field STRETCH_SECTION value: I32(5)
static ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU const STRETCH_SECTION;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25773};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
