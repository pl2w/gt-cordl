#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventMatchmaking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScheduledEventMatchmaking)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace GorillaNetworking::ScheduledEvents {
struct ScheduledEventInfo;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventMatchmaking;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*, "GorillaNetworking.ScheduledEvents", "ScheduledEventMatchmaking");
// Dependencies System.Object
namespace GorillaNetworking::ScheduledEvents {
// Is value type: false
// CS Name: GorillaNetworking.ScheduledEvents.ScheduledEventMatchmaking
class CORDL_TYPE ScheduledEventMatchmaking : public ::System::Object {
public:
// Declarations
/// @brief Method ApplyScheduledEventStateToHashes, addr 0x5ca2244, size 0x10, virtual false, abstract: false, final false
static inline void ApplyScheduledEventStateToHashes(::ExitGames::Client::Photon::Hashtable*  createProps, ::by_ref<::ExitGames::Client::Photon::Hashtable*>  searchFilter) ;

/// @brief Method GracePeriodEnded, addr 0x5ca1d84, size 0xd4, virtual false, abstract: false, final false
static inline bool GracePeriodEnded(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo  e, ::System::DateTime  serverNow) ;

/// @brief Method HasSeenScheduledEventRecently, addr 0x5ca2070, size 0x124, virtual false, abstract: false, final false
static inline bool HasSeenScheduledEventRecently(::System::DateTime  serverNow) ;

/// @brief Method MarkSeenScheduledEventNow, addr 0x5ca2194, size 0xb0, virtual false, abstract: false, final false
static inline void MarkSeenScheduledEventNow(::System::DateTime  serverNow) ;

/// @brief Method ResolveCreateState, addr 0x5ca1e58, size 0x180, virtual false, abstract: false, final false
static inline ::StringW ResolveCreateState(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo  e, ::System::DateTime  serverNow, bool  creatorSeenRecently) ;

/// @brief Method ResolveSearchState, addr 0x5ca1fd8, size 0x98, virtual false, abstract: false, final false
static inline ::StringW ResolveSearchState(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo  e, ::System::DateTime  serverNow, bool  joinerSeenRecently) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScheduledEventMatchmaking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventMatchmaking", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScheduledEventMatchmaking(ScheduledEventMatchmaking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventMatchmaking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScheduledEventMatchmaking(ScheduledEventMatchmaking const& ) = delete;

/// @brief Field StateInProgress offset 0xffffffff size 0x8
static constexpr ::ConstString  StateInProgress{u"event-in-progress"};

/// @brief Field StatePostEvent offset 0xffffffff size 0x8
static constexpr ::ConstString  StatePostEvent{u"post-event"};

/// @brief Field StateRegular offset 0xffffffff size 0x8
static constexpr ::ConstString  StateRegular{u"regular"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking::ScheduledEvents
