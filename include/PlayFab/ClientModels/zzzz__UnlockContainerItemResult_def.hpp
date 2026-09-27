#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlockContainerItemResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnlockContainerItemResult)
namespace PlayFab::ClientModels {
class ItemInstance;
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
class UnlockContainerItemResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlockContainerItemResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlockContainerItemResult*, "PlayFab.ClientModels", "UnlockContainerItemResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlockContainerItemResult
class CORDL_TYPE UnlockContainerItemResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field GrantedItems, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GrantedItems, put=__cordl_internal_set_GrantedItems)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  GrantedItems;

/// @brief Field UnlockedItemInstanceId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnlockedItemInstanceId, put=__cordl_internal_set_UnlockedItemInstanceId)) ::StringW  UnlockedItemInstanceId;

/// @brief Field UnlockedWithItemInstanceId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnlockedWithItemInstanceId, put=__cordl_internal_set_UnlockedWithItemInstanceId)) ::StringW  UnlockedWithItemInstanceId;

/// @brief Field VirtualCurrency, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrency, put=__cordl_internal_set_VirtualCurrency)) ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  VirtualCurrency;

static inline ::PlayFab::ClientModels::UnlockContainerItemResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& __cordl_internal_get_GrantedItems() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& __cordl_internal_get_GrantedItems() ;

constexpr ::StringW const& __cordl_internal_get_UnlockedItemInstanceId() const;

constexpr ::StringW& __cordl_internal_get_UnlockedItemInstanceId() ;

constexpr ::StringW const& __cordl_internal_get_UnlockedWithItemInstanceId() const;

constexpr ::StringW& __cordl_internal_get_UnlockedWithItemInstanceId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& __cordl_internal_get_VirtualCurrency() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& __cordl_internal_get_VirtualCurrency() ;

constexpr void __cordl_internal_set_GrantedItems(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value) ;

constexpr void __cordl_internal_set_UnlockedItemInstanceId(::StringW  value) ;

constexpr void __cordl_internal_set_UnlockedWithItemInstanceId(::StringW  value) ;

constexpr void __cordl_internal_set_VirtualCurrency(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value) ;

/// @brief Method .ctor, addr 0xa84e3e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlockContainerItemResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlockContainerItemResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlockContainerItemResult(UnlockContainerItemResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlockContainerItemResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlockContainerItemResult(UnlockContainerItemResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20277};

/// @brief Field GrantedItems, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  ___GrantedItems;

/// @brief Field UnlockedItemInstanceId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___UnlockedItemInstanceId;

/// @brief Field UnlockedWithItemInstanceId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___UnlockedWithItemInstanceId;

/// @brief Field VirtualCurrency, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  ___VirtualCurrency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UnlockContainerItemResult, ___GrantedItems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UnlockContainerItemResult, ___UnlockedItemInstanceId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UnlockContainerItemResult, ___UnlockedWithItemInstanceId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UnlockContainerItemResult, ___VirtualCurrency) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UnlockContainerItemResult) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
