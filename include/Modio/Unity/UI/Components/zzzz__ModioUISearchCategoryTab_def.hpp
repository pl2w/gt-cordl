#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUISearchCategoryTab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioUISearchCategoryTab)
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizedText;
}
namespace Modio::Unity::UI::Search {
class ModioUISearchSettings;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUISearchCategoryTab;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUISearchCategoryTab*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUISearchCategoryTab*, "Modio.Unity.UI.Components", "ModioUISearchCategoryTab");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUISearchCategoryTab
class CORDL_TYPE ModioUISearchCategoryTab : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _label, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TMP_Text>  _label;

/// @brief Field _labelLocalised, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__labelLocalised, put=__cordl_internal_set__labelLocalised)) ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  _labelLocalised;

/// @brief Field _search, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__search, put=__cordl_internal_set__search)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  _search;

/// @brief Field _selectOnEnable, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__selectOnEnable, put=__cordl_internal_set__selectOnEnable)) bool  _selectOnEnable;

/// @brief Field _toggle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::UnityEngine::UI::Toggle>  _toggle;

/// @brief Method Awake, addr 0x9fbac80, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::UI::Components::ModioUISearchCategoryTab* New_ctor() ;

/// @brief Method OnToggleValueChanged, addr 0x9fbad7c, size 0x158, virtual false, abstract: false, final false
inline void OnToggleValueChanged(bool  newValue) ;

/// @brief Method SetSearch, addr 0x9fbaed4, size 0xf4, virtual false, abstract: false, final false
inline void SetSearch(::Modio::Unity::UI::Search::ModioUISearchSettings*  searchSettings) ;

/// @brief Method SetSelected, addr 0x9fbb01c, size 0x100, virtual false, abstract: false, final false
inline void SetSelected(bool  selected) ;

/// @brief Method Start, addr 0x9fbad58, size 0x24, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__label() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& __cordl_internal_get__labelLocalised() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& __cordl_internal_get__labelLocalised() ;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& __cordl_internal_get__search() const;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& __cordl_internal_get__search() ;

constexpr bool const& __cordl_internal_get__selectOnEnable() const;

constexpr bool& __cordl_internal_get__selectOnEnable() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle() ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__labelLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value) ;

constexpr void __cordl_internal_set__search(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value) ;

constexpr void __cordl_internal_set__selectOnEnable(bool  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

/// @brief Method .ctor, addr 0x9fbb11c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearchCategoryTab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchCategoryTab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISearchCategoryTab(ModioUISearchCategoryTab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchCategoryTab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISearchCategoryTab(ModioUISearchCategoryTab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27151};

/// [SerializeField]
/// @brief Field _search, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  ____search;

/// [SerializeField]
/// @brief Field _label, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____label;

/// [SerializeField]
/// @brief Field _labelLocalised, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  ____labelLocalised;

/// [SerializeField]
/// @brief Field _selectOnEnable, offset: 0x38, size: 0x1, def value: None
 bool  ____selectOnEnable;

/// @brief Field _toggle, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____toggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTab, ____search) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTab, ____label) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTab, ____labelLocalised) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTab, ____selectOnEnable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTab, ____toggle) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUISearchCategoryTab) == 0x48, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
