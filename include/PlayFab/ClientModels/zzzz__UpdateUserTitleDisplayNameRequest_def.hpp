#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateUserTitleDisplayNameRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateUserTitleDisplayNameRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UpdateUserTitleDisplayNameRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest*, "PlayFab.ClientModels", "UpdateUserTitleDisplayNameRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UpdateUserTitleDisplayNameRequest
class CORDL_TYPE UpdateUserTitleDisplayNameRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field DisplayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

static inline ::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e448, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateUserTitleDisplayNameRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateUserTitleDisplayNameRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateUserTitleDisplayNameRequest(UpdateUserTitleDisplayNameRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateUserTitleDisplayNameRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateUserTitleDisplayNameRequest(UpdateUserTitleDisplayNameRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20289};

/// @brief Field DisplayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DisplayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest, ___DisplayName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
