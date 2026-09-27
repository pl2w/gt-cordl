#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyFilterCount.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SearchPropertyFilterCount)
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyFilterCount;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyFilterCount*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyFilterCount*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyFilterCount");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyFilterCount
class CORDL_TYPE SearchPropertyFilterCount : public ::System::Object {
public:
// Declarations
/// @brief Field _filterCount, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterCount, put=__cordl_internal_set__filterCount)) ::UnityW<::TMPro::TMP_Text>  _filterCount;

/// @brief Field _filterCountBackground, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterCountBackground, put=__cordl_internal_set__filterCountBackground)) ::UnityW<::UnityEngine::GameObject>  _filterCountBackground;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyFilterCount* New_ctor() ;

/// @brief Method OnSearchUpdate, addr 0x9fc41dc, size 0x17c, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__filterCount() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__filterCount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__filterCountBackground() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__filterCountBackground() ;

constexpr void __cordl_internal_set__filterCount(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__filterCountBackground(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fc4358, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyFilterCount() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyFilterCount", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyFilterCount(SearchPropertyFilterCount && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyFilterCount", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyFilterCount(SearchPropertyFilterCount const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27205};

/// [SerializeField]
/// @brief Field _filterCount, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____filterCount;

/// [SerializeField]
/// @brief Field _filterCountBackground, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____filterCountBackground;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyFilterCount, ____filterCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyFilterCount, ____filterCountBackground) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyFilterCount) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
