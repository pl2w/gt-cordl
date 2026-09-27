#pragma once
// IWYU pragma private; include "PlayFab/EventsModels/WriteEventsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(WriteEventsRequest)
namespace PlayFab::EventsModels {
class EventContents;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::EventsModels {
class WriteEventsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::EventsModels::WriteEventsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::EventsModels::WriteEventsRequest*, "PlayFab.EventsModels", "WriteEventsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::EventsModels {
// Is value type: false
// CS Name: PlayFab.EventsModels.WriteEventsRequest
class CORDL_TYPE WriteEventsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Events, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Events, put=__cordl_internal_set_Events)) ::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>*  Events;

static inline ::PlayFab::EventsModels::WriteEventsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>* const& __cordl_internal_get_Events() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>*& __cordl_internal_get_Events() ;

constexpr void __cordl_internal_set_Events(::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>*  value) ;

/// @brief Method .ctor, addr 0xa840f30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WriteEventsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WriteEventsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WriteEventsRequest(WriteEventsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WriteEventsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WriteEventsRequest(WriteEventsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19840};

/// @brief Field Events, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>*  ___Events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::EventsModels::WriteEventsRequest, ___Events) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::EventsModels::WriteEventsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::EventsModels
