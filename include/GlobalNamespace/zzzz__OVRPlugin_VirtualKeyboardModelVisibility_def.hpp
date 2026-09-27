#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardModelVisibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_VirtualKeyboardModelVisibility)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardModelVisibility;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility, "", "OVRPlugin/VirtualKeyboardModelVisibility");
// Dependencies OVRPlugin::Bool
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/VirtualKeyboardModelVisibility
struct CORDL_TYPE OVRPlugin_VirtualKeyboardModelVisibility {
public:
// Declarations
 __declspec(property(get=get_Visible, put=set_Visible)) bool  Visible;

/// @brief Method get_Visible, addr 0xa60f6f8, size 0x10, virtual false, abstract: false, final false
inline bool get_Visible() ;

/// @brief Method set_Visible, addr 0xa60f708, size 0xc, virtual false, abstract: false, final false
inline void set_Visible(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardModelVisibility() ;

// Ctor Parameters [CppParam { name: "_visible", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_VirtualKeyboardModelVisibility(::GlobalNamespace::OVRPlugin_Bool  _visible) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12197};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field _visible, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  _visible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility, _visible) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
