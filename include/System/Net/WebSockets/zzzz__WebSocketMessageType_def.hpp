#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketMessageType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketMessageType)
// Forward declare root types
namespace System::Net::WebSockets {
struct WebSocketMessageType;
}
// Write type traits
MARK_VAL_T(::System::Net::WebSockets::WebSocketMessageType);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::WebSocketMessageType, "System.Net.WebSockets", "WebSocketMessageType");
// Dependencies 
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: System.Net.WebSockets.WebSocketMessageType
struct CORDL_TYPE WebSocketMessageType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebSocketMessageType_Unwrapped
enum struct __WebSocketMessageType_Unwrapped : int32_t {
__E_Text = static_cast<int32_t>(0x0),
__E_Binary = static_cast<int32_t>(0x1),
__E_Close = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebSocketMessageType_Unwrapped () const noexcept {
return static_cast<__WebSocketMessageType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebSocketMessageType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WebSocketMessageType(int32_t  value__) noexcept;

/// @brief Field Binary value: I32(1)
static ::System::Net::WebSockets::WebSocketMessageType const Binary;

/// @brief Field Close value: I32(2)
static ::System::Net::WebSockets::WebSocketMessageType const Close;

/// @brief Field Text value: I32(0)
static ::System::Net::WebSockets::WebSocketMessageType const Text;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10921};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebSockets::WebSocketMessageType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebSockets::WebSocketMessageType) == 0x4, "Size mismatch!");

} // namespace end def System::Net::WebSockets
