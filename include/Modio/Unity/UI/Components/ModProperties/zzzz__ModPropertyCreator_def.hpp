#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyCreator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyCreator)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace Modio::Unity::UI::Components {
class ModioUIUser;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyCreator;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreator*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreator*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyCreator");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyCreator
class CORDL_TYPE ModPropertyCreator : public ::System::Object {
public:
// Declarations
/// @brief Field _user, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__user, put=__cordl_internal_set__user)) ::UnityW<::Modio::Unity::UI::Components::ModioUIUser>  _user;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreator* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc5cec, size 0x20, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIUser> const& __cordl_internal_get__user() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIUser>& __cordl_internal_get__user() ;

constexpr void __cordl_internal_set__user(::UnityW<::Modio::Unity::UI::Components::ModioUIUser>  value) ;

/// @brief Method .ctor, addr 0x9fc5d0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyCreator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyCreator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyCreator(ModPropertyCreator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyCreator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyCreator(ModPropertyCreator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27218};

/// [SerializeField]
/// @brief Field _user, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIUser>  ____user;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreator, ____user) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreator) == 0x18, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
