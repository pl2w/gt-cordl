#pragma once
// IWYU pragma private; include "GlobalNamespace/GetPlayerDataResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayerDataResponse)
namespace GlobalNamespace {
class KIDDefaultSession;
}
namespace KID::Model {
class Session;
}
// Forward declare root types
namespace GlobalNamespace {
class GetPlayerDataResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetPlayerDataResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetPlayerDataResponse*, "", "GetPlayerDataResponse");
// Dependencies SessionStatus, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetPlayerDataResponse
class CORDL_TYPE GetPlayerDataResponse : public ::System::Object {
public:
// Declarations
/// @brief Field DefaultSession, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultSession, put=__cordl_internal_set_DefaultSession)) ::GlobalNamespace::KIDDefaultSession*  DefaultSession;

/// @brief Field HasConfirmedSetup, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_HasConfirmedSetup, put=__cordl_internal_set_HasConfirmedSetup)) bool  HasConfirmedSetup;

/// @brief Field Permissions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Permissions, put=__cordl_internal_set_Permissions)) ::ArrayW<::StringW>  Permissions;

/// @brief Field Session, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Session, put=__cordl_internal_set_Session)) ::KID::Model::Session*  Session;

/// @brief Field Status, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::System::Nullable_1<::GlobalNamespace::SessionStatus>  Status;

static inline ::GlobalNamespace::GetPlayerDataResponse* New_ctor() ;

constexpr ::GlobalNamespace::KIDDefaultSession* const& __cordl_internal_get_DefaultSession() const;

constexpr ::GlobalNamespace::KIDDefaultSession*& __cordl_internal_get_DefaultSession() ;

constexpr bool const& __cordl_internal_get_HasConfirmedSetup() const;

constexpr bool& __cordl_internal_get_HasConfirmedSetup() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_Permissions() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_Permissions() ;

constexpr ::KID::Model::Session* const& __cordl_internal_get_Session() const;

constexpr ::KID::Model::Session*& __cordl_internal_get_Session() ;

constexpr ::System::Nullable_1<::GlobalNamespace::SessionStatus> const& __cordl_internal_get_Status() const;

constexpr ::System::Nullable_1<::GlobalNamespace::SessionStatus>& __cordl_internal_get_Status() ;

constexpr void __cordl_internal_set_DefaultSession(::GlobalNamespace::KIDDefaultSession*  value) ;

constexpr void __cordl_internal_set_HasConfirmedSetup(bool  value) ;

constexpr void __cordl_internal_set_Permissions(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_Session(::KID::Model::Session*  value) ;

constexpr void __cordl_internal_set_Status(::System::Nullable_1<::GlobalNamespace::SessionStatus>  value) ;

/// @brief Method .ctor, addr 0x5a262ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerDataResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerDataResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerDataResponse(GetPlayerDataResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerDataResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerDataResponse(GetPlayerDataResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2883};

/// @brief Field Status, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::SessionStatus>  ___Status;

/// @brief Field Session, offset: 0x20, size: 0x8, def value: None
 ::KID::Model::Session*  ___Session;

/// @brief Field DefaultSession, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::KIDDefaultSession*  ___DefaultSession;

/// @brief Field Permissions, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___Permissions;

/// @brief Field HasConfirmedSetup, offset: 0x38, size: 0x1, def value: None
 bool  ___HasConfirmedSetup;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetPlayerDataResponse, ___Status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetPlayerDataResponse, ___Session) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetPlayerDataResponse, ___DefaultSession) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetPlayerDataResponse, ___Permissions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetPlayerDataResponse, ___HasConfirmedSetup) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetPlayerDataResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
