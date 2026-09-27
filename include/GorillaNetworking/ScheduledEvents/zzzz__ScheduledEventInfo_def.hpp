#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ScheduledEventInfo)
// Forward declare root types
namespace GorillaNetworking::ScheduledEvents {
struct ScheduledEventInfo;
}
// Write type traits
MARK_VAL_T(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo, "GorillaNetworking.ScheduledEvents", "ScheduledEventInfo");
// Dependencies System.DateTime
namespace GorillaNetworking::ScheduledEvents {
// Is value type: true
// CS Name: GorillaNetworking.ScheduledEvents.ScheduledEventInfo
struct CORDL_TYPE ScheduledEventInfo {
public:
// Declarations
/// @brief Method get_None, addr 0x5ca1d78, size 0xc, virtual false, abstract: false, final false
static inline ::GorillaNetworking::ScheduledEvents::ScheduledEventInfo get_None() ;

// Ctor Parameters []
// @brief default ctor
constexpr ScheduledEventInfo() ;

// Ctor Parameters [CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "scheduledStart", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }]
constexpr ScheduledEventInfo(bool  isActive, ::System::DateTime  scheduledStart) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field isActive, offset: 0x0, size: 0x1, def value: None
 bool  isActive;

/// @brief Field scheduledStart, offset: 0x8, size: 0x8, def value: None
 ::System::DateTime  scheduledStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo, isActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo, scheduledStart) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking::ScheduledEvents
