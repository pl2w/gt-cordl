#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest_SettingsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest_SettingsOptions)
// Forward declare root types
namespace GlobalNamespace {
struct ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions, "UnityEngine.Rendering.Universal", "AdditionalLightsShadowAtlasLayout/ShadowResolutionRequest/SettingsOptions");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout/ShadowResolutionRequest/SettingsOptions
struct CORDL_TYPE ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions_Unwrapped
enum struct __ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions_Unwrapped : uint16_t {
__E_None = static_cast<uint16_t>(0x0u),
__E_SoftShadow = static_cast<uint16_t>(0x1u),
__E_PointLightShadow = static_cast<uint16_t>(0x2u),
__E_All = static_cast<uint16_t>(0xffffu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions_Unwrapped () const noexcept {
return static_cast<__ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions(uint16_t  value__) noexcept;

/// @brief Field All value: U16(65535)
static ::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions const All;

/// @brief Field None value: U16(0)
static ::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions const None;

/// @brief Field PointLightShadow value: U16(2)
static ::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions const PointLightShadow;

/// @brief Field SoftShadow value: U16(1)
static ::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions const SoftShadow;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18463};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 uint16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
