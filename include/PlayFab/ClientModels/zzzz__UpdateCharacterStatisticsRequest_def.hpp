#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateCharacterStatisticsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateCharacterStatisticsRequest)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class UpdateCharacterStatisticsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UpdateCharacterStatisticsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UpdateCharacterStatisticsRequest*, "PlayFab.ClientModels", "UpdateCharacterStatisticsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UpdateCharacterStatisticsRequest
class CORDL_TYPE UpdateCharacterStatisticsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CharacterId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field CharacterStatistics, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterStatistics, put=__cordl_internal_set_CharacterStatistics)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  CharacterStatistics;

static inline ::PlayFab::ClientModels::UpdateCharacterStatisticsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_CharacterStatistics() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_CharacterStatistics() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterStatistics(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method .ctor, addr 0xa84e408, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateCharacterStatisticsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateCharacterStatisticsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateCharacterStatisticsRequest(UpdateCharacterStatisticsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateCharacterStatisticsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateCharacterStatisticsRequest(UpdateCharacterStatisticsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20281};

/// @brief Field CharacterId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field CharacterStatistics, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___CharacterStatistics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UpdateCharacterStatisticsRequest, ___CharacterId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UpdateCharacterStatisticsRequest, ___CharacterStatistics) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UpdateCharacterStatisticsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
