#pragma once
// IWYU pragma private; include "Fusion/NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SerializableType_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta)
namespace Fusion {
class SimulationBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta, "Fusion", "NetworkProjectConfigAsset/SerializableSimulationBehaviourMeta");
// Dependencies Fusion.SerializableType`1<BaseType>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkProjectConfigAsset/SerializableSimulationBehaviourMeta
struct CORDL_TYPE NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::Fusion::SerializableType_1<::UnityW<::Fusion::SimulationBehaviour>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExecutionOrder", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta(::Fusion::SerializableType_1<::UnityW<::Fusion::SimulationBehaviour>>  Type, int32_t  ExecutionOrder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19250};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Type, offset: 0x0, size: 0x8, def value: None
 ::Fusion::SerializableType_1<::UnityW<::Fusion::SimulationBehaviour>>  Type;

/// @brief Field ExecutionOrder, offset: 0x8, size: 0x4, def value: None
 int32_t  ExecutionOrder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta, ExecutionOrder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
