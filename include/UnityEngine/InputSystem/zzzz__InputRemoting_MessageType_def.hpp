#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_MessageType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRemoting_MessageType)
// Forward declare root types
namespace GlobalNamespace {
struct InputRemoting_MessageType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputRemoting_MessageType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputRemoting_MessageType, "UnityEngine.InputSystem", "InputRemoting/MessageType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/MessageType
struct CORDL_TYPE InputRemoting_MessageType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputRemoting_MessageType_Unwrapped
enum struct __InputRemoting_MessageType_Unwrapped : int32_t {
__E_Connect = static_cast<int32_t>(0x0),
__E_Disconnect = static_cast<int32_t>(0x1),
__E_NewLayout = static_cast<int32_t>(0x2),
__E_NewDevice = static_cast<int32_t>(0x3),
__E_NewEvents = static_cast<int32_t>(0x4),
__E_RemoveDevice = static_cast<int32_t>(0x5),
__E_RemoveLayout = static_cast<int32_t>(0x6),
__E_ChangeUsages = static_cast<int32_t>(0x7),
__E_StartSending = static_cast<int32_t>(0x8),
__E_StopSending = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputRemoting_MessageType_Unwrapped () const noexcept {
return static_cast<__InputRemoting_MessageType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_MessageType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputRemoting_MessageType(int32_t  value__) noexcept;

/// @brief Field ChangeUsages value: I32(7)
static ::GlobalNamespace::InputRemoting_MessageType const ChangeUsages;

/// @brief Field Connect value: I32(0)
static ::GlobalNamespace::InputRemoting_MessageType const Connect;

/// @brief Field Disconnect value: I32(1)
static ::GlobalNamespace::InputRemoting_MessageType const Disconnect;

/// @brief Field NewDevice value: I32(3)
static ::GlobalNamespace::InputRemoting_MessageType const NewDevice;

/// @brief Field NewEvents value: I32(4)
static ::GlobalNamespace::InputRemoting_MessageType const NewEvents;

/// @brief Field NewLayout value: I32(2)
static ::GlobalNamespace::InputRemoting_MessageType const NewLayout;

/// @brief Field RemoveDevice value: I32(5)
static ::GlobalNamespace::InputRemoting_MessageType const RemoveDevice;

/// @brief Field RemoveLayout value: I32(6)
static ::GlobalNamespace::InputRemoting_MessageType const RemoveLayout;

/// @brief Field StartSending value: I32(8)
static ::GlobalNamespace::InputRemoting_MessageType const StartSending;

/// @brief Field StopSending value: I32(9)
static ::GlobalNamespace::InputRemoting_MessageType const StopSending;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13464};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputRemoting_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputRemoting_MessageType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
