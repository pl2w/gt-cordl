#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureStateProvider`2_FeatureStateSnapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FeatureStateProvider`2_FeatureStateSnapshot)
// Forward declare root types
namespace GlobalNamespace {
template<typename TFeature,typename TFeatureState>
struct FeatureStateProvider_2_FeatureStateSnapshot;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot, "Oculus.Interaction.PoseDetection", "FeatureStateProvider`2/FeatureStateSnapshot");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TFeature,typename TFeatureState>
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.FeatureStateProvider`2/FeatureStateSnapshot<TFeature,TFeatureState>
struct CORDL_TYPE FeatureStateProvider_2_FeatureStateSnapshot {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FeatureStateProvider_2_FeatureStateSnapshot() ;

// Ctor Parameters [CppParam { name: "HasCurrentState", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "State", ty: "TFeatureState", modifiers: "", def_value: None, comment: None }, CppParam { name: "DesiredState", ty: "TFeatureState", modifiers: "", def_value: None, comment: None }, CppParam { name: "LastUpdatedFrameId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DesiredStateEntryTime", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr FeatureStateProvider_2_FeatureStateSnapshot(bool  HasCurrentState, TFeatureState  State, TFeatureState  DesiredState, int32_t  LastUpdatedFrameId, double_t  DesiredStateEntryTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field HasCurrentState, offset: 0x0, size: 0x1, def value: None
 bool  HasCurrentState;

/// @brief Field State, offset: 0x8, size: 0x8, def value: None
 TFeatureState  State;

/// @brief Field DesiredState, offset: 0x10, size: 0x8, def value: None
 TFeatureState  DesiredState;

/// @brief Field LastUpdatedFrameId, offset: 0x18, size: 0x4, def value: None
 int32_t  LastUpdatedFrameId;

/// @brief Field DesiredStateEntryTime, offset: 0x20, size: 0x8, def value: None
 double_t  DesiredStateEntryTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
