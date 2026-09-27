#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/FacebookPlayFabIdPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FacebookPlayFabIdPair)
// Forward declare root types
namespace PlayFab::ClientModels {
class FacebookPlayFabIdPair;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::FacebookPlayFabIdPair*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::FacebookPlayFabIdPair*, "PlayFab.ClientModels", "FacebookPlayFabIdPair");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.FacebookPlayFabIdPair
class CORDL_TYPE FacebookPlayFabIdPair : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field FacebookId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FacebookId, put=__cordl_internal_set_FacebookId)) ::StringW  FacebookId;

/// @brief Field PlayFabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

static inline ::PlayFab::ClientModels::FacebookPlayFabIdPair* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FacebookId() const;

constexpr ::StringW& __cordl_internal_get_FacebookId() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr void __cordl_internal_set_FacebookId(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84db78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FacebookPlayFabIdPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FacebookPlayFabIdPair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FacebookPlayFabIdPair(FacebookPlayFabIdPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FacebookPlayFabIdPair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FacebookPlayFabIdPair(FacebookPlayFabIdPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19997};

/// @brief Field FacebookId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___FacebookId;

/// @brief Field PlayFabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::FacebookPlayFabIdPair, ___FacebookId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::FacebookPlayFabIdPair, ___PlayFabId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::FacebookPlayFabIdPair) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
