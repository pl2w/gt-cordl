#pragma once
// IWYU pragma private; include "PlayFab/Public/ScreenTimeTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenTimeTracker)
namespace PlayFab::EventsModels {
class EntityKey;
}
namespace PlayFab::EventsModels {
class EventContents;
}
namespace PlayFab::EventsModels {
class WriteEventsResponse;
}
namespace PlayFab::Public {
class IScreenTimeTracker;
}
namespace PlayFab {
class PlayFabError;
}
namespace PlayFab {
class PlayFabEventsInstanceAPI;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace PlayFab::Public {
class ScreenTimeTracker;
}
// Write type traits
MARK_REF_T(::PlayFab::Public::ScreenTimeTracker*);
DEFINE_IL2CPP_CLASS(::PlayFab::Public::ScreenTimeTracker*, "PlayFab.Public", "ScreenTimeTracker");
// Dependencies System.DateTime, System.Guid, System.Object
namespace PlayFab::Public {
// Is value type: false
// CS Name: PlayFab.Public.ScreenTimeTracker
class CORDL_TYPE ScreenTimeTracker : public ::System::Object {
public:
// Declarations
/// @brief Field entityKey, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityKey, put=__cordl_internal_set_entityKey)) ::PlayFab::EventsModels::EntityKey*  entityKey;

/// @brief Field eventApi, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventApi, put=__cordl_internal_set_eventApi)) ::PlayFab::PlayFabEventsInstanceAPI*  eventApi;

/// @brief Field eventsRequests, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventsRequests, put=__cordl_internal_set_eventsRequests)) ::System::Collections::Generic::Queue_1<::PlayFab::EventsModels::EventContents*>*  eventsRequests;

/// @brief Field focusId, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_focusId, put=__cordl_internal_set_focusId)) ::System::Guid  focusId;

/// @brief Field focusOffDateTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_focusOffDateTime, put=__cordl_internal_set_focusOffDateTime)) ::System::DateTime  focusOffDateTime;

/// @brief Field focusOnDateTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_focusOnDateTime, put=__cordl_internal_set_focusOnDateTime)) ::System::DateTime  focusOnDateTime;

/// @brief Field gameSessionID, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_gameSessionID, put=__cordl_internal_set_gameSessionID)) ::System::Guid  gameSessionID;

/// @brief Field initialFocus, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialFocus, put=__cordl_internal_set_initialFocus)) bool  initialFocus;

/// @brief Field isSending, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSending, put=__cordl_internal_set_isSending)) bool  isSending;

/// @brief Convert operator to "::PlayFab::Public::IScreenTimeTracker"
constexpr operator  ::PlayFab::Public::IScreenTimeTracker*() noexcept;

/// @brief Method ClientSessionStart, addr 0xa8410bc, size 0x348, virtual true, abstract: false, final true
inline void ClientSessionStart(::StringW  entityId, ::StringW  entityType, ::StringW  playFabUserId) ;

/// @brief Method EventSentErrorCallback, addr 0xa841ae4, size 0x9c, virtual false, abstract: false, final false
inline void EventSentErrorCallback(::PlayFab::PlayFabError*  response) ;

/// @brief Method EventSentSuccessfulCallback, addr 0xa841ae0, size 0x4, virtual false, abstract: false, final false
inline void EventSentSuccessfulCallback(::PlayFab::EventsModels::WriteEventsResponse*  response) ;

static inline ::PlayFab::Public::ScreenTimeTracker* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0xa841404, size 0x43c, virtual true, abstract: false, final true
inline void OnApplicationFocus(bool  isFocused) ;

/// @brief Method OnApplicationQuit, addr 0xa841b8c, size 0x4, virtual true, abstract: false, final true
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0xa841b88, size 0x4, virtual true, abstract: false, final true
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa841b84, size 0x4, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa841b80, size 0x4, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method Send, addr 0xa841840, size 0x2a0, virtual true, abstract: false, final true
inline void Send() ;

constexpr ::PlayFab::EventsModels::EntityKey* const& __cordl_internal_get_entityKey() const;

constexpr ::PlayFab::EventsModels::EntityKey*& __cordl_internal_get_entityKey() ;

constexpr ::PlayFab::PlayFabEventsInstanceAPI* const& __cordl_internal_get_eventApi() const;

constexpr ::PlayFab::PlayFabEventsInstanceAPI*& __cordl_internal_get_eventApi() ;

constexpr ::System::Collections::Generic::Queue_1<::PlayFab::EventsModels::EventContents*>* const& __cordl_internal_get_eventsRequests() const;

constexpr ::System::Collections::Generic::Queue_1<::PlayFab::EventsModels::EventContents*>*& __cordl_internal_get_eventsRequests() ;

constexpr ::System::Guid const& __cordl_internal_get_focusId() const;

constexpr ::System::Guid& __cordl_internal_get_focusId() ;

constexpr ::System::DateTime const& __cordl_internal_get_focusOffDateTime() const;

constexpr ::System::DateTime& __cordl_internal_get_focusOffDateTime() ;

constexpr ::System::DateTime const& __cordl_internal_get_focusOnDateTime() const;

constexpr ::System::DateTime& __cordl_internal_get_focusOnDateTime() ;

constexpr ::System::Guid const& __cordl_internal_get_gameSessionID() const;

constexpr ::System::Guid& __cordl_internal_get_gameSessionID() ;

constexpr bool const& __cordl_internal_get_initialFocus() const;

constexpr bool& __cordl_internal_get_initialFocus() ;

constexpr bool const& __cordl_internal_get_isSending() const;

constexpr bool& __cordl_internal_get_isSending() ;

constexpr void __cordl_internal_set_entityKey(::PlayFab::EventsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_eventApi(::PlayFab::PlayFabEventsInstanceAPI*  value) ;

constexpr void __cordl_internal_set_eventsRequests(::System::Collections::Generic::Queue_1<::PlayFab::EventsModels::EventContents*>*  value) ;

constexpr void __cordl_internal_set_focusId(::System::Guid  value) ;

constexpr void __cordl_internal_set_focusOffDateTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_focusOnDateTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_gameSessionID(::System::Guid  value) ;

constexpr void __cordl_internal_set_initialFocus(bool  value) ;

constexpr void __cordl_internal_set_isSending(bool  value) ;

/// @brief Method .ctor, addr 0xa840f40, size 0x17c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::PlayFab::Public::IScreenTimeTracker"
constexpr ::PlayFab::Public::IScreenTimeTracker* i___PlayFab__Public__IScreenTimeTracker() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenTimeTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenTimeTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenTimeTracker(ScreenTimeTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenTimeTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenTimeTracker(ScreenTimeTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19843};

/// @brief Field eventNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  eventNamespace{u"com.playfab.events.sessions"};

/// @brief Field maxBatchSizeInEvents offset 0xffffffff size 0x4
static constexpr int32_t  maxBatchSizeInEvents{static_cast<int32_t>(0xa)};

/// @brief Field focusId, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ___focusId;

/// @brief Field gameSessionID, offset: 0x20, size: 0x10, def value: None
 ::System::Guid  ___gameSessionID;

/// @brief Field initialFocus, offset: 0x30, size: 0x1, def value: None
 bool  ___initialFocus;

/// @brief Field isSending, offset: 0x31, size: 0x1, def value: None
 bool  ___isSending;

/// @brief Field focusOffDateTime, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  ___focusOffDateTime;

/// @brief Field focusOnDateTime, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ___focusOnDateTime;

/// @brief Field eventsRequests, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::PlayFab::EventsModels::EventContents*>*  ___eventsRequests;

/// @brief Field entityKey, offset: 0x50, size: 0x8, def value: None
 ::PlayFab::EventsModels::EntityKey*  ___entityKey;

/// @brief Field eventApi, offset: 0x58, size: 0x8, def value: None
 ::PlayFab::PlayFabEventsInstanceAPI*  ___eventApi;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Public::ScreenTimeTracker, ___focusId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::ScreenTimeTracker, ___gameSessionID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::ScreenTimeTracker, ___initialFocus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::ScreenTimeTracker, ___isSending) == 0x31, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::ScreenTimeTracker, ___focusOffDateTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::ScreenTimeTracker, ___focusOnDateTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::ScreenTimeTracker, ___eventsRequests) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::ScreenTimeTracker, ___entityKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::ScreenTimeTracker, ___eventApi) == 0x58, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Public::ScreenTimeTracker) == 0x60, "Size mismatch!");

} // namespace end def PlayFab::Public
