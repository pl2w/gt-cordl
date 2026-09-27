#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Rectf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Sizef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Rectf)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Rectf;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Rectf);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Rectf, "", "OVRPlugin/Rectf");
// Dependencies OVRPlugin::Sizef, OVRPlugin::Vector2f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Rectf
struct CORDL_TYPE OVRPlugin_Rectf {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Rectf() ;

// Ctor Parameters [CppParam { name: "Pos", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "::GlobalNamespace::OVRPlugin_Sizef", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Rectf(::GlobalNamespace::OVRPlugin_Vector2f  Pos, ::GlobalNamespace::OVRPlugin_Sizef  Size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Pos, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Vector2f  Pos;

/// @brief Field Size, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Sizef  Size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Rectf, Pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Rectf, Size) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Rectf) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
