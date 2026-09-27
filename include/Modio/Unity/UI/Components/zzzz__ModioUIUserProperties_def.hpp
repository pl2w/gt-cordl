#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIUserProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/UserProperties/zzzz__IUserProperty_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIPropertiesBase_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModioUIUserProperties)
namespace Modio::Unity::UI::Components::UserProperties {
class IUserProperty;
}
namespace Modio::Unity::UI::Components {
class ModioUIUser;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUIUserProperties;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIUserProperties*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIUserProperties*, "Modio.Unity.UI.Components", "ModioUIUserProperties");
// Dependencies Modio.Unity.UI.Components.ModioUIPropertiesBase`2<TOwner, TProperty>, Modio.Unity.UI.Components.UserProperties.IUserProperty
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIUserProperties
class CORDL_TYPE ModioUIUserProperties : public ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<::UnityW<::Modio::Unity::UI::Components::ModioUIUser>,::Modio::Unity::UI::Components::UserProperties::IUserProperty*> {
public:
// Declarations
 __declspec(property(get=get_Properties)) ::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>  Properties;

/// @brief Field _properties, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__properties, put=__cordl_internal_set__properties)) ::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>  _properties;

static inline ::Modio::Unity::UI::Components::ModioUIUserProperties* New_ctor() ;

/// @brief Method UpdateProperties, addr 0x9fbea98, size 0xfc, virtual true, abstract: false, final false
inline void UpdateProperties() ;

constexpr ::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*> const& __cordl_internal_get__properties() const;

constexpr ::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>& __cordl_internal_get__properties() ;

constexpr void __cordl_internal_set__properties(::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>  value) ;

/// @brief Method .ctor, addr 0x9fbeb94, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Properties, addr 0x9fbea90, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*> get_Properties() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIUserProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIUserProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIUserProperties(ModioUIUserProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIUserProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIUserProperties(ModioUIUserProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27166};

/// [SerializeReference]
/// @brief Field _properties, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>  ____properties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIUserProperties, ____properties) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIUserProperties) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
