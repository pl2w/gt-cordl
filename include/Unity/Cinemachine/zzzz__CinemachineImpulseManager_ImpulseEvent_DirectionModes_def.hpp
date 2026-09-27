#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseManager_ImpulseEvent_DirectionModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineImpulseManager_ImpulseEvent_DirectionModes)
// Forward declare root types
namespace GlobalNamespace {
struct ImpulseEvent_CinemachineImpulseManager_DirectionModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes, "Unity.Cinemachine", "CinemachineImpulseManager/ImpulseEvent/DirectionModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionModes
struct CORDL_TYPE ImpulseEvent_CinemachineImpulseManager_DirectionModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ImpulseEvent_CinemachineImpulseManager_DirectionModes_Unwrapped
enum struct __ImpulseEvent_CinemachineImpulseManager_DirectionModes_Unwrapped : int32_t {
__E_Fixed = static_cast<int32_t>(0x0),
__E_RotateTowardSource = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ImpulseEvent_CinemachineImpulseManager_DirectionModes_Unwrapped () const noexcept {
return static_cast<__ImpulseEvent_CinemachineImpulseManager_DirectionModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ImpulseEvent_CinemachineImpulseManager_DirectionModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ImpulseEvent_CinemachineImpulseManager_DirectionModes(int32_t  value__) noexcept;

/// @brief Field Fixed value: I32(0)
static ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes const Fixed;

/// @brief Field RotateTowardSource value: I32(1)
static ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes const RotateTowardSource;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22480};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
