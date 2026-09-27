#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyInfoText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SearchPropertyInfoText)
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizedText;
}
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyInfoText;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyInfoText");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyInfoText
class CORDL_TYPE SearchPropertyInfoText : public ::System::Object {
public:
// Declarations
/// @brief Field _disableWhileShowingCustomText, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableWhileShowingCustomText, put=__cordl_internal_set__disableWhileShowingCustomText)) ::UnityW<::UnityEngine::GameObject>  _disableWhileShowingCustomText;

/// @brief Field _searchCategoryIcon, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchCategoryIcon, put=__cordl_internal_set__searchCategoryIcon)) ::UnityW<::UnityEngine::UI::Image>  _searchCategoryIcon;

/// @brief Field _searchCategoryName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchCategoryName, put=__cordl_internal_set__searchCategoryName)) ::UnityW<::TMPro::TMP_Text>  _searchCategoryName;

/// @brief Field _searchCategoryNameLocalized, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchCategoryNameLocalized, put=__cordl_internal_set__searchCategoryNameLocalized)) ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  _searchCategoryNameLocalized;

/// @brief Field _searchText, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchText, put=__cordl_internal_set__searchText)) ::UnityW<::TMPro::TMP_Text>  _searchText;

/// @brief Field _showWhileShowingCustomText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__showWhileShowingCustomText, put=__cordl_internal_set__showWhileShowingCustomText)) ::UnityW<::UnityEngine::GameObject>  _showWhileShowingCustomText;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText* New_ctor() ;

/// @brief Method OnSearchUpdate, addr 0x9fc4360, size 0x59c, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__disableWhileShowingCustomText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__disableWhileShowingCustomText() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__searchCategoryIcon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__searchCategoryIcon() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__searchCategoryName() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__searchCategoryName() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& __cordl_internal_get__searchCategoryNameLocalized() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& __cordl_internal_get__searchCategoryNameLocalized() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__searchText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__searchText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__showWhileShowingCustomText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__showWhileShowingCustomText() ;

constexpr void __cordl_internal_set__disableWhileShowingCustomText(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__searchCategoryIcon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__searchCategoryName(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__searchCategoryNameLocalized(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value) ;

constexpr void __cordl_internal_set__searchText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__showWhileShowingCustomText(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fc48fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyInfoText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyInfoText", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyInfoText(SearchPropertyInfoText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyInfoText", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyInfoText(SearchPropertyInfoText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27206};

/// [SerializeField]
/// @brief Field _searchText, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____searchText;

/// [SerializeField]
/// @brief Field _disableWhileShowingCustomText, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____disableWhileShowingCustomText;

/// [SerializeField]
/// @brief Field _showWhileShowingCustomText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____showWhileShowingCustomText;

/// [SerializeField]
/// @brief Field _searchCategoryName, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____searchCategoryName;

/// [SerializeField]
/// @brief Field _searchCategoryNameLocalized, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  ____searchCategoryNameLocalized;

/// [SerializeField]
/// @brief Field _searchCategoryIcon, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____searchCategoryIcon;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText, ____searchText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText, ____disableWhileShowingCustomText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText, ____showWhileShowingCustomText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText, ____searchCategoryName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText, ____searchCategoryNameLocalized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText, ____searchCategoryIcon) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyInfoText) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
