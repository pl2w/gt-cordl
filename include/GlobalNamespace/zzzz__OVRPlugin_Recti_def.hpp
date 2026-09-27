#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Recti.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Sizei_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2i_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Recti)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Recti;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Recti);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Recti, "", "OVRPlugin/Recti");
// Dependencies OVRPlugin::Sizei, OVRPlugin::Vector2i
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Recti
struct CORDL_TYPE OVRPlugin_Recti {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Recti() ;

// Ctor Parameters [CppParam { name: "Pos", ty: "::GlobalNamespace::OVRPlugin_Vector2i", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "::GlobalNamespace::OVRPlugin_Sizei", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Recti(::GlobalNamespace::OVRPlugin_Vector2i  Pos, ::GlobalNamespace::OVRPlugin_Sizei  Size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12109};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Pos, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Vector2i  Pos;

/// @brief Field Size, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Sizei  Size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Recti, Pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Recti, Size) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Recti) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
