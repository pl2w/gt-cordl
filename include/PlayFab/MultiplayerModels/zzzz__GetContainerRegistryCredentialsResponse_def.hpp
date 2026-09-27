#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetContainerRegistryCredentialsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetContainerRegistryCredentialsResponse)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetContainerRegistryCredentialsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsResponse*, "PlayFab.MultiplayerModels", "GetContainerRegistryCredentialsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetContainerRegistryCredentialsResponse
class CORDL_TYPE GetContainerRegistryCredentialsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field DnsName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DnsName, put=__cordl_internal_set_DnsName)) ::StringW  DnsName;

/// @brief Field Password, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Password, put=__cordl_internal_set_Password)) ::StringW  Password;

/// @brief Field Username, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

static inline ::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DnsName() const;

constexpr ::StringW& __cordl_internal_get_DnsName() ;

constexpr ::StringW const& __cordl_internal_get_Password() const;

constexpr ::StringW& __cordl_internal_get_Password() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_DnsName(::StringW  value) ;

constexpr void __cordl_internal_set_Password(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840988, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetContainerRegistryCredentialsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetContainerRegistryCredentialsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetContainerRegistryCredentialsResponse(GetContainerRegistryCredentialsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetContainerRegistryCredentialsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetContainerRegistryCredentialsResponse(GetContainerRegistryCredentialsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19651};

/// @brief Field DnsName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DnsName;

/// @brief Field Password, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Password;

/// @brief Field Username, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Username;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsResponse, ___DnsName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsResponse, ___Password) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsResponse, ___Username) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsResponse) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
