#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyPagedSearch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SearchPropertyPagedSearch)
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Components {
class IPropertyMonoBehaviourEvents;
}
namespace Modio::Unity::UI::Panels {
class ModioPanelBase;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyPagedSearch;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyPagedSearch*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyPagedSearch*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyPagedSearch");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyPagedSearch
class CORDL_TYPE SearchPropertyPagedSearch : public ::System::Object {
public:
// Declarations
/// @brief Field _nextPage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextPage, put=__cordl_internal_set__nextPage)) ::UnityW<::UnityEngine::UI::Button>  _nextPage;

/// @brief Field _pageCountString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageCountString, put=__cordl_internal_set__pageCountString)) ::StringW  _pageCountString;

/// @brief Field _pageCountText, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageCountText, put=__cordl_internal_set__pageCountText)) ::UnityW<::TMPro::TMP_Text>  _pageCountText;

/// @brief Field _prevPage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__prevPage, put=__cordl_internal_set__prevPage)) ::UnityW<::UnityEngine::UI::Button>  _prevPage;

/// @brief Field _search, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__search, put=__cordl_internal_set__search)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  _search;

/// @brief Field _whenPanelFocused, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenPanelFocused, put=__cordl_internal_set__whenPanelFocused)) ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  _whenPanelFocused;

/// @brief Convert operator to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr operator  ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*() noexcept;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyPagedSearch* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fc4f64, size 0x4, virtual true, abstract: false, final true
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9fc5050, size 0xe8, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fc4f68, size 0xe8, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method OnNextPageClicked, addr 0x9fc4ea8, size 0xbc, virtual false, abstract: false, final false
inline void OnNextPageClicked() ;

/// @brief Method OnPrevPageClicked, addr 0x9fc4e00, size 0xa8, virtual false, abstract: false, final false
inline void OnPrevPageClicked() ;

/// @brief Method OnSearchUpdate, addr 0x9fc4b84, size 0x118, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

/// @brief Method Start, addr 0x9fc4c9c, size 0x164, virtual true, abstract: false, final true
inline void Start() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__nextPage() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__nextPage() ;

constexpr ::StringW const& __cordl_internal_get__pageCountString() const;

constexpr ::StringW& __cordl_internal_get__pageCountString() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__pageCountText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__pageCountText() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__prevPage() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__prevPage() ;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearch> const& __cordl_internal_get__search() const;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>& __cordl_internal_get__search() ;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase> const& __cordl_internal_get__whenPanelFocused() const;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>& __cordl_internal_get__whenPanelFocused() ;

constexpr void __cordl_internal_set__nextPage(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__pageCountString(::StringW  value) ;

constexpr void __cordl_internal_set__pageCountText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__prevPage(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__search(::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  value) ;

constexpr void __cordl_internal_set__whenPanelFocused(::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  value) ;

/// @brief Method .ctor, addr 0x9fc5138, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents* i___Modio__Unity__UI__Components__IPropertyMonoBehaviourEvents() noexcept;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyPagedSearch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyPagedSearch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyPagedSearch(SearchPropertyPagedSearch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyPagedSearch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyPagedSearch(SearchPropertyPagedSearch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27208};

/// [SerializeField]
/// @brief Field _pageCountText, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____pageCountText;

/// [SerializeField]
/// @brief Field _pageCountString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____pageCountString;

/// [SerializeField]
/// @brief Field _prevPage, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____prevPage;

/// [SerializeField]
/// @brief Field _nextPage, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____nextPage;

/// [SerializeField]
/// @brief Field _whenPanelFocused, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  ____whenPanelFocused;

/// @brief Field _search, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  ____search;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyPagedSearch, ____pageCountText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyPagedSearch, ____pageCountString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyPagedSearch, ____prevPage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyPagedSearch, ____nextPage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyPagedSearch, ____whenPanelFocused) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyPagedSearch, ____search) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyPagedSearch) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
