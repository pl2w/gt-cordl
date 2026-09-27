#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetTitlePlayersFromMasterPlayerAccountIdsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetTitlePlayersFromMasterPlayerAccountIdsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class GetTitlePlayersFromMasterPlayerAccountIdsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest*, "PlayFab.ProfilesModels", "GetTitlePlayersFromMasterPlayerAccountIdsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.GetTitlePlayersFromMasterPlayerAccountIdsRequest
class CORDL_TYPE GetTitlePlayersFromMasterPlayerAccountIdsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field MasterPlayerAccountIds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MasterPlayerAccountIds, put=__cordl_internal_set_MasterPlayerAccountIds)) ::System::Collections::Generic::List_1<::StringW>*  MasterPlayerAccountIds;

/// @brief Field TitleId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

static inline ::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_MasterPlayerAccountIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_MasterPlayerAccountIds() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr void __cordl_internal_set_MasterPlayerAccountIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840758, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTitlePlayersFromMasterPlayerAccountIdsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTitlePlayersFromMasterPlayerAccountIdsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTitlePlayersFromMasterPlayerAccountIdsRequest(GetTitlePlayersFromMasterPlayerAccountIdsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTitlePlayersFromMasterPlayerAccountIdsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTitlePlayersFromMasterPlayerAccountIdsRequest(GetTitlePlayersFromMasterPlayerAccountIdsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19572};

/// @brief Field MasterPlayerAccountIds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___MasterPlayerAccountIds;

/// @brief Field TitleId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TitleId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest, ___MasterPlayerAccountIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest, ___TitleId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
