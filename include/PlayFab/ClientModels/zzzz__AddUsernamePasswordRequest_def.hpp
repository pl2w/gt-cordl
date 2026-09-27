#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddUsernamePasswordRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AddUsernamePasswordRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class AddUsernamePasswordRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AddUsernamePasswordRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AddUsernamePasswordRequest*, "PlayFab.ClientModels", "AddUsernamePasswordRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AddUsernamePasswordRequest
class CORDL_TYPE AddUsernamePasswordRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Email, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

/// @brief Field Password, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Password, put=__cordl_internal_set_Password)) ::StringW  Password;

/// @brief Field Username, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

static inline ::PlayFab::ClientModels::AddUsernamePasswordRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr ::StringW const& __cordl_internal_get_Password() const;

constexpr ::StringW& __cordl_internal_get_Password() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

constexpr void __cordl_internal_set_Password(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84da30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddUsernamePasswordRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddUsernamePasswordRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddUsernamePasswordRequest(AddUsernamePasswordRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddUsernamePasswordRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddUsernamePasswordRequest(AddUsernamePasswordRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19949};

/// @brief Field Email, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Email;

/// @brief Field Password, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Password;

/// @brief Field Username, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Username;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AddUsernamePasswordRequest, ___Email) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AddUsernamePasswordRequest, ___Password) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AddUsernamePasswordRequest, ___Username) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AddUsernamePasswordRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
