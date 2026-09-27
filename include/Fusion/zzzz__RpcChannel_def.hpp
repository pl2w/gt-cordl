#pragma once
// IWYU pragma private; include "Fusion/RpcChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcChannel)
// Forward declare root types
namespace Fusion {
struct RpcChannel;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcChannel);
DEFINE_IL2CPP_CLASS(::Fusion::RpcChannel, "Fusion", "RpcChannel");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcChannel
struct CORDL_TYPE RpcChannel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RpcChannel_Unwrapped
enum struct __RpcChannel_Unwrapped : int32_t {
__E_Reliable = static_cast<int32_t>(0x0),
__E_Unreliable = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RpcChannel_Unwrapped () const noexcept {
return static_cast<__RpcChannel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RpcChannel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RpcChannel(int32_t  value__) noexcept;

/// @brief Field Reliable value: I32(0)
static ::Fusion::RpcChannel const Reliable;

/// @brief Field Unreliable value: I32(1)
static ::Fusion::RpcChannel const Unreliable;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcChannel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcChannel) == 0x4, "Size mismatch!");

} // namespace end def Fusion
