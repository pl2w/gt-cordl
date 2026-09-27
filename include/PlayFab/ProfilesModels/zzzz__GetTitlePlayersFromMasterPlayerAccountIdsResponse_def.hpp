#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetTitlePlayersFromMasterPlayerAccountIdsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetTitlePlayersFromMasterPlayerAccountIdsResponse)
namespace PlayFab::ProfilesModels {
class EntityKey;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class GetTitlePlayersFromMasterPlayerAccountIdsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse*, "PlayFab.ProfilesModels", "GetTitlePlayersFromMasterPlayerAccountIdsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.GetTitlePlayersFromMasterPlayerAccountIdsResponse
class CORDL_TYPE GetTitlePlayersFromMasterPlayerAccountIdsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field TitleId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

/// @brief Field TitlePlayerAccounts, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitlePlayerAccounts, put=__cordl_internal_set_TitlePlayerAccounts)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityKey*>*  TitlePlayerAccounts;

static inline ::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityKey*>* const& __cordl_internal_get_TitlePlayerAccounts() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityKey*>*& __cordl_internal_get_TitlePlayerAccounts() ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

constexpr void __cordl_internal_set_TitlePlayerAccounts(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityKey*>*  value) ;

/// @brief Method .ctor, addr 0xa840760, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTitlePlayersFromMasterPlayerAccountIdsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTitlePlayersFromMasterPlayerAccountIdsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTitlePlayersFromMasterPlayerAccountIdsResponse(GetTitlePlayersFromMasterPlayerAccountIdsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTitlePlayersFromMasterPlayerAccountIdsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTitlePlayersFromMasterPlayerAccountIdsResponse(GetTitlePlayersFromMasterPlayerAccountIdsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19573};

/// @brief Field TitleId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field TitlePlayerAccounts, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityKey*>*  ___TitlePlayerAccounts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse, ___TitleId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse, ___TitlePlayerAccounts) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
