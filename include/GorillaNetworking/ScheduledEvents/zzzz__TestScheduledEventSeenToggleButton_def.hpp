#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/TestScheduledEventSeenToggleButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TestScheduledEventSeenToggleButton)
// Forward declare root types
namespace GorillaNetworking::ScheduledEvents {
class TestScheduledEventSeenToggleButton;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*, "GorillaNetworking.ScheduledEvents", "TestScheduledEventSeenToggleButton");
// Dependencies GorillaPressableButton
namespace GorillaNetworking::ScheduledEvents {
// Is value type: false
// CS Name: GorillaNetworking.ScheduledEvents.TestScheduledEventSeenToggleButton
class CORDL_TYPE TestScheduledEventSeenToggleButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field nextPollTime, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPollTime, put=__cordl_internal_set_nextPollTime)) float_t  nextPollTime;

/// @brief Method ButtonActivation, addr 0x5ca2900, size 0x140, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton* New_ctor() ;

/// @brief Method RefreshFromPrefs, addr 0x5ca27a0, size 0x11c, virtual false, abstract: false, final false
inline void RefreshFromPrefs() ;

/// @brief Method Start, addr 0x5ca276c, size 0x34, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5ca28bc, size 0x44, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_nextPollTime() const;

constexpr float_t& __cordl_internal_get_nextPollTime() ;

constexpr void __cordl_internal_set_nextPollTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5ca2a40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestScheduledEventSeenToggleButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestScheduledEventSeenToggleButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestScheduledEventSeenToggleButton(TestScheduledEventSeenToggleButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestScheduledEventSeenToggleButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestScheduledEventSeenToggleButton(TestScheduledEventSeenToggleButton const& ) = delete;

/// @brief Field PollInterval offset 0xffffffff size 0x4
static constexpr float_t  PollInterval{static_cast<float_t>(1.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4414};

/// @brief Field nextPollTime, offset: 0xb8, size: 0x4, def value: None
 float_t  ___nextPollTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton, ___nextPollTime) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton) == 0xc0, "Size mismatch!");

} // namespace end def GorillaNetworking::ScheduledEvents
