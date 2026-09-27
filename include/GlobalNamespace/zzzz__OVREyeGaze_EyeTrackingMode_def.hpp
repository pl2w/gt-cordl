#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREyeGaze_EyeTrackingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVREyeGaze_EyeTrackingMode)
// Forward declare root types
namespace GlobalNamespace {
struct OVREyeGaze_EyeTrackingMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVREyeGaze_EyeTrackingMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVREyeGaze_EyeTrackingMode, "", "OVREyeGaze/EyeTrackingMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVREyeGaze/EyeTrackingMode
struct CORDL_TYPE OVREyeGaze_EyeTrackingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVREyeGaze_EyeTrackingMode_Unwrapped
enum struct __OVREyeGaze_EyeTrackingMode_Unwrapped : int32_t {
__E_HeadSpace = static_cast<int32_t>(0x0),
__E_WorldSpace = static_cast<int32_t>(0x1),
__E_TrackingSpace = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVREyeGaze_EyeTrackingMode_Unwrapped () const noexcept {
return static_cast<__OVREyeGaze_EyeTrackingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVREyeGaze_EyeTrackingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVREyeGaze_EyeTrackingMode(int32_t  value__) noexcept;

/// @brief Field HeadSpace value: I32(0)
static ::GlobalNamespace::OVREyeGaze_EyeTrackingMode const HeadSpace;

/// @brief Field TrackingSpace value: I32(2)
static ::GlobalNamespace::OVREyeGaze_EyeTrackingMode const TrackingSpace;

/// @brief Field WorldSpace value: I32(1)
static ::GlobalNamespace::OVREyeGaze_EyeTrackingMode const WorldSpace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11793};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVREyeGaze_EyeTrackingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVREyeGaze_EyeTrackingMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
