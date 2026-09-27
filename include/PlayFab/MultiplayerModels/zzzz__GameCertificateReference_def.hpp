#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GameCertificateReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameCertificateReference)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GameCertificateReference;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GameCertificateReference*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GameCertificateReference*, "PlayFab.MultiplayerModels", "GameCertificateReference");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GameCertificateReference
class CORDL_TYPE GameCertificateReference : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field GsdkAlias, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_GsdkAlias, put=__cordl_internal_set_GsdkAlias)) ::StringW  GsdkAlias;

/// @brief Field Name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

static inline ::PlayFab::MultiplayerModels::GameCertificateReference* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_GsdkAlias() const;

constexpr ::StringW& __cordl_internal_get_GsdkAlias() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr void __cordl_internal_set_GsdkAlias(::StringW  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840948, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameCertificateReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameCertificateReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameCertificateReference(GameCertificateReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameCertificateReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameCertificateReference(GameCertificateReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19643};

/// @brief Field GsdkAlias, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___GsdkAlias;

/// @brief Field Name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GameCertificateReference, ___GsdkAlias) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GameCertificateReference, ___Name) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GameCertificateReference) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
