#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputTracking_TrackingStateEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputTracking_TrackingStateEventType)
// Forward declare root types
namespace GlobalNamespace {
struct InputTracking_TrackingStateEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputTracking_TrackingStateEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputTracking_TrackingStateEventType, "UnityEngine.XR", "InputTracking/TrackingStateEventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.InputTracking/TrackingStateEventType
struct CORDL_TYPE InputTracking_TrackingStateEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputTracking_TrackingStateEventType_Unwrapped
enum struct __InputTracking_TrackingStateEventType_Unwrapped : int32_t {
__E_NodeAdded = static_cast<int32_t>(0x0),
__E_NodeRemoved = static_cast<int32_t>(0x1),
__E_TrackingAcquired = static_cast<int32_t>(0x2),
__E_TrackingLost = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputTracking_TrackingStateEventType_Unwrapped () const noexcept {
return static_cast<__InputTracking_TrackingStateEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputTracking_TrackingStateEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputTracking_TrackingStateEventType(int32_t  value__) noexcept;

/// @brief Field NodeAdded value: I32(0)
static ::GlobalNamespace::InputTracking_TrackingStateEventType const NodeAdded;

/// @brief Field NodeRemoved value: I32(1)
static ::GlobalNamespace::InputTracking_TrackingStateEventType const NodeRemoved;

/// @brief Field TrackingAcquired value: I32(2)
static ::GlobalNamespace::InputTracking_TrackingStateEventType const TrackingAcquired;

/// @brief Field TrackingLost value: I32(3)
static ::GlobalNamespace::InputTracking_TrackingStateEventType const TrackingLost;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31605};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputTracking_TrackingStateEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputTracking_TrackingStateEventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
