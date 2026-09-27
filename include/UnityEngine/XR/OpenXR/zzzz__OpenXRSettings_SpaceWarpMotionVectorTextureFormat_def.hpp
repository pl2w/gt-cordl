#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings_SpaceWarpMotionVectorTextureFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRSettings_SpaceWarpMotionVectorTextureFormat)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRSettings_SpaceWarpMotionVectorTextureFormat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat, "UnityEngine.XR.OpenXR", "OpenXRSettings/SpaceWarpMotionVectorTextureFormat");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/SpaceWarpMotionVectorTextureFormat
struct CORDL_TYPE OpenXRSettings_SpaceWarpMotionVectorTextureFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped
enum struct __OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped : int32_t {
__E_RGBA16f = static_cast<int32_t>(0x0),
__E_RG16f = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped () const noexcept {
return static_cast<__OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRSettings_SpaceWarpMotionVectorTextureFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRSettings_SpaceWarpMotionVectorTextureFormat(int32_t  value__) noexcept;

/// @brief Field RG16f value: I32(1)
static ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat const RG16f;

/// @brief Field RGBA16f value: I32(0)
static ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat const RGBA16f;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27266};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
