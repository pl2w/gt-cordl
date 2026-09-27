#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVirtualCameraBase_StandbyUpdateMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineVirtualCameraBase_StandbyUpdateMode)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineVirtualCameraBase_StandbyUpdateMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode, "Unity.Cinemachine", "CinemachineVirtualCameraBase/StandbyUpdateMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode
struct CORDL_TYPE CinemachineVirtualCameraBase_StandbyUpdateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineVirtualCameraBase_StandbyUpdateMode_Unwrapped
enum struct __CinemachineVirtualCameraBase_StandbyUpdateMode_Unwrapped : int32_t {
__E_Never = static_cast<int32_t>(0x0),
__E_Always = static_cast<int32_t>(0x1),
__E_RoundRobin = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineVirtualCameraBase_StandbyUpdateMode_Unwrapped () const noexcept {
return static_cast<__CinemachineVirtualCameraBase_StandbyUpdateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineVirtualCameraBase_StandbyUpdateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineVirtualCameraBase_StandbyUpdateMode(int32_t  value__) noexcept;

/// @brief Field Always value: I32(1)
static ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode const Always;

/// @brief Field Never value: I32(0)
static ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode const Never;

/// @brief Field RoundRobin value: I32(2)
static ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode const RoundRobin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22307};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
