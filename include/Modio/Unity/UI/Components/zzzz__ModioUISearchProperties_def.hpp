#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUISearchProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIPropertiesBase_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModioUISearchProperties)
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUISearchProperties;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUISearchProperties*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUISearchProperties*, "Modio.Unity.UI.Components", "ModioUISearchProperties");
// Dependencies Modio.Unity.UI.Components.ModioUIPropertiesBase`2<TOwner, TProperty>, Modio.Unity.UI.Components.SearchProperties.ISearchProperty
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUISearchProperties
class CORDL_TYPE ModioUISearchProperties : public ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<::UnityW<::Modio::Unity::UI::Search::ModioUISearch>,::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*> {
public:
// Declarations
 __declspec(property(get=get_Properties)) ::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>  Properties;

/// @brief Field _properties, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__properties, put=__cordl_internal_set__properties)) ::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>  _properties;

static inline ::Modio::Unity::UI::Components::ModioUISearchProperties* New_ctor() ;

/// @brief Method UpdateProperties, addr 0x9fbbf4c, size 0xf4, virtual true, abstract: false, final false
inline void UpdateProperties() ;

constexpr ::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*> const& __cordl_internal_get__properties() const;

constexpr ::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>& __cordl_internal_get__properties() ;

constexpr void __cordl_internal_set__properties(::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>  value) ;

/// @brief Method .ctor, addr 0x9fbc040, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Properties, addr 0x9fbbf44, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*> get_Properties() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearchProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISearchProperties(ModioUISearchProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISearchProperties(ModioUISearchProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27154};

/// [SerializeReference]
/// @brief Field _properties, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>  ____properties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchProperties, ____properties) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUISearchProperties) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
