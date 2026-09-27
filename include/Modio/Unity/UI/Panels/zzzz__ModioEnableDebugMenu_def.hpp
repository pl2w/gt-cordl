#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioEnableDebugMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModioEnableDebugMenu)
namespace Modio {
class IModioServiceSettings;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModioEnableDebugMenu;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModioEnableDebugMenu*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioEnableDebugMenu*, "Modio.Unity.UI.Panels", "ModioEnableDebugMenu");
// Dependencies System.Object
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioEnableDebugMenu
class CORDL_TYPE ModioEnableDebugMenu : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr operator  ::Modio::IModioServiceSettings*() noexcept;

static inline ::Modio::Unity::UI::Panels::ModioEnableDebugMenu* New_ctor() ;

/// @brief Method .ctor, addr 0x9fa7cdc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* i___Modio__IModioServiceSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioEnableDebugMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioEnableDebugMenu", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioEnableDebugMenu(ModioEnableDebugMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioEnableDebugMenu", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioEnableDebugMenu(ModioEnableDebugMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27068};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::ModioEnableDebugMenu) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
