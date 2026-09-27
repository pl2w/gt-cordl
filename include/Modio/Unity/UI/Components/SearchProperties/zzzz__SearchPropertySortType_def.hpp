#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertySortType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SearchPropertySortType)
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertySortType;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertySortType");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertySortType
class CORDL_TYPE SearchPropertySortType : public ::System::Object {
public:
// Declarations
/// @brief Field _searchText, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchText, put=__cordl_internal_set__searchText)) ::UnityW<::TMPro::TMP_Text>  _searchText;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType* New_ctor() ;

/// @brief Method OnSearchUpdate, addr 0x9fc5190, size 0x128, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__searchText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__searchText() ;

constexpr void __cordl_internal_set__searchText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x9fc52b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertySortType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertySortType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertySortType(SearchPropertySortType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertySortType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertySortType(SearchPropertySortType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27209};

/// [SerializeField]
/// @brief Field _searchText, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____searchText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType, ____searchText) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertySortType) == 0x18, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
