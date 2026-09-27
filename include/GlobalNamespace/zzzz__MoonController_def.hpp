#pragma once
// IWYU pragma private; include "GlobalNamespace/MoonController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MoonController_Placement_def.hpp"
#include "GlobalNamespace/zzzz__MoonController_Scenes_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MoonController)
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
struct MoonController_Placement;
}
namespace GlobalNamespace {
struct MoonController_SceneData;
}
namespace GlobalNamespace {
struct MoonController_Scenes;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MoonController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MoonController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MoonController*, "", "MoonController");
// Dependencies MoonController::Placement, MoonController::Scenes, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MoonController
class CORDL_TYPE MoonController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Placement = ::GlobalNamespace::MoonController_Placement;

using SceneData = ::GlobalNamespace::MoonController_SceneData;

using Scenes = ::GlobalNamespace::MoonController_Scenes;

 __declspec(property(get=get_Distance)) float_t  Distance;

 __declspec(property(get=get_TimeOfDay)) float_t  TimeOfDay;

/// @brief Field activeScene, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeScene, put=__cordl_internal_set_activeScene)) ::GlobalNamespace::MoonController_Scenes  activeScene;

/// @brief Field alwaysInTheSky, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysInTheSky, put=__cordl_internal_set_alwaysInTheSky)) bool  alwaysInTheSky;

/// @brief Field crackDayInOctoberOverride, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_crackDayInOctoberOverride, put=__cordl_internal_set_crackDayInOctoberOverride)) int32_t  crackDayInOctoberOverride;

/// @brief Field crackEndDayOfYear, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_crackEndDayOfYear, put=__cordl_internal_set_crackEndDayOfYear)) int32_t  crackEndDayOfYear;

/// @brief Field crackMaterialPropertyBlock, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_crackMaterialPropertyBlock, put=__cordl_internal_set_crackMaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  crackMaterialPropertyBlock;

/// @brief Field crackProgress, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crackProgress, put=__cordl_internal_set_crackProgress)) float_t  crackProgress;

/// @brief Field crackRenderer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_crackRenderer, put=__cordl_internal_set_crackRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  crackRenderer;

/// @brief Field crackStartDayOfYear, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_crackStartDayOfYear, put=__cordl_internal_set_crackStartDayOfYear)) int32_t  crackStartDayOfYear;

/// @brief Field currentlySetCrackProgress, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentlySetCrackProgress, put=__cordl_internal_set_currentlySetCrackProgress)) float_t  currentlySetCrackProgress;

/// @brief Field debugDrawOrbit, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDrawOrbit, put=__cordl_internal_set_debugDrawOrbit)) bool  debugDrawOrbit;

/// @brief Field debugOverrideCrackDayInOctober, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugOverrideCrackDayInOctober, put=__cordl_internal_set_debugOverrideCrackDayInOctober)) bool  debugOverrideCrackDayInOctober;

/// @brief Field debugOverrideCrackProgress, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugOverrideCrackProgress, put=__cordl_internal_set_debugOverrideCrackProgress)) bool  debugOverrideCrackProgress;

/// @brief Field debugOverrideTimeOfDay, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugOverrideTimeOfDay, put=__cordl_internal_set_debugOverrideTimeOfDay)) bool  debugOverrideTimeOfDay;

/// @brief Field defaultMoon, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMoon, put=__cordl_internal_set_defaultMoon)) ::UnityW<::UnityEngine::Transform>  defaultMoon;

/// @brief Field defaultPlacement, offset 0x2c, size 0x1c 
 __declspec(property(get=__cordl_internal_get_defaultPlacement, put=__cordl_internal_set_defaultPlacement)) ::GlobalNamespace::MoonController_Placement  defaultPlacement;

/// @brief Field distance, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_distance, put=__cordl_internal_set_distance)) float_t  distance;

/// @brief Field eyeCloseDistThreshold, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeCloseDistThreshold, put=__cordl_internal_set_eyeCloseDistThreshold)) float_t  eyeCloseDistThreshold;

/// @brief Field eyeOpenDistThreshold, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeOpenDistThreshold, put=__cordl_internal_set_eyeOpenDistThreshold)) float_t  eyeOpenDistThreshold;

/// @brief Field eyeOpenHash, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeOpenHash, put=__cordl_internal_set_eyeOpenHash)) int32_t  eyeOpenHash;

/// @brief Field openEyeModelEnabled, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_openEyeModelEnabled, put=__cordl_internal_set_openEyeModelEnabled)) bool  openEyeModelEnabled;

/// @brief Field openMoon, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_openMoon, put=__cordl_internal_set_openMoon)) ::UnityW<::UnityEngine::Transform>  openMoon;

/// @brief Field openMoonAnimator, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_openMoonAnimator, put=__cordl_internal_set_openMoonAnimator)) ::UnityW<::UnityEngine::Animator>  openMoonAnimator;

/// @brief Field orbitAngle, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_orbitAngle, put=__cordl_internal_set_orbitAngle)) float_t  orbitAngle;

/// @brief Field scenes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scenes, put=__cordl_internal_set_scenes)) ::System::Collections::Generic::List_1<::GlobalNamespace::MoonController_SceneData>*  scenes;

/// @brief Field timeOfDayOverride, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeOfDayOverride, put=__cordl_internal_set_timeOfDayOverride)) float_t  timeOfDayOverride;

/// @brief Field zoneToSceneMapping, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneToSceneMapping, put=__cordl_internal_set_zoneToSceneMapping)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::GlobalNamespace::MoonController_Scenes>*  zoneToSceneMapping;

static inline ::GlobalNamespace::MoonController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5618fc8, size 0xc0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnZoneChanged, addr 0x5619118, size 0x120, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method SetEyeOpenAnimation, addr 0x56186c0, size 0x24, virtual false, abstract: false, final false
inline void SetEyeOpenAnimation() ;

/// @brief Method Start, addr 0x5618708, size 0x50c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartEyeCloseAnimation, addr 0x56186e4, size 0x24, virtual false, abstract: false, final false
inline void StartEyeCloseAnimation() ;

/// @brief Method Update, addr 0x5619254, size 0x124, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateActiveScene, addr 0x5619238, size 0x1c, virtual false, abstract: false, final false
inline void UpdateActiveScene(::GlobalNamespace::MoonController_Scenes  nextScene) ;

/// @brief Method UpdateCrack, addr 0x5618c14, size 0x3a4, virtual false, abstract: false, final false
inline void UpdateCrack() ;

/// @brief Method UpdateDistance, addr 0x5619378, size 0x1c, virtual false, abstract: false, final false
inline void UpdateDistance(float_t  nextDistance) ;

/// @brief Method UpdatePlacement, addr 0x5618fb8, size 0x10, virtual false, abstract: false, final false
inline void UpdatePlacement() ;

/// @brief Method UpdatePlacementOrbit, addr 0x561970c, size 0x5f8, virtual false, abstract: false, final false
inline void UpdatePlacementOrbit() ;

/// @brief Method UpdatePlacementSimple, addr 0x56194d4, size 0x238, virtual false, abstract: false, final false
inline void UpdatePlacementSimple() ;

/// @brief Method UpdateVisualState, addr 0x5619394, size 0x140, virtual false, abstract: false, final false
inline void UpdateVisualState() ;

constexpr ::GlobalNamespace::MoonController_Scenes const& __cordl_internal_get_activeScene() const;

constexpr ::GlobalNamespace::MoonController_Scenes& __cordl_internal_get_activeScene() ;

constexpr bool const& __cordl_internal_get_alwaysInTheSky() const;

constexpr bool& __cordl_internal_get_alwaysInTheSky() ;

constexpr int32_t const& __cordl_internal_get_crackDayInOctoberOverride() const;

constexpr int32_t& __cordl_internal_get_crackDayInOctoberOverride() ;

constexpr int32_t const& __cordl_internal_get_crackEndDayOfYear() const;

constexpr int32_t& __cordl_internal_get_crackEndDayOfYear() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_crackMaterialPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_crackMaterialPropertyBlock() ;

constexpr float_t const& __cordl_internal_get_crackProgress() const;

constexpr float_t& __cordl_internal_get_crackProgress() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_crackRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_crackRenderer() ;

constexpr int32_t const& __cordl_internal_get_crackStartDayOfYear() const;

constexpr int32_t& __cordl_internal_get_crackStartDayOfYear() ;

constexpr float_t const& __cordl_internal_get_currentlySetCrackProgress() const;

constexpr float_t& __cordl_internal_get_currentlySetCrackProgress() ;

constexpr bool const& __cordl_internal_get_debugDrawOrbit() const;

constexpr bool& __cordl_internal_get_debugDrawOrbit() ;

constexpr bool const& __cordl_internal_get_debugOverrideCrackDayInOctober() const;

constexpr bool& __cordl_internal_get_debugOverrideCrackDayInOctober() ;

constexpr bool const& __cordl_internal_get_debugOverrideCrackProgress() const;

constexpr bool& __cordl_internal_get_debugOverrideCrackProgress() ;

constexpr bool const& __cordl_internal_get_debugOverrideTimeOfDay() const;

constexpr bool& __cordl_internal_get_debugOverrideTimeOfDay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_defaultMoon() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_defaultMoon() ;

constexpr ::GlobalNamespace::MoonController_Placement const& __cordl_internal_get_defaultPlacement() const;

constexpr ::GlobalNamespace::MoonController_Placement& __cordl_internal_get_defaultPlacement() ;

constexpr float_t const& __cordl_internal_get_distance() const;

constexpr float_t& __cordl_internal_get_distance() ;

constexpr float_t const& __cordl_internal_get_eyeCloseDistThreshold() const;

constexpr float_t& __cordl_internal_get_eyeCloseDistThreshold() ;

constexpr float_t const& __cordl_internal_get_eyeOpenDistThreshold() const;

constexpr float_t& __cordl_internal_get_eyeOpenDistThreshold() ;

constexpr int32_t const& __cordl_internal_get_eyeOpenHash() const;

constexpr int32_t& __cordl_internal_get_eyeOpenHash() ;

constexpr bool const& __cordl_internal_get_openEyeModelEnabled() const;

constexpr bool& __cordl_internal_get_openEyeModelEnabled() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_openMoon() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_openMoon() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_openMoonAnimator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_openMoonAnimator() ;

constexpr float_t const& __cordl_internal_get_orbitAngle() const;

constexpr float_t& __cordl_internal_get_orbitAngle() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MoonController_SceneData>* const& __cordl_internal_get_scenes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MoonController_SceneData>*& __cordl_internal_get_scenes() ;

constexpr float_t const& __cordl_internal_get_timeOfDayOverride() const;

constexpr float_t& __cordl_internal_get_timeOfDayOverride() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::GlobalNamespace::MoonController_Scenes>* const& __cordl_internal_get_zoneToSceneMapping() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::GlobalNamespace::MoonController_Scenes>*& __cordl_internal_get_zoneToSceneMapping() ;

constexpr void __cordl_internal_set_activeScene(::GlobalNamespace::MoonController_Scenes  value) ;

constexpr void __cordl_internal_set_alwaysInTheSky(bool  value) ;

constexpr void __cordl_internal_set_crackDayInOctoberOverride(int32_t  value) ;

constexpr void __cordl_internal_set_crackEndDayOfYear(int32_t  value) ;

constexpr void __cordl_internal_set_crackMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_crackProgress(float_t  value) ;

constexpr void __cordl_internal_set_crackRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_crackStartDayOfYear(int32_t  value) ;

constexpr void __cordl_internal_set_currentlySetCrackProgress(float_t  value) ;

constexpr void __cordl_internal_set_debugDrawOrbit(bool  value) ;

constexpr void __cordl_internal_set_debugOverrideCrackDayInOctober(bool  value) ;

constexpr void __cordl_internal_set_debugOverrideCrackProgress(bool  value) ;

constexpr void __cordl_internal_set_debugOverrideTimeOfDay(bool  value) ;

constexpr void __cordl_internal_set_defaultMoon(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_defaultPlacement(::GlobalNamespace::MoonController_Placement  value) ;

constexpr void __cordl_internal_set_distance(float_t  value) ;

constexpr void __cordl_internal_set_eyeCloseDistThreshold(float_t  value) ;

constexpr void __cordl_internal_set_eyeOpenDistThreshold(float_t  value) ;

constexpr void __cordl_internal_set_eyeOpenHash(int32_t  value) ;

constexpr void __cordl_internal_set_openEyeModelEnabled(bool  value) ;

constexpr void __cordl_internal_set_openMoon(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_openMoonAnimator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_orbitAngle(float_t  value) ;

constexpr void __cordl_internal_set_scenes(::System::Collections::Generic::List_1<::GlobalNamespace::MoonController_SceneData>*  value) ;

constexpr void __cordl_internal_set_timeOfDayOverride(float_t  value) ;

constexpr void __cordl_internal_set_zoneToSceneMapping(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::GlobalNamespace::MoonController_Scenes>*  value) ;

/// @brief Method .ctor, addr 0x5619e28, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Distance, addr 0x56185b0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Distance() ;

/// @brief Method get_TimeOfDay, addr 0x56185b8, size 0x108, virtual false, abstract: false, final false
inline float_t get_TimeOfDay() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoonController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoonController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MoonController(MoonController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoonController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoonController(MoonController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{564};

/// @brief Field moonFallEnd offset 0xffffffff size 0x4
static constexpr float_t  moonFallEnd{static_cast<float_t>(0.22f)};

/// @brief Field moonFallStart offset 0xffffffff size 0x4
static constexpr float_t  moonFallStart{static_cast<float_t>(0.086666666f)};

/// @brief Field moonRiseEnd offset 0xffffffff size 0x4
static constexpr float_t  moonRiseEnd{static_cast<float_t>(0.6733333f)};

/// @brief Field moonRiseStart offset 0xffffffff size 0x4
static constexpr float_t  moonRiseStart{static_cast<float_t>(0.53999996f)};

/// [SerializeField]
/// @brief Field scenes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MoonController_SceneData>*  ___scenes;

/// [SerializeField]
/// @brief Field activeScene, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::MoonController_Scenes  ___activeScene;

/// [SerializeField]
/// @brief Field defaultPlacement, offset: 0x2c, size: 0x1c, def value: None
 ::GlobalNamespace::MoonController_Placement  ___defaultPlacement;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field distance, offset: 0x48, size: 0x4, def value: None
 float_t  ___distance;

/// [SerializeField]
/// @brief Field alwaysInTheSky, offset: 0x4c, size: 0x1, def value: None
 bool  ___alwaysInTheSky;

/// [Header("Model Swap")]
/// [SerializeField]
/// @brief Field defaultMoon, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___defaultMoon;

/// [SerializeField]
/// @brief Field openMoon, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___openMoon;

/// [Header("Animation")]
/// [SerializeField]
/// @brief Field openMoonAnimator, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___openMoonAnimator;

/// [SerializeField]
/// @brief Field eyeOpenDistThreshold, offset: 0x68, size: 0x4, def value: None
 float_t  ___eyeOpenDistThreshold;

/// [SerializeField]
/// @brief Field eyeCloseDistThreshold, offset: 0x6c, size: 0x4, def value: None
 float_t  ___eyeCloseDistThreshold;

/// [Header("Debug")]
/// [SerializeField]
/// @brief Field debugOverrideTimeOfDay, offset: 0x70, size: 0x1, def value: None
 bool  ___debugOverrideTimeOfDay;

/// [SerializeField]
/// [Range(0, 4)]
/// @brief Field timeOfDayOverride, offset: 0x74, size: 0x4, def value: None
 float_t  ___timeOfDayOverride;

/// [SerializeField]
/// @brief Field debugOverrideCrackProgress, offset: 0x78, size: 0x1, def value: None
 bool  ___debugOverrideCrackProgress;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field crackProgress, offset: 0x7c, size: 0x4, def value: None
 float_t  ___crackProgress;

/// [SerializeField]
/// @brief Field debugOverrideCrackDayInOctober, offset: 0x80, size: 0x1, def value: None
 bool  ___debugOverrideCrackDayInOctober;

/// [SerializeField]
/// [Range(1, 31)]
/// @brief Field crackDayInOctoberOverride, offset: 0x84, size: 0x4, def value: None
 int32_t  ___crackDayInOctoberOverride;

/// [SerializeField]
/// @brief Field crackRenderer, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___crackRenderer;

/// @brief Field crackStartDayOfYear, offset: 0x90, size: 0x4, def value: None
 int32_t  ___crackStartDayOfYear;

/// @brief Field crackEndDayOfYear, offset: 0x94, size: 0x4, def value: None
 int32_t  ___crackEndDayOfYear;

/// @brief Field orbitAngle, offset: 0x98, size: 0x4, def value: None
 float_t  ___orbitAngle;

/// @brief Field eyeOpenHash, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___eyeOpenHash;

/// @brief Field openEyeModelEnabled, offset: 0xa0, size: 0x1, def value: None
 bool  ___openEyeModelEnabled;

/// @brief Field currentlySetCrackProgress, offset: 0xa4, size: 0x4, def value: None
 float_t  ___currentlySetCrackProgress;

/// @brief Field crackMaterialPropertyBlock, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___crackMaterialPropertyBlock;

/// @brief Field debugDrawOrbit, offset: 0xb0, size: 0x1, def value: None
 bool  ___debugDrawOrbit;

/// @brief Field zoneToSceneMapping, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::GlobalNamespace::MoonController_Scenes>*  ___zoneToSceneMapping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MoonController, ___scenes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___activeScene) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___defaultPlacement) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___distance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___alwaysInTheSky) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___defaultMoon) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___openMoon) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___openMoonAnimator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___eyeOpenDistThreshold) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___eyeCloseDistThreshold) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___debugOverrideTimeOfDay) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___timeOfDayOverride) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___debugOverrideCrackProgress) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___crackProgress) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___debugOverrideCrackDayInOctober) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___crackDayInOctoberOverride) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___crackRenderer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___crackStartDayOfYear) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___crackEndDayOfYear) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___orbitAngle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___eyeOpenHash) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___openEyeModelEnabled) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___currentlySetCrackProgress) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___crackMaterialPropertyBlock) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___debugDrawOrbit) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController, ___zoneToSceneMapping) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MoonController) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
