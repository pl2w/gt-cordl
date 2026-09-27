#pragma once
// IWYU pragma private; include "Fusion/SimulationPacketEnvelope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SimulationMessageList_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationPacketEnvelope)
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
struct NetworkObjectPacketData;
}
namespace Fusion {
struct NetworkObjectPacketFlags;
}
namespace Fusion {
class Simulation;
}
namespace Fusion {
struct Tick;
}
// Forward declare root types
namespace Fusion {
struct SimulationPacketEnvelope;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationPacketEnvelope);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationPacketEnvelope, "Fusion", "SimulationPacketEnvelope");
// Dependencies Fusion.SimulationMessageList, Fusion.Tick
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationPacketEnvelope
struct CORDL_TYPE SimulationPacketEnvelope {
public:
// Declarations
/// @brief Method AddObjectPacketData, addr 0x60063f8, size 0x110, virtual false, abstract: false, final false
inline void AddObjectPacketData(::Fusion::Simulation*  sim, ::Fusion::NetworkId  id, ::Fusion::Tick  tick, ::Fusion::NetworkObjectPacketFlags  flags) ;

/// @brief Method Alloc, addr 0x60065ec, size 0x94, virtual false, abstract: false, final false
static inline ::Fusion::SimulationPacketEnvelope* Alloc(::Fusion::Simulation*  sim) ;

/// @brief Method Free, addr 0x6006508, size 0xe4, virtual false, abstract: false, final false
static inline void Free(::Fusion::Simulation*  sim, ::by_ref<::Fusion::SimulationPacketEnvelope*>  envelope) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationPacketEnvelope() ;

// Ctor Parameters [CppParam { name: "Tick", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }, CppParam { name: "Messages", ty: "::Fusion::SimulationMessageList", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectData", ty: "::Fusion::NetworkObjectPacketData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectDataCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectDataCapacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationPacketEnvelope(::Fusion::Tick  Tick, ::Fusion::SimulationMessageList  Messages, ::Fusion::NetworkObjectPacketData*  ObjectData, int32_t  ObjectDataCount, int32_t  ObjectDataCapacity) noexcept;

/// @brief Field MIN_CAPACITY offset 0xffffffff size 0x4
static constexpr int32_t  MIN_CAPACITY{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19355};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Tick, offset: 0x0, size: 0x4, def value: None
 ::Fusion::Tick  Tick;

/// @brief Field Messages, offset: 0x8, size: 0x18, def value: None
 ::Fusion::SimulationMessageList  Messages;

/// @brief Field ObjectData, offset: 0x20, size: 0x8, def value: None
 ::Fusion::NetworkObjectPacketData*  ObjectData;

/// @brief Field ObjectDataCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ObjectDataCount;

/// @brief Field ObjectDataCapacity, offset: 0x2c, size: 0x4, def value: None
 int32_t  ObjectDataCapacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationPacketEnvelope, Tick) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationPacketEnvelope, Messages) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationPacketEnvelope, ObjectData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationPacketEnvelope, ObjectDataCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationPacketEnvelope, ObjectDataCapacity) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationPacketEnvelope) == 0x30, "Size mismatch!");

} // namespace end def Fusion
