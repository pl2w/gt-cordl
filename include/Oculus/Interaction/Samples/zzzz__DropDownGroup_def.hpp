#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/DropDownGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DropDownGroup)
namespace Oculus::Interaction::Samples {
class DropDownGroup___c__DisplayClass41_0;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class DropDownGroup;
}
namespace Oculus::Interaction::Samples {
class DropDownGroup___c__DisplayClass41_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::DropDownGroup*);
MARK_REF_T(::Oculus::Interaction::Samples::DropDownGroup___c__DisplayClass41_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::DropDownGroup*, "Oculus.Interaction.Samples", "DropDownGroup");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::DropDownGroup___c__DisplayClass41_0*, "Oculus.Interaction.Samples", "DropDownGroup/<>c__DisplayClass41_0");
// Dependencies UnityEngine.Component, UnityEngine.Events.UnityAction`1<T0>, UnityEngine.MonoBehaviour, UnityEngine.UI.Toggle
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.DropDownGroup
class CORDL_TYPE DropDownGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass41_0 = ::Oculus::Interaction::Samples::DropDownGroup___c__DisplayClass41_0;

 __declspec(property(get=get_Icon, put=set_Icon)) ::UnityW<::UnityEngine::UI::Image>  Icon;

 __declspec(property(get=get_IconName, put=set_IconName)) ::StringW  IconName;

 __declspec(property(get=get_SelectedIndex, put=set_SelectedIndex)) int32_t  SelectedIndex;

 __declspec(property(get=get_SelectedToggle)) ::UnityW<::UnityEngine::UI::Toggle>  SelectedToggle;

 __declspec(property(get=get_Subtitle, put=set_Subtitle)) ::UnityW<::TMPro::TextMeshProUGUI>  Subtitle;

 __declspec(property(get=get_SubtitleName, put=set_SubtitleName)) ::StringW  SubtitleName;

 __declspec(property(get=get_Title, put=set_Title)) ::UnityW<::TMPro::TextMeshProUGUI>  Title;

 __declspec(property(get=get_TitleName, put=set_TitleName)) ::StringW  TitleName;

/// @brief Field WhenSelectionChanged, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSelectionChanged, put=__cordl_internal_set_WhenSelectionChanged)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  WhenSelectionChanged;

/// @brief Field _headerToggle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__headerToggle, put=__cordl_internal_set__headerToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _headerToggle;

/// @brief Field _icon, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__icon, put=__cordl_internal_set__icon)) ::UnityW<::UnityEngine::UI::Image>  _icon;

/// @brief Field _iconName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconName, put=__cordl_internal_set__iconName)) ::StringW  _iconName;

/// @brief Field _selectedIndex, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectedIndex, put=__cordl_internal_set__selectedIndex)) int32_t  _selectedIndex;

/// @brief Field _started, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _subtitle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__subtitle, put=__cordl_internal_set__subtitle)) ::UnityW<::TMPro::TextMeshProUGUI>  _subtitle;

/// @brief Field _subtitleName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__subtitleName, put=__cordl_internal_set__subtitleName)) ::StringW  _subtitleName;

/// @brief Field _title, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__title, put=__cordl_internal_set__title)) ::UnityW<::TMPro::TextMeshProUGUI>  _title;

/// @brief Field _titleName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__titleName, put=__cordl_internal_set__titleName)) ::StringW  _titleName;

/// @brief Field _toggleActions, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleActions, put=__cordl_internal_set__toggleActions)) ::ArrayW<::UnityEngine::Events::UnityAction_1<bool>*>  _toggleActions;

/// @brief Field _toggleGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleGroup, put=__cordl_internal_set__toggleGroup)) ::UnityW<::UnityEngine::UI::ToggleGroup>  _toggleGroup;

/// @brief Field _toggles, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggles, put=__cordl_internal_set__toggles)) ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>>  _toggles;

/// @brief Method ForceUpdateSelectedIndex, addr 0xa435e68, size 0x74, virtual false, abstract: false, final false
inline void ForceUpdateSelectedIndex() ;

/// @brief Method HandleToggleChanged, addr 0xa435f8c, size 0x298, virtual false, abstract: false, final false
inline void HandleToggleChanged(bool  isOn, int32_t  index) ;

/// @brief Method InitializeToggleActions, addr 0xa435b08, size 0x168, virtual false, abstract: false, final false
inline void InitializeToggleActions() ;

/// @brief Method InitializeToggleGroup, addr 0xa435c70, size 0x138, virtual false, abstract: false, final false
inline void InitializeToggleGroup() ;

/// @brief Method InjectAllDropDownShowSelectedItem, addr 0xa43622c, size 0x30, virtual false, abstract: false, final false
inline void InjectAllDropDownShowSelectedItem(::ArrayW<::UnityEngine::UI::Toggle*>  toggles, ::UnityEngine::UI::ToggleGroup*  toggleGroup) ;

/// @brief Method InjectToggleGroup, addr 0xa436264, size 0x8, virtual false, abstract: false, final false
inline void InjectToggleGroup(::UnityEngine::UI::ToggleGroup*  toggleGroup) ;

/// @brief Method InjectToggles, addr 0xa43625c, size 0x8, virtual false, abstract: false, final false
inline void InjectToggles(::ArrayW<::UnityEngine::UI::Toggle*>  toggles) ;

static inline ::Oculus::Interaction::Samples::DropDownGroup* New_ctor() ;

/// @brief Method OnDisable, addr 0xa435edc, size 0xb0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa435da8, size 0xc0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reset, addr 0xa4358f0, size 0x58, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa435948, size 0x1c0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetChildComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TComponent>
requires(::cordl_internals::type_constraint<TComponent, ::UnityEngine::Component*>)
static inline bool TryGetChildComponent(::UnityEngine::Transform*  root, ::StringW  childName, ::by_ref<TComponent>  component) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__37_0, addr 0xa43631c, size 0x70, virtual false, abstract: false, final false
inline bool _Start_b__37_0(::UnityEngine::UI::Toggle*  toggle) ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_WhenSelectionChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_WhenSelectionChanged() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__headerToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__headerToggle() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__icon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__icon() ;

constexpr ::StringW const& __cordl_internal_get__iconName() const;

constexpr ::StringW& __cordl_internal_get__iconName() ;

constexpr int32_t const& __cordl_internal_get__selectedIndex() const;

constexpr int32_t& __cordl_internal_get__selectedIndex() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__subtitle() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__subtitle() ;

constexpr ::StringW const& __cordl_internal_get__subtitleName() const;

constexpr ::StringW& __cordl_internal_get__subtitleName() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__title() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__title() ;

constexpr ::StringW const& __cordl_internal_get__titleName() const;

constexpr ::StringW& __cordl_internal_get__titleName() ;

constexpr ::ArrayW<::UnityEngine::Events::UnityAction_1<bool>*> const& __cordl_internal_get__toggleActions() const;

constexpr ::ArrayW<::UnityEngine::Events::UnityAction_1<bool>*>& __cordl_internal_get__toggleActions() ;

constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& __cordl_internal_get__toggleGroup() const;

constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& __cordl_internal_get__toggleGroup() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>> const& __cordl_internal_get__toggles() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>>& __cordl_internal_get__toggles() ;

constexpr void __cordl_internal_set_WhenSelectionChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__headerToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__iconName(::StringW  value) ;

constexpr void __cordl_internal_set__selectedIndex(int32_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__subtitle(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__subtitleName(::StringW  value) ;

constexpr void __cordl_internal_set__title(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__titleName(::StringW  value) ;

constexpr void __cordl_internal_set__toggleActions(::ArrayW<::UnityEngine::Events::UnityAction_1<bool>*>  value) ;

constexpr void __cordl_internal_set__toggleGroup(::UnityW<::UnityEngine::UI::ToggleGroup>  value) ;

constexpr void __cordl_internal_set__toggles(::ArrayW<::UnityW<::UnityEngine::UI::Toggle>>  value) ;

/// @brief Method .ctor, addr 0xa43626c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Icon, addr 0xa435814, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Image> get_Icon() ;

/// @brief Method get_IconName, addr 0xa435824, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_IconName() ;

/// @brief Method get_SelectedIndex, addr 0xa435834, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SelectedIndex() ;

/// @brief Method get_SelectedToggle, addr 0xa4358b0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Toggle> get_SelectedToggle() ;

/// @brief Method get_Subtitle, addr 0xa4357f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::TMPro::TextMeshProUGUI> get_Subtitle() ;

/// @brief Method get_SubtitleName, addr 0xa435804, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SubtitleName() ;

/// @brief Method get_Title, addr 0xa4357d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::TMPro::TextMeshProUGUI> get_Title() ;

/// @brief Method get_TitleName, addr 0xa4357e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TitleName() ;

/// @brief Method set_Icon, addr 0xa43581c, size 0x8, virtual false, abstract: false, final false
inline void set_Icon(::UnityEngine::UI::Image*  value) ;

/// @brief Method set_IconName, addr 0xa43582c, size 0x8, virtual false, abstract: false, final false
inline void set_IconName(::StringW  value) ;

/// @brief Method set_SelectedIndex, addr 0xa43583c, size 0x74, virtual false, abstract: false, final false
inline void set_SelectedIndex(int32_t  value) ;

/// @brief Method set_Subtitle, addr 0xa4357fc, size 0x8, virtual false, abstract: false, final false
inline void set_Subtitle(::TMPro::TextMeshProUGUI*  value) ;

/// @brief Method set_SubtitleName, addr 0xa43580c, size 0x8, virtual false, abstract: false, final false
inline void set_SubtitleName(::StringW  value) ;

/// @brief Method set_Title, addr 0xa4357dc, size 0x8, virtual false, abstract: false, final false
inline void set_Title(::TMPro::TextMeshProUGUI*  value) ;

/// @brief Method set_TitleName, addr 0xa4357ec, size 0x8, virtual false, abstract: false, final false
inline void set_TitleName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DropDownGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DropDownGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DropDownGroup(DropDownGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropDownGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropDownGroup(DropDownGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28293};

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)1)]
/// [Tooltip("ToggleGroup for all the options in the dropdown. It will be enforced to dissallow off-state and be referenced in all toggles. If none provided it will be searched in the hierarchy under this component.")]
/// @brief Field _toggleGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ToggleGroup>  ____toggleGroup;

/// [SerializeField]
/// [Optional]
/// [Tooltip("The toggle for the headerIt will be closed automatically when an option is selected.")]
/// @brief Field _headerToggle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____headerToggle;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)1)]
/// [Tooltip("Toggles for all options in the dropdown, if none provided it will be searched in the hierarchy under the toggle group.")]
/// @brief Field _toggles, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>>  ____toggles;

/// @brief Field WhenSelectionChanged, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___WhenSelectionChanged;

/// [Header("Header visuals")]
/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// [Tooltip("Title label in the header")]
/// @brief Field _title, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____title;

/// [SerializeField]
/// [ConditionalHide("_title", null, (Oculus.Interaction.ConditionalHideAttribute::DisplayMode)3)]
/// [Tooltip("Name of the Gameobject holding the title in each option.")]
/// @brief Field _titleName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____titleName;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// [Tooltip("Subtitle label in the header.")]
/// @brief Field _subtitle, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____subtitle;

/// [SerializeField]
/// [ConditionalHide("_subtitle", null, (Oculus.Interaction.ConditionalHideAttribute::DisplayMode)3)]
/// [Tooltip("Name of the Gameobject holding the subtitle in each option.")]
/// @brief Field _subtitleName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____subtitleName;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// [Tooltip("Image for the icon in the header.")]
/// @brief Field _icon, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____icon;

/// [SerializeField]
/// [ConditionalHide("_icon", null, (Oculus.Interaction.ConditionalHideAttribute::DisplayMode)3)]
/// [Tooltip("Name of the Gameobject holding the icon in each option.")]
/// @brief Field _iconName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____iconName;

/// @brief Field _selectedIndex, offset: 0x70, size: 0x4, def value: None
 int32_t  ____selectedIndex;

/// @brief Field _toggleActions, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Events::UnityAction_1<bool>*>  ____toggleActions;

/// @brief Field _started, offset: 0x80, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____toggleGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____headerToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____toggles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ___WhenSelectionChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____title) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____titleName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____subtitle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____subtitleName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____icon) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____iconName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____selectedIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____toggleActions) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup, ____started) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::DropDownGroup) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.DropDownGroup/<>c__DisplayClass41_0
class CORDL_TYPE DropDownGroup___c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Samples::DropDownGroup>  __4__this;

/// @brief Field toggleIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_toggleIndex, put=__cordl_internal_set_toggleIndex)) int32_t  toggleIndex;

static inline ::Oculus::Interaction::Samples::DropDownGroup___c__DisplayClass41_0* New_ctor() ;

/// @brief Method <InitializeToggleActions>b__0, addr 0xa43638c, size 0x5c, virtual false, abstract: false, final false
inline void _InitializeToggleActions_b__0(bool  isOn) ;

constexpr ::UnityW<::Oculus::Interaction::Samples::DropDownGroup> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Samples::DropDownGroup>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_toggleIndex() const;

constexpr int32_t& __cordl_internal_get_toggleIndex() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Samples::DropDownGroup>  value) ;

constexpr void __cordl_internal_set_toggleIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xa436224, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DropDownGroup___c__DisplayClass41_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DropDownGroup___c__DisplayClass41_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DropDownGroup___c__DisplayClass41_0(DropDownGroup___c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropDownGroup___c__DisplayClass41_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropDownGroup___c__DisplayClass41_0(DropDownGroup___c__DisplayClass41_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28292};

/// @brief Field toggleIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___toggleIndex;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Samples::DropDownGroup>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup___c__DisplayClass41_0, ___toggleIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::DropDownGroup___c__DisplayClass41_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::DropDownGroup___c__DisplayClass41_0) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
