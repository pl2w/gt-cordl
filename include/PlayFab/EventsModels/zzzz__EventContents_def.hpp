#pragma once
// IWYU pragma private; include "PlayFab/EventsModels/EventContents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EventContents)
namespace PlayFab::EventsModels {
class EntityKey;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::EventsModels {
class EventContents;
}
// Write type traits
MARK_REF_T(::PlayFab::EventsModels::EventContents*);
DEFINE_IL2CPP_CLASS(::PlayFab::EventsModels::EventContents*, "PlayFab.EventsModels", "EventContents");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::EventsModels {
// Is value type: false
// CS Name: PlayFab.EventsModels.EventContents
class CORDL_TYPE EventContents : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Entity, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::EventsModels::EntityKey*  Entity;

/// @brief Field EventNamespace, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EventNamespace, put=__cordl_internal_set_EventNamespace)) ::StringW  EventNamespace;

/// @brief Field Name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field OriginalId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OriginalId, put=__cordl_internal_set_OriginalId)) ::StringW  OriginalId;

/// @brief Field OriginalTimestamp, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_OriginalTimestamp, put=__cordl_internal_set_OriginalTimestamp)) ::System::Nullable_1<::System::DateTime>  OriginalTimestamp;

/// @brief Field Payload, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Payload, put=__cordl_internal_set_Payload)) ::System::Object*  Payload;

/// @brief Field PayloadJSON, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PayloadJSON, put=__cordl_internal_set_PayloadJSON)) ::StringW  PayloadJSON;

static inline ::PlayFab::EventsModels::EventContents* New_ctor() ;

constexpr ::PlayFab::EventsModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::EventsModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::StringW const& __cordl_internal_get_EventNamespace() const;

constexpr ::StringW& __cordl_internal_get_EventNamespace() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::StringW const& __cordl_internal_get_OriginalId() const;

constexpr ::StringW& __cordl_internal_get_OriginalId() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_OriginalTimestamp() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_OriginalTimestamp() ;

constexpr ::System::Object* const& __cordl_internal_get_Payload() const;

constexpr ::System::Object*& __cordl_internal_get_Payload() ;

constexpr ::StringW const& __cordl_internal_get_PayloadJSON() const;

constexpr ::StringW& __cordl_internal_get_PayloadJSON() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::EventsModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_EventNamespace(::StringW  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_OriginalId(::StringW  value) ;

constexpr void __cordl_internal_set_OriginalTimestamp(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_Payload(::System::Object*  value) ;

constexpr void __cordl_internal_set_PayloadJSON(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840f28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventContents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventContents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventContents(EventContents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventContents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventContents(EventContents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19839};

/// @brief Field Entity, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::EventsModels::EntityKey*  ___Entity;

/// @brief Field EventNamespace, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___EventNamespace;

/// @brief Field Name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field OriginalId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___OriginalId;

/// @brief Field OriginalTimestamp, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___OriginalTimestamp;

/// @brief Field Payload, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  ___Payload;

/// @brief Field PayloadJSON, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___PayloadJSON;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::EventsModels::EventContents, ___Entity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::EventsModels::EventContents, ___EventNamespace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::EventsModels::EventContents, ___Name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::EventsModels::EventContents, ___OriginalId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::EventsModels::EventContents, ___OriginalTimestamp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::EventsModels::EventContents, ___Payload) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::EventsModels::EventContents, ___PayloadJSON) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::EventsModels::EventContents) == 0x50, "Size mismatch!");

} // namespace end def PlayFab::EventsModels
