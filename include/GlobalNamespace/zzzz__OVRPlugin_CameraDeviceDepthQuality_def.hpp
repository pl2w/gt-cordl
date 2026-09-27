#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_CameraDeviceDepthQuality.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_CameraDeviceDepthQuality)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_CameraDeviceDepthQuality;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_CameraDeviceDepthQuality);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_CameraDeviceDepthQuality, "", "OVRPlugin/CameraDeviceDepthQuality");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/CameraDeviceDepthQuality
struct CORDL_TYPE OVRPlugin_CameraDeviceDepthQuality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_CameraDeviceDepthQuality_Unwrapped
enum struct __OVRPlugin_CameraDeviceDepthQuality_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_CameraDeviceDepthQuality_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_CameraDeviceDepthQuality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_CameraDeviceDepthQuality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_CameraDeviceDepthQuality(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::GlobalNamespace::OVRPlugin_CameraDeviceDepthQuality const High;

/// @brief Field Low value: I32(0)
static ::GlobalNamespace::OVRPlugin_CameraDeviceDepthQuality const Low;

/// @brief Field Medium value: I32(1)
static ::GlobalNamespace::OVRPlugin_CameraDeviceDepthQuality const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12074};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceDepthQuality, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_CameraDeviceDepthQuality) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
