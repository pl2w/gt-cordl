#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyDateReleased.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyDateBase_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyDateReleased)
namespace Modio::Mods {
class Mod;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyDateReleased;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyDateReleased*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyDateReleased*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyDateReleased");
// Dependencies Modio.Unity.UI.Components.ModProperties.ModPropertyDateBase
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyDateReleased
class CORDL_TYPE ModPropertyDateReleased : public ::Modio::Unity::UI::Components::ModProperties::ModPropertyDateBase {
public:
// Declarations
/// @brief Method GetValue, addr 0x9fc5f9c, size 0x14, virtual true, abstract: false, final false
inline ::System::DateTime GetValue(::Modio::Mods::Mod*  mod) ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyDateReleased* New_ctor() ;

/// @brief Method .ctor, addr 0x9fc5fb0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyDateReleased() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyDateReleased", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyDateReleased(ModPropertyDateReleased && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyDateReleased", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyDateReleased(ModPropertyDateReleased const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27222};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyDateReleased) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
