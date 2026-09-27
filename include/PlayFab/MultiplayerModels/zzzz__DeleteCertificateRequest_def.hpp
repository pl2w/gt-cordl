#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DeleteCertificateRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteCertificateRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class DeleteCertificateRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::DeleteCertificateRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::DeleteCertificateRequest*, "PlayFab.MultiplayerModels", "DeleteCertificateRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.DeleteCertificateRequest
class CORDL_TYPE DeleteCertificateRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

static inline ::PlayFab::MultiplayerModels::DeleteCertificateRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8408f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteCertificateRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteCertificateRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteCertificateRequest(DeleteCertificateRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteCertificateRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteCertificateRequest(DeleteCertificateRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19633};

/// @brief Field Name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::DeleteCertificateRequest, ___Name) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::DeleteCertificateRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
