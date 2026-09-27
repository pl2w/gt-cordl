#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionSettings_DepthSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionSettings_DepthSource)
// Forward declare root types
namespace GlobalNamespace {
struct ScreenSpaceAmbientOcclusionSettings_DepthSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings/DepthSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource
struct CORDL_TYPE ScreenSpaceAmbientOcclusionSettings_DepthSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScreenSpaceAmbientOcclusionSettings_DepthSource_Unwrapped
enum struct __ScreenSpaceAmbientOcclusionSettings_DepthSource_Unwrapped : int32_t {
__E_Depth = static_cast<int32_t>(0x0),
__E_DepthNormals = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScreenSpaceAmbientOcclusionSettings_DepthSource_Unwrapped () const noexcept {
return static_cast<__ScreenSpaceAmbientOcclusionSettings_DepthSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceAmbientOcclusionSettings_DepthSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScreenSpaceAmbientOcclusionSettings_DepthSource(int32_t  value__) noexcept;

/// @brief Field Depth value: I32(0)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource const Depth;

/// @brief Field DepthNormals value: I32(1)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource const DepthNormals;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18572};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
