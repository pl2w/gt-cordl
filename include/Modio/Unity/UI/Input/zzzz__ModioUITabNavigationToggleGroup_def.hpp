#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUITabNavigationToggleGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Input/zzzz__ModioUIInput_ModioAction_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__ToggleGroup_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUITabNavigationToggleGroup)
namespace Modio::Unity::UI::Input {
class ModioUITabNavigationToggleGroup___c;
}
namespace Modio::Unity::UI::Panels {
class ModioPanelBase;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Modio::Unity::UI::Input {
class ModioUITabNavigationToggleGroup;
}
namespace Modio::Unity::UI::Input {
class ModioUITabNavigationToggleGroup___c;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup*);
MARK_REF_T(::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup___c*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup*, "Modio.Unity.UI.Input", "ModioUITabNavigationToggleGroup");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup___c*, "Modio.Unity.UI.Input", "ModioUITabNavigationToggleGroup/<>c");
// Dependencies Modio.Unity.UI.Input.ModioUIInput::ModioAction, UnityEngine.UI.ToggleGroup
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUITabNavigationToggleGroup
class CORDL_TYPE ModioUITabNavigationToggleGroup : public ::UnityEngine::UI::ToggleGroup {
public:
// Declarations
using __c = ::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup___c;

/// @brief Field _leftAction, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__leftAction, put=__cordl_internal_set__leftAction)) ::GlobalNamespace::ModioUIInput_ModioAction  _leftAction;

/// @brief Field _loopSelection, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__loopSelection, put=__cordl_internal_set__loopSelection)) bool  _loopSelection;

/// @brief Field _parentPanel, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentPanel, put=__cordl_internal_set__parentPanel)) ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  _parentPanel;

/// @brief Field _rightAction, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__rightAction, put=__cordl_internal_set__rightAction)) ::GlobalNamespace::ModioUIInput_ModioAction  _rightAction;

/// @brief Method Awake, addr 0x9fb6b94, size 0x64, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClampIndex, addr 0x9fb7100, size 0x80, virtual false, abstract: false, final false
inline int32_t ClampIndex(int32_t  newIndex) ;

/// @brief Method IsOnIndex, addr 0x9fb6f94, size 0x16c, virtual false, abstract: false, final false
inline int32_t IsOnIndex() ;

static inline ::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup* New_ctor() ;

/// @brief Method OnDisable, addr 0x9fb6e3c, size 0xdc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fb6bf8, size 0xec, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPanelChangedFocus, addr 0x9fb6ce4, size 0x158, virtual false, abstract: false, final false
inline void OnPanelChangedFocus(bool  hasFocus) ;

/// @brief Method TabLeft, addr 0x9fb6f18, size 0x7c, virtual false, abstract: false, final false
inline void TabLeft() ;

/// @brief Method TabRight, addr 0x9fb7180, size 0x7c, virtual false, abstract: false, final false
inline void TabRight() ;

constexpr ::GlobalNamespace::ModioUIInput_ModioAction const& __cordl_internal_get__leftAction() const;

constexpr ::GlobalNamespace::ModioUIInput_ModioAction& __cordl_internal_get__leftAction() ;

constexpr bool const& __cordl_internal_get__loopSelection() const;

constexpr bool& __cordl_internal_get__loopSelection() ;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase> const& __cordl_internal_get__parentPanel() const;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>& __cordl_internal_get__parentPanel() ;

constexpr ::GlobalNamespace::ModioUIInput_ModioAction const& __cordl_internal_get__rightAction() const;

constexpr ::GlobalNamespace::ModioUIInput_ModioAction& __cordl_internal_get__rightAction() ;

constexpr void __cordl_internal_set__leftAction(::GlobalNamespace::ModioUIInput_ModioAction  value) ;

constexpr void __cordl_internal_set__loopSelection(bool  value) ;

constexpr void __cordl_internal_set__parentPanel(::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  value) ;

constexpr void __cordl_internal_set__rightAction(::GlobalNamespace::ModioUIInput_ModioAction  value) ;

/// @brief Method .ctor, addr 0x9fb71fc, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUITabNavigationToggleGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUITabNavigationToggleGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUITabNavigationToggleGroup(ModioUITabNavigationToggleGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUITabNavigationToggleGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUITabNavigationToggleGroup(ModioUITabNavigationToggleGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27134};

/// [SerializeField]
/// @brief Field _leftAction, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::ModioUIInput_ModioAction  ____leftAction;

/// [SerializeField]
/// @brief Field _rightAction, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::ModioUIInput_ModioAction  ____rightAction;

/// [SerializeField]
/// @brief Field _loopSelection, offset: 0x38, size: 0x1, def value: None
 bool  ____loopSelection;

/// @brief Field _parentPanel, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  ____parentPanel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup, ____leftAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup, ____rightAction) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup, ____loopSelection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup, ____parentPanel) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup) == 0x48, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUITabNavigationToggleGroup/<>c
class CORDL_TYPE ModioUITabNavigationToggleGroup___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Comparison_1<::UnityW<::UnityEngine::UI::Toggle>>*  __9__11_0;

static inline ::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup___c* New_ctor() ;

/// @brief Method <IsOnIndex>b__11_0, addr 0x9fb7280, size 0x70, virtual false, abstract: false, final false
inline int32_t _IsOnIndex_b__11_0(::UnityEngine::UI::Toggle*  a, ::UnityEngine::UI::Toggle*  b) ;

/// @brief Method .ctor, addr 0x9fb7278, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityW<::UnityEngine::UI::Toggle>>* getStaticF___9__11_0() ;

static inline void setStaticF___9(::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup___c*  value) ;

static inline void setStaticF___9__11_0(::System::Comparison_1<::UnityW<::UnityEngine::UI::Toggle>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUITabNavigationToggleGroup___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUITabNavigationToggleGroup___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUITabNavigationToggleGroup___c(ModioUITabNavigationToggleGroup___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUITabNavigationToggleGroup___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUITabNavigationToggleGroup___c(ModioUITabNavigationToggleGroup___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27133};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Input::ModioUITabNavigationToggleGroup___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
