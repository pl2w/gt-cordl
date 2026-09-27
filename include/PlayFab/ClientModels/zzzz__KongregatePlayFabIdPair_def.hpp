#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/KongregatePlayFabIdPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KongregatePlayFabIdPair)
// Forward declare root types
namespace PlayFab::ClientModels {
class KongregatePlayFabIdPair;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::KongregatePlayFabIdPair*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::KongregatePlayFabIdPair*, "PlayFab.ClientModels", "KongregatePlayFabIdPair");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.KongregatePlayFabIdPair
class CORDL_TYPE KongregatePlayFabIdPair : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field KongregateId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_KongregateId, put=__cordl_internal_set_KongregateId)) ::StringW  KongregateId;

/// @brief Field PlayFabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

static inline ::PlayFab::ClientModels::KongregatePlayFabIdPair* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_KongregateId() const;

constexpr ::StringW& __cordl_internal_get_KongregateId() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr void __cordl_internal_set_KongregateId(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dee0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KongregatePlayFabIdPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KongregatePlayFabIdPair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KongregatePlayFabIdPair(KongregatePlayFabIdPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KongregatePlayFabIdPair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KongregatePlayFabIdPair(KongregatePlayFabIdPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20107};

/// @brief Field KongregateId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___KongregateId;

/// @brief Field PlayFabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::KongregatePlayFabIdPair, ___KongregateId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::KongregatePlayFabIdPair, ___PlayFabId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::KongregatePlayFabIdPair) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
