#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyDisableObjectForSearchType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Search/zzzz__SpecialSearchType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SearchPropertyDisableObjectForSearchType)
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyDisableObjectForSearchType;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyDisableObjectForSearchType");
// Dependencies Modio.Unity.UI.Search.SpecialSearchType, System.Object, UnityEngine.GameObject
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyDisableObjectForSearchType
class CORDL_TYPE SearchPropertyDisableObjectForSearchType : public ::System::Object {
public:
// Declarations
/// @brief Field _gameObjectsToHide, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameObjectsToHide, put=__cordl_internal_set__gameObjectsToHide)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _gameObjectsToHide;

/// @brief Field _gameObjectsToShow, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameObjectsToShow, put=__cordl_internal_set__gameObjectsToShow)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _gameObjectsToShow;

/// @brief Field _hideForSearchTypes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__hideForSearchTypes, put=__cordl_internal_set__hideForSearchTypes)) ::ArrayW<::Modio::Unity::UI::Search::SpecialSearchType>  _hideForSearchTypes;

/// @brief Field _hideOnCustomSearch, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideOnCustomSearch, put=__cordl_internal_set__hideOnCustomSearch)) bool  _hideOnCustomSearch;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType* New_ctor() ;

/// @brief Method OnSearchUpdate, addr 0x9fc39bc, size 0x12c, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__gameObjectsToHide() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__gameObjectsToHide() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__gameObjectsToShow() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__gameObjectsToShow() ;

constexpr ::ArrayW<::Modio::Unity::UI::Search::SpecialSearchType> const& __cordl_internal_get__hideForSearchTypes() const;

constexpr ::ArrayW<::Modio::Unity::UI::Search::SpecialSearchType>& __cordl_internal_get__hideForSearchTypes() ;

constexpr bool const& __cordl_internal_get__hideOnCustomSearch() const;

constexpr bool& __cordl_internal_get__hideOnCustomSearch() ;

constexpr void __cordl_internal_set__gameObjectsToHide(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__gameObjectsToShow(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__hideForSearchTypes(::ArrayW<::Modio::Unity::UI::Search::SpecialSearchType>  value) ;

constexpr void __cordl_internal_set__hideOnCustomSearch(bool  value) ;

/// @brief Method .ctor, addr 0x9fc3ae8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyDisableObjectForSearchType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyDisableObjectForSearchType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyDisableObjectForSearchType(SearchPropertyDisableObjectForSearchType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyDisableObjectForSearchType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyDisableObjectForSearchType(SearchPropertyDisableObjectForSearchType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27199};

/// [SerializeField]
/// @brief Field _gameObjectsToHide, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____gameObjectsToHide;

/// [SerializeField]
/// @brief Field _gameObjectsToShow, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____gameObjectsToShow;

/// [SerializeField]
/// @brief Field _hideOnCustomSearch, offset: 0x20, size: 0x1, def value: None
 bool  ____hideOnCustomSearch;

/// [SerializeField]
/// @brief Field _hideForSearchTypes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Search::SpecialSearchType>  ____hideForSearchTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType, ____gameObjectsToHide) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType, ____gameObjectsToShow) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType, ____hideOnCustomSearch) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType, ____hideForSearchTypes) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisableObjectForSearchType) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
