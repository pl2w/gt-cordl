#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GooglePlayFabIdPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GooglePlayFabIdPair)
// Forward declare root types
namespace PlayFab::ClientModels {
class GooglePlayFabIdPair;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GooglePlayFabIdPair*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GooglePlayFabIdPair*, "PlayFab.ClientModels", "GooglePlayFabIdPair");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GooglePlayFabIdPair
class CORDL_TYPE GooglePlayFabIdPair : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field GoogleId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoogleId, put=__cordl_internal_set_GoogleId)) ::StringW  GoogleId;

/// @brief Field PlayFabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

static inline ::PlayFab::ClientModels::GooglePlayFabIdPair* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_GoogleId() const;

constexpr ::StringW& __cordl_internal_get_GoogleId() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr void __cordl_internal_set_GoogleId(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84deb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GooglePlayFabIdPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GooglePlayFabIdPair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GooglePlayFabIdPair(GooglePlayFabIdPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GooglePlayFabIdPair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GooglePlayFabIdPair(GooglePlayFabIdPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20102};

/// @brief Field GoogleId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___GoogleId;

/// @brief Field PlayFabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GooglePlayFabIdPair, ___GoogleId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GooglePlayFabIdPair, ___PlayFabId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GooglePlayFabIdPair) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
