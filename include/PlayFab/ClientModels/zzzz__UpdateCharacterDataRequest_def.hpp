#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateCharacterDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__UserDataPermission_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateCharacterDataRequest)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class UpdateCharacterDataRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UpdateCharacterDataRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UpdateCharacterDataRequest*, "PlayFab.ClientModels", "UpdateCharacterDataRequest");
// Dependencies PlayFab.ClientModels.UserDataPermission, PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UpdateCharacterDataRequest
class CORDL_TYPE UpdateCharacterDataRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CharacterId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field Data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Data;

/// @brief Field KeysToRemove, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeysToRemove, put=__cordl_internal_set_KeysToRemove)) ::System::Collections::Generic::List_1<::StringW>*  KeysToRemove;

/// @brief Field Permission, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_Permission, put=__cordl_internal_set_Permission)) ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>  Permission;

static inline ::PlayFab::ClientModels::UpdateCharacterDataRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_Data() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_KeysToRemove() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_KeysToRemove() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission> const& __cordl_internal_get_Permission() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>& __cordl_internal_get_Permission() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_KeysToRemove(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_Permission(::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>  value) ;

/// @brief Method .ctor, addr 0xa84e3f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateCharacterDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateCharacterDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateCharacterDataRequest(UpdateCharacterDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateCharacterDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateCharacterDataRequest(UpdateCharacterDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20279};

/// @brief Field CharacterId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field Data, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___Data;

/// @brief Field KeysToRemove, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___KeysToRemove;

/// @brief Field Permission, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>  ___Permission;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UpdateCharacterDataRequest, ___CharacterId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UpdateCharacterDataRequest, ___Data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UpdateCharacterDataRequest, ___KeysToRemove) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UpdateCharacterDataRequest, ___Permission) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UpdateCharacterDataRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
