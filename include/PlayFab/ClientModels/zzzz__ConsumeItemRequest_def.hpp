#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ConsumeItemRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsumeItemRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class ConsumeItemRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ConsumeItemRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ConsumeItemRequest*, "PlayFab.ClientModels", "ConsumeItemRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ConsumeItemRequest
class CORDL_TYPE ConsumeItemRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CharacterId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field ConsumeCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ConsumeCount, put=__cordl_internal_set_ConsumeCount)) int32_t  ConsumeCount;

/// @brief Field ItemInstanceId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemInstanceId, put=__cordl_internal_set_ItemInstanceId)) ::StringW  ItemInstanceId;

static inline ::PlayFab::ClientModels::ConsumeItemRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr int32_t const& __cordl_internal_get_ConsumeCount() const;

constexpr int32_t& __cordl_internal_get_ConsumeCount() ;

constexpr ::StringW const& __cordl_internal_get_ItemInstanceId() const;

constexpr ::StringW& __cordl_internal_get_ItemInstanceId() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_ConsumeCount(int32_t  value) ;

constexpr void __cordl_internal_set_ItemInstanceId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dae0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsumeItemRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsumeItemRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsumeItemRequest(ConsumeItemRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsumeItemRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsumeItemRequest(ConsumeItemRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19973};

/// @brief Field CharacterId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field ConsumeCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___ConsumeCount;

/// @brief Field ItemInstanceId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ItemInstanceId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ConsumeItemRequest, ___CharacterId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ConsumeItemRequest, ___ConsumeCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ConsumeItemRequest, ___ItemInstanceId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ConsumeItemRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
