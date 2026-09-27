#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/ISearchProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISearchProperty)
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*, "Modio.Unity.UI.Components.SearchProperties", "ISearchProperty");
// Dependencies 
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.ISearchProperty
class CORDL_TYPE ISearchProperty {
public:
// Declarations
/// @brief Method OnSearchUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

// Ctor Parameters [CppParam { name: "", ty: "ISearchProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISearchProperty(ISearchProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27198};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Unity::UI::Components::SearchProperties
