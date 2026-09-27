#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/EffectMesh_AnchorTextureCoordinateMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EffectMesh_AnchorTextureCoordinateMode)
// Forward declare root types
namespace GlobalNamespace {
struct EffectMesh_AnchorTextureCoordinateMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode, "Meta.XR.MRUtilityKit", "EffectMesh/AnchorTextureCoordinateMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.EffectMesh/AnchorTextureCoordinateMode
struct CORDL_TYPE EffectMesh_AnchorTextureCoordinateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EffectMesh_AnchorTextureCoordinateMode_Unwrapped
enum struct __EffectMesh_AnchorTextureCoordinateMode_Unwrapped : int32_t {
__E_METRIC = static_cast<int32_t>(0x0),
__E_STRETCH = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EffectMesh_AnchorTextureCoordinateMode_Unwrapped () const noexcept {
return static_cast<__EffectMesh_AnchorTextureCoordinateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EffectMesh_AnchorTextureCoordinateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EffectMesh_AnchorTextureCoordinateMode(int32_t  value__) noexcept;

/// @brief Field METRIC value: I32(0)
static ::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode const METRIC;

/// @brief Field STRETCH value: I32(1)
static ::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode const STRETCH;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25775};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
