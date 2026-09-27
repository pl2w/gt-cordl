#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddGenericIDRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(AddGenericIDRequest)
namespace PlayFab::ClientModels {
class GenericServiceId;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class AddGenericIDRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AddGenericIDRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AddGenericIDRequest*, "PlayFab.ClientModels", "AddGenericIDRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AddGenericIDRequest
class CORDL_TYPE AddGenericIDRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field GenericId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GenericId, put=__cordl_internal_set_GenericId)) ::PlayFab::ClientModels::GenericServiceId*  GenericId;

static inline ::PlayFab::ClientModels::AddGenericIDRequest* New_ctor() ;

constexpr ::PlayFab::ClientModels::GenericServiceId* const& __cordl_internal_get_GenericId() const;

constexpr ::PlayFab::ClientModels::GenericServiceId*& __cordl_internal_get_GenericId() ;

constexpr void __cordl_internal_set_GenericId(::PlayFab::ClientModels::GenericServiceId*  value) ;

/// @brief Method .ctor, addr 0xa84da00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddGenericIDRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddGenericIDRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddGenericIDRequest(AddGenericIDRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddGenericIDRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddGenericIDRequest(AddGenericIDRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19943};

/// @brief Field GenericId, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::ClientModels::GenericServiceId*  ___GenericId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AddGenericIDRequest, ___GenericId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AddGenericIDRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
