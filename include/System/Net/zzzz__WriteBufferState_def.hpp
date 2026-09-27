#pragma once
// IWYU pragma private; include "System/Net/WriteBufferState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WriteBufferState)
// Forward declare root types
namespace System::Net {
struct WriteBufferState;
}
// Write type traits
MARK_VAL_T(::System::Net::WriteBufferState);
DEFINE_IL2CPP_CLASS(::System::Net::WriteBufferState, "System.Net", "WriteBufferState");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WriteBufferState
struct CORDL_TYPE WriteBufferState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WriteBufferState_Unwrapped
enum struct __WriteBufferState_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_Headers = static_cast<int32_t>(0x1),
__E_Buffer = static_cast<int32_t>(0x2),
__E_Playback = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WriteBufferState_Unwrapped () const noexcept {
return static_cast<__WriteBufferState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WriteBufferState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WriteBufferState(int32_t  value__) noexcept;

/// @brief Field Buffer value: I32(2)
static ::System::Net::WriteBufferState const Buffer;

/// @brief Field Disabled value: I32(0)
static ::System::Net::WriteBufferState const Disabled;

/// @brief Field Headers value: I32(1)
static ::System::Net::WriteBufferState const Headers;

/// @brief Field Playback value: I32(3)
static ::System::Net::WriteBufferState const Playback;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10579};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WriteBufferState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::WriteBufferState) == 0x4, "Size mismatch!");

} // namespace end def System::Net
