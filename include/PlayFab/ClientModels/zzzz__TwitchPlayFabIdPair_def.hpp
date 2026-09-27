#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TwitchPlayFabIdPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TwitchPlayFabIdPair)
// Forward declare root types
namespace PlayFab::ClientModels {
class TwitchPlayFabIdPair;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::TwitchPlayFabIdPair*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::TwitchPlayFabIdPair*, "PlayFab.ClientModels", "TwitchPlayFabIdPair");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.TwitchPlayFabIdPair
class CORDL_TYPE TwitchPlayFabIdPair : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field PlayFabId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field TwitchId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TwitchId, put=__cordl_internal_set_TwitchId)) ::StringW  TwitchId;

static inline ::PlayFab::ClientModels::TwitchPlayFabIdPair* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_TwitchId() const;

constexpr ::StringW& __cordl_internal_get_TwitchId() ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_TwitchId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e2d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TwitchPlayFabIdPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TwitchPlayFabIdPair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TwitchPlayFabIdPair(TwitchPlayFabIdPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwitchPlayFabIdPair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwitchPlayFabIdPair(TwitchPlayFabIdPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20243};

/// @brief Field PlayFabId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field TwitchId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TwitchId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::TwitchPlayFabIdPair, ___PlayFabId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::TwitchPlayFabIdPair, ___TwitchId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::TwitchPlayFabIdPair) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
