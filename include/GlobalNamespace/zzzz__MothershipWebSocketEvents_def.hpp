#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipWebSocketEvents)
// Forward declare root types
namespace GlobalNamespace {
struct MothershipWebSocketEvents;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MothershipWebSocketEvents);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWebSocketEvents, "", "MothershipWebSocketEvents");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MothershipWebSocketEvents
struct CORDL_TYPE MothershipWebSocketEvents {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MothershipWebSocketEvents_Unwrapped
enum struct __MothershipWebSocketEvents_Unwrapped : int32_t {
__E_OPEN = static_cast<int32_t>(0x0),
__E_MESSAGE = static_cast<int32_t>(0x1),
__E_CLOSE = static_cast<int32_t>(0x2),
__E_ERROR = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MothershipWebSocketEvents_Unwrapped () const noexcept {
return static_cast<__MothershipWebSocketEvents_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MothershipWebSocketEvents() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MothershipWebSocketEvents(int32_t  value__) noexcept;

/// @brief Field CLOSE value: I32(2)
static ::GlobalNamespace::MothershipWebSocketEvents const CLOSE;

/// @brief Field ERROR value: I32(3)
static ::GlobalNamespace::MothershipWebSocketEvents const ERROR;

/// @brief Field MESSAGE value: I32(1)
static ::GlobalNamespace::MothershipWebSocketEvents const MESSAGE;

/// @brief Field OPEN value: I32(0)
static ::GlobalNamespace::MothershipWebSocketEvents const OPEN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9383};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipWebSocketEvents, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipWebSocketEvents) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
