#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetAdPlacementsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetAdPlacementsRequest)
namespace PlayFab::ClientModels {
class NameIdentifier;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetAdPlacementsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetAdPlacementsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetAdPlacementsRequest*, "PlayFab.ClientModels", "GetAdPlacementsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetAdPlacementsRequest
class CORDL_TYPE GetAdPlacementsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AppId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppId, put=__cordl_internal_set_AppId)) ::StringW  AppId;

/// @brief Field Identifier, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Identifier, put=__cordl_internal_set_Identifier)) ::PlayFab::ClientModels::NameIdentifier*  Identifier;

static inline ::PlayFab::ClientModels::GetAdPlacementsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AppId() const;

constexpr ::StringW& __cordl_internal_get_AppId() ;

constexpr ::PlayFab::ClientModels::NameIdentifier* const& __cordl_internal_get_Identifier() const;

constexpr ::PlayFab::ClientModels::NameIdentifier*& __cordl_internal_get_Identifier() ;

constexpr void __cordl_internal_set_AppId(::StringW  value) ;

constexpr void __cordl_internal_set_Identifier(::PlayFab::ClientModels::NameIdentifier*  value) ;

/// @brief Method .ctor, addr 0xa84dbc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetAdPlacementsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetAdPlacementsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetAdPlacementsRequest(GetAdPlacementsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetAdPlacementsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetAdPlacementsRequest(GetAdPlacementsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20008};

/// @brief Field AppId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AppId;

/// @brief Field Identifier, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ClientModels::NameIdentifier*  ___Identifier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetAdPlacementsRequest, ___AppId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetAdPlacementsRequest, ___Identifier) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetAdPlacementsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
