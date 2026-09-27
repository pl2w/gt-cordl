#pragma once
// IWYU pragma private; include "Fusion/TimelinePoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Tick_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TimelinePoint)
namespace Fusion {
struct Tick;
}
// Forward declare root types
namespace Fusion {
struct TimelinePoint;
}
// Write type traits
MARK_VAL_T(::Fusion::TimelinePoint);
DEFINE_IL2CPP_CLASS(::Fusion::TimelinePoint, "Fusion", "TimelinePoint");
// Dependencies Fusion.Tick
namespace Fusion {
// Is value type: true
// CS Name: Fusion.TimelinePoint
struct CORDL_TYPE TimelinePoint {
public:
// Declarations
/// @brief Method .ctor, addr 0x5fe151c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Tick  snapshot, ::Fusion::Tick  tick, double_t  tickDeltaDouble) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimelinePoint() ;

// Ctor Parameters [CppParam { name: "Snapshot", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tick", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr TimelinePoint(::Fusion::Tick  Snapshot, ::Fusion::Tick  Tick, double_t  Time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19301};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Snapshot, offset: 0x0, size: 0x4, def value: None
 ::Fusion::Tick  Snapshot;

/// @brief Field Tick, offset: 0x4, size: 0x4, def value: None
 ::Fusion::Tick  Tick;

/// @brief Field Time, offset: 0x8, size: 0x8, def value: None
 double_t  Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::TimelinePoint, Snapshot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::TimelinePoint, Tick) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::TimelinePoint, Time) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::TimelinePoint) == 0x10, "Size mismatch!");

} // namespace end def Fusion
