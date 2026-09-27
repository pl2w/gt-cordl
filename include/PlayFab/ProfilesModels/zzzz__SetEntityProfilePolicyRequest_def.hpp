#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/SetEntityProfilePolicyRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(SetEntityProfilePolicyRequest)
namespace PlayFab::ProfilesModels {
class EntityKey;
}
namespace PlayFab::ProfilesModels {
class EntityPermissionStatement;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class SetEntityProfilePolicyRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest*, "PlayFab.ProfilesModels", "SetEntityProfilePolicyRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.SetEntityProfilePolicyRequest
class CORDL_TYPE SetEntityProfilePolicyRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::ProfilesModels::EntityKey*  Entity;

/// @brief Field Statements, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Statements, put=__cordl_internal_set_Statements)) ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  Statements;

static inline ::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest* New_ctor() ;

constexpr ::PlayFab::ProfilesModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::ProfilesModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>* const& __cordl_internal_get_Statements() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*& __cordl_internal_get_Statements() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::ProfilesModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_Statements(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  value) ;

/// @brief Method .ctor, addr 0xa840768, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetEntityProfilePolicyRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetEntityProfilePolicyRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetEntityProfilePolicyRequest(SetEntityProfilePolicyRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetEntityProfilePolicyRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetEntityProfilePolicyRequest(SetEntityProfilePolicyRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19575};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::ProfilesModels::EntityKey*  ___Entity;

/// @brief Field Statements, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*  ___Statements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest, ___Statements) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::SetEntityProfilePolicyRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
