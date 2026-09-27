#pragma once
// IWYU pragma private; include "Modio/ModioDebugMenuAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ModioDebugMenuAttribute)
// Forward declare root types
namespace Modio {
class ModioDebugMenuAttribute;
}
// Write type traits
MARK_REF_T(::Modio::ModioDebugMenuAttribute*);
DEFINE_IL2CPP_CLASS(::Modio::ModioDebugMenuAttribute*, "Modio", "ModioDebugMenuAttribute");
// Dependencies System.Attribute
namespace Modio {
// Is value type: false
// CS Name: Modio.ModioDebugMenuAttribute
class CORDL_TYPE ModioDebugMenuAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field ShowInBrowserMenu, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowInBrowserMenu, put=__cordl_internal_set_ShowInBrowserMenu)) bool  ShowInBrowserMenu;

/// @brief Field ShowInSettingsMenu, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowInSettingsMenu, put=__cordl_internal_set_ShowInSettingsMenu)) bool  ShowInSettingsMenu;

static inline ::Modio::ModioDebugMenuAttribute* New_ctor() ;

constexpr bool const& __cordl_internal_get_ShowInBrowserMenu() const;

constexpr bool& __cordl_internal_get_ShowInBrowserMenu() ;

constexpr bool const& __cordl_internal_get_ShowInSettingsMenu() const;

constexpr bool& __cordl_internal_get_ShowInSettingsMenu() ;

constexpr void __cordl_internal_set_ShowInBrowserMenu(bool  value) ;

constexpr void __cordl_internal_set_ShowInSettingsMenu(bool  value) ;

/// @brief Method .ctor, addr 0xa01a994, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioDebugMenuAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioDebugMenuAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioDebugMenuAttribute(ModioDebugMenuAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioDebugMenuAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioDebugMenuAttribute(ModioDebugMenuAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17494};

/// @brief Field ShowInSettingsMenu, offset: 0x10, size: 0x1, def value: None
 bool  ___ShowInSettingsMenu;

/// @brief Field ShowInBrowserMenu, offset: 0x11, size: 0x1, def value: None
 bool  ___ShowInBrowserMenu;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::ModioDebugMenuAttribute, ___ShowInSettingsMenu) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::ModioDebugMenuAttribute, ___ShowInBrowserMenu) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Modio::ModioDebugMenuAttribute) == 0x18, "Size mismatch!");

} // namespace end def Modio
