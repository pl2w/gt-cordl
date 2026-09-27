#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTitlePublicKeyResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetTitlePublicKeyResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetTitlePublicKeyResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetTitlePublicKeyResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetTitlePublicKeyResult*, "PlayFab.ClientModels", "GetTitlePublicKeyResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetTitlePublicKeyResult
class CORDL_TYPE GetTitlePublicKeyResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field RSAPublicKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RSAPublicKey, put=__cordl_internal_set_RSAPublicKey)) ::StringW  RSAPublicKey;

static inline ::PlayFab::ClientModels::GetTitlePublicKeyResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_RSAPublicKey() const;

constexpr ::StringW& __cordl_internal_get_RSAPublicKey() ;

constexpr void __cordl_internal_set_RSAPublicKey(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84de70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTitlePublicKeyResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTitlePublicKeyResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTitlePublicKeyResult(GetTitlePublicKeyResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTitlePublicKeyResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTitlePublicKeyResult(GetTitlePublicKeyResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20093};

/// @brief Field RSAPublicKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___RSAPublicKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetTitlePublicKeyResult, ___RSAPublicKey) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetTitlePublicKeyResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
