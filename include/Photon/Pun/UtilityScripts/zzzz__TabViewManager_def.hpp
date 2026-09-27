#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/TabViewManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TabViewManager)
namespace Photon::Pun::UtilityScripts {
class TabViewManager_TabChangeEvent;
}
namespace Photon::Pun::UtilityScripts {
class TabViewManager_Tab;
}
namespace Photon::Pun::UtilityScripts {
class TabViewManager___c__DisplayClass7_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class TabViewManager;
}
namespace Photon::Pun::UtilityScripts {
class TabViewManager_Tab;
}
namespace Photon::Pun::UtilityScripts {
class TabViewManager_TabChangeEvent;
}
namespace Photon::Pun::UtilityScripts {
class TabViewManager___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::TabViewManager*);
MARK_REF_T(::Photon::Pun::UtilityScripts::TabViewManager_Tab*);
MARK_REF_T(::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent*);
MARK_REF_T(::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::TabViewManager*, "Photon.Pun.UtilityScripts", "TabViewManager");
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::TabViewManager_Tab*, "Photon.Pun.UtilityScripts", "TabViewManager/Tab");
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent*, "Photon.Pun.UtilityScripts", "TabViewManager/TabChangeEvent");
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0*, "Photon.Pun.UtilityScripts", "TabViewManager/<>c__DisplayClass7_0");
// Dependencies Photon.Pun.UtilityScripts.TabViewManager::Tab, UnityEngine.MonoBehaviour
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.TabViewManager
class CORDL_TYPE TabViewManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Tab = ::Photon::Pun::UtilityScripts::TabViewManager_Tab;

using TabChangeEvent = ::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent;

using __c__DisplayClass7_0 = ::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0;

/// @brief Field CurrentTab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_CurrentTab, put=__cordl_internal_set_CurrentTab)) ::Photon::Pun::UtilityScripts::TabViewManager_Tab*  CurrentTab;

/// @brief Field OnTabChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTabChanged, put=__cordl_internal_set_OnTabChanged)) ::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent*  OnTabChanged;

/// @brief Field Tab_lut, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tab_lut, put=__cordl_internal_set_Tab_lut)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>,::Photon::Pun::UtilityScripts::TabViewManager_Tab*>*  Tab_lut;

/// @brief Field Tabs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tabs, put=__cordl_internal_set_Tabs)) ::ArrayW<::Photon::Pun::UtilityScripts::TabViewManager_Tab*>  Tabs;

/// @brief Field ToggleGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ToggleGroup, put=__cordl_internal_set_ToggleGroup)) ::UnityW<::UnityEngine::UI::ToggleGroup>  ToggleGroup;

static inline ::Photon::Pun::UtilityScripts::TabViewManager* New_ctor() ;

/// @brief Method OnTabSelected, addr 0xa73e1c8, size 0x120, virtual false, abstract: false, final false
inline void OnTabSelected(::Photon::Pun::UtilityScripts::TabViewManager_Tab*  tab) ;

/// @brief Method SelectTab, addr 0xa73e130, size 0x98, virtual false, abstract: false, final false
inline void SelectTab(::StringW  id) ;

/// @brief Method Start, addr 0xa73def0, size 0x238, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::Photon::Pun::UtilityScripts::TabViewManager_Tab* const& __cordl_internal_get_CurrentTab() const;

constexpr ::Photon::Pun::UtilityScripts::TabViewManager_Tab*& __cordl_internal_get_CurrentTab() ;

constexpr ::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent* const& __cordl_internal_get_OnTabChanged() const;

constexpr ::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent*& __cordl_internal_get_OnTabChanged() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>,::Photon::Pun::UtilityScripts::TabViewManager_Tab*>* const& __cordl_internal_get_Tab_lut() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>,::Photon::Pun::UtilityScripts::TabViewManager_Tab*>*& __cordl_internal_get_Tab_lut() ;

constexpr ::ArrayW<::Photon::Pun::UtilityScripts::TabViewManager_Tab*> const& __cordl_internal_get_Tabs() const;

constexpr ::ArrayW<::Photon::Pun::UtilityScripts::TabViewManager_Tab*>& __cordl_internal_get_Tabs() ;

constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& __cordl_internal_get_ToggleGroup() const;

constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& __cordl_internal_get_ToggleGroup() ;

constexpr void __cordl_internal_set_CurrentTab(::Photon::Pun::UtilityScripts::TabViewManager_Tab*  value) ;

constexpr void __cordl_internal_set_OnTabChanged(::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent*  value) ;

constexpr void __cordl_internal_set_Tab_lut(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>,::Photon::Pun::UtilityScripts::TabViewManager_Tab*>*  value) ;

constexpr void __cordl_internal_set_Tabs(::ArrayW<::Photon::Pun::UtilityScripts::TabViewManager_Tab*>  value) ;

constexpr void __cordl_internal_set_ToggleGroup(::UnityW<::UnityEngine::UI::ToggleGroup>  value) ;

/// @brief Method .ctor, addr 0xa73e2e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TabViewManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TabViewManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TabViewManager(TabViewManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TabViewManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TabViewManager(TabViewManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31247};

/// @brief Field ToggleGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ToggleGroup>  ___ToggleGroup;

/// @brief Field Tabs, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Photon::Pun::UtilityScripts::TabViewManager_Tab*>  ___Tabs;

/// @brief Field OnTabChanged, offset: 0x30, size: 0x8, def value: None
 ::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent*  ___OnTabChanged;

/// @brief Field CurrentTab, offset: 0x38, size: 0x8, def value: None
 ::Photon::Pun::UtilityScripts::TabViewManager_Tab*  ___CurrentTab;

/// @brief Field Tab_lut, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>,::Photon::Pun::UtilityScripts::TabViewManager_Tab*>*  ___Tab_lut;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager, ___ToggleGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager, ___Tabs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager, ___OnTabChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager, ___CurrentTab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager, ___Tab_lut) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::TabViewManager) == 0x48, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.TabViewManager/<>c__DisplayClass7_0
class CORDL_TYPE TabViewManager___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Photon::Pun::UtilityScripts::TabViewManager>  __4__this;

/// @brief Field _tab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__tab, put=__cordl_internal_set__tab)) ::Photon::Pun::UtilityScripts::TabViewManager_Tab*  _tab;

static inline ::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <Start>b__0, addr 0xa73e390, size 0x1c, virtual false, abstract: false, final false
inline void _Start_b__0(bool  isSelected) ;

constexpr ::UnityW<::Photon::Pun::UtilityScripts::TabViewManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Photon::Pun::UtilityScripts::TabViewManager>& __cordl_internal_get___4__this() ;

constexpr ::Photon::Pun::UtilityScripts::TabViewManager_Tab* const& __cordl_internal_get__tab() const;

constexpr ::Photon::Pun::UtilityScripts::TabViewManager_Tab*& __cordl_internal_get__tab() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Photon::Pun::UtilityScripts::TabViewManager>  value) ;

constexpr void __cordl_internal_set__tab(::Photon::Pun::UtilityScripts::TabViewManager_Tab*  value) ;

/// @brief Method .ctor, addr 0xa73e128, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TabViewManager___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TabViewManager___c__DisplayClass7_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TabViewManager___c__DisplayClass7_0(TabViewManager___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TabViewManager___c__DisplayClass7_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TabViewManager___c__DisplayClass7_0(TabViewManager___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31246};

/// @brief Field _tab, offset: 0x10, size: 0x8, def value: None
 ::Photon::Pun::UtilityScripts::TabViewManager_Tab*  ____tab;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::UtilityScripts::TabViewManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0, ____tab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::TabViewManager___c__DisplayClass7_0) == 0x20, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
// Dependencies System.Object
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.TabViewManager/Tab
class CORDL_TYPE TabViewManager_Tab : public ::System::Object {
public:
// Declarations
/// @brief Field Toggle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Toggle, put=__cordl_internal_set_Toggle)) ::UnityW<::UnityEngine::UI::Toggle>  Toggle;

/// @brief Field View, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_View, put=__cordl_internal_set_View)) ::UnityW<::UnityEngine::RectTransform>  View;

/// @brief Field ID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_ID, put=__cordl_internal_set__cordl_ID)) ::StringW  _cordl_ID;

static inline ::Photon::Pun::UtilityScripts::TabViewManager_Tab* New_ctor() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_Toggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_Toggle() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_View() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_View() ;

constexpr ::StringW const& __cordl_internal_get__cordl_ID() const;

constexpr ::StringW& __cordl_internal_get__cordl_ID() ;

constexpr void __cordl_internal_set_Toggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set_View(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__cordl_ID(::StringW  value) ;

/// @brief Method .ctor, addr 0xa73e338, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TabViewManager_Tab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TabViewManager_Tab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TabViewManager_Tab(TabViewManager_Tab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TabViewManager_Tab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TabViewManager_Tab(TabViewManager_Tab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31245};

/// @brief Field ID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____cordl_ID;

/// @brief Field Toggle, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ___Toggle;

/// @brief Field View, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___View;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager_Tab, ____cordl_ID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager_Tab, ___Toggle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TabViewManager_Tab, ___View) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::TabViewManager_Tab) == 0x28, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.TabViewManager/TabChangeEvent
class CORDL_TYPE TabViewManager_TabChangeEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xa73e2f0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TabViewManager_TabChangeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TabViewManager_TabChangeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TabViewManager_TabChangeEvent(TabViewManager_TabChangeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TabViewManager_TabChangeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TabViewManager_TabChangeEvent(TabViewManager_TabChangeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31244};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::TabViewManager_TabChangeEvent) == 0x30, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
