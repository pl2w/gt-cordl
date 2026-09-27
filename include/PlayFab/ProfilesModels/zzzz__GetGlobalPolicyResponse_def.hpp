#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetGlobalPolicyResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetGlobalPolicyResponse)
namespace PlayFab::ProfilesModels {
class EntityPermissionStatement;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class GetGlobalPolicyResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::GetGlobalPolicyResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::GetGlobalPolicyResponse*, "PlayFab.ProfilesModels", "GetGlobalPolicyResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.GetGlobalPolicyResponse
class CORDL_TYPE GetGlobalPolicyResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Permissions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Permissions, put=__cordl_internal_set_Permissions)) ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  Permissions;

static inline ::PlayFab::ProfilesModels::GetGlobalPolicyResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>* const& __cordl_internal_get_Permissions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*& __cordl_internal_get_Permissions() ;

constexpr void __cordl_internal_set_Permissions(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  value) ;

/// @brief Method .ctor, addr 0xa840750, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetGlobalPolicyResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetGlobalPolicyResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetGlobalPolicyResponse(GetGlobalPolicyResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetGlobalPolicyResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetGlobalPolicyResponse(GetGlobalPolicyResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19571};

/// @brief Field Permissions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  ___Permissions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::GetGlobalPolicyResponse, ___Permissions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::GetGlobalPolicyResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
