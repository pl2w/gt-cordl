#pragma once
// IWYU pragma private; include "GlobalNamespace/GetPlayerData_Data.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetSessionResponseType_def.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayerData_Data)
namespace GlobalNamespace {
class GetPlayerDataResponse;
}
namespace GlobalNamespace {
struct GetSessionResponseType;
}
namespace GlobalNamespace {
class TMPSession;
}
// Forward declare root types
namespace GlobalNamespace {
class GetPlayerData_Data;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetPlayerData_Data*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetPlayerData_Data*, "", "GetPlayerData_Data");
// Dependencies GetSessionResponseType, SessionStatus, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetPlayerData_Data
class CORDL_TYPE GetPlayerData_Data : public ::System::Object {
public:
// Declarations
/// @brief Field HasConfirmedSetup, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_HasConfirmedSetup, put=__cordl_internal_set_HasConfirmedSetup)) bool  HasConfirmedSetup;

/// @brief Field OptInPermissions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OptInPermissions, put=__cordl_internal_set_OptInPermissions)) ::ArrayW<::StringW>  OptInPermissions;

/// @brief Field responseType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_responseType, put=__cordl_internal_set_responseType)) ::GlobalNamespace::GetSessionResponseType  responseType;

/// @brief Field session, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_session, put=__cordl_internal_set_session)) ::GlobalNamespace::TMPSession*  session;

/// @brief Field status, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) ::System::Nullable_1<::GlobalNamespace::SessionStatus>  status;

static inline ::GlobalNamespace::GetPlayerData_Data* New_ctor(::GlobalNamespace::GetSessionResponseType  type, ::GlobalNamespace::GetPlayerDataResponse*  response) ;

constexpr bool const& __cordl_internal_get_HasConfirmedSetup() const;

constexpr bool& __cordl_internal_get_HasConfirmedSetup() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_OptInPermissions() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_OptInPermissions() ;

constexpr ::GlobalNamespace::GetSessionResponseType const& __cordl_internal_get_responseType() const;

constexpr ::GlobalNamespace::GetSessionResponseType& __cordl_internal_get_responseType() ;

constexpr ::GlobalNamespace::TMPSession* const& __cordl_internal_get_session() const;

constexpr ::GlobalNamespace::TMPSession*& __cordl_internal_get_session() ;

constexpr ::System::Nullable_1<::GlobalNamespace::SessionStatus> const& __cordl_internal_get_status() const;

constexpr ::System::Nullable_1<::GlobalNamespace::SessionStatus>& __cordl_internal_get_status() ;

constexpr void __cordl_internal_set_HasConfirmedSetup(bool  value) ;

constexpr void __cordl_internal_set_OptInPermissions(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_responseType(::GlobalNamespace::GetSessionResponseType  value) ;

constexpr void __cordl_internal_set_session(::GlobalNamespace::TMPSession*  value) ;

constexpr void __cordl_internal_set_status(::System::Nullable_1<::GlobalNamespace::SessionStatus>  value) ;

/// @brief Method .ctor, addr 0x5a257d4, size 0x1ec, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GetSessionResponseType  type, ::GlobalNamespace::GetPlayerDataResponse*  response) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerData_Data() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerData_Data", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerData_Data(GetPlayerData_Data && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerData_Data", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerData_Data(GetPlayerData_Data const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2862};

/// @brief Field responseType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GetSessionResponseType  ___responseType;

/// @brief Field status, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::SessionStatus>  ___status;

/// @brief Field session, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::TMPSession*  ___session;

/// [Nullable(new[] { 2, 0 })]
/// @brief Field OptInPermissions, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___OptInPermissions;

/// @brief Field HasConfirmedSetup, offset: 0x38, size: 0x1, def value: None
 bool  ___HasConfirmedSetup;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetPlayerData_Data, ___responseType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetPlayerData_Data, ___status) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetPlayerData_Data, ___session) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetPlayerData_Data, ___OptInPermissions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetPlayerData_Data, ___HasConfirmedSetup) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetPlayerData_Data) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
