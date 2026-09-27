#pragma once
// IWYU pragma private; include "GlobalNamespace/DevWatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DevWatch)
namespace Fusion {
class NetworkObject;
}
namespace GlobalNamespace {
class DevWatchButton;
}
namespace GlobalNamespace {
class DevWatchSelectableItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class DevWatch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevWatch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevWatch*, "", "DevWatch");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevWatch
class CORDL_TYPE DevWatch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field DestroyObjectButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_DestroyObjectButton, put=__cordl_internal_set_DestroyObjectButton)) ::UnityW<::UnityEngine::UI::Button>  DestroyObjectButton;

/// @brief Field FoundNetworkObjects, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_FoundNetworkObjects, put=__cordl_internal_set_FoundNetworkObjects)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  FoundNetworkObjects;

/// @brief Field Items, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Items, put=__cordl_internal_set_Items)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevWatchSelectableItem>>*  Items;

/// @brief Field ItemsFoundContainer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemsFoundContainer, put=__cordl_internal_set_ItemsFoundContainer)) ::UnityW<::UnityEngine::Transform>  ItemsFoundContainer;

/// @brief Field Panel1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Panel1, put=__cordl_internal_set_Panel1)) ::UnityW<::UnityEngine::GameObject>  Panel1;

/// @brief Field Panel2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Panel2, put=__cordl_internal_set_Panel2)) ::UnityW<::UnityEngine::GameObject>  Panel2;

/// @brief Field RayCastDirection, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_RayCastDirection, put=__cordl_internal_set_RayCastDirection)) ::UnityW<::UnityEngine::Transform>  RayCastDirection;

/// @brief Field RayCastStartPos, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_RayCastStartPos, put=__cordl_internal_set_RayCastStartPos)) ::UnityW<::UnityEngine::Transform>  RayCastStartPos;

/// @brief Field SearchButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SearchButton, put=__cordl_internal_set_SearchButton)) ::UnityW<::GlobalNamespace::DevWatchButton>  SearchButton;

/// @brief Field SelectableItemPrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SelectableItemPrefab, put=__cordl_internal_set_SelectableItemPrefab)) ::UnityW<::GlobalNamespace::DevWatchSelectableItem>  SelectableItemPrefab;

/// @brief Field SelectedItem, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_SelectedItem, put=__cordl_internal_set_SelectedItem)) ::UnityW<::GlobalNamespace::DevWatchSelectableItem>  SelectedItem;

/// @brief Field SelectedItemName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_SelectedItemName, put=__cordl_internal_set_SelectedItemName)) ::UnityW<::TMPro::TextMeshProUGUI>  SelectedItemName;

/// @brief Field TakeOwnershipButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_TakeOwnershipButton, put=__cordl_internal_set_TakeOwnershipButton)) ::UnityW<::UnityEngine::UI::Button>  TakeOwnershipButton;

/// @brief Method Awake, addr 0x57ecce0, size 0x138, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Cleanup, addr 0x57ed12c, size 0x15c, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method ItemSelected, addr 0x57ed288, size 0x90, virtual false, abstract: false, final false
inline void ItemSelected(::GlobalNamespace::DevWatchSelectableItem*  item) ;

static inline ::GlobalNamespace::DevWatch* New_ctor() ;

/// @brief Method SearchItems, addr 0x57ece18, size 0x314, virtual false, abstract: false, final false
inline void SearchItems() ;

/// @brief Method TakeOwneshipOfItem, addr 0x57ed31c, size 0x4, virtual false, abstract: false, final false
inline void TakeOwneshipOfItem() ;

/// @brief Method TryDestroyItem, addr 0x57ed318, size 0x4, virtual false, abstract: false, final false
inline void TryDestroyItem() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_DestroyObjectButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_DestroyObjectButton() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* const& __cordl_internal_get_FoundNetworkObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*& __cordl_internal_get_FoundNetworkObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevWatchSelectableItem>>* const& __cordl_internal_get_Items() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevWatchSelectableItem>>*& __cordl_internal_get_Items() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ItemsFoundContainer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ItemsFoundContainer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Panel1() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Panel1() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Panel2() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Panel2() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_RayCastDirection() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_RayCastDirection() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_RayCastStartPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_RayCastStartPos() ;

constexpr ::UnityW<::GlobalNamespace::DevWatchButton> const& __cordl_internal_get_SearchButton() const;

constexpr ::UnityW<::GlobalNamespace::DevWatchButton>& __cordl_internal_get_SearchButton() ;

constexpr ::UnityW<::GlobalNamespace::DevWatchSelectableItem> const& __cordl_internal_get_SelectableItemPrefab() const;

constexpr ::UnityW<::GlobalNamespace::DevWatchSelectableItem>& __cordl_internal_get_SelectableItemPrefab() ;

constexpr ::UnityW<::GlobalNamespace::DevWatchSelectableItem> const& __cordl_internal_get_SelectedItem() const;

constexpr ::UnityW<::GlobalNamespace::DevWatchSelectableItem>& __cordl_internal_get_SelectedItem() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_SelectedItemName() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_SelectedItemName() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_TakeOwnershipButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_TakeOwnershipButton() ;

constexpr void __cordl_internal_set_DestroyObjectButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_FoundNetworkObjects(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  value) ;

constexpr void __cordl_internal_set_Items(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevWatchSelectableItem>>*  value) ;

constexpr void __cordl_internal_set_ItemsFoundContainer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_Panel1(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_Panel2(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_RayCastDirection(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_RayCastStartPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_SearchButton(::UnityW<::GlobalNamespace::DevWatchButton>  value) ;

constexpr void __cordl_internal_set_SelectableItemPrefab(::UnityW<::GlobalNamespace::DevWatchSelectableItem>  value) ;

constexpr void __cordl_internal_set_SelectedItem(::UnityW<::GlobalNamespace::DevWatchSelectableItem>  value) ;

constexpr void __cordl_internal_set_SelectedItemName(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_TakeOwnershipButton(::UnityW<::UnityEngine::UI::Button>  value) ;

/// @brief Method .ctor, addr 0x57ed320, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevWatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevWatch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevWatch(DevWatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevWatch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevWatch(DevWatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{177};

/// @brief Field SearchButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DevWatchButton>  ___SearchButton;

/// @brief Field Panel1, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Panel1;

/// @brief Field Panel2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Panel2;

/// @brief Field SelectableItemPrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DevWatchSelectableItem>  ___SelectableItemPrefab;

/// @brief Field Items, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevWatchSelectableItem>>*  ___Items;

/// @brief Field RayCastStartPos, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___RayCastStartPos;

/// @brief Field RayCastDirection, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___RayCastDirection;

/// @brief Field ItemsFoundContainer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ItemsFoundContainer;

/// @brief Field TakeOwnershipButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___TakeOwnershipButton;

/// @brief Field DestroyObjectButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___DestroyObjectButton;

/// @brief Field FoundNetworkObjects, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  ___FoundNetworkObjects;

/// @brief Field SelectedItemName, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___SelectedItemName;

/// @brief Field SelectedItem, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DevWatchSelectableItem>  ___SelectedItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevWatch, ___SearchButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___Panel1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___Panel2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___SelectableItemPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___Items) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___RayCastStartPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___RayCastDirection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___ItemsFoundContainer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___TakeOwnershipButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___DestroyObjectButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___FoundNetworkObjects) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___SelectedItemName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatch, ___SelectedItem) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevWatch) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
