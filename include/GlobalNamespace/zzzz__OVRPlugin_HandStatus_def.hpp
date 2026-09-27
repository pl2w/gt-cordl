#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HandStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_HandStatus)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HandStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HandStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HandStatus, "", "OVRPlugin/HandStatus");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HandStatus
struct CORDL_TYPE OVRPlugin_HandStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_HandStatus_Unwrapped
enum struct __OVRPlugin_HandStatus_Unwrapped : int32_t {
__E_HandTracked = static_cast<int32_t>(0x1),
__E_InputStateValid = static_cast<int32_t>(0x2),
__E_SystemGestureInProgress = static_cast<int32_t>(0x40),
__E_DominantHand = static_cast<int32_t>(0x80),
__E_MenuPressed = static_cast<int32_t>(0x100),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_HandStatus_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_HandStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HandStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HandStatus(int32_t  value__) noexcept;

/// @brief Field DominantHand value: I32(128)
static ::GlobalNamespace::OVRPlugin_HandStatus const DominantHand;

/// @brief Field HandTracked value: I32(1)
static ::GlobalNamespace::OVRPlugin_HandStatus const HandTracked;

/// @brief Field InputStateValid value: I32(2)
static ::GlobalNamespace::OVRPlugin_HandStatus const InputStateValid;

/// @brief Field MenuPressed value: I32(256)
static ::GlobalNamespace::OVRPlugin_HandStatus const MenuPressed;

/// @brief Field SystemGestureInProgress value: I32(64)
static ::GlobalNamespace::OVRPlugin_HandStatus const SystemGestureInProgress;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12131};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HandStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
