#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CertificateSummary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CertificateSummary)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CertificateSummary;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CertificateSummary*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CertificateSummary*, "PlayFab.MultiplayerModels", "CertificateSummary");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CertificateSummary
class CORDL_TYPE CertificateSummary : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Thumbprint, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Thumbprint, put=__cordl_internal_set_Thumbprint)) ::StringW  Thumbprint;

static inline ::PlayFab::MultiplayerModels::CertificateSummary* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::StringW const& __cordl_internal_get_Thumbprint() const;

constexpr ::StringW& __cordl_internal_get_Thumbprint() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Thumbprint(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840828, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CertificateSummary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CertificateSummary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateSummary(CertificateSummary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateSummary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateSummary(CertificateSummary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19606};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Thumbprint, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Thumbprint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CertificateSummary, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CertificateSummary, ___Thumbprint) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CertificateSummary) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
