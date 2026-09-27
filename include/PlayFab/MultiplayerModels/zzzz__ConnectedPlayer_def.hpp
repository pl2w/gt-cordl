#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ConnectedPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConnectedPlayer)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ConnectedPlayer;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ConnectedPlayer*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ConnectedPlayer*, "PlayFab.MultiplayerModels", "ConnectedPlayer");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ConnectedPlayer
class CORDL_TYPE ConnectedPlayer : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field PlayerId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerId, put=__cordl_internal_set_PlayerId)) ::StringW  PlayerId;

static inline ::PlayFab::MultiplayerModels::ConnectedPlayer* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PlayerId() const;

constexpr ::StringW& __cordl_internal_get_PlayerId() ;

constexpr void __cordl_internal_set_PlayerId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840830, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectedPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectedPlayer(ConnectedPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectedPlayer(ConnectedPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19607};

/// @brief Field PlayerId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PlayerId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ConnectedPlayer, ___PlayerId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ConnectedPlayer) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
