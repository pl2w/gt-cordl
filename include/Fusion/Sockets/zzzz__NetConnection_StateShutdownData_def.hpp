#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnection_StateShutdownData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnection_StateShutdownData)
// Forward declare root types
namespace GlobalNamespace {
struct NetConnection_StateShutdownData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetConnection_StateShutdownData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetConnection_StateShutdownData, "Fusion.Sockets", "NetConnection/StateShutdownData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.NetConnection/StateShutdownData
struct CORDL_TYPE NetConnection_StateShutdownData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetConnection_StateShutdownData() ;

// Ctor Parameters [CppParam { name: "Timeout", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Unmapped", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConnection_StateShutdownData(double_t  Timeout, int32_t  Unmapped) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29360};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Timeout, offset: 0x0, size: 0x8, def value: None
 double_t  Timeout;

/// @brief Field Unmapped, offset: 0x8, size: 0x4, def value: None
 int32_t  Unmapped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetConnection_StateShutdownData, Timeout) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetConnection_StateShutdownData, Unmapped) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetConnection_StateShutdownData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
