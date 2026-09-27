#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions)
// Forward declare root types
namespace GlobalNamespace {
struct ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions
struct CORDL_TYPE ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions_Unwrapped
enum struct __ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions_Unwrapped : int32_t {
__E_High = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_Low = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions_Unwrapped () const noexcept {
return static_cast<__ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions(int32_t  value__) noexcept;

/// @brief Field High value: I32(0)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions const High;

/// @brief Field Low value: I32(2)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions const Low;

/// @brief Field Medium value: I32(1)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18576};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
