#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineClip_ClipExtrapolation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelineClip_ClipExtrapolation)
// Forward declare root types
namespace GlobalNamespace {
struct TimelineClip_ClipExtrapolation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimelineClip_ClipExtrapolation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimelineClip_ClipExtrapolation, "UnityEngine.Timeline", "TimelineClip/ClipExtrapolation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelineClip/ClipExtrapolation
struct CORDL_TYPE TimelineClip_ClipExtrapolation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimelineClip_ClipExtrapolation_Unwrapped
enum struct __TimelineClip_ClipExtrapolation_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Hold = static_cast<int32_t>(0x1),
__E_Loop = static_cast<int32_t>(0x2),
__E_PingPong = static_cast<int32_t>(0x3),
__E_Continue = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimelineClip_ClipExtrapolation_Unwrapped () const noexcept {
return static_cast<__TimelineClip_ClipExtrapolation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimelineClip_ClipExtrapolation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimelineClip_ClipExtrapolation(int32_t  value__) noexcept;

/// @brief Field Continue value: I32(4)
static ::GlobalNamespace::TimelineClip_ClipExtrapolation const Continue;

/// @brief Field Hold value: I32(1)
static ::GlobalNamespace::TimelineClip_ClipExtrapolation const Hold;

/// @brief Field Loop value: I32(2)
static ::GlobalNamespace::TimelineClip_ClipExtrapolation const Loop;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::TimelineClip_ClipExtrapolation const None;

/// @brief Field PingPong value: I32(3)
static ::GlobalNamespace::TimelineClip_ClipExtrapolation const PingPong;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28697};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimelineClip_ClipExtrapolation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimelineClip_ClipExtrapolation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
