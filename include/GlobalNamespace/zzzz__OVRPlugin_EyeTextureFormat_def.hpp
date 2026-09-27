#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_EyeTextureFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_EyeTextureFormat)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_EyeTextureFormat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_EyeTextureFormat);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_EyeTextureFormat, "", "OVRPlugin/EyeTextureFormat");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/EyeTextureFormat
struct CORDL_TYPE OVRPlugin_EyeTextureFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_EyeTextureFormat_Unwrapped
enum struct __OVRPlugin_EyeTextureFormat_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_R8G8B8A8_sRGB = static_cast<int32_t>(0x0),
__E_R8G8B8A8 = static_cast<int32_t>(0x1),
__E_R16G16B16A16_FP = static_cast<int32_t>(0x2),
__E_R11G11B10_FP = static_cast<int32_t>(0x3),
__E_B8G8R8A8_sRGB = static_cast<int32_t>(0x4),
__E_B8G8R8A8 = static_cast<int32_t>(0x5),
__E_R5G6B5 = static_cast<int32_t>(0xb),
__E_EnumSize = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_EyeTextureFormat_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_EyeTextureFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_EyeTextureFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_EyeTextureFormat(int32_t  value__) noexcept;

/// @brief Field B8G8R8A8 value: I32(5)
static ::GlobalNamespace::OVRPlugin_EyeTextureFormat const B8G8R8A8;

/// @brief Field B8G8R8A8_sRGB value: I32(4)
static ::GlobalNamespace::OVRPlugin_EyeTextureFormat const B8G8R8A8_sRGB;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::OVRPlugin_EyeTextureFormat const Default;

/// @brief Field EnumSize value: I32(2147483647)
static ::GlobalNamespace::OVRPlugin_EyeTextureFormat const EnumSize;

/// @brief Field R11G11B10_FP value: I32(3)
static ::GlobalNamespace::OVRPlugin_EyeTextureFormat const R11G11B10_FP;

/// @brief Field R16G16B16A16_FP value: I32(2)
static ::GlobalNamespace::OVRPlugin_EyeTextureFormat const R16G16B16A16_FP;

/// @brief Field R5G6B5 value: I32(11)
static ::GlobalNamespace::OVRPlugin_EyeTextureFormat const R5G6B5;

/// @brief Field R8G8B8A8 value: I32(1)
static ::GlobalNamespace::OVRPlugin_EyeTextureFormat const R8G8B8A8;

/// @brief Field R8G8B8A8_sRGB value: I32(0)
static ::GlobalNamespace::OVRPlugin_EyeTextureFormat const R8G8B8A8_sRGB;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12064};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_EyeTextureFormat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_EyeTextureFormat) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
