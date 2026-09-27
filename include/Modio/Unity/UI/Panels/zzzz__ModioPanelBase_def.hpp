#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioPanelBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioPanelBase)
namespace GlobalNamespace {
struct ModioPanelBase_GainedFocusCause;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModioPanelBase;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModioPanelBase*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioPanelBase*, "Modio.Unity.UI.Panels", "ModioPanelBase");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioPanelBase
class CORDL_TYPE ModioPanelBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GainedFocusCause = ::GlobalNamespace::ModioPanelBase_GainedFocusCause;

 __declspec(property(get=get_HasFocus, put=set_HasFocus)) bool  HasFocus;

/// @brief Field OnHasFocusChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHasFocusChanged, put=__cordl_internal_set_OnHasFocusChanged)) ::System::Action_1<bool>*  OnHasFocusChanged;

/// @brief Field <HasFocus>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasFocus_k__BackingField, put=__cordl_internal_set__HasFocus_k__BackingField)) bool  _HasFocus_k__BackingField;

/// @brief Field _lastSelectedGameObject, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSelectedGameObject, put=__cordl_internal_set__lastSelectedGameObject)) ::UnityW<::UnityEngine::GameObject>  _lastSelectedGameObject;

/// @brief Field _openOnTopOf, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__openOnTopOf, put=__cordl_internal_set__openOnTopOf)) ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  _openOnTopOf;

/// @brief Field _panelToEnable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__panelToEnable, put=__cordl_internal_set__panelToEnable)) ::UnityW<::UnityEngine::GameObject>  _panelToEnable;

/// @brief Field _selectOnOpen, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectOnOpen, put=__cordl_internal_set__selectOnOpen)) ::UnityW<::UnityEngine::UI::Selectable>  _selectOnOpen;

/// @brief Field _startHidden, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__startHidden, put=__cordl_internal_set__startHidden)) bool  _startHidden;

/// @brief Method Awake, addr 0x9fa5494, size 0x20, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelPressed, addr 0x9fa805c, size 0x4, virtual true, abstract: false, final false
inline void CancelPressed() ;

/// @brief Method ClosePanel, addr 0x9fa3ce4, size 0x9c, virtual false, abstract: false, final false
inline void ClosePanel() ;

/// @brief Method DoDefaultSelection, addr 0x9fa6028, size 0xb4, virtual true, abstract: false, final false
inline void DoDefaultSelection() ;

/// @brief Method FocusedPanelLateUpdate, addr 0x9fab214, size 0x15c, virtual true, abstract: false, final false
inline void FocusedPanelLateUpdate() ;

/// @brief Method NewSelectionWhileFocused, addr 0x9fab3e0, size 0x8, virtual true, abstract: false, final false
inline void NewSelectionWhileFocused(::UnityEngine::GameObject*  currentSelection) ;

static inline ::Modio::Unity::UI::Panels::ModioPanelBase* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9faad8c, size 0x18, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGainedFocus, addr 0x9fa394c, size 0x200, virtual true, abstract: false, final false
inline void OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour) ;

/// @brief Method OnLostFocus, addr 0x9fa428c, size 0x110, virtual true, abstract: false, final false
inline void OnLostFocus() ;

/// @brief Method OnSwappedControlScheme, addr 0x9fab3e8, size 0x2a0, virtual false, abstract: false, final false
inline void OnSwappedControlScheme(bool  isController) ;

/// @brief Method OpenPanel, addr 0x9fa2f78, size 0x1fc, virtual false, abstract: false, final false
inline void OpenPanel() ;

/// @brief Method OverrideLastSelectedGameObject, addr 0x9fab3d8, size 0x8, virtual false, abstract: false, final false
inline void OverrideLastSelectedGameObject(::UnityEngine::GameObject*  selection) ;

/// @brief Method SetSelectedGameObject, addr 0x9fab370, size 0x68, virtual true, abstract: false, final false
inline void SetSelectedGameObject(::UnityEngine::GameObject*  selection) ;

/// @brief Method Start, addr 0x9fa3174, size 0xa8, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnHasFocusChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnHasFocusChanged() ;

constexpr bool const& __cordl_internal_get__HasFocus_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasFocus_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__lastSelectedGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__lastSelectedGameObject() ;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase> const& __cordl_internal_get__openOnTopOf() const;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>& __cordl_internal_get__openOnTopOf() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__panelToEnable() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__panelToEnable() ;

constexpr ::UnityW<::UnityEngine::UI::Selectable> const& __cordl_internal_get__selectOnOpen() const;

constexpr ::UnityW<::UnityEngine::UI::Selectable>& __cordl_internal_get__selectOnOpen() ;

constexpr bool const& __cordl_internal_get__startHidden() const;

constexpr bool& __cordl_internal_get__startHidden() ;

constexpr void __cordl_internal_set_OnHasFocusChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__HasFocus_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__lastSelectedGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__openOnTopOf(::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  value) ;

constexpr void __cordl_internal_set__panelToEnable(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__selectOnOpen(::UnityW<::UnityEngine::UI::Selectable>  value) ;

constexpr void __cordl_internal_set__startHidden(bool  value) ;

/// @brief Method .ctor, addr 0x9fa3228, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnHasFocusChanged, addr 0x9faaa0c, size 0xb0, virtual false, abstract: false, final false
inline void add_OnHasFocusChanged(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_HasFocus, addr 0x9faa9fc, size 0x8, virtual false, abstract: false, final false
inline bool get_HasFocus() ;

/// [CompilerGenerated]
/// @brief Method remove_OnHasFocusChanged, addr 0x9faaabc, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnHasFocusChanged(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_HasFocus, addr 0x9faaa04, size 0x8, virtual false, abstract: false, final false
inline void set_HasFocus(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioPanelBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioPanelBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioPanelBase(ModioPanelBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioPanelBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioPanelBase(ModioPanelBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27077};

/// [SerializeField]
/// @brief Field _panelToEnable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____panelToEnable;

/// [SerializeField]
/// @brief Field _selectOnOpen, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  ____selectOnOpen;

/// [SerializeField]
/// @brief Field _startHidden, offset: 0x30, size: 0x1, def value: None
 bool  ____startHidden;

/// [SerializeField]
/// @brief Field _openOnTopOf, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  ____openOnTopOf;

/// @brief Field _lastSelectedGameObject, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____lastSelectedGameObject;

/// [CompilerGenerated]
/// @brief Field <HasFocus>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____HasFocus_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnHasFocusChanged, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnHasFocusChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPanelBase, ____panelToEnable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPanelBase, ____selectOnOpen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPanelBase, ____startHidden) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPanelBase, ____openOnTopOf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPanelBase, ____lastSelectedGameObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPanelBase, ____HasFocus_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPanelBase, ___OnHasFocusChanged) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModioPanelBase) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
