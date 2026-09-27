#pragma once
// IWYU pragma private; include "GlobalNamespace/DevWatchSelectableItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DevWatchSelectableItem)
namespace Fusion {
class NetworkObject;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class DevWatchSelectableItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevWatchSelectableItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevWatchSelectableItem*, "", "DevWatchSelectableItem");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevWatchSelectableItem
class CORDL_TYPE DevWatchSelectableItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Button, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Button, put=__cordl_internal_set_Button)) ::UnityW<::UnityEngine::UI::Button>  Button;

/// @brief Field ItemName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemName, put=__cordl_internal_set_ItemName)) ::UnityW<::TMPro::TextMeshProUGUI>  ItemName;

/// @brief Field OnSelected, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSelected, put=__cordl_internal_set_OnSelected)) ::System::Action_2<::StringW,::UnityW<::Fusion::NetworkObject>>*  OnSelected;

/// @brief Field SelectedObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SelectedObject, put=__cordl_internal_set_SelectedObject)) ::UnityW<::Fusion::NetworkObject>  SelectedObject;

/// @brief Method Init, addr 0x57ed42c, size 0xd8, virtual false, abstract: false, final false
inline void Init(::Fusion::NetworkObject*  obj) ;

static inline ::GlobalNamespace::DevWatchSelectableItem* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <Init>b__4_0, addr 0x57ed50c, size 0x50, virtual false, abstract: false, final false
inline void _Init_b__4_0() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_Button() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_Button() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_ItemName() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_ItemName() ;

constexpr ::System::Action_2<::StringW,::UnityW<::Fusion::NetworkObject>>* const& __cordl_internal_get_OnSelected() const;

constexpr ::System::Action_2<::StringW,::UnityW<::Fusion::NetworkObject>>*& __cordl_internal_get_OnSelected() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get_SelectedObject() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get_SelectedObject() ;

constexpr void __cordl_internal_set_Button(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_ItemName(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_OnSelected(::System::Action_2<::StringW,::UnityW<::Fusion::NetworkObject>>*  value) ;

constexpr void __cordl_internal_set_SelectedObject(::UnityW<::Fusion::NetworkObject>  value) ;

/// @brief Method .ctor, addr 0x57ed504, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevWatchSelectableItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevWatchSelectableItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevWatchSelectableItem(DevWatchSelectableItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevWatchSelectableItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevWatchSelectableItem(DevWatchSelectableItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{179};

/// @brief Field Button, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___Button;

/// @brief Field ItemName, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___ItemName;

/// @brief Field SelectedObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ___SelectedObject;

/// @brief Field OnSelected, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<::StringW,::UnityW<::Fusion::NetworkObject>>*  ___OnSelected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevWatchSelectableItem, ___Button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatchSelectableItem, ___ItemName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatchSelectableItem, ___SelectedObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevWatchSelectableItem, ___OnSelected) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevWatchSelectableItem) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
