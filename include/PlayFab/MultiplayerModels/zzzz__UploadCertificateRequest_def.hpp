#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/UploadCertificateRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(UploadCertificateRequest)
namespace PlayFab::MultiplayerModels {
class Certificate;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class UploadCertificateRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::UploadCertificateRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::UploadCertificateRequest*, "PlayFab.MultiplayerModels", "UploadCertificateRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.UploadCertificateRequest
class CORDL_TYPE UploadCertificateRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field GameCertificate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameCertificate, put=__cordl_internal_set_GameCertificate)) ::PlayFab::MultiplayerModels::Certificate*  GameCertificate;

static inline ::PlayFab::MultiplayerModels::UploadCertificateRequest* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::Certificate* const& __cordl_internal_get_GameCertificate() const;

constexpr ::PlayFab::MultiplayerModels::Certificate*& __cordl_internal_get_GameCertificate() ;

constexpr void __cordl_internal_set_GameCertificate(::PlayFab::MultiplayerModels::Certificate*  value) ;

/// @brief Method .ctor, addr 0xa840c80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadCertificateRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadCertificateRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadCertificateRequest(UploadCertificateRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadCertificateRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadCertificateRequest(UploadCertificateRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19750};

/// @brief Field GameCertificate, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::Certificate*  ___GameCertificate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::UploadCertificateRequest, ___GameCertificate) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::UploadCertificateRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
