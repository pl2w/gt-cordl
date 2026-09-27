#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FeatureType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_FeatureType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_FeatureType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_FeatureType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_FeatureType, "", "OVRPlugin/FeatureType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/FeatureType
struct CORDL_TYPE OVRPlugin_FeatureType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_FeatureType_Unwrapped
enum struct __OVRPlugin_FeatureType_Unwrapped : int32_t {
__E_HandTracking = static_cast<int32_t>(0x0),
__E_KeyboardTracking = static_cast<int32_t>(0x1),
__E_EyeTracking = static_cast<int32_t>(0x2),
__E_FaceTracking = static_cast<int32_t>(0x3),
__E_BodyTracking = static_cast<int32_t>(0x4),
__E_Passthrough = static_cast<int32_t>(0x5),
__E_GazeBasedFoveatedRendering = static_cast<int32_t>(0x6),
__E_Count = static_cast<int32_t>(0x7),
__E_EnumSize = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_FeatureType_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_FeatureType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_FeatureType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_FeatureType(int32_t  value__) noexcept;

/// @brief Field BodyTracking value: I32(4)
static ::GlobalNamespace::OVRPlugin_FeatureType const BodyTracking;

/// @brief Field Count value: I32(7)
static ::GlobalNamespace::OVRPlugin_FeatureType const Count;

/// @brief Field EnumSize value: I32(2147483647)
static ::GlobalNamespace::OVRPlugin_FeatureType const EnumSize;

/// @brief Field EyeTracking value: I32(2)
static ::GlobalNamespace::OVRPlugin_FeatureType const EyeTracking;

/// @brief Field FaceTracking value: I32(3)
static ::GlobalNamespace::OVRPlugin_FeatureType const FaceTracking;

/// @brief Field GazeBasedFoveatedRendering value: I32(6)
static ::GlobalNamespace::OVRPlugin_FeatureType const GazeBasedFoveatedRendering;

/// @brief Field HandTracking value: I32(0)
static ::GlobalNamespace::OVRPlugin_FeatureType const HandTracking;

/// @brief Field KeyboardTracking value: I32(1)
static ::GlobalNamespace::OVRPlugin_FeatureType const KeyboardTracking;

/// @brief Field Passthrough value: I32(5)
static ::GlobalNamespace::OVRPlugin_FeatureType const Passthrough;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12080};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_FeatureType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_FeatureType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
