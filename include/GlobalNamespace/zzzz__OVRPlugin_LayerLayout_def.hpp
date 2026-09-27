#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_LayerLayout)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_LayerLayout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_LayerLayout);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_LayerLayout, "", "OVRPlugin/LayerLayout");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/LayerLayout
struct CORDL_TYPE OVRPlugin_LayerLayout {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_LayerLayout_Unwrapped
enum struct __OVRPlugin_LayerLayout_Unwrapped : int32_t {
__E_Stereo = static_cast<int32_t>(0x0),
__E_Mono = static_cast<int32_t>(0x1),
__E_DoubleWide = static_cast<int32_t>(0x2),
__E_Array = static_cast<int32_t>(0x3),
__E_EnumSize = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_LayerLayout_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_LayerLayout_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_LayerLayout() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_LayerLayout(int32_t  value__) noexcept;

/// @brief Field Array value: I32(3)
static ::GlobalNamespace::OVRPlugin_LayerLayout const Array;

/// @brief Field DoubleWide value: I32(2)
static ::GlobalNamespace::OVRPlugin_LayerLayout const DoubleWide;

/// @brief Field EnumSize value: I32(15)
static ::GlobalNamespace::OVRPlugin_LayerLayout const EnumSize;

/// @brief Field Mono value: I32(1)
static ::GlobalNamespace::OVRPlugin_LayerLayout const Mono;

/// @brief Field Stereo value: I32(0)
static ::GlobalNamespace::OVRPlugin_LayerLayout const Stereo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12124};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerLayout, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_LayerLayout) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
