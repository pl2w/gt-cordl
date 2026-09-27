#pragma once
// IWYU pragma private; include "Fusion/NetworkConfiguration_ReliableDataTransfers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkConfiguration_ReliableDataTransfers)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkConfiguration_ReliableDataTransfers;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers, "Fusion", "NetworkConfiguration/ReliableDataTransfers");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkConfiguration/ReliableDataTransfers
struct CORDL_TYPE NetworkConfiguration_ReliableDataTransfers {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkConfiguration_ReliableDataTransfers_Unwrapped
enum struct __NetworkConfiguration_ReliableDataTransfers_Unwrapped : int32_t {
__E_ClientToServer = static_cast<int32_t>(0x1),
__E_ClientToClientWithServerProxy = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkConfiguration_ReliableDataTransfers_Unwrapped () const noexcept {
return static_cast<__NetworkConfiguration_ReliableDataTransfers_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkConfiguration_ReliableDataTransfers() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkConfiguration_ReliableDataTransfers(int32_t  value__) noexcept;

/// @brief Field ClientToClientWithServerProxy value: I32(2)
static ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers const ClientToClientWithServerProxy;

/// @brief Field ClientToServer value: I32(1)
static ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers const ClientToServer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19335};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
