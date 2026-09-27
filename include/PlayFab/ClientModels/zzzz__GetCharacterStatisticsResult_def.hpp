#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCharacterStatisticsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetCharacterStatisticsResult)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetCharacterStatisticsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetCharacterStatisticsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetCharacterStatisticsResult*, "PlayFab.ClientModels", "GetCharacterStatisticsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetCharacterStatisticsResult
class CORDL_TYPE GetCharacterStatisticsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field CharacterStatistics, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterStatistics, put=__cordl_internal_set_CharacterStatistics)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  CharacterStatistics;

static inline ::PlayFab::ClientModels::GetCharacterStatisticsResult* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_CharacterStatistics() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_CharacterStatistics() ;

constexpr void __cordl_internal_set_CharacterStatistics(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method .ctor, addr 0xa84dc20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetCharacterStatisticsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterStatisticsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetCharacterStatisticsResult(GetCharacterStatisticsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterStatisticsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetCharacterStatisticsResult(GetCharacterStatisticsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20019};

/// @brief Field CharacterStatistics, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___CharacterStatistics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetCharacterStatisticsResult, ___CharacterStatistics) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetCharacterStatisticsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
