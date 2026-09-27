#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousPropertyTimeline_TimelineEndBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousPropertyTimeline_TimelineEndBehavior)
// Forward declare root types
namespace GlobalNamespace {
struct ContinuousPropertyTimeline_TimelineEndBehavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior, "GorillaTag.Cosmetics", "ContinuousPropertyTimeline/TimelineEndBehavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ContinuousPropertyTimeline/TimelineEndBehavior
struct CORDL_TYPE ContinuousPropertyTimeline_TimelineEndBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContinuousPropertyTimeline_TimelineEndBehavior_Unwrapped
enum struct __ContinuousPropertyTimeline_TimelineEndBehavior_Unwrapped : int32_t {
__E_Stop = static_cast<int32_t>(0x0),
__E_Loop = static_cast<int32_t>(0x1),
__E_PingPong = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContinuousPropertyTimeline_TimelineEndBehavior_Unwrapped () const noexcept {
return static_cast<__ContinuousPropertyTimeline_TimelineEndBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContinuousPropertyTimeline_TimelineEndBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContinuousPropertyTimeline_TimelineEndBehavior(int32_t  value__) noexcept;

/// @brief Field Loop value: I32(1)
static ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior const Loop;

/// @brief Field PingPong value: I32(2)
static ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior const PingPong;

/// @brief Field Stop value: I32(0)
static ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior const Stop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4896};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
