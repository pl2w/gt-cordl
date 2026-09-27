#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCharacterStatisticsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetCharacterStatisticsRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetCharacterStatisticsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetCharacterStatisticsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetCharacterStatisticsRequest*, "PlayFab.ClientModels", "GetCharacterStatisticsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetCharacterStatisticsRequest
class CORDL_TYPE GetCharacterStatisticsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CharacterId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

static inline ::PlayFab::ClientModels::GetCharacterStatisticsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dc18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetCharacterStatisticsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterStatisticsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetCharacterStatisticsRequest(GetCharacterStatisticsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterStatisticsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetCharacterStatisticsRequest(GetCharacterStatisticsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20018};

/// @brief Field CharacterId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CharacterId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetCharacterStatisticsRequest, ___CharacterId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetCharacterStatisticsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
