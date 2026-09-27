#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionManager_ClientToAuthorityRPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SuperInfectionManager_ClientToAuthorityRPC)
// Forward declare root types
namespace GlobalNamespace {
struct SuperInfectionManager_ClientToAuthorityRPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC, "", "SuperInfectionManager/ClientToAuthorityRPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SuperInfectionManager/ClientToAuthorityRPC
struct CORDL_TYPE SuperInfectionManager_ClientToAuthorityRPC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SuperInfectionManager_ClientToAuthorityRPC_Unwrapped
enum struct __SuperInfectionManager_ClientToAuthorityRPC_Unwrapped : int32_t {
__E_CombinedTerminalButtonPress = static_cast<int32_t>(0x0),
__E_CombinedTerminalHandScan = static_cast<int32_t>(0x1),
__E_ResourceDepositDeposited = static_cast<int32_t>(0x2),
__E_CallEntityRPC = static_cast<int32_t>(0x3),
__E_CallEntityRPCData = static_cast<int32_t>(0x4),
__E_RequestStartRoomFX = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SuperInfectionManager_ClientToAuthorityRPC_Unwrapped () const noexcept {
return static_cast<__SuperInfectionManager_ClientToAuthorityRPC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SuperInfectionManager_ClientToAuthorityRPC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SuperInfectionManager_ClientToAuthorityRPC(int32_t  value__) noexcept;

/// @brief Field CallEntityRPC value: I32(3)
static ::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC const CallEntityRPC;

/// @brief Field CallEntityRPCData value: I32(4)
static ::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC const CallEntityRPCData;

/// @brief Field CombinedTerminalButtonPress value: I32(0)
static ::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC const CombinedTerminalButtonPress;

/// @brief Field CombinedTerminalHandScan value: I32(1)
static ::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC const CombinedTerminalHandScan;

/// @brief Field RequestStartRoomFX value: I32(5)
static ::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC const RequestStartRoomFX;

/// @brief Field ResourceDepositDeposited value: I32(2)
static ::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC const ResourceDepositDeposited;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{387};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
