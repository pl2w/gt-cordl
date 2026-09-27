#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleDataTeleport_TeleportReticleMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReticleDataTeleport_TeleportReticleMode)
// Forward declare root types
namespace GlobalNamespace {
struct ReticleDataTeleport_TeleportReticleMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode, "Oculus.Interaction.DistanceReticles", "ReticleDataTeleport/TeleportReticleMode");
// [Obsolete]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode
struct CORDL_TYPE ReticleDataTeleport_TeleportReticleMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReticleDataTeleport_TeleportReticleMode_Unwrapped
enum struct __ReticleDataTeleport_TeleportReticleMode_Unwrapped : int32_t {
__E_Hidden = static_cast<int32_t>(0x0),
__E_ValidTarget = static_cast<int32_t>(0x1),
__E_InvalidTarget = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReticleDataTeleport_TeleportReticleMode_Unwrapped () const noexcept {
return static_cast<__ReticleDataTeleport_TeleportReticleMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReticleDataTeleport_TeleportReticleMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReticleDataTeleport_TeleportReticleMode(int32_t  value__) noexcept;

/// @brief Field Hidden value: I32(0)
static ::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode const Hidden;

/// @brief Field InvalidTarget value: I32(2)
static ::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode const InvalidTarget;

/// @brief Field ValidTarget value: I32(1)
static ::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode const ValidTarget;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16377};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
