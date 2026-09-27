#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapCosmeticsData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapCosmeticItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CustomMapCosmeticsData)
namespace GlobalNamespace {
struct GTObjectPlaceholder_ECustomMapCosmeticItem;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct CustomMapCosmeticItem;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapCosmeticsData___c__DisplayClass9_0;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapCosmeticsData;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapCosmeticsData___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapCosmeticsData");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0*, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapCosmeticsData/<>c__DisplayClass9_0");
// [CreateAssetMenu(menuName = "ScriptableObjects/CustomMapCosmeticDataSO", order = 0)]
// Dependencies UnityEngine.ScriptableObject
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapCosmeticsData
class CORDL_TYPE CustomMapCosmeticsData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c__DisplayClass9_0 = ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0;

/// @brief Field customMapCosmeticItemList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMapCosmeticItemList, put=__cordl_internal_set_customMapCosmeticItemList)) ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*  customMapCosmeticItemList;

/// @brief Field fallbackItems, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallbackItems, put=__cordl_internal_set_fallbackItems)) ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*  fallbackItems;

/// @brief Field initializedFromTitleData, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_initializedFromTitleData, put=__cordl_internal_set_initializedFromTitleData)) bool  initializedFromTitleData;

/// @brief Field titleDataKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataKey, put=__cordl_internal_set_titleDataKey)) ::StringW  titleDataKey;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5bdee78, size 0x148, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x5bdee70, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGetCosmeticsDataFromTitleData, addr 0x5bdf4a4, size 0x22c, virtual false, abstract: false, final false
inline void OnGetCosmeticsDataFromTitleData(::StringW  cosmeticsData) ;

/// @brief Method OnPlayFabError, addr 0x5bdf6d8, size 0x8c, virtual false, abstract: false, final false
inline void OnPlayFabError(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnTitleDataUpdated, addr 0x5bdf46c, size 0x38, virtual false, abstract: false, final false
inline void OnTitleDataUpdated(::StringW  updatedKey) ;

/// @brief Method TryGetItem, addr 0x5bdefc0, size 0x168, virtual false, abstract: false, final false
inline bool TryGetItem(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem  customMapItemSlot, ::by_ref<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>  foundItem) ;

/// @brief Method UpdateFromTitleData, addr 0x5bdf128, size 0x344, virtual false, abstract: false, final false
inline void UpdateFromTitleData() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>* const& __cordl_internal_get_customMapCosmeticItemList() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*& __cordl_internal_get_customMapCosmeticItemList() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>* const& __cordl_internal_get_fallbackItems() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*& __cordl_internal_get_fallbackItems() ;

constexpr bool const& __cordl_internal_get_initializedFromTitleData() const;

constexpr bool& __cordl_internal_get_initializedFromTitleData() ;

constexpr ::StringW const& __cordl_internal_get_titleDataKey() const;

constexpr ::StringW& __cordl_internal_get_titleDataKey() ;

constexpr void __cordl_internal_set_customMapCosmeticItemList(::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*  value) ;

constexpr void __cordl_internal_set_fallbackItems(::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*  value) ;

constexpr void __cordl_internal_set_initializedFromTitleData(bool  value) ;

constexpr void __cordl_internal_set_titleDataKey(::StringW  value) ;

/// @brief Method .ctor, addr 0x5bdf764, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapCosmeticsData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapCosmeticsData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapCosmeticsData(CustomMapCosmeticsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapCosmeticsData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapCosmeticsData(CustomMapCosmeticsData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4042};

/// [SerializeField]
/// @brief Field fallbackItems, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*  ___fallbackItems;

/// [SerializeField]
/// @brief Field customMapCosmeticItemList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*  ___customMapCosmeticItemList;

/// @brief Field titleDataKey, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___titleDataKey;

/// @brief Field initializedFromTitleData, offset: 0x30, size: 0x1, def value: None
 bool  ___initializedFromTitleData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData, ___fallbackItems) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData, ___customMapCosmeticItemList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData, ___titleDataKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData, ___initializedFromTitleData) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
// [CompilerGenerated]
// Dependencies GorillaTagScripts.VirtualStumpCustomMaps.CustomMapCosmeticItem, System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapCosmeticsData/<>c__DisplayClass9_0
class CORDL_TYPE CustomMapCosmeticsData___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field itemFromJson, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_itemFromJson, put=__cordl_internal_set_itemFromJson)) ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem  itemFromJson;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <OnGetCosmeticsDataFromTitleData>b__0, addr 0x5bdf7bc, size 0x10, virtual false, abstract: false, final false
inline bool _OnGetCosmeticsDataFromTitleData_b__0(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem  item) ;

constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem const& __cordl_internal_get_itemFromJson() const;

constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem& __cordl_internal_get_itemFromJson() ;

constexpr void __cordl_internal_set_itemFromJson(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem  value) ;

/// @brief Method .ctor, addr 0x5bdf6d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapCosmeticsData___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapCosmeticsData___c__DisplayClass9_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapCosmeticsData___c__DisplayClass9_0(CustomMapCosmeticsData___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapCosmeticsData___c__DisplayClass9_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapCosmeticsData___c__DisplayClass9_0(CustomMapCosmeticsData___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4041};

/// @brief Field itemFromJson, offset: 0x10, size: 0x10, def value: None
 ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem  ___itemFromJson;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0, ___itemFromJson) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
