#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/XboxLiveAccountPlayFabIdPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XboxLiveAccountPlayFabIdPair)
// Forward declare root types
namespace PlayFab::ClientModels {
class XboxLiveAccountPlayFabIdPair;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::XboxLiveAccountPlayFabIdPair*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::XboxLiveAccountPlayFabIdPair*, "PlayFab.ClientModels", "XboxLiveAccountPlayFabIdPair");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.XboxLiveAccountPlayFabIdPair
class CORDL_TYPE XboxLiveAccountPlayFabIdPair : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field PlayFabId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field XboxLiveAccountId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_XboxLiveAccountId, put=__cordl_internal_set_XboxLiveAccountId)) ::StringW  XboxLiveAccountId;

static inline ::PlayFab::ClientModels::XboxLiveAccountPlayFabIdPair* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_XboxLiveAccountId() const;

constexpr ::StringW& __cordl_internal_get_XboxLiveAccountId() ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_XboxLiveAccountId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e580, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XboxLiveAccountPlayFabIdPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XboxLiveAccountPlayFabIdPair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XboxLiveAccountPlayFabIdPair(XboxLiveAccountPlayFabIdPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XboxLiveAccountPlayFabIdPair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XboxLiveAccountPlayFabIdPair(XboxLiveAccountPlayFabIdPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20330};

/// @brief Field PlayFabId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field XboxLiveAccountId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___XboxLiveAccountId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::XboxLiveAccountPlayFabIdPair, ___PlayFabId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::XboxLiveAccountPlayFabIdPair, ___XboxLiveAccountId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::XboxLiveAccountPlayFabIdPair) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
