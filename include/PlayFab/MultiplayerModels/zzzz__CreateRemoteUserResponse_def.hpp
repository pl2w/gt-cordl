#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateRemoteUserResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateRemoteUserResponse)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CreateRemoteUserResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CreateRemoteUserResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CreateRemoteUserResponse*, "PlayFab.MultiplayerModels", "CreateRemoteUserResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CreateRemoteUserResponse
class CORDL_TYPE CreateRemoteUserResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field ExpirationTime, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ExpirationTime, put=__cordl_internal_set_ExpirationTime)) ::System::Nullable_1<::System::DateTime>  ExpirationTime;

/// @brief Field Password, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Password, put=__cordl_internal_set_Password)) ::StringW  Password;

/// @brief Field Username, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

static inline ::PlayFab::MultiplayerModels::CreateRemoteUserResponse* New_ctor() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_ExpirationTime() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_ExpirationTime() ;

constexpr ::StringW const& __cordl_internal_get_Password() const;

constexpr ::StringW& __cordl_internal_get_Password() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_ExpirationTime(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_Password(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840888, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateRemoteUserResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateRemoteUserResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateRemoteUserResponse(CreateRemoteUserResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateRemoteUserResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateRemoteUserResponse(CreateRemoteUserResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19619};

/// @brief Field ExpirationTime, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___ExpirationTime;

/// @brief Field Password, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Password;

/// @brief Field Username, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Username;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CreateRemoteUserResponse, ___ExpirationTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateRemoteUserResponse, ___Password) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateRemoteUserResponse, ___Username) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CreateRemoteUserResponse) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
