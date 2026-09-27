#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetEntityProfilesRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(GetEntityProfilesRequest)
namespace PlayFab::ProfilesModels {
class EntityKey;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class GetEntityProfilesRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::GetEntityProfilesRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::GetEntityProfilesRequest*, "PlayFab.ProfilesModels", "GetEntityProfilesRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.GetEntityProfilesRequest
class CORDL_TYPE GetEntityProfilesRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field DataAsObject, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_DataAsObject, put=__cordl_internal_set_DataAsObject)) ::System::Nullable_1<bool>  DataAsObject;

/// @brief Field Entities, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entities, put=__cordl_internal_set_Entities)) ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityKey*>*  Entities;

static inline ::PlayFab::ProfilesModels::GetEntityProfilesRequest* New_ctor() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_DataAsObject() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_DataAsObject() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityKey*>* const& __cordl_internal_get_Entities() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityKey*>*& __cordl_internal_get_Entities() ;

constexpr void __cordl_internal_set_DataAsObject(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_Entities(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityKey*>*  value) ;

/// @brief Method .ctor, addr 0xa840738, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetEntityProfilesRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetEntityProfilesRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetEntityProfilesRequest(GetEntityProfilesRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetEntityProfilesRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetEntityProfilesRequest(GetEntityProfilesRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19568};

/// @brief Field DataAsObject, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___DataAsObject;

/// @brief Field Entities, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityKey*>*  ___Entities;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::GetEntityProfilesRequest, ___DataAsObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::GetEntityProfilesRequest, ___Entities) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::GetEntityProfilesRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
