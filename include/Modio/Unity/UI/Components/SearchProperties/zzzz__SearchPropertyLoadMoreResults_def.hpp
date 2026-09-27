#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyLoadMoreResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SearchPropertyLoadMoreResults)
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Components {
class IPropertyMonoBehaviourEvents;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyLoadMoreResults;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyLoadMoreResults*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyLoadMoreResults*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyLoadMoreResults");
// Dependencies System.Object, UnityEngine.GameObject
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyLoadMoreResults
class CORDL_TYPE SearchPropertyLoadMoreResults : public ::System::Object {
public:
// Declarations
/// @brief Field _displayWhenMoreResults, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayWhenMoreResults, put=__cordl_internal_set__displayWhenMoreResults)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _displayWhenMoreResults;

/// @brief Field _loadMoreResultsButton, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadMoreResultsButton, put=__cordl_internal_set__loadMoreResultsButton)) ::UnityW<::UnityEngine::UI::Button>  _loadMoreResultsButton;

/// @brief Field _search, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__search, put=__cordl_internal_set__search)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  _search;

/// @brief Convert operator to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr operator  ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*() noexcept;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

/// @brief Method LoadMoreClicked, addr 0x9fc4b64, size 0x18, virtual false, abstract: false, final false
inline void LoadMoreClicked() ;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyLoadMoreResults* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fc49b0, size 0x4, virtual true, abstract: false, final true
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9fc4a8c, size 0xd8, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fc49b4, size 0xd8, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method OnSearchUpdate, addr 0x9fc4904, size 0xa8, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

/// @brief Method Start, addr 0x9fc49ac, size 0x4, virtual true, abstract: false, final true
inline void Start() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__displayWhenMoreResults() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__displayWhenMoreResults() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__loadMoreResultsButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__loadMoreResultsButton() ;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearch> const& __cordl_internal_get__search() const;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>& __cordl_internal_get__search() ;

constexpr void __cordl_internal_set__displayWhenMoreResults(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__loadMoreResultsButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__search(::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  value) ;

/// @brief Method .ctor, addr 0x9fc4b7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents* i___Modio__Unity__UI__Components__IPropertyMonoBehaviourEvents() noexcept;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyLoadMoreResults() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyLoadMoreResults", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyLoadMoreResults(SearchPropertyLoadMoreResults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyLoadMoreResults", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyLoadMoreResults(SearchPropertyLoadMoreResults const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27207};

/// [SerializeField]
/// @brief Field _displayWhenMoreResults, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____displayWhenMoreResults;

/// [SerializeField]
/// @brief Field _loadMoreResultsButton, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____loadMoreResultsButton;

/// @brief Field _search, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  ____search;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyLoadMoreResults, ____displayWhenMoreResults) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyLoadMoreResults, ____loadMoreResultsButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyLoadMoreResults, ____search) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyLoadMoreResults) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
