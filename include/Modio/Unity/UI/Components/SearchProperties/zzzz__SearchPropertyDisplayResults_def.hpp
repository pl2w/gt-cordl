#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyDisplayResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SearchPropertyDisplayResults)
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Components {
class ModioUIGroup;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace Modio {
class Error;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyDisplayResults;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyDisplayResults");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyDisplayResults
class CORDL_TYPE SearchPropertyDisplayResults : public ::System::Object {
public:
// Declarations
/// @brief Field _displayWhenNoResults, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayWhenNoResults, put=__cordl_internal_set__displayWhenNoResults)) ::UnityW<::UnityEngine::GameObject>  _displayWhenNoResults;

/// @brief Field _displayWhenOffline, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayWhenOffline, put=__cordl_internal_set__displayWhenOffline)) ::UnityW<::UnityEngine::GameObject>  _displayWhenOffline;

/// @brief Field _errorHandler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorHandler, put=__cordl_internal_set__errorHandler)) ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  _errorHandler;

/// @brief Field _modGroup, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__modGroup, put=__cordl_internal_set__modGroup)) ::UnityW<::Modio::Unity::UI::Components::ModioUIGroup>  _modGroup;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults* New_ctor() ;

/// @brief Method OnSearchUpdate, addr 0x9fc3af0, size 0x35c, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__displayWhenNoResults() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__displayWhenNoResults() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__displayWhenOffline() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__displayWhenOffline() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>* const& __cordl_internal_get__errorHandler() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*& __cordl_internal_get__errorHandler() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIGroup> const& __cordl_internal_get__modGroup() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIGroup>& __cordl_internal_get__modGroup() ;

constexpr void __cordl_internal_set__displayWhenNoResults(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__displayWhenOffline(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__errorHandler(::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  value) ;

constexpr void __cordl_internal_set__modGroup(::UnityW<::Modio::Unity::UI::Components::ModioUIGroup>  value) ;

/// @brief Method .ctor, addr 0x9fc3e4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyDisplayResults() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyDisplayResults", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyDisplayResults(SearchPropertyDisplayResults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyDisplayResults", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyDisplayResults(SearchPropertyDisplayResults const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27200};

/// [SerializeField]
/// @brief Field _modGroup, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIGroup>  ____modGroup;

/// [SerializeField]
/// [Tooltip("(Optional) Enable this gameObject when there are zero results")]
/// @brief Field _displayWhenNoResults, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____displayWhenNoResults;

/// [SerializeField]
/// [Tooltip("(Optional) Enable this gameObject when there are network issues and there\'s no results")]
/// @brief Field _displayWhenOffline, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____displayWhenOffline;

/// [SerializeField]
/// @brief Field _errorHandler, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  ____errorHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults, ____modGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults, ____displayWhenNoResults) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults, ____displayWhenOffline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults, ____errorHandler) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayResults) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
