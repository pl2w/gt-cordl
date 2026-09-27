#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_EyeTextureFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRManager_EyeTextureFormat)
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_EyeTextureFormat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_EyeTextureFormat);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRManager_EyeTextureFormat, "", "OVRManager/EyeTextureFormat");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/EyeTextureFormat
struct CORDL_TYPE OVRManager_EyeTextureFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRManager_EyeTextureFormat_Unwrapped
enum struct __OVRManager_EyeTextureFormat_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_R16G16B16A16_FP = static_cast<int32_t>(0x2),
__E_R11G11B10_FP = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRManager_EyeTextureFormat_Unwrapped () const noexcept {
return static_cast<__OVRManager_EyeTextureFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_EyeTextureFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRManager_EyeTextureFormat(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::OVRManager_EyeTextureFormat const Default;

/// @brief Field R11G11B10_FP value: I32(3)
static ::GlobalNamespace::OVRManager_EyeTextureFormat const R11G11B10_FP;

/// @brief Field R16G16B16A16_FP value: I32(2)
static ::GlobalNamespace::OVRManager_EyeTextureFormat const R16G16B16A16_FP;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11973};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_EyeTextureFormat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRManager_EyeTextureFormat) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
