#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyTotalResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SearchPropertyTotalResults)
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
class SearchPropertyTotalResults;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyTotalResults");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyTotalResults
class CORDL_TYPE SearchPropertyTotalResults : public ::System::Object {
public:
// Declarations
/// @brief Field _foundResultsString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__foundResultsString, put=__cordl_internal_set__foundResultsString)) ::StringW  _foundResultsString;

/// @brief Field _foundResultsText, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__foundResultsText, put=__cordl_internal_set__foundResultsText)) ::UnityW<::TMPro::TMP_Text>  _foundResultsText;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults* New_ctor() ;

/// @brief Method OnSearchUpdate, addr 0x9fc52c0, size 0x98, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

constexpr ::StringW const& __cordl_internal_get__foundResultsString() const;

constexpr ::StringW& __cordl_internal_get__foundResultsString() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__foundResultsText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__foundResultsText() ;

constexpr void __cordl_internal_set__foundResultsString(::StringW  value) ;

constexpr void __cordl_internal_set__foundResultsText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x9fc5358, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyTotalResults() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyTotalResults", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyTotalResults(SearchPropertyTotalResults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyTotalResults", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyTotalResults(SearchPropertyTotalResults const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27210};

/// [SerializeField]
/// @brief Field _foundResultsText, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____foundResultsText;

/// [SerializeField]
/// @brief Field _foundResultsString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____foundResultsString;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults, ____foundResultsText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults, ____foundResultsString) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalResults) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
