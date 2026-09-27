#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AdRewardResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AdRewardResults)
namespace PlayFab::ClientModels {
class AdRewardItemGranted;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class AdRewardResults;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AdRewardResults*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AdRewardResults*, "PlayFab.ClientModels", "AdRewardResults");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AdRewardResults
class CORDL_TYPE AdRewardResults : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field GrantedItems, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_GrantedItems, put=__cordl_internal_set_GrantedItems)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdRewardItemGranted*>*  GrantedItems;

/// @brief Field GrantedVirtualCurrencies, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GrantedVirtualCurrencies, put=__cordl_internal_set_GrantedVirtualCurrencies)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  GrantedVirtualCurrencies;

/// @brief Field IncrementedStatistics, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_IncrementedStatistics, put=__cordl_internal_set_IncrementedStatistics)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  IncrementedStatistics;

static inline ::PlayFab::ClientModels::AdRewardResults* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdRewardItemGranted*>* const& __cordl_internal_get_GrantedItems() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdRewardItemGranted*>*& __cordl_internal_get_GrantedItems() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_GrantedVirtualCurrencies() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_GrantedVirtualCurrencies() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_IncrementedStatistics() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_IncrementedStatistics() ;

constexpr void __cordl_internal_set_GrantedItems(::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdRewardItemGranted*>*  value) ;

constexpr void __cordl_internal_set_GrantedVirtualCurrencies(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_IncrementedStatistics(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method .ctor, addr 0xa84da58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdRewardResults() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdRewardResults", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdRewardResults(AdRewardResults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdRewardResults", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdRewardResults(AdRewardResults const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19954};

/// @brief Field GrantedItems, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdRewardItemGranted*>*  ___GrantedItems;

/// @brief Field GrantedVirtualCurrencies, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___GrantedVirtualCurrencies;

/// @brief Field IncrementedStatistics, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___IncrementedStatistics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AdRewardResults, ___GrantedItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdRewardResults, ___GrantedVirtualCurrencies) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AdRewardResults, ___IncrementedStatistics) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AdRewardResults) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
