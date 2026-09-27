#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnection_StateConnectingData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnection_StateConnectingData)
// Forward declare root types
namespace GlobalNamespace {
struct NetConnection_StateConnectingData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetConnection_StateConnectingData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetConnection_StateConnectingData, "Fusion.Sockets", "NetConnection/StateConnectingData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.NetConnection/StateConnectingData
struct CORDL_TYPE NetConnection_StateConnectingData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetConnection_StateConnectingData() ;

// Ctor Parameters [CppParam { name: "Attempts", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AttemptTimeout", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConnection_StateConnectingData(int32_t  Attempts, double_t  AttemptTimeout) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29359};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Attempts, offset: 0x0, size: 0x4, def value: None
 int32_t  Attempts;

/// @brief Field AttemptTimeout, offset: 0x8, size: 0x8, def value: None
 double_t  AttemptTimeout;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetConnection_StateConnectingData, Attempts) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetConnection_StateConnectingData, AttemptTimeout) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetConnection_StateConnectingData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
