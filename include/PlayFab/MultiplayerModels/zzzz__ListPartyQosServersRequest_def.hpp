#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListPartyQosServersRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ListPartyQosServersRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ListPartyQosServersRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ListPartyQosServersRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ListPartyQosServersRequest*, "PlayFab.MultiplayerModels", "ListPartyQosServersRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ListPartyQosServersRequest
class CORDL_TYPE ListPartyQosServersRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Version, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) ::StringW  Version;

static inline ::PlayFab::MultiplayerModels::ListPartyQosServersRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Version() const;

constexpr ::StringW& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_Version(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840b00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListPartyQosServersRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListPartyQosServersRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListPartyQosServersRequest(ListPartyQosServersRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListPartyQosServersRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListPartyQosServersRequest(ListPartyQosServersRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19698};

/// @brief Field Version, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ListPartyQosServersRequest, ___Version) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ListPartyQosServersRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
