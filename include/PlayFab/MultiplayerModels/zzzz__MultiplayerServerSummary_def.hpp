#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MultiplayerServerSummary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MultiplayerServerSummary)
namespace PlayFab::MultiplayerModels {
class ConnectedPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class MultiplayerServerSummary;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::MultiplayerServerSummary*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::MultiplayerServerSummary*, "PlayFab.MultiplayerModels", "MultiplayerServerSummary");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.MultiplayerServerSummary
class CORDL_TYPE MultiplayerServerSummary : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ConnectedPlayers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectedPlayers, put=__cordl_internal_set_ConnectedPlayers)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*  ConnectedPlayers;

/// @brief Field LastStateTransitionTime, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_LastStateTransitionTime, put=__cordl_internal_set_LastStateTransitionTime)) ::System::Nullable_1<::System::DateTime>  LastStateTransitionTime;

/// @brief Field Region, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::StringW  Region;

/// @brief Field ServerId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerId, put=__cordl_internal_set_ServerId)) ::StringW  ServerId;

/// @brief Field SessionId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionId, put=__cordl_internal_set_SessionId)) ::StringW  SessionId;

/// @brief Field State, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_State, put=__cordl_internal_set_State)) ::StringW  State;

/// @brief Field VmId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_VmId, put=__cordl_internal_set_VmId)) ::StringW  VmId;

static inline ::PlayFab::MultiplayerModels::MultiplayerServerSummary* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>* const& __cordl_internal_get_ConnectedPlayers() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*& __cordl_internal_get_ConnectedPlayers() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_LastStateTransitionTime() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_LastStateTransitionTime() ;

constexpr ::StringW const& __cordl_internal_get_Region() const;

constexpr ::StringW& __cordl_internal_get_Region() ;

constexpr ::StringW const& __cordl_internal_get_ServerId() const;

constexpr ::StringW& __cordl_internal_get_ServerId() ;

constexpr ::StringW const& __cordl_internal_get_SessionId() const;

constexpr ::StringW& __cordl_internal_get_SessionId() ;

constexpr ::StringW const& __cordl_internal_get_State() const;

constexpr ::StringW& __cordl_internal_get_State() ;

constexpr ::StringW const& __cordl_internal_get_VmId() const;

constexpr ::StringW& __cordl_internal_get_VmId() ;

constexpr void __cordl_internal_set_ConnectedPlayers(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*  value) ;

constexpr void __cordl_internal_set_LastStateTransitionTime(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_Region(::StringW  value) ;

constexpr void __cordl_internal_set_ServerId(::StringW  value) ;

constexpr void __cordl_internal_set_SessionId(::StringW  value) ;

constexpr void __cordl_internal_set_State(::StringW  value) ;

constexpr void __cordl_internal_set_VmId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840b90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiplayerServerSummary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerServerSummary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerServerSummary(MultiplayerServerSummary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerServerSummary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerServerSummary(MultiplayerServerSummary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19716};

/// @brief Field ConnectedPlayers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*  ___ConnectedPlayers;

/// @brief Field LastStateTransitionTime, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___LastStateTransitionTime;

/// @brief Field Region, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Region;

/// @brief Field ServerId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___ServerId;

/// @brief Field SessionId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___SessionId;

/// @brief Field State, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___State;

/// @brief Field VmId, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___VmId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::MultiplayerServerSummary, ___ConnectedPlayers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MultiplayerServerSummary, ___LastStateTransitionTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MultiplayerServerSummary, ___Region) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MultiplayerServerSummary, ___ServerId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MultiplayerServerSummary, ___SessionId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MultiplayerServerSummary, ___State) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MultiplayerServerSummary, ___VmId) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::MultiplayerServerSummary) == 0x50, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
