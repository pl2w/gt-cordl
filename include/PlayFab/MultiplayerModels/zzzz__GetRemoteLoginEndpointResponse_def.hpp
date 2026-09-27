#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetRemoteLoginEndpointResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetRemoteLoginEndpointResponse)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetRemoteLoginEndpointResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse*, "PlayFab.MultiplayerModels", "GetRemoteLoginEndpointResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetRemoteLoginEndpointResponse
class CORDL_TYPE GetRemoteLoginEndpointResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field IPV4Address, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_IPV4Address, put=__cordl_internal_set_IPV4Address)) ::StringW  IPV4Address;

/// @brief Field Port, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Port, put=__cordl_internal_set_Port)) int32_t  Port;

static inline ::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_IPV4Address() const;

constexpr ::StringW& __cordl_internal_get_IPV4Address() ;

constexpr int32_t const& __cordl_internal_get_Port() const;

constexpr int32_t& __cordl_internal_get_Port() ;

constexpr void __cordl_internal_set_IPV4Address(::StringW  value) ;

constexpr void __cordl_internal_set_Port(int32_t  value) ;

/// @brief Method .ctor, addr 0xa840a00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetRemoteLoginEndpointResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetRemoteLoginEndpointResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetRemoteLoginEndpointResponse(GetRemoteLoginEndpointResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetRemoteLoginEndpointResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetRemoteLoginEndpointResponse(GetRemoteLoginEndpointResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19666};

/// @brief Field IPV4Address, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___IPV4Address;

/// @brief Field Port, offset: 0x28, size: 0x4, def value: None
 int32_t  ___Port;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse, ___IPV4Address) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse, ___Port) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
