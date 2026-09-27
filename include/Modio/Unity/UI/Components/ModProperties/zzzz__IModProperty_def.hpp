#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/IModProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IModProperty)
namespace Modio::Mods {
class Mod;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::IModProperty*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::IModProperty*, "Modio.Unity.UI.Components.ModProperties", "IModProperty");
// Dependencies 
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.IModProperty
class CORDL_TYPE IModProperty {
public:
// Declarations
/// @brief Method OnModUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

// Ctor Parameters [CppParam { name: "", ty: "IModProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModProperty(IModProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27216};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Unity::UI::Components::ModProperties
