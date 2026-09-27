#pragma once
// IWYU pragma private; include "GlobalNamespace/GrowingSnowballThrowable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SnowballThrowable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GrowingSnowballThrowable)
namespace GlobalNamespace {
struct GrowingSnowballThrowable_AOERangeDebugDraw;
}
namespace GlobalNamespace {
struct GrowingSnowballThrowable_SizeParameters;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class PhotonEvent;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace GlobalNamespace {
class SnowballKnockbackEnabler;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GrowingSnowballThrowable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GrowingSnowballThrowable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrowingSnowballThrowable*, "", "GrowingSnowballThrowable");
// Dependencies SnowballThrowable, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrowingSnowballThrowable
class CORDL_TYPE GrowingSnowballThrowable : public ::GlobalNamespace::SnowballThrowable {
public:
// Declarations
using AOERangeDebugDraw = ::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw;

using SizeParameters = ::GlobalNamespace::GrowingSnowballThrowable_SizeParameters;

 __declspec(property(get=get_CurrentSnowballRadius)) float_t  CurrentSnowballRadius;

/// @brief Field ForceAOEEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ForceAOEEnabled, put=setStaticF_ForceAOEEnabled)) bool  ForceAOEEnabled;

 __declspec(property(get=get_MaxSizeLevel)) int32_t  MaxSizeLevel;

 __declspec(property(get=get_SizeLevel)) int32_t  SizeLevel;

/// @brief Field aoeRangeDebugDrawQueue, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_aoeRangeDebugDrawQueue, put=__cordl_internal_set_aoeRangeDebugDrawQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw>*  aoeRangeDebugDrawQueue;

/// @brief Field changeSizeEvent, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_changeSizeEvent, put=__cordl_internal_set_changeSizeEvent)) ::GlobalNamespace::PhotonEvent*  changeSizeEvent;

/// @brief Field combineBasedOnSpeedThreshold, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_combineBasedOnSpeedThreshold, put=__cordl_internal_set_combineBasedOnSpeedThreshold)) float_t  combineBasedOnSpeedThreshold;

/// @brief Field debugDrawAOERange, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_debugDrawAOERange, put=setStaticF_debugDrawAOERange)) bool  debugDrawAOERange;

/// @brief Field debugDrawAOERangeTime, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugDrawAOERangeTime, put=__cordl_internal_set_debugDrawAOERangeTime)) float_t  debugDrawAOERangeTime;

/// @brief Field k_useAOE, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_k_useAOE, put=setStaticF_k_useAOE)) bool  k_useAOE;

/// @brief Field maintainSizeLevelUntilLocalTime, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maintainSizeLevelUntilLocalTime, put=__cordl_internal_set_maintainSizeLevelUntilLocalTime)) float_t  maintainSizeLevelUntilLocalTime;

/// @brief Field modelOffset, offset 0x104, size 0xc 
 __declspec(property(get=__cordl_internal_get_modelOffset, put=__cordl_internal_set_modelOffset)) ::UnityEngine::Vector3  modelOffset;

/// @brief Field modelParentOffset, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get_modelParentOffset, put=__cordl_internal_set_modelParentOffset)) ::UnityEngine::Vector3  modelParentOffset;

/// @brief Field modelRadius, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_modelRadius, put=__cordl_internal_set_modelRadius)) float_t  modelRadius;

/// @brief Field otherHandSnowball, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherHandSnowball, put=__cordl_internal_set_otherHandSnowball)) ::UnityW<::GlobalNamespace::GrowingSnowballThrowable>  otherHandSnowball;

/// @brief Field s_KnockSources, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_KnockSources, put=setStaticF_s_KnockSources)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballKnockbackEnabler>>*  s_KnockSources;

/// @brief Field sizeIncreaseSoundBankPlayer, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_sizeIncreaseSoundBankPlayer, put=__cordl_internal_set_sizeIncreaseSoundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  sizeIncreaseSoundBankPlayer;

/// @brief Field sizeLevel, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeLevel, put=__cordl_internal_set_sizeLevel)) int32_t  sizeLevel;

/// @brief Field snowballModelParentTransform, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_snowballModelParentTransform, put=__cordl_internal_set_snowballModelParentTransform)) ::UnityW<::UnityEngine::Transform>  snowballModelParentTransform;

/// @brief Field snowballModelTransform, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_snowballModelTransform, put=__cordl_internal_set_snowballModelTransform)) ::UnityW<::UnityEngine::Transform>  snowballModelTransform;

/// @brief Field snowballSizeLevels, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_snowballSizeLevels, put=__cordl_internal_set_snowballSizeLevels)) ::System::Collections::Generic::List_1<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>*  snowballSizeLevels;

/// @brief Field snowballThrowEvent, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_snowballThrowEvent, put=__cordl_internal_set_snowballThrowEvent)) ::GlobalNamespace::PhotonEvent*  snowballThrowEvent;

/// @brief Field twoHandedSnowballGrowing, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_twoHandedSnowballGrowing, put=setStaticF_twoHandedSnowballGrowing)) bool  twoHandedSnowballGrowing;

/// @brief Method Awake, addr 0x5dff330, size 0x23c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeSizeEventReceiver, addr 0x5e008ec, size 0x284, virtual false, abstract: false, final false
inline void ChangeSizeEventReceiver(int32_t  sender, int32_t  receiver, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method CreatePhotonEventsIfNull, addr 0x5dffd80, size 0x54c, virtual false, abstract: false, final false
inline void CreatePhotonEventsIfNull() ;

/// @brief Method DestroyPhotonEvents, addr 0x5e002d0, size 0x1c4, virtual false, abstract: false, final false
inline void DestroyPhotonEvents() ;

/// @brief Method GetValidSizeLevel, addr 0x5e00888, size 0x64, virtual false, abstract: false, final false
inline int32_t GetValidSizeLevel(int32_t  inputSizeLevel) ;

/// @brief Method IncreaseSize, addr 0x5e00710, size 0xc, virtual false, abstract: false, final false
inline void IncreaseSize(int32_t  increase) ;

/// @brief Method LateUpdateLocal, addr 0x5e00eac, size 0x434, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LaunchSnowballLocal, addr 0x5e01cf8, size 0x30, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> LaunchSnowballLocal(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, float_t  scale) ;

/// @brief Method LaunchSnowballLocal, addr 0x5e01d28, size 0x1f4, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> LaunchSnowballLocal(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, float_t  scale, bool  randomizeColour, ::UnityEngine::Color  colour) ;

/// @brief Method LaunchSnowballRemote, addr 0x5e02230, size 0x44, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> LaunchSnowballRemote(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, float_t  scale, int32_t  index, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method LaunchSnowballRemote, addr 0x5e02274, size 0x1d4, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> LaunchSnowballRemote(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, float_t  scale, int32_t  index, bool  randomizeColour, ::UnityEngine::Color  colour, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

static inline ::GlobalNamespace::GrowingSnowballThrowable* New_ctor() ;

/// @brief Method NotifyDisableKnockbackIntent, addr 0x5dff148, size 0x10c, virtual false, abstract: false, final false
static inline void NotifyDisableKnockbackIntent(::GlobalNamespace::SnowballKnockbackEnabler*  source) ;

/// @brief Method NotifyEnableKnockbackIntent, addr 0x5dfefa8, size 0x1a0, virtual false, abstract: false, final false
static inline void NotifyEnableKnockbackIntent(::GlobalNamespace::SnowballKnockbackEnabler*  source) ;

/// @brief Method OnDestroy, addr 0x5e002cc, size 0x4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x5dff888, size 0x12c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x5e02448, size 0x344, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnSnowballRelease, addr 0x5e01834, size 0x34, virtual true, abstract: false, final false
inline void OnSnowballRelease() ;

/// @brief Method PerformSnowballThrowAuthority, addr 0x5e01868, size 0x490, virtual true, abstract: false, final false
inline void PerformSnowballThrowAuthority() ;

/// @brief Method SetSizeLevelAuthority, addr 0x5e0071c, size 0x16c, virtual false, abstract: false, final false
inline void SetSizeLevelAuthority(int32_t  sizeLevel) ;

/// @brief Method SetSizeLevelLocal, addr 0x5dffc8c, size 0xf4, virtual false, abstract: false, final false
inline void SetSizeLevelLocal(int32_t  sizeLevel) ;

/// @brief Method SnowballThrowEventReceiver, addr 0x5e00b70, size 0x33c, virtual false, abstract: false, final false
inline void SnowballThrowEventReceiver(int32_t  sender, int32_t  receiver, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SpawnGrowingSnowball, addr 0x5e01f1c, size 0x314, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> SpawnGrowingSnowball(::by_ref<::UnityEngine::Vector3>  velocity, float_t  scale) ;

/// @brief Method StartedMultiplayerSession, addr 0x5e00630, size 0xe0, virtual false, abstract: false, final false
inline void StartedMultiplayerSession() ;

/// @brief Method VRRigActivated, addr 0x5e00494, size 0x114, virtual false, abstract: false, final false
inline void VRRigActivated(::GlobalNamespace::RigContainer*  rigContainer) ;

/// @brief Method VRRigDeactivated, addr 0x5e005a8, size 0x88, virtual false, abstract: false, final false
inline void VRRigDeactivated(::GlobalNamespace::RigContainer*  rigContainer) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw>* const& __cordl_internal_get_aoeRangeDebugDrawQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw>*& __cordl_internal_get_aoeRangeDebugDrawQueue() ;

constexpr ::GlobalNamespace::PhotonEvent* const& __cordl_internal_get_changeSizeEvent() const;

constexpr ::GlobalNamespace::PhotonEvent*& __cordl_internal_get_changeSizeEvent() ;

constexpr float_t const& __cordl_internal_get_combineBasedOnSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_combineBasedOnSpeedThreshold() ;

constexpr float_t const& __cordl_internal_get_debugDrawAOERangeTime() const;

constexpr float_t& __cordl_internal_get_debugDrawAOERangeTime() ;

constexpr float_t const& __cordl_internal_get_maintainSizeLevelUntilLocalTime() const;

constexpr float_t& __cordl_internal_get_maintainSizeLevelUntilLocalTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_modelOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_modelOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_modelParentOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_modelParentOffset() ;

constexpr float_t const& __cordl_internal_get_modelRadius() const;

constexpr float_t& __cordl_internal_get_modelRadius() ;

constexpr ::UnityW<::GlobalNamespace::GrowingSnowballThrowable> const& __cordl_internal_get_otherHandSnowball() const;

constexpr ::UnityW<::GlobalNamespace::GrowingSnowballThrowable>& __cordl_internal_get_otherHandSnowball() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_sizeIncreaseSoundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_sizeIncreaseSoundBankPlayer() ;

constexpr int32_t const& __cordl_internal_get_sizeLevel() const;

constexpr int32_t& __cordl_internal_get_sizeLevel() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_snowballModelParentTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_snowballModelParentTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_snowballModelTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_snowballModelTransform() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>* const& __cordl_internal_get_snowballSizeLevels() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>*& __cordl_internal_get_snowballSizeLevels() ;

constexpr ::GlobalNamespace::PhotonEvent* const& __cordl_internal_get_snowballThrowEvent() const;

constexpr ::GlobalNamespace::PhotonEvent*& __cordl_internal_get_snowballThrowEvent() ;

constexpr void __cordl_internal_set_aoeRangeDebugDrawQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw>*  value) ;

constexpr void __cordl_internal_set_changeSizeEvent(::GlobalNamespace::PhotonEvent*  value) ;

constexpr void __cordl_internal_set_combineBasedOnSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_debugDrawAOERangeTime(float_t  value) ;

constexpr void __cordl_internal_set_maintainSizeLevelUntilLocalTime(float_t  value) ;

constexpr void __cordl_internal_set_modelOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_modelParentOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_modelRadius(float_t  value) ;

constexpr void __cordl_internal_set_otherHandSnowball(::UnityW<::GlobalNamespace::GrowingSnowballThrowable>  value) ;

constexpr void __cordl_internal_set_sizeIncreaseSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_sizeLevel(int32_t  value) ;

constexpr void __cordl_internal_set_snowballModelParentTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_snowballModelTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_snowballSizeLevels(::System::Collections::Generic::List_1<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>*  value) ;

constexpr void __cordl_internal_set_snowballThrowEvent(::GlobalNamespace::PhotonEvent*  value) ;

/// @brief Method .ctor, addr 0x5e02b64, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_ForceAOEEnabled() ;

static inline bool getStaticF_debugDrawAOERange() ;

static inline bool getStaticF_k_useAOE() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballKnockbackEnabler>>* getStaticF_s_KnockSources() ;

static inline bool getStaticF_twoHandedSnowballGrowing() ;

/// @brief Method get_CurrentSnowballRadius, addr 0x5dff254, size 0xdc, virtual false, abstract: false, final false
inline float_t get_CurrentSnowballRadius() ;

/// @brief Method get_IsAOEEnabled, addr 0x5dfef24, size 0x84, virtual false, abstract: false, final false
static inline bool get_IsAOEEnabled() ;

/// @brief Method get_MaxSizeLevel, addr 0x5dfeed4, size 0x50, virtual false, abstract: false, final false
inline int32_t get_MaxSizeLevel() ;

/// @brief Method get_SizeLevel, addr 0x5dfeecc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SizeLevel() ;

static inline void setStaticF_ForceAOEEnabled(bool  value) ;

static inline void setStaticF_debugDrawAOERange(bool  value) ;

static inline void setStaticF_k_useAOE(bool  value) ;

static inline void setStaticF_s_KnockSources(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballKnockbackEnabler>>*  value) ;

static inline void setStaticF_twoHandedSnowballGrowing(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrowingSnowballThrowable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrowingSnowballThrowable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrowingSnowballThrowable(GrowingSnowballThrowable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrowingSnowballThrowable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrowingSnowballThrowable(GrowingSnowballThrowable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{518};

/// @brief Field snowballModelParentTransform, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___snowballModelParentTransform;

/// @brief Field snowballModelTransform, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___snowballModelTransform;

/// @brief Field modelParentOffset, offset: 0xf8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___modelParentOffset;

/// @brief Field modelOffset, offset: 0x104, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___modelOffset;

/// @brief Field modelRadius, offset: 0x110, size: 0x4, def value: None
 float_t  ___modelRadius;

/// [Tooltip("Snowballs will combine into the larger snowball unless they are moving faster than this threshold.Then the faster moving snowball will go in to the more stationary hand")]
/// @brief Field combineBasedOnSpeedThreshold, offset: 0x114, size: 0x4, def value: None
 float_t  ___combineBasedOnSpeedThreshold;

/// @brief Field sizeIncreaseSoundBankPlayer, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___sizeIncreaseSoundBankPlayer;

/// @brief Field snowballSizeLevels, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>*  ___snowballSizeLevels;

/// @brief Field sizeLevel, offset: 0x128, size: 0x4, def value: None
 int32_t  ___sizeLevel;

/// @brief Field maintainSizeLevelUntilLocalTime, offset: 0x12c, size: 0x4, def value: None
 float_t  ___maintainSizeLevelUntilLocalTime;

/// @brief Field changeSizeEvent, offset: 0x130, size: 0x8, def value: None
 ::GlobalNamespace::PhotonEvent*  ___changeSizeEvent;

/// @brief Field snowballThrowEvent, offset: 0x138, size: 0x8, def value: None
 ::GlobalNamespace::PhotonEvent*  ___snowballThrowEvent;

/// @brief Field aoeRangeDebugDrawQueue, offset: 0x140, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw>*  ___aoeRangeDebugDrawQueue;

/// @brief Field otherHandSnowball, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GrowingSnowballThrowable>  ___otherHandSnowball;

/// @brief Field debugDrawAOERangeTime, offset: 0x150, size: 0x4, def value: None
 float_t  ___debugDrawAOERangeTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___snowballModelParentTransform) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___snowballModelTransform) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___modelParentOffset) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___modelOffset) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___modelRadius) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___combineBasedOnSpeedThreshold) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___sizeIncreaseSoundBankPlayer) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___snowballSizeLevels) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___sizeLevel) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___maintainSizeLevelUntilLocalTime) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___changeSizeEvent) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___snowballThrowEvent) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___aoeRangeDebugDrawQueue) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___otherHandSnowball) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable, ___debugDrawAOERangeTime) == 0x150, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrowingSnowballThrowable) == 0x158, "Size mismatch!");

} // namespace end def GlobalNamespace
