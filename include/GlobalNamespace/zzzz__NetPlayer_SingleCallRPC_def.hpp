#pragma once
// IWYU pragma private; include "GlobalNamespace/NetPlayer_SingleCallRPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetPlayer_SingleCallRPC)
// Forward declare root types
namespace GlobalNamespace {
struct NetPlayer_SingleCallRPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetPlayer_SingleCallRPC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetPlayer_SingleCallRPC, "", "NetPlayer/SingleCallRPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetPlayer/SingleCallRPC
struct CORDL_TYPE NetPlayer_SingleCallRPC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetPlayer_SingleCallRPC_Unwrapped
enum struct __NetPlayer_SingleCallRPC_Unwrapped : int32_t {
__E_CMS_RequestRoomInitialization = static_cast<int32_t>(0x0),
__E_CMS_RequestTriggerHistory = static_cast<int32_t>(0x1),
__E_CMS_SyncTriggerHistory = static_cast<int32_t>(0x2),
__E_CMS_SyncTriggerCounts = static_cast<int32_t>(0x3),
__E_RankedSendScoreToLateJoiner = static_cast<int32_t>(0x4),
__E_Count = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetPlayer_SingleCallRPC_Unwrapped () const noexcept {
return static_cast<__NetPlayer_SingleCallRPC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetPlayer_SingleCallRPC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetPlayer_SingleCallRPC(int32_t  value__) noexcept;

/// @brief Field CMS_RequestRoomInitialization value: I32(0)
static ::GlobalNamespace::NetPlayer_SingleCallRPC const CMS_RequestRoomInitialization;

/// @brief Field CMS_RequestTriggerHistory value: I32(1)
static ::GlobalNamespace::NetPlayer_SingleCallRPC const CMS_RequestTriggerHistory;

/// @brief Field CMS_SyncTriggerCounts value: I32(3)
static ::GlobalNamespace::NetPlayer_SingleCallRPC const CMS_SyncTriggerCounts;

/// @brief Field CMS_SyncTriggerHistory value: I32(2)
static ::GlobalNamespace::NetPlayer_SingleCallRPC const CMS_SyncTriggerHistory;

/// @brief Field Count value: I32(5)
static ::GlobalNamespace::NetPlayer_SingleCallRPC const Count;

/// @brief Field RankedSendScoreToLateJoiner value: I32(4)
static ::GlobalNamespace::NetPlayer_SingleCallRPC const RankedSendScoreToLateJoiner;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetPlayer_SingleCallRPC, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetPlayer_SingleCallRPC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
