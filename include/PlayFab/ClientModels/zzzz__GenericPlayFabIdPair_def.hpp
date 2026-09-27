#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GenericPlayFabIdPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GenericPlayFabIdPair)
namespace PlayFab::ClientModels {
class GenericServiceId;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GenericPlayFabIdPair;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GenericPlayFabIdPair*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GenericPlayFabIdPair*, "PlayFab.ClientModels", "GenericPlayFabIdPair");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GenericPlayFabIdPair
class CORDL_TYPE GenericPlayFabIdPair : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field GenericId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_GenericId, put=__cordl_internal_set_GenericId)) ::PlayFab::ClientModels::GenericServiceId*  GenericId;

/// @brief Field PlayFabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

static inline ::PlayFab::ClientModels::GenericPlayFabIdPair* New_ctor() ;

constexpr ::PlayFab::ClientModels::GenericServiceId* const& __cordl_internal_get_GenericId() const;

constexpr ::PlayFab::ClientModels::GenericServiceId*& __cordl_internal_get_GenericId() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr void __cordl_internal_set_GenericId(::PlayFab::ClientModels::GenericServiceId*  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dba8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericPlayFabIdPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericPlayFabIdPair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericPlayFabIdPair(GenericPlayFabIdPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericPlayFabIdPair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericPlayFabIdPair(GenericPlayFabIdPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20004};

/// @brief Field GenericId, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::ClientModels::GenericServiceId*  ___GenericId;

/// @brief Field PlayFabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GenericPlayFabIdPair, ___GenericId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GenericPlayFabIdPair, ___PlayFabId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GenericPlayFabIdPair) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
