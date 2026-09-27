#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/TestScheduledEventStateCycleButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TestScheduledEventStateCycleButton)
// Forward declare root types
namespace GorillaNetworking::ScheduledEvents {
class TestScheduledEventStateCycleButton;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*, "GorillaNetworking.ScheduledEvents", "TestScheduledEventStateCycleButton");
// Dependencies GorillaPressableButton
namespace GorillaNetworking::ScheduledEvents {
// Is value type: false
// CS Name: GorillaNetworking.ScheduledEvents.TestScheduledEventStateCycleButton
class CORDL_TYPE TestScheduledEventStateCycleButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field lastRenderedState, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastRenderedState, put=__cordl_internal_set_lastRenderedState)) ::StringW  lastRenderedState;

/// @brief Method ButtonActivation, addr 0x5ca2a48, size 0x14c, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton* New_ctor() ;

/// @brief Method NextState, addr 0x5ca2c78, size 0x98, virtual false, abstract: false, final false
static inline ::StringW NextState(::StringW  current) ;

/// @brief Method ReadState, addr 0x5ca2b94, size 0xe4, virtual false, abstract: false, final false
static inline ::StringW ReadState() ;

/// @brief Method RenderState, addr 0x5ca2d10, size 0x70, virtual false, abstract: false, final false
inline void RenderState(::StringW  state) ;

/// @brief Method Update, addr 0x5ca2d80, size 0x44, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::StringW const& __cordl_internal_get_lastRenderedState() const;

constexpr ::StringW& __cordl_internal_get_lastRenderedState() ;

constexpr void __cordl_internal_set_lastRenderedState(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ca2dc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestScheduledEventStateCycleButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestScheduledEventStateCycleButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestScheduledEventStateCycleButton(TestScheduledEventStateCycleButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestScheduledEventStateCycleButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestScheduledEventStateCycleButton(TestScheduledEventStateCycleButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4415};

/// @brief Field lastRenderedState, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___lastRenderedState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton, ___lastRenderedState) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton) == 0xc0, "Size mismatch!");

} // namespace end def GorillaNetworking::ScheduledEvents
