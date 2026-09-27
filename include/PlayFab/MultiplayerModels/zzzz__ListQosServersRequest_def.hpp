#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListQosServersRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(ListQosServersRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ListQosServersRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ListQosServersRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ListQosServersRequest*, "PlayFab.MultiplayerModels", "ListQosServersRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ListQosServersRequest
class CORDL_TYPE ListQosServersRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::MultiplayerModels::ListQosServersRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa840b20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListQosServersRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListQosServersRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListQosServersRequest(ListQosServersRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListQosServersRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListQosServersRequest(ListQosServersRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19702};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::MultiplayerModels::ListQosServersRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
