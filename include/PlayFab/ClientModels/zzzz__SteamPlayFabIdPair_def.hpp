#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SteamPlayFabIdPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SteamPlayFabIdPair)
// Forward declare root types
namespace PlayFab::ClientModels {
class SteamPlayFabIdPair;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::SteamPlayFabIdPair*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::SteamPlayFabIdPair*, "PlayFab.ClientModels", "SteamPlayFabIdPair");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.SteamPlayFabIdPair
class CORDL_TYPE SteamPlayFabIdPair : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field PlayFabId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field SteamStringId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SteamStringId, put=__cordl_internal_set_SteamStringId)) ::StringW  SteamStringId;

static inline ::PlayFab::ClientModels::SteamPlayFabIdPair* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_SteamStringId() const;

constexpr ::StringW& __cordl_internal_get_SteamStringId() ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_SteamStringId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e290, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamPlayFabIdPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamPlayFabIdPair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamPlayFabIdPair(SteamPlayFabIdPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamPlayFabIdPair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamPlayFabIdPair(SteamPlayFabIdPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20230};

/// @brief Field PlayFabId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field SteamStringId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___SteamStringId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::SteamPlayFabIdPair, ___PlayFabId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::SteamPlayFabIdPair, ___SteamStringId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::SteamPlayFabIdPair) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
