#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetTracking/TrackerSettingsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrackerSettingsExtensions)
namespace Unity::Cinemachine::TargetTracking {
struct TrackerSettings;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine::TargetTracking {
class TrackerSettingsExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions*, "Unity.Cinemachine.TargetTracking", "TrackerSettingsExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::Cinemachine::TargetTracking {
// Is value type: false
// CS Name: Unity.Cinemachine.TargetTracking.TrackerSettingsExtensions
class CORDL_TYPE TrackerSettingsExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetEffectivePositionDamping, addr 0xaf01470, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetEffectivePositionDamping(::Unity::Cinemachine::TargetTracking::TrackerSettings  s) ;

/// [Extension]
/// @brief Method GetEffectiveRotationDamping, addr 0xaf0148c, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetEffectiveRotationDamping(::Unity::Cinemachine::TargetTracking::TrackerSettings  s) ;

/// [Extension]
/// @brief Method GetMaxDampTime, addr 0xaf013dc, size 0x94, virtual false, abstract: false, final false
static inline float_t GetMaxDampTime(::Unity::Cinemachine::TargetTracking::TrackerSettings  s) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackerSettingsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackerSettingsExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackerSettingsExtensions(TrackerSettingsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackerSettingsExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackerSettingsExtensions(TrackerSettingsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22538};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine::TargetTracking
