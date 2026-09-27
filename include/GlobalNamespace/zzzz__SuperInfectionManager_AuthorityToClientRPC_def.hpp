#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionManager_AuthorityToClientRPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SuperInfectionManager_AuthorityToClientRPC)
// Forward declare root types
namespace GlobalNamespace {
struct SuperInfectionManager_AuthorityToClientRPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC, "", "SuperInfectionManager/AuthorityToClientRPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SuperInfectionManager/AuthorityToClientRPC
struct CORDL_TYPE SuperInfectionManager_AuthorityToClientRPC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SuperInfectionManager_AuthorityToClientRPC_Unwrapped
enum struct __SuperInfectionManager_AuthorityToClientRPC_Unwrapped : int32_t {
__E_TechPointGranted = static_cast<int32_t>(0x0),
__E_ResourceDepositTechPointGranted = static_cast<int32_t>(0x1),
__E_ResourceDepositTechPointRejected = static_cast<int32_t>(0x2),
__E_CallEntityRPC = static_cast<int32_t>(0x3),
__E_CallEntityRPCData = static_cast<int32_t>(0x4),
__E_TriggerMonkeIdolDepositCelebration = static_cast<int32_t>(0x5),
__E_StartRoomFX = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SuperInfectionManager_AuthorityToClientRPC_Unwrapped () const noexcept {
return static_cast<__SuperInfectionManager_AuthorityToClientRPC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SuperInfectionManager_AuthorityToClientRPC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SuperInfectionManager_AuthorityToClientRPC(int32_t  value__) noexcept;

/// @brief Field CallEntityRPC value: I32(3)
static ::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC const CallEntityRPC;

/// @brief Field CallEntityRPCData value: I32(4)
static ::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC const CallEntityRPCData;

/// @brief Field ResourceDepositTechPointGranted value: I32(1)
static ::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC const ResourceDepositTechPointGranted;

/// @brief Field ResourceDepositTechPointRejected value: I32(2)
static ::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC const ResourceDepositTechPointRejected;

/// @brief Field StartRoomFX value: I32(6)
static ::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC const StartRoomFX;

/// @brief Field TechPointGranted value: I32(0)
static ::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC const TechPointGranted;

/// @brief Field TriggerMonkeIdolDepositCelebration value: I32(5)
static ::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC const TriggerMonkeIdolDepositCelebration;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{389};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
