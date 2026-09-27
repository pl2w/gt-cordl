#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/SetGlobalPolicyRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(SetGlobalPolicyRequest)
namespace PlayFab::ProfilesModels {
class EntityPermissionStatement;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class SetGlobalPolicyRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::SetGlobalPolicyRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::SetGlobalPolicyRequest*, "PlayFab.ProfilesModels", "SetGlobalPolicyRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.SetGlobalPolicyRequest
class CORDL_TYPE SetGlobalPolicyRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Permissions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Permissions, put=__cordl_internal_set_Permissions)) ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  Permissions;

static inline ::PlayFab::ProfilesModels::SetGlobalPolicyRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>* const& __cordl_internal_get_Permissions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*& __cordl_internal_get_Permissions() ;

constexpr void __cordl_internal_set_Permissions(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  value) ;

/// @brief Method .ctor, addr 0xa840778, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetGlobalPolicyRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetGlobalPolicyRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetGlobalPolicyRequest(SetGlobalPolicyRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetGlobalPolicyRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetGlobalPolicyRequest(SetGlobalPolicyRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19577};

/// @brief Field Permissions, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  ___Permissions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::SetGlobalPolicyRequest, ___Permissions) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::SetGlobalPolicyRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
