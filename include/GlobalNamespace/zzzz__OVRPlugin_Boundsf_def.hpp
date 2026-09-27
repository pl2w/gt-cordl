#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Boundsf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Size3f_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Boundsf)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Boundsf;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Boundsf);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Boundsf, "", "OVRPlugin/Boundsf");
// Dependencies OVRPlugin::Size3f, OVRPlugin::Vector3f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Boundsf
struct CORDL_TYPE OVRPlugin_Boundsf {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Boundsf() ;

// Ctor Parameters [CppParam { name: "Pos", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "::GlobalNamespace::OVRPlugin_Size3f", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Boundsf(::GlobalNamespace::OVRPlugin_Vector3f  Pos, ::GlobalNamespace::OVRPlugin_Size3f  Size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Pos, offset: 0x0, size: 0xc, def value: None
 ::GlobalNamespace::OVRPlugin_Vector3f  Pos;

/// @brief Field Size, offset: 0xc, size: 0xc, def value: None
 ::GlobalNamespace::OVRPlugin_Size3f  Size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Boundsf, Pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Boundsf, Size) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Boundsf) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
