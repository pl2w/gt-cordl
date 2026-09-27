#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyDisplayWhileSearching.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SearchPropertyDisplayWhileSearching)
namespace GlobalNamespace {
struct SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour;
}
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyDisplayWhileSearching;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyDisplayWhileSearching");
// Dependencies Modio.Unity.UI.Components.SearchProperties.SearchPropertyDisplayWhileSearching::AdditiveLoadBehaviour, System.Object
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyDisplayWhileSearching
class CORDL_TYPE SearchPropertyDisplayWhileSearching : public ::System::Object {
public:
// Declarations
using AdditiveLoadBehaviour = ::GlobalNamespace::SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour;

/// @brief Field _additiveLoadBehaviour, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__additiveLoadBehaviour, put=__cordl_internal_set__additiveLoadBehaviour)) ::GlobalNamespace::SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour  _additiveLoadBehaviour;

/// @brief Field _displayWhileSearching, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayWhileSearching, put=__cordl_internal_set__displayWhileSearching)) ::UnityW<::UnityEngine::GameObject>  _displayWhileSearching;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching* New_ctor() ;

/// @brief Method OnSearchUpdate, addr 0x9fc3e54, size 0xa4, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

constexpr ::GlobalNamespace::SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour const& __cordl_internal_get__additiveLoadBehaviour() const;

constexpr ::GlobalNamespace::SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour& __cordl_internal_get__additiveLoadBehaviour() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__displayWhileSearching() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__displayWhileSearching() ;

constexpr void __cordl_internal_set__additiveLoadBehaviour(::GlobalNamespace::SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour  value) ;

constexpr void __cordl_internal_set__displayWhileSearching(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fc3ef8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyDisplayWhileSearching() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyDisplayWhileSearching", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyDisplayWhileSearching(SearchPropertyDisplayWhileSearching && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyDisplayWhileSearching", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyDisplayWhileSearching(SearchPropertyDisplayWhileSearching const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27202};

/// [SerializeField]
/// @brief Field _displayWhileSearching, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____displayWhileSearching;

/// [SerializeField]
/// @brief Field _additiveLoadBehaviour, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::SearchPropertyDisplayWhileSearching_AdditiveLoadBehaviour  ____additiveLoadBehaviour;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching, ____displayWhileSearching) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching, ____additiveLoadBehaviour) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyDisplayWhileSearching) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
