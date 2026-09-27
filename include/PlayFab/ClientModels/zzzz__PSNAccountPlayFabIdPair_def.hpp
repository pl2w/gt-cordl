#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PSNAccountPlayFabIdPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PSNAccountPlayFabIdPair)
// Forward declare root types
namespace PlayFab::ClientModels {
class PSNAccountPlayFabIdPair;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::PSNAccountPlayFabIdPair*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::PSNAccountPlayFabIdPair*, "PlayFab.ClientModels", "PSNAccountPlayFabIdPair");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.PSNAccountPlayFabIdPair
class CORDL_TYPE PSNAccountPlayFabIdPair : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field PSNAccountId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PSNAccountId, put=__cordl_internal_set_PSNAccountId)) ::StringW  PSNAccountId;

/// @brief Field PlayFabId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

static inline ::PlayFab::ClientModels::PSNAccountPlayFabIdPair* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PSNAccountId() const;

constexpr ::StringW& __cordl_internal_get_PSNAccountId() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr void __cordl_internal_set_PSNAccountId(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e120, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PSNAccountPlayFabIdPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PSNAccountPlayFabIdPair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PSNAccountPlayFabIdPair(PSNAccountPlayFabIdPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PSNAccountPlayFabIdPair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PSNAccountPlayFabIdPair(PSNAccountPlayFabIdPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20181};

/// @brief Field PlayFabId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field PSNAccountId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PSNAccountId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::PSNAccountPlayFabIdPair, ___PlayFabId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PSNAccountPlayFabIdPair, ___PSNAccountId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::PSNAccountPlayFabIdPair) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
