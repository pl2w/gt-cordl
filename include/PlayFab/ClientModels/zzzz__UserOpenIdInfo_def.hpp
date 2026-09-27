#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserOpenIdInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserOpenIdInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserOpenIdInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserOpenIdInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserOpenIdInfo*, "PlayFab.ClientModels", "UserOpenIdInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserOpenIdInfo
class CORDL_TYPE UserOpenIdInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ConnectionId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionId, put=__cordl_internal_set_ConnectionId)) ::StringW  ConnectionId;

/// @brief Field Issuer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Issuer, put=__cordl_internal_set_Issuer)) ::StringW  Issuer;

/// @brief Field Subject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Subject, put=__cordl_internal_set_Subject)) ::StringW  Subject;

static inline ::PlayFab::ClientModels::UserOpenIdInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ConnectionId() const;

constexpr ::StringW& __cordl_internal_get_ConnectionId() ;

constexpr ::StringW const& __cordl_internal_get_Issuer() const;

constexpr ::StringW& __cordl_internal_get_Issuer() ;

constexpr ::StringW const& __cordl_internal_get_Subject() const;

constexpr ::StringW& __cordl_internal_get_Subject() ;

constexpr void __cordl_internal_set_ConnectionId(::StringW  value) ;

constexpr void __cordl_internal_set_Issuer(::StringW  value) ;

constexpr void __cordl_internal_set_Subject(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e4c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserOpenIdInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserOpenIdInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserOpenIdInfo(UserOpenIdInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserOpenIdInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserOpenIdInfo(UserOpenIdInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20305};

/// @brief Field ConnectionId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ConnectionId;

/// @brief Field Issuer, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Issuer;

/// @brief Field Subject, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Subject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserOpenIdInfo, ___ConnectionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserOpenIdInfo, ___Issuer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserOpenIdInfo, ___Subject) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserOpenIdInfo) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
