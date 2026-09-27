#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetAccountInfoRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetAccountInfoRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetAccountInfoRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetAccountInfoRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetAccountInfoRequest*, "PlayFab.ClientModels", "GetAccountInfoRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetAccountInfoRequest
class CORDL_TYPE GetAccountInfoRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Email, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

/// @brief Field PlayFabId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field TitleDisplayName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleDisplayName, put=__cordl_internal_set_TitleDisplayName)) ::StringW  TitleDisplayName;

/// @brief Field Username, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

static inline ::PlayFab::ClientModels::GetAccountInfoRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_TitleDisplayName() const;

constexpr ::StringW& __cordl_internal_get_TitleDisplayName() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_TitleDisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dbb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetAccountInfoRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetAccountInfoRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetAccountInfoRequest(GetAccountInfoRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetAccountInfoRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetAccountInfoRequest(GetAccountInfoRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20006};

/// @brief Field Email, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Email;

/// @brief Field PlayFabId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field TitleDisplayName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___TitleDisplayName;

/// @brief Field Username, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Username;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetAccountInfoRequest, ___Email) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetAccountInfoRequest, ___PlayFabId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetAccountInfoRequest, ___TitleDisplayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetAccountInfoRequest, ___Username) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetAccountInfoRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
