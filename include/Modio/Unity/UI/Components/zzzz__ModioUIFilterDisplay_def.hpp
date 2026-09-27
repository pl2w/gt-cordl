#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIFilterDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUIFilterDisplay)
namespace GlobalNamespace {
struct ModioUIFilterDisplay__UpdateTags_d__18;
}
namespace Modio::Unity::UI::Components::Selectables {
class ModioUIToggle;
}
namespace Modio::Unity::UI::Components {
class ModioUIFilterDisplay_TagEntry;
}
namespace Modio::Unity::UI::Components {
class ModioUIFilterDisplay___c;
}
namespace Modio::Unity::UI::Components {
class ModioUIFilterDisplay___c__DisplayClass18_0;
}
namespace Modio::Unity::UI::Components {
class ModioUIFilterTagCategory;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUIFilterDisplay;
}
namespace Modio::Unity::UI::Components {
class ModioUIFilterDisplay_TagEntry;
}
namespace Modio::Unity::UI::Components {
class ModioUIFilterDisplay___c;
}
namespace Modio::Unity::UI::Components {
class ModioUIFilterDisplay___c__DisplayClass18_0;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIFilterDisplay*);
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*);
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIFilterDisplay___c*);
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIFilterDisplay___c__DisplayClass18_0*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIFilterDisplay*, "Modio.Unity.UI.Components", "ModioUIFilterDisplay");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*, "Modio.Unity.UI.Components", "ModioUIFilterDisplay/TagEntry");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIFilterDisplay___c*, "Modio.Unity.UI.Components", "ModioUIFilterDisplay/<>c");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIFilterDisplay___c__DisplayClass18_0*, "Modio.Unity.UI.Components", "ModioUIFilterDisplay/<>c__DisplayClass18_0");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIFilterDisplay
class CORDL_TYPE ModioUIFilterDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateTags_d__18 = ::GlobalNamespace::ModioUIFilterDisplay__UpdateTags_d__18;

using TagEntry = ::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry;

using __c = ::Modio::Unity::UI::Components::ModioUIFilterDisplay___c;

using __c__DisplayClass18_0 = ::Modio::Unity::UI::Components::ModioUIFilterDisplay___c__DisplayClass18_0;

/// @brief Field _contentContainer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__contentContainer, put=__cordl_internal_set__contentContainer)) ::UnityW<::UnityEngine::Transform>  _contentContainer;

/// @brief Field _hasLocalChanges, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasLocalChanges, put=__cordl_internal_set__hasLocalChanges)) bool  _hasLocalChanges;

/// @brief Field _hasRegisteredListener, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasRegisteredListener, put=__cordl_internal_set__hasRegisteredListener)) bool  _hasRegisteredListener;

/// @brief Field categoryItemPrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_categoryItemPrefab, put=__cordl_internal_set_categoryItemPrefab)) ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  categoryItemPrefab;

/// @brief Field categoryItems, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_categoryItems, put=__cordl_internal_set_categoryItems)) ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIFilterTagCategory>>*  categoryItems;

/// @brief Field checkboxTagItemPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkboxTagItemPrefab, put=__cordl_internal_set_checkboxTagItemPrefab)) ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  checkboxTagItemPrefab;

/// @brief Field checkboxTagItems, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkboxTagItems, put=__cordl_internal_set_checkboxTagItems)) ::System::Collections::Generic::List_1<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*>*  checkboxTagItems;

/// @brief Field radioTagItemPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_radioTagItemPrefab, put=__cordl_internal_set_radioTagItemPrefab)) ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  radioTagItemPrefab;

/// @brief Method ApplyFilter, addr 0x9fb7964, size 0x214, virtual false, abstract: false, final false
inline void ApplyFilter() ;

/// @brief Method ClearFilter, addr 0x9fb7b78, size 0x150, virtual false, abstract: false, final false
inline void ClearFilter() ;

/// @brief Method GetDefaultSelection, addr 0x9fb77f0, size 0x174, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetDefaultSelection() ;

static inline ::Modio::Unity::UI::Components::ModioUIFilterDisplay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fb74d4, size 0x80, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9fb7730, size 0xc0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fb7554, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterListener, addr 0x9fb7390, size 0x144, virtual false, abstract: false, final false
inline void RegisterListener() ;

/// @brief Method Start, addr 0x9fb72f0, size 0xa0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateActiveTags, addr 0x9fb7558, size 0x1d8, virtual false, abstract: false, final false
inline void UpdateActiveTags() ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Components.ModioUIFilterDisplay::<UpdateTags>d__18))]
/// @brief Method UpdateTags, addr 0x9fb7cc8, size 0xa8, virtual false, abstract: false, final false
inline void UpdateTags() ;

/// [CompilerGenerated]
/// @brief Method <UpdateTags>g__HideListCheckboxItems|18_1, addr 0x9fb7e4c, size 0x1a4, virtual false, abstract: false, final false
static inline void _UpdateTags_g__HideListCheckboxItems_18_1(::System::Collections::Generic::List_1<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*>*  pool) ;

/// [CompilerGenerated]
/// @brief Method <UpdateTags>g__HideListItems|18_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::MonoBehaviour*>)
static inline void _UpdateTags_g__HideListItems_18_0(::by_ref<::System::Collections::Generic::List_1<T>*>  pool) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__contentContainer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__contentContainer() ;

constexpr bool const& __cordl_internal_get__hasLocalChanges() const;

constexpr bool& __cordl_internal_get__hasLocalChanges() ;

constexpr bool const& __cordl_internal_get__hasRegisteredListener() const;

constexpr bool& __cordl_internal_get__hasRegisteredListener() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle> const& __cordl_internal_get_categoryItemPrefab() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>& __cordl_internal_get_categoryItemPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIFilterTagCategory>>* const& __cordl_internal_get_categoryItems() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIFilterTagCategory>>*& __cordl_internal_get_categoryItems() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle> const& __cordl_internal_get_checkboxTagItemPrefab() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>& __cordl_internal_get_checkboxTagItemPrefab() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*>* const& __cordl_internal_get_checkboxTagItems() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*>*& __cordl_internal_get_checkboxTagItems() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle> const& __cordl_internal_get_radioTagItemPrefab() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>& __cordl_internal_get_radioTagItemPrefab() ;

constexpr void __cordl_internal_set__contentContainer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__hasLocalChanges(bool  value) ;

constexpr void __cordl_internal_set__hasRegisteredListener(bool  value) ;

constexpr void __cordl_internal_set_categoryItemPrefab(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  value) ;

constexpr void __cordl_internal_set_categoryItems(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIFilterTagCategory>>*  value) ;

constexpr void __cordl_internal_set_checkboxTagItemPrefab(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  value) ;

constexpr void __cordl_internal_set_checkboxTagItems(::System::Collections::Generic::List_1<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*>*  value) ;

constexpr void __cordl_internal_set_radioTagItemPrefab(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  value) ;

/// @brief Method .ctor, addr 0x9fb7d70, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIFilterDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIFilterDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIFilterDisplay(ModioUIFilterDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIFilterDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIFilterDisplay(ModioUIFilterDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27143};

/// [SerializeField]
/// @brief Field checkboxTagItemPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  ___checkboxTagItemPrefab;

/// @brief Field checkboxTagItems, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*>*  ___checkboxTagItems;

/// [SerializeField]
/// @brief Field radioTagItemPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  ___radioTagItemPrefab;

/// [SerializeField]
/// @brief Field categoryItemPrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  ___categoryItemPrefab;

/// [SerializeField]
/// @brief Field _contentContainer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____contentContainer;

/// @brief Field categoryItems, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIFilterTagCategory>>*  ___categoryItems;

/// @brief Field _hasRegisteredListener, offset: 0x50, size: 0x1, def value: None
 bool  ____hasRegisteredListener;

/// @brief Field _hasLocalChanges, offset: 0x51, size: 0x1, def value: None
 bool  ____hasLocalChanges;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay, ___checkboxTagItemPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay, ___checkboxTagItems) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay, ___radioTagItemPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay, ___categoryItemPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay, ____contentContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay, ___categoryItems) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay, ____hasRegisteredListener) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay, ____hasLocalChanges) == 0x51, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIFilterDisplay) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIFilterDisplay/<>c__DisplayClass18_0
class CORDL_TYPE ModioUIFilterDisplay___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>  __4__this;

/// @brief Field <>9__3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::UnityEngine::Events::UnityAction_1<bool>*  __9__3;

/// @brief Field categoryFilterToggle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_categoryFilterToggle, put=__cordl_internal_set_categoryFilterToggle)) ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterTagCategory>  categoryFilterToggle;

/// @brief Field childToggles, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_childToggles, put=__cordl_internal_set_childToggles)) ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>>*  childToggles;

static inline ::Modio::Unity::UI::Components::ModioUIFilterDisplay___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <UpdateTags>b__2, addr 0x9fb80c4, size 0x158, virtual false, abstract: false, final false
inline void _UpdateTags_b__2(bool  expanded) ;

/// @brief Method <UpdateTags>b__3, addr 0x9fb821c, size 0x40, virtual false, abstract: false, final false
inline void _UpdateTags_b__3(bool  isOn) ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Events::UnityAction_1<bool>* const& __cordl_internal_get___9__3() const;

constexpr ::UnityEngine::Events::UnityAction_1<bool>*& __cordl_internal_get___9__3() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterTagCategory> const& __cordl_internal_get_categoryFilterToggle() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterTagCategory>& __cordl_internal_get_categoryFilterToggle() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>>* const& __cordl_internal_get_childToggles() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>>*& __cordl_internal_get_childToggles() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>  value) ;

constexpr void __cordl_internal_set___9__3(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

constexpr void __cordl_internal_set_categoryFilterToggle(::UnityW<::Modio::Unity::UI::Components::ModioUIFilterTagCategory>  value) ;

constexpr void __cordl_internal_set_childToggles(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>>*  value) ;

/// @brief Method .ctor, addr 0x9fb80bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIFilterDisplay___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIFilterDisplay___c__DisplayClass18_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIFilterDisplay___c__DisplayClass18_0(ModioUIFilterDisplay___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIFilterDisplay___c__DisplayClass18_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIFilterDisplay___c__DisplayClass18_0(ModioUIFilterDisplay___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27141};

/// @brief Field childToggles, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>>*  ___childToggles;

/// @brief Field categoryFilterToggle, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterTagCategory>  ___categoryFilterToggle;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>  _____4__this;

/// @brief Field <>9__3, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_1<bool>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay___c__DisplayClass18_0, ___childToggles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay___c__DisplayClass18_0, ___categoryFilterToggle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay___c__DisplayClass18_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay___c__DisplayClass18_0, _____9__3) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIFilterDisplay___c__DisplayClass18_0) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIFilterDisplay/<>c
class CORDL_TYPE ModioUIFilterDisplay___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::UI::Components::ModioUIFilterDisplay___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_2<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*,bool>*  __9__14_0;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Func_2<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*,bool>*  __9__16_0;

/// @brief Field <>9__16_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_1, put=setStaticF___9__16_1)) ::System::Func_2<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*,::StringW>*  __9__16_1;

static inline ::Modio::Unity::UI::Components::ModioUIFilterDisplay___c* New_ctor() ;

/// @brief Method <ApplyFilter>b__16_0, addr 0x9fb8088, size 0x20, virtual false, abstract: false, final false
inline bool _ApplyFilter_b__16_0(::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*  tagItem) ;

/// @brief Method <ApplyFilter>b__16_1, addr 0x9fb80a8, size 0x14, virtual false, abstract: false, final false
inline ::StringW _ApplyFilter_b__16_1(::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*  tagItem) ;

/// @brief Method <GetDefaultSelection>b__14_0, addr 0x9fb8068, size 0x20, virtual false, abstract: false, final false
inline bool _GetDefaultSelection_b__14_0(::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*  t) ;

/// @brief Method .ctor, addr 0x9fb8060, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::UI::Components::ModioUIFilterDisplay___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*,bool>* getStaticF___9__14_0() ;

static inline ::System::Func_2<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*,bool>* getStaticF___9__16_0() ;

static inline ::System::Func_2<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*,::StringW>* getStaticF___9__16_1() ;

static inline void setStaticF___9(::Modio::Unity::UI::Components::ModioUIFilterDisplay___c*  value) ;

static inline void setStaticF___9__14_0(::System::Func_2<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*,bool>*  value) ;

static inline void setStaticF___9__16_0(::System::Func_2<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*,bool>*  value) ;

static inline void setStaticF___9__16_1(::System::Func_2<::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIFilterDisplay___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIFilterDisplay___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIFilterDisplay___c(ModioUIFilterDisplay___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIFilterDisplay___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIFilterDisplay___c(ModioUIFilterDisplay___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIFilterDisplay___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
// Dependencies System.Object
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIFilterDisplay/TagEntry
class CORDL_TYPE ModioUIFilterDisplay_TagEntry : public ::System::Object {
public:
// Declarations
/// @brief Field TagName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TagName, put=__cordl_internal_set_TagName)) ::StringW  TagName;

/// @brief Field Toggle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Toggle, put=__cordl_internal_set_Toggle)) ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  Toggle;

static inline ::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_TagName() const;

constexpr ::StringW& __cordl_internal_get_TagName() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle> const& __cordl_internal_get_Toggle() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>& __cordl_internal_get_Toggle() ;

constexpr void __cordl_internal_set_TagName(::StringW  value) ;

constexpr void __cordl_internal_set_Toggle(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  value) ;

/// @brief Method .ctor, addr 0x9fb7ff0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIFilterDisplay_TagEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIFilterDisplay_TagEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIFilterDisplay_TagEntry(ModioUIFilterDisplay_TagEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIFilterDisplay_TagEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIFilterDisplay_TagEntry(ModioUIFilterDisplay_TagEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27139};

/// @brief Field Toggle, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIToggle>  ___Toggle;

/// @brief Field TagName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TagName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry, ___Toggle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry, ___TagName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIFilterDisplay_TagEntry) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
