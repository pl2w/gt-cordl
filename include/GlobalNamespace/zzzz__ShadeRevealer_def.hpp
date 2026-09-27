#pragma once
// IWYU pragma private; include "GlobalNamespace/ShadeRevealer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShadeRevealer_State_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShadeRevealer)
namespace GlobalNamespace {
class CosmeticCritterCatcherShade;
}
namespace GlobalNamespace {
class CosmeticCritter;
}
namespace GlobalNamespace {
struct ShadeRevealer_State;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ShadeRevealer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ShadeRevealer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShadeRevealer*, "", "ShadeRevealer");
// Dependencies ShadeRevealer::State, TransferrableObject, UnityEngine.GameObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShadeRevealer
class CORDL_TYPE ShadeRevealer : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using State = ::GlobalNamespace::ShadeRevealer_State;

/// @brief Field beamForward, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_beamForward, put=__cordl_internal_set_beamForward)) ::UnityW<::UnityEngine::Transform>  beamForward;

/// @brief Field beamLength, offset 0x368, size 0x4 
 __declspec(property(get=__cordl_internal_get_beamLength, put=__cordl_internal_set_beamLength)) float_t  beamLength;

/// @brief Field beamSFX, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_beamSFX, put=__cordl_internal_set_beamSFX)) ::UnityW<::UnityEngine::AudioSource>  beamSFX;

/// @brief Field catchFX, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_catchFX, put=__cordl_internal_set_catchFX)) ::UnityW<::UnityEngine::ParticleSystem>  catchFX;

/// @brief Field catchSFX, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_catchSFX, put=__cordl_internal_set_catchSFX)) ::UnityW<::UnityEngine::AudioSource>  catchSFX;

/// @brief Field currentBeamState, offset 0x3b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentBeamState, put=__cordl_internal_set_currentBeamState)) ::GlobalNamespace::ShadeRevealer_State  currentBeamState;

/// @brief Field drawThresholdTesterInEditor, offset 0x380, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawThresholdTesterInEditor, put=__cordl_internal_set_drawThresholdTesterInEditor)) bool  drawThresholdTesterInEditor;

/// @brief Field enableWhenLocked, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableWhenLocked, put=__cordl_internal_set_enableWhenLocked)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  enableWhenLocked;

/// @brief Field enableWhenPrimed, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableWhenPrimed, put=__cordl_internal_set_enableWhenPrimed)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  enableWhenPrimed;

/// @brief Field enableWhenScanning, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableWhenScanning, put=__cordl_internal_set_enableWhenScanning)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  enableWhenScanning;

/// @brief Field enableWhenTracking, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableWhenTracking, put=__cordl_internal_set_enableWhenTracking)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  enableWhenTracking;

/// @brief Field initialActivationSFX, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialActivationSFX, put=__cordl_internal_set_initialActivationSFX)) ::UnityW<::UnityEngine::AudioSource>  initialActivationSFX;

/// @brief Field isScanning, offset 0x3b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isScanning, put=__cordl_internal_set_isScanning)) bool  isScanning;

/// @brief Field lockThreshold, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get_lockThreshold, put=__cordl_internal_set_lockThreshold)) float_t  lockThreshold;

/// @brief Field objectsToDisableWhenOff, offset 0x3c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToDisableWhenOff, put=__cordl_internal_set_objectsToDisableWhenOff)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objectsToDisableWhenOff;

/// @brief Field onShadeLaunched, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onShadeLaunched, put=__cordl_internal_set_onShadeLaunched)) ::UnityEngine::Events::UnityEvent*  onShadeLaunched;

/// @brief Field pendingBeamState, offset 0x3b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_pendingBeamState, put=__cordl_internal_set_pendingBeamState)) ::GlobalNamespace::ShadeRevealer_State  pendingBeamState;

/// @brief Field shadeCatcher, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_shadeCatcher, put=__cordl_internal_set_shadeCatcher)) ::UnityW<::GlobalNamespace::CosmeticCritterCatcherShade>  shadeCatcher;

/// @brief Field thresholdTester, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_thresholdTester, put=__cordl_internal_set_thresholdTester)) ::UnityW<::UnityEngine::Transform>  thresholdTester;

/// @brief Field trackThreshold, offset 0x36c, size 0x4 
 __declspec(property(get=__cordl_internal_get_trackThreshold, put=__cordl_internal_set_trackThreshold)) float_t  trackThreshold;

/// @brief Method Awake, addr 0x57f3d9c, size 0x21c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CritterWithinBeamThreshold, addr 0x57f26e8, size 0x1c, virtual false, abstract: false, final false
inline bool CritterWithinBeamThreshold(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::ShadeRevealer_State  criteria, float_t  tolerance) ;

/// @brief Method GetBeamStateForCritter, addr 0x57f4220, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::ShadeRevealer_State GetBeamStateForCritter(::GlobalNamespace::CosmeticCritter*  critter, float_t  tolerance) ;

/// @brief Method GetBeamStateForPosition, addr 0x57f407c, size 0x1a4, virtual false, abstract: false, final false
inline ::GlobalNamespace::ShadeRevealer_State GetBeamStateForPosition(::UnityEngine::Vector3  toPosition, float_t  tolerance) ;

/// @brief Method GetDistanceToBeamRay, addr 0x57f3fb8, size 0xc4, virtual false, abstract: false, final false
inline float_t GetDistanceToBeamRay(::UnityEngine::Vector3  toPosition) ;

/// @brief Method LateUpdateShared, addr 0x57f4388, size 0x74, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::ShadeRevealer* New_ctor() ;

/// @brief Method SetBestBeamState, addr 0x57f2f70, size 0x14, virtual false, abstract: false, final false
inline void SetBestBeamState(::GlobalNamespace::ShadeRevealer_State  state) ;

/// @brief Method SetObjectsEnabledFromState, addr 0x57f4294, size 0xf4, virtual false, abstract: false, final false
inline void SetObjectsEnabledFromState(::GlobalNamespace::ShadeRevealer_State  state) ;

/// @brief Method ShadeCaught, addr 0x57f2ae0, size 0x68, virtual false, abstract: false, final false
inline void ShadeCaught() ;

/// @brief Method StartScanning, addr 0x57f43fc, size 0x5c, virtual false, abstract: false, final false
inline void StartScanning() ;

/// @brief Method StopScanning, addr 0x57f4458, size 0x78, virtual false, abstract: false, final false
inline void StopScanning() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_beamForward() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_beamForward() ;

constexpr float_t const& __cordl_internal_get_beamLength() const;

constexpr float_t& __cordl_internal_get_beamLength() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_beamSFX() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_beamSFX() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_catchFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_catchFX() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_catchSFX() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_catchSFX() ;

constexpr ::GlobalNamespace::ShadeRevealer_State const& __cordl_internal_get_currentBeamState() const;

constexpr ::GlobalNamespace::ShadeRevealer_State& __cordl_internal_get_currentBeamState() ;

constexpr bool const& __cordl_internal_get_drawThresholdTesterInEditor() const;

constexpr bool& __cordl_internal_get_drawThresholdTesterInEditor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_enableWhenLocked() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_enableWhenLocked() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_enableWhenPrimed() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_enableWhenPrimed() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_enableWhenScanning() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_enableWhenScanning() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_enableWhenTracking() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_enableWhenTracking() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_initialActivationSFX() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_initialActivationSFX() ;

constexpr bool const& __cordl_internal_get_isScanning() const;

constexpr bool& __cordl_internal_get_isScanning() ;

constexpr float_t const& __cordl_internal_get_lockThreshold() const;

constexpr float_t& __cordl_internal_get_lockThreshold() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_objectsToDisableWhenOff() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_objectsToDisableWhenOff() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onShadeLaunched() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onShadeLaunched() ;

constexpr ::GlobalNamespace::ShadeRevealer_State const& __cordl_internal_get_pendingBeamState() const;

constexpr ::GlobalNamespace::ShadeRevealer_State& __cordl_internal_get_pendingBeamState() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticCritterCatcherShade> const& __cordl_internal_get_shadeCatcher() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticCritterCatcherShade>& __cordl_internal_get_shadeCatcher() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_thresholdTester() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_thresholdTester() ;

constexpr float_t const& __cordl_internal_get_trackThreshold() const;

constexpr float_t& __cordl_internal_get_trackThreshold() ;

constexpr void __cordl_internal_set_beamForward(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_beamLength(float_t  value) ;

constexpr void __cordl_internal_set_beamSFX(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_catchFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_catchSFX(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_currentBeamState(::GlobalNamespace::ShadeRevealer_State  value) ;

constexpr void __cordl_internal_set_drawThresholdTesterInEditor(bool  value) ;

constexpr void __cordl_internal_set_enableWhenLocked(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_enableWhenPrimed(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_enableWhenScanning(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_enableWhenTracking(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_initialActivationSFX(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_isScanning(bool  value) ;

constexpr void __cordl_internal_set_lockThreshold(float_t  value) ;

constexpr void __cordl_internal_set_objectsToDisableWhenOff(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_onShadeLaunched(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_pendingBeamState(::GlobalNamespace::ShadeRevealer_State  value) ;

constexpr void __cordl_internal_set_shadeCatcher(::UnityW<::GlobalNamespace::CosmeticCritterCatcherShade>  value) ;

constexpr void __cordl_internal_set_thresholdTester(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_trackThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0x57f44d0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShadeRevealer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShadeRevealer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShadeRevealer(ShadeRevealer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShadeRevealer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShadeRevealer(ShadeRevealer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{205};

/// [SerializeField]
/// @brief Field initialActivationSFX, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___initialActivationSFX;

/// [SerializeField]
/// @brief Field beamSFX, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___beamSFX;

/// [SerializeField]
/// @brief Field catchSFX, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___catchSFX;

/// [SerializeField]
/// @brief Field catchFX, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___catchFX;

/// [Space]
/// [SerializeField]
/// @brief Field shadeCatcher, offset: 0x358, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticCritterCatcherShade>  ___shadeCatcher;

/// [Space]
/// [Tooltip("The transform that represents the origin of the revealer beam.")]
/// [SerializeField]
/// @brief Field beamForward, offset: 0x360, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___beamForward;

/// [Tooltip("The maximum length of the beam.")]
/// [SerializeField]
/// @brief Field beamLength, offset: 0x368, size: 0x4, def value: None
 float_t  ___beamLength;

/// [Tooltip("If the Shade is this close to the beam, set it to flee and have all Revealers enter Tracking mode.")]
/// [SerializeField]
/// @brief Field trackThreshold, offset: 0x36c, size: 0x4, def value: None
 float_t  ___trackThreshold;

/// [Tooltip("If the Shade is this close to the beam, slow it down.")]
/// [SerializeField]
/// @brief Field lockThreshold, offset: 0x370, size: 0x4, def value: None
 float_t  ___lockThreshold;

/// [Tooltip("Editor-only object to help test the thresholds.")]
/// [SerializeField]
/// @brief Field thresholdTester, offset: 0x378, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___thresholdTester;

/// [Tooltip("Whether to draw the tester or not.")]
/// [SerializeField]
/// @brief Field drawThresholdTesterInEditor, offset: 0x380, size: 0x1, def value: None
 bool  ___drawThresholdTesterInEditor;

/// [Space]
/// [Tooltip("Enable these objects while the beam is in Scanning mode.")]
/// [SerializeField]
/// @brief Field enableWhenScanning, offset: 0x388, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___enableWhenScanning;

/// [Tooltip("Enable these objects while the beam is in Tracking mode.")]
/// [SerializeField]
/// @brief Field enableWhenTracking, offset: 0x390, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___enableWhenTracking;

/// [Tooltip("Enable these objects while the beam is in Locked mode.")]
/// [SerializeField]
/// @brief Field enableWhenLocked, offset: 0x398, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___enableWhenLocked;

/// [Tooltip("Enable these objects while ready to fire.")]
/// [SerializeField]
/// @brief Field enableWhenPrimed, offset: 0x3a0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___enableWhenPrimed;

/// [Space]
/// [SerializeField]
/// @brief Field onShadeLaunched, offset: 0x3a8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onShadeLaunched;

/// @brief Field isScanning, offset: 0x3b0, size: 0x1, def value: None
 bool  ___isScanning;

/// @brief Field currentBeamState, offset: 0x3b4, size: 0x4, def value: None
 ::GlobalNamespace::ShadeRevealer_State  ___currentBeamState;

/// @brief Field pendingBeamState, offset: 0x3b8, size: 0x4, def value: None
 ::GlobalNamespace::ShadeRevealer_State  ___pendingBeamState;

/// @brief Field objectsToDisableWhenOff, offset: 0x3c0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___objectsToDisableWhenOff;

/// @brief Size padding 0x3f8 - 0x3c8 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___initialActivationSFX) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___beamSFX) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___catchSFX) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___catchFX) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___shadeCatcher) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___beamForward) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___beamLength) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___trackThreshold) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___lockThreshold) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___thresholdTester) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___drawThresholdTesterInEditor) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___enableWhenScanning) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___enableWhenTracking) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___enableWhenLocked) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___enableWhenPrimed) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___onShadeLaunched) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___isScanning) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___currentBeamState) == 0x3b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___pendingBeamState) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeRevealer, ___objectsToDisableWhenOff) == 0x3c0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShadeRevealer) == 0x3f8, "Size mismatch!");

} // namespace end def GlobalNamespace
