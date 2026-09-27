#pragma once
// IWYU pragma private; include "Fusion/Simulation_TimeFeedback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Simulation_TimeFeedback)
namespace Fusion::Sockets {
struct NetBitBuffer;
}
namespace Fusion {
class SimulationConnection;
}
// Forward declare root types
namespace GlobalNamespace {
struct Simulation_TimeFeedback;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Simulation_TimeFeedback);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Simulation_TimeFeedback, "Fusion", "Simulation/TimeFeedback");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Simulation/TimeFeedback
struct CORDL_TYPE Simulation_TimeFeedback {
public:
// Declarations
/// @brief Method Read, addr 0x5ff3f58, size 0x180, virtual false, abstract: false, final false
inline void Read(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method Write, addr 0x5ff6544, size 0x244, virtual false, abstract: false, final false
inline void Write(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method .ctor, addr 0x5ff6528, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(double_t  offsetAvg, double_t  offsetDev, double_t  recvDeltaAvg, double_t  recvDeltaDev) ;

/// @brief Method .ctor, addr 0x5ff649c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Fusion::SimulationConnection*  sc) ;

// Ctor Parameters []
// @brief default ctor
constexpr Simulation_TimeFeedback() ;

// Ctor Parameters [CppParam { name: "OffsetAvg", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "OffsetDev", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RecvDeltaAvg", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RecvDeltaDev", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Simulation_TimeFeedback(float_t  OffsetAvg, float_t  OffsetDev, float_t  RecvDeltaAvg, float_t  RecvDeltaDev) noexcept;

/// @brief Field ACCURACY offset 0xffffffff size 0x4
static constexpr int32_t  ACCURACY{static_cast<int32_t>(0x100)};

/// @brief Field BLOCK offset 0xffffffff size 0x4
static constexpr int32_t  BLOCK{static_cast<int32_t>(0x6)};

/// @brief Field SUSPEND_THRESHOLD offset 0xffffffff size 0x8
static constexpr double_t  SUSPEND_THRESHOLD{static_cast<double_t>(1.0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19314};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field OffsetAvg, offset: 0x0, size: 0x4, def value: None
 float_t  OffsetAvg;

/// @brief Field OffsetDev, offset: 0x4, size: 0x4, def value: None
 float_t  OffsetDev;

/// @brief Field RecvDeltaAvg, offset: 0x8, size: 0x4, def value: None
 float_t  RecvDeltaAvg;

/// @brief Field RecvDeltaDev, offset: 0xc, size: 0x4, def value: None
 float_t  RecvDeltaDev;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Simulation_TimeFeedback, OffsetAvg) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_TimeFeedback, OffsetDev) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_TimeFeedback, RecvDeltaAvg) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_TimeFeedback, RecvDeltaDev) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Simulation_TimeFeedback) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
