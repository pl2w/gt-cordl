#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings_ColorSubmissionModeGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRSettings_ColorSubmissionModeGroup)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRSettings_ColorSubmissionModeGroup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup, "UnityEngine.XR.OpenXR", "OpenXRSettings/ColorSubmissionModeGroup");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/ColorSubmissionModeGroup
struct CORDL_TYPE OpenXRSettings_ColorSubmissionModeGroup {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpenXRSettings_ColorSubmissionModeGroup_Unwrapped
enum struct __OpenXRSettings_ColorSubmissionModeGroup_Unwrapped : int32_t {
__E_kRenderTextureFormatGroup8888 = static_cast<int32_t>(0x0),
__E_kRenderTextureFormatGroup1010102_Float = static_cast<int32_t>(0x1),
__E_kRenderTextureFormatGroup16161616_Float = static_cast<int32_t>(0x2),
__E_kRenderTextureFormatGroup565 = static_cast<int32_t>(0x3),
__E_kRenderTextureFormatGroup111110_Float = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpenXRSettings_ColorSubmissionModeGroup_Unwrapped () const noexcept {
return static_cast<__OpenXRSettings_ColorSubmissionModeGroup_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRSettings_ColorSubmissionModeGroup() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRSettings_ColorSubmissionModeGroup(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27260};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field kRenderTextureFormatGroup1010102_Float value: I32(1)
static ::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup1010102_Float;

/// @brief Field kRenderTextureFormatGroup111110_Float value: I32(4)
static ::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup111110_Float;

/// @brief Field kRenderTextureFormatGroup16161616_Float value: I32(2)
static ::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup16161616_Float;

/// @brief Field kRenderTextureFormatGroup565 value: I32(3)
static ::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup565;

/// @brief Field kRenderTextureFormatGroup8888 value: I32(0)
static ::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup8888;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
