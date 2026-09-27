#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIModProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIPropertiesBase_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModioUIModProperties)
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace Modio::Unity::UI::Components {
class ModioUIMod;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUIModProperties;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIModProperties*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIModProperties*, "Modio.Unity.UI.Components", "ModioUIModProperties");
// Dependencies Modio.Unity.UI.Components.ModProperties.IModProperty, Modio.Unity.UI.Components.ModioUIPropertiesBase`2<TOwner, TProperty>
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIModProperties
class CORDL_TYPE ModioUIModProperties : public ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>,::Modio::Unity::UI::Components::ModProperties::IModProperty*> {
public:
// Declarations
 __declspec(property(get=get_Properties)) ::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*>  Properties;

/// @brief Field _properties, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__properties, put=__cordl_internal_set__properties)) ::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*>  _properties;

static inline ::Modio::Unity::UI::Components::ModioUIModProperties* New_ctor() ;

/// @brief Method UpdateProperties, addr 0x9fba7b8, size 0x10c, virtual true, abstract: false, final false
inline void UpdateProperties() ;

constexpr ::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*> const& __cordl_internal_get__properties() const;

constexpr ::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*>& __cordl_internal_get__properties() ;

constexpr void __cordl_internal_set__properties(::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*>  value) ;

/// @brief Method .ctor, addr 0x9fba8c4, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Properties, addr 0x9fba7b0, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*> get_Properties() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIModProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIModProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIModProperties(ModioUIModProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIModProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIModProperties(ModioUIModProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27149};

/// [SerializeReference]
/// @brief Field _properties, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Components::ModProperties::IModProperty*>  ____properties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIModProperties, ____properties) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIModProperties) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
