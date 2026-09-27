#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/NintendoSwitchPlayFabIdPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NintendoSwitchPlayFabIdPair)
// Forward declare root types
namespace PlayFab::ClientModels {
class NintendoSwitchPlayFabIdPair;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair*, "PlayFab.ClientModels", "NintendoSwitchPlayFabIdPair");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.NintendoSwitchPlayFabIdPair
class CORDL_TYPE NintendoSwitchPlayFabIdPair : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field NintendoSwitchDeviceId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_NintendoSwitchDeviceId, put=__cordl_internal_set_NintendoSwitchDeviceId)) ::StringW  NintendoSwitchDeviceId;

/// @brief Field PlayFabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

static inline ::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_NintendoSwitchDeviceId() const;

constexpr ::StringW& __cordl_internal_get_NintendoSwitchDeviceId() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr void __cordl_internal_set_NintendoSwitchDeviceId(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e0d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitchPlayFabIdPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchPlayFabIdPair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitchPlayFabIdPair(NintendoSwitchPlayFabIdPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchPlayFabIdPair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitchPlayFabIdPair(NintendoSwitchPlayFabIdPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20171};

/// @brief Field NintendoSwitchDeviceId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___NintendoSwitchDeviceId;

/// @brief Field PlayFabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair, ___NintendoSwitchDeviceId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair, ___PlayFabId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::NintendoSwitchPlayFabIdPair) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
