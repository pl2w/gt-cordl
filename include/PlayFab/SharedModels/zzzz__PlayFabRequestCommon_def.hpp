#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
CORDL_MODULE_EXPORT(PlayFabRequestCommon)
namespace PlayFab {
class PlayFabAuthenticationContext;
}
// Forward declare root types
namespace PlayFab::SharedModels {
class PlayFabRequestCommon;
}
// Write type traits
MARK_REF_T(::PlayFab::SharedModels::PlayFabRequestCommon*);
DEFINE_IL2CPP_CLASS(::PlayFab::SharedModels::PlayFabRequestCommon*, "PlayFab.SharedModels", "PlayFabRequestCommon");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::SharedModels {
// Is value type: false
// CS Name: PlayFab.SharedModels.PlayFabRequestCommon
class CORDL_TYPE PlayFabRequestCommon : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field AuthenticationContext, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AuthenticationContext, put=__cordl_internal_set_AuthenticationContext)) ::PlayFab::PlayFabAuthenticationContext*  AuthenticationContext;

static inline ::PlayFab::SharedModels::PlayFabRequestCommon* New_ctor() ;

constexpr ::PlayFab::PlayFabAuthenticationContext* const& __cordl_internal_get_AuthenticationContext() const;

constexpr ::PlayFab::PlayFabAuthenticationContext*& __cordl_internal_get_AuthenticationContext() ;

constexpr void __cordl_internal_set_AuthenticationContext(::PlayFab::PlayFabAuthenticationContext*  value) ;

/// @brief Method .ctor, addr 0xa7def58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabRequestCommon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabRequestCommon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabRequestCommon(PlayFabRequestCommon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabRequestCommon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabRequestCommon(PlayFabRequestCommon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19532};

/// @brief Field AuthenticationContext, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::PlayFabAuthenticationContext*  ___AuthenticationContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::SharedModels::PlayFabRequestCommon, ___AuthenticationContext) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::SharedModels::PlayFabRequestCommon) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::SharedModels
