#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetEntityProfileResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetEntityProfileResponse)
namespace PlayFab::ProfilesModels {
class EntityProfileBody;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class GetEntityProfileResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::GetEntityProfileResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::GetEntityProfileResponse*, "PlayFab.ProfilesModels", "GetEntityProfileResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.GetEntityProfileResponse
class CORDL_TYPE GetEntityProfileResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Profile, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Profile, put=__cordl_internal_set_Profile)) ::PlayFab::ProfilesModels::EntityProfileBody*  Profile;

static inline ::PlayFab::ProfilesModels::GetEntityProfileResponse* New_ctor() ;

constexpr ::PlayFab::ProfilesModels::EntityProfileBody* const& __cordl_internal_get_Profile() const;

constexpr ::PlayFab::ProfilesModels::EntityProfileBody*& __cordl_internal_get_Profile() ;

constexpr void __cordl_internal_set_Profile(::PlayFab::ProfilesModels::EntityProfileBody*  value) ;

/// @brief Method .ctor, addr 0xa840730, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetEntityProfileResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetEntityProfileResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetEntityProfileResponse(GetEntityProfileResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetEntityProfileResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetEntityProfileResponse(GetEntityProfileResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19567};

/// @brief Field Profile, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ProfilesModels::EntityProfileBody*  ___Profile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::GetEntityProfileResponse, ___Profile) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::GetEntityProfileResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
