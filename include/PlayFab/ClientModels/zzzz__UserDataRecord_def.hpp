#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserDataRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__UserDataPermission_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserDataRecord)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserDataRecord;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserDataRecord*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserDataRecord*, "PlayFab.ClientModels", "UserDataRecord");
// Dependencies PlayFab.ClientModels.UserDataPermission, PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserDataRecord
class CORDL_TYPE UserDataRecord : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field LastUpdated, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_LastUpdated, put=__cordl_internal_set_LastUpdated)) ::System::DateTime  LastUpdated;

/// @brief Field Permission, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_Permission, put=__cordl_internal_set_Permission)) ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>  Permission;

/// @brief Field Value, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) ::StringW  Value;

static inline ::PlayFab::ClientModels::UserDataRecord* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get_LastUpdated() const;

constexpr ::System::DateTime& __cordl_internal_get_LastUpdated() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission> const& __cordl_internal_get_Permission() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>& __cordl_internal_get_Permission() ;

constexpr ::StringW const& __cordl_internal_get_Value() const;

constexpr ::StringW& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_LastUpdated(::System::DateTime  value) ;

constexpr void __cordl_internal_set_Permission(::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>  value) ;

constexpr void __cordl_internal_set_Value(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e478, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataRecord() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataRecord", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataRecord(UserDataRecord && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataRecord", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataRecord(UserDataRecord const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20296};

/// @brief Field LastUpdated, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ___LastUpdated;

/// @brief Field Permission, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>  ___Permission;

/// @brief Field Value, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Value;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserDataRecord, ___LastUpdated) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserDataRecord, ___Permission) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserDataRecord, ___Value) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserDataRecord) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
