#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousPropertyTimeline_TimelineEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousPropertyTimeline_TimelineEvent)
// Forward declare root types
namespace GlobalNamespace {
struct ContinuousPropertyTimeline_TimelineEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent, "GorillaTag.Cosmetics", "ContinuousPropertyTimeline/TimelineEvent");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ContinuousPropertyTimeline/TimelineEvent
struct CORDL_TYPE ContinuousPropertyTimeline_TimelineEvent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContinuousPropertyTimeline_TimelineEvent_Unwrapped
enum struct __ContinuousPropertyTimeline_TimelineEvent_Unwrapped : int32_t {
__E_OnReachedEnd = static_cast<int32_t>(0x1),
__E_OnReachedBeginning = static_cast<int32_t>(0x2),
__E_OnEnable = static_cast<int32_t>(0x4),
__E_OnDisable = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContinuousPropertyTimeline_TimelineEvent_Unwrapped () const noexcept {
return static_cast<__ContinuousPropertyTimeline_TimelineEvent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContinuousPropertyTimeline_TimelineEvent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContinuousPropertyTimeline_TimelineEvent(int32_t  value__) noexcept;

/// @brief Field OnDisable value: I32(8)
static ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent const OnDisable;

/// @brief Field OnEnable value: I32(4)
static ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent const OnEnable;

/// @brief Field OnReachedBeginning value: I32(2)
static ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent const OnReachedBeginning;

/// @brief Field OnReachedEnd value: I32(1)
static ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent const OnReachedEnd;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
