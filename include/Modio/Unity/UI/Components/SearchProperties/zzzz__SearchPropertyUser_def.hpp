#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyUser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SearchPropertyUser)
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Components {
class ModioUIUser;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyUser;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyUser");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyUser
class CORDL_TYPE SearchPropertyUser : public ::System::Object {
public:
// Declarations
/// @brief Field _user, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__user, put=__cordl_internal_set__user)) ::UnityW<::Modio::Unity::UI::Components::ModioUIUser>  _user;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser* New_ctor() ;

/// @brief Method OnSearchUpdate, addr 0x9fc57c8, size 0x158, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIUser> const& __cordl_internal_get__user() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIUser>& __cordl_internal_get__user() ;

constexpr void __cordl_internal_set__user(::UnityW<::Modio::Unity::UI::Components::ModioUIUser>  value) ;

/// @brief Method .ctor, addr 0x9fc5920, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyUser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyUser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyUser(SearchPropertyUser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyUser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyUser(SearchPropertyUser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27212};

/// [SerializeField]
/// @brief Field _user, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIUser>  ____user;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser, ____user) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyUser) == 0x18, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
