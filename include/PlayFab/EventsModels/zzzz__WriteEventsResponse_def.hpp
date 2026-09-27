#pragma once
// IWYU pragma private; include "PlayFab/EventsModels/WriteEventsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WriteEventsResponse)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::EventsModels {
class WriteEventsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::EventsModels::WriteEventsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::EventsModels::WriteEventsResponse*, "PlayFab.EventsModels", "WriteEventsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::EventsModels {
// Is value type: false
// CS Name: PlayFab.EventsModels.WriteEventsResponse
class CORDL_TYPE WriteEventsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field AssignedEventIds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AssignedEventIds, put=__cordl_internal_set_AssignedEventIds)) ::System::Collections::Generic::List_1<::StringW>*  AssignedEventIds;

static inline ::PlayFab::EventsModels::WriteEventsResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_AssignedEventIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_AssignedEventIds() ;

constexpr void __cordl_internal_set_AssignedEventIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa840f38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WriteEventsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WriteEventsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WriteEventsResponse(WriteEventsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WriteEventsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WriteEventsResponse(WriteEventsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19841};

/// @brief Field AssignedEventIds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___AssignedEventIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::EventsModels::WriteEventsResponse, ___AssignedEventIds) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::EventsModels::WriteEventsResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::EventsModels
