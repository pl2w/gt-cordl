#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalAdditionalLightData_Version.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalAdditionalLightData_Version)
// Forward declare root types
namespace GlobalNamespace {
struct UniversalAdditionalLightData_Version;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalAdditionalLightData_Version);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalAdditionalLightData_Version, "UnityEngine.Rendering.Universal", "UniversalAdditionalLightData/Version");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalAdditionalLightData/Version
struct CORDL_TYPE UniversalAdditionalLightData_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UniversalAdditionalLightData_Version_Unwrapped
enum struct __UniversalAdditionalLightData_Version_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_RenderingLayers = static_cast<int32_t>(0x2),
__E_SoftShadowQuality = static_cast<int32_t>(0x3),
__E_RenderingLayersMask = static_cast<int32_t>(0x4),
__E_Count = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UniversalAdditionalLightData_Version_Unwrapped () const noexcept {
return static_cast<__UniversalAdditionalLightData_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UniversalAdditionalLightData_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UniversalAdditionalLightData_Version(int32_t  value__) noexcept;

/// @brief Field Count value: I32(5)
static ::GlobalNamespace::UniversalAdditionalLightData_Version const Count;

/// @brief Field Initial value: I32(0)
static ::GlobalNamespace::UniversalAdditionalLightData_Version const Initial;

/// @brief Field RenderingLayers value: I32(2)
static ::GlobalNamespace::UniversalAdditionalLightData_Version const RenderingLayers;

/// @brief Field RenderingLayersMask value: I32(4)
static ::GlobalNamespace::UniversalAdditionalLightData_Version const RenderingLayersMask;

/// @brief Field SoftShadowQuality value: I32(3)
static ::GlobalNamespace::UniversalAdditionalLightData_Version const SoftShadowQuality;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18650};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalAdditionalLightData_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalAdditionalLightData_Version) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
