#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListPartyQosServersResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListPartyQosServersResponse)
namespace PlayFab::MultiplayerModels {
class QosServer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ListPartyQosServersResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ListPartyQosServersResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ListPartyQosServersResponse*, "PlayFab.MultiplayerModels", "ListPartyQosServersResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ListPartyQosServersResponse
class CORDL_TYPE ListPartyQosServersResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field PageSize, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PageSize, put=__cordl_internal_set_PageSize)) int32_t  PageSize;

/// @brief Field QosServers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_QosServers, put=__cordl_internal_set_QosServers)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::QosServer*>*  QosServers;

/// @brief Field SkipToken, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SkipToken, put=__cordl_internal_set_SkipToken)) ::StringW  SkipToken;

static inline ::PlayFab::MultiplayerModels::ListPartyQosServersResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_PageSize() const;

constexpr int32_t& __cordl_internal_get_PageSize() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::QosServer*>* const& __cordl_internal_get_QosServers() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::QosServer*>*& __cordl_internal_get_QosServers() ;

constexpr ::StringW const& __cordl_internal_get_SkipToken() const;

constexpr ::StringW& __cordl_internal_get_SkipToken() ;

constexpr void __cordl_internal_set_PageSize(int32_t  value) ;

constexpr void __cordl_internal_set_QosServers(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::QosServer*>*  value) ;

constexpr void __cordl_internal_set_SkipToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840b08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListPartyQosServersResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListPartyQosServersResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListPartyQosServersResponse(ListPartyQosServersResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListPartyQosServersResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListPartyQosServersResponse(ListPartyQosServersResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19699};

/// @brief Field PageSize, offset: 0x20, size: 0x4, def value: None
 int32_t  ___PageSize;

/// @brief Field QosServers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::QosServer*>*  ___QosServers;

/// @brief Field SkipToken, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___SkipToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ListPartyQosServersResponse, ___PageSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::ListPartyQosServersResponse, ___QosServers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::ListPartyQosServersResponse, ___SkipToken) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ListPartyQosServersResponse) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
