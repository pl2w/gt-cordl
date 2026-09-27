#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetEntityProfilesResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetEntityProfilesResponse)
namespace PlayFab::ProfilesModels {
class EntityProfileBody;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class GetEntityProfilesResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::GetEntityProfilesResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::GetEntityProfilesResponse*, "PlayFab.ProfilesModels", "GetEntityProfilesResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.GetEntityProfilesResponse
class CORDL_TYPE GetEntityProfilesResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Profiles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Profiles, put=__cordl_internal_set_Profiles)) ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityProfileBody*>*  Profiles;

static inline ::PlayFab::ProfilesModels::GetEntityProfilesResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityProfileBody*>* const& __cordl_internal_get_Profiles() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityProfileBody*>*& __cordl_internal_get_Profiles() ;

constexpr void __cordl_internal_set_Profiles(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityProfileBody*>*  value) ;

/// @brief Method .ctor, addr 0xa840740, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetEntityProfilesResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetEntityProfilesResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetEntityProfilesResponse(GetEntityProfilesResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetEntityProfilesResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetEntityProfilesResponse(GetEntityProfilesResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19569};

/// @brief Field Profiles, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityProfileBody*>*  ___Profiles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::GetEntityProfilesResponse, ___Profiles) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::GetEntityProfilesResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
