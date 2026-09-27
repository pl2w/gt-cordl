#pragma once
// IWYU pragma private; include "GlobalNamespace/LckWallCameraSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LckWallCameraSpawner_WallSpawnerState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckWallCameraSpawner)
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GlobalNamespace {
class LckBodyCameraSpawner;
}
namespace GlobalNamespace {
class LckDirectGrabbable;
}
namespace GlobalNamespace {
struct LckWallCameraSpawner_WallSpawnerState;
}
namespace GlobalNamespace {
class LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39;
}
namespace Liv::Lck::Cosmetics {
class LckGameObjectSwapCosmetic;
}
namespace Liv::Lck::GorillaTag {
class GtDummyTablet;
}
namespace Liv::Lck::GorillaTag {
struct GtTagType;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LckWallCameraSpawner;
}
namespace GlobalNamespace {
class LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckWallCameraSpawner*);
MARK_REF_T(::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckWallCameraSpawner*, "", "LckWallCameraSpawner");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*, "", "LckWallCameraSpawner/<DestroyPrewarmCameraDelayed>d__39");
// Dependencies LckWallCameraSpawner::WallSpawnerState, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckWallCameraSpawner
class CORDL_TYPE LckWallCameraSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WallSpawnerState = ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState;

using _DestroyPrewarmCameraDelayed_d__39 = ::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39;

/// @brief Field _activateDistance, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__activateDistance, put=__cordl_internal_set__activateDistance)) float_t  _activateDistance;

/// @brief Field _bodySpawner, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodySpawner, put=setStaticF__bodySpawner)) ::UnityW<::GlobalNamespace::LckBodyCameraSpawner>  _bodySpawner;

/// @brief Field _cameraHandleGrabbable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraHandleGrabbable, put=__cordl_internal_set__cameraHandleGrabbable)) ::UnityW<::GlobalNamespace::LckDirectGrabbable>  _cameraHandleGrabbable;

/// @brief Field _cameraModelOriginTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraModelOriginTransform, put=__cordl_internal_set__cameraModelOriginTransform)) ::UnityW<::UnityEngine::Transform>  _cameraModelOriginTransform;

/// @brief Field _cameraModelTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraModelTransform, put=__cordl_internal_set__cameraModelTransform)) ::UnityW<::UnityEngine::Transform>  _cameraModelTransform;

/// @brief Field _cameraStrapPoints, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraStrapPoints, put=__cordl_internal_set__cameraStrapPoints)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _cameraStrapPoints;

/// @brief Field _cameraStrapPositions, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraStrapPositions, put=__cordl_internal_set__cameraStrapPositions)) ::ArrayW<::UnityEngine::Vector3>  _cameraStrapPositions;

/// @brief Field _cameraStrapRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraStrapRenderer, put=__cordl_internal_set__cameraStrapRenderer)) ::UnityW<::UnityEngine::LineRenderer>  _cameraStrapRenderer;

/// @brief Field _dummyTablet, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__dummyTablet, put=__cordl_internal_set__dummyTablet)) ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>  _dummyTablet;

/// @brief Field _lckBodySpawnerPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckBodySpawnerPrefab, put=__cordl_internal_set__lckBodySpawnerPrefab)) ::UnityW<::UnityEngine::GameObject>  _lckBodySpawnerPrefab;

/// @brief Field _normalColor, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _prewarmCamera, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__prewarmCamera, put=setStaticF__prewarmCamera)) ::UnityW<::UnityEngine::Camera>  _prewarmCamera;

/// @brief Field _spawnRotationOffsetAndroid, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__spawnRotationOffsetAndroid, put=__cordl_internal_set__spawnRotationOffsetAndroid)) float_t  _spawnRotationOffsetAndroid;

/// @brief Field _spawnRotationOffsetWindows, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__spawnRotationOffsetWindows, put=__cordl_internal_set__spawnRotationOffsetWindows)) float_t  _spawnRotationOffsetWindows;

/// @brief Field _swapEmobi, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__swapEmobi, put=__cordl_internal_set__swapEmobi)) ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  _swapEmobi;

/// @brief Field _swapTablet, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__swapTablet, put=__cordl_internal_set__swapTablet)) ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  _swapTablet;

/// @brief Field _wallSpawnerState, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__wallSpawnerState, put=__cordl_internal_set__wallSpawnerState)) ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState  _wallSpawnerState;

 __declspec(property(get=get_cameraVisible, put=set_cameraVisible)) bool  cameraVisible;

 __declspec(property(get=get_wallSpawnerState, put=set_wallSpawnerState)) ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState  wallSpawnerState;

/// @brief Method AddGTag, addr 0x56cd428, size 0xd0, virtual false, abstract: false, final false
static inline void AddGTag(::UnityEngine::GameObject*  go, ::Liv::Lck::GorillaTag::GtTagType  gtTagType) ;

/// @brief Method Awake, addr 0x56cd798, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreatePrewarmCamera, addr 0x56cdadc, size 0x38c, virtual false, abstract: false, final false
inline void CreatePrewarmCamera() ;

/// @brief Method DestroyPrewarmCamera, addr 0x56ce8a0, size 0x128, virtual false, abstract: false, final false
inline void DestroyPrewarmCamera() ;

/// [IteratorStateMachine(typeof(LckWallCameraSpawner::<DestroyPrewarmCameraDelayed>d__39))]
/// @brief Method DestroyPrewarmCameraDelayed, addr 0x56ce80c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DestroyPrewarmCameraDelayed() ;

/// @brief Method GetOrCreateBodyCameraSpawner, addr 0x56cd014, size 0x414, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::LckBodyCameraSpawner> GetOrCreateBodyCameraSpawner() ;

/// @brief Method InitCameraStrap, addr 0x56cd79c, size 0x80, virtual false, abstract: false, final false
inline void InitCameraStrap() ;

static inline ::GlobalNamespace::LckWallCameraSpawner* New_ctor() ;

/// @brief Method OnDisable, addr 0x56ce520, size 0x2b0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56cd81c, size 0x2bc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrabbed, addr 0x56ce7f8, size 0xc, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnReleased, addr 0x56ce804, size 0x8, virtual false, abstract: false, final false
inline void OnReleased() ;

/// @brief Method ResetCameraModel, addr 0x56cd548, size 0xb0, virtual false, abstract: false, final false
inline void ResetCameraModel() ;

/// @brief Method ShouldSpawnCamera, addr 0x56ce1dc, size 0xe0, virtual false, abstract: false, final false
inline bool ShouldSpawnCamera(::UnityEngine::Transform*  gorillaGrabberTransform) ;

/// @brief Method SpawnCamera, addr 0x56ce2bc, size 0x264, virtual false, abstract: false, final false
inline void SpawnCamera(::GlobalNamespace::GorillaGrabber*  lastGorillaGrabber) ;

/// @brief Method Start, addr 0x56cdad8, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x56cde68, size 0x374, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCameraStrap, addr 0x56cd5f8, size 0x144, virtual false, abstract: false, final false
inline void UpdateCameraStrap() ;

constexpr float_t const& __cordl_internal_get__activateDistance() const;

constexpr float_t& __cordl_internal_get__activateDistance() ;

constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable> const& __cordl_internal_get__cameraHandleGrabbable() const;

constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable>& __cordl_internal_get__cameraHandleGrabbable() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraModelOriginTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraModelOriginTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraModelTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraModelTransform() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__cameraStrapPoints() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__cameraStrapPoints() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__cameraStrapPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__cameraStrapPositions() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__cameraStrapRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__cameraStrapRenderer() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet> const& __cordl_internal_get__dummyTablet() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>& __cordl_internal_get__dummyTablet() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__lckBodySpawnerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__lckBodySpawnerPrefab() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr float_t const& __cordl_internal_get__spawnRotationOffsetAndroid() const;

constexpr float_t& __cordl_internal_get__spawnRotationOffsetAndroid() ;

constexpr float_t const& __cordl_internal_get__spawnRotationOffsetWindows() const;

constexpr float_t& __cordl_internal_get__spawnRotationOffsetWindows() ;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic> const& __cordl_internal_get__swapEmobi() const;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>& __cordl_internal_get__swapEmobi() ;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic> const& __cordl_internal_get__swapTablet() const;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>& __cordl_internal_get__swapTablet() ;

constexpr ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState const& __cordl_internal_get__wallSpawnerState() const;

constexpr ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState& __cordl_internal_get__wallSpawnerState() ;

constexpr void __cordl_internal_set__activateDistance(float_t  value) ;

constexpr void __cordl_internal_set__cameraHandleGrabbable(::UnityW<::GlobalNamespace::LckDirectGrabbable>  value) ;

constexpr void __cordl_internal_set__cameraModelOriginTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__cameraModelTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__cameraStrapPoints(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__cameraStrapPositions(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__cameraStrapRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set__dummyTablet(::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>  value) ;

constexpr void __cordl_internal_set__lckBodySpawnerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__spawnRotationOffsetAndroid(float_t  value) ;

constexpr void __cordl_internal_set__spawnRotationOffsetWindows(float_t  value) ;

constexpr void __cordl_internal_set__swapEmobi(::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  value) ;

constexpr void __cordl_internal_set__swapTablet(::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  value) ;

constexpr void __cordl_internal_set__wallSpawnerState(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState  value) ;

/// @brief Method .ctor, addr 0x56ce9c8, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::LckBodyCameraSpawner> getStaticF__bodySpawner() ;

static inline ::UnityW<::UnityEngine::Camera> getStaticF__prewarmCamera() ;

/// @brief Method get_cameraVisible, addr 0x56ce7d0, size 0x28, virtual false, abstract: false, final false
inline bool get_cameraVisible() ;

/// @brief Method get_wallSpawnerState, addr 0x56cd4f8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState get_wallSpawnerState() ;

static inline void setStaticF__bodySpawner(::UnityW<::GlobalNamespace::LckBodyCameraSpawner>  value) ;

static inline void setStaticF__prewarmCamera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method set_cameraVisible, addr 0x56cd73c, size 0x5c, virtual false, abstract: false, final false
inline void set_cameraVisible(bool  value) ;

/// @brief Method set_wallSpawnerState, addr 0x56cd500, size 0x48, virtual false, abstract: false, final false
inline void set_wallSpawnerState(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckWallCameraSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckWallCameraSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckWallCameraSpawner(LckWallCameraSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckWallCameraSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckWallCameraSpawner(LckWallCameraSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1045};

/// [SerializeField]
/// @brief Field _lckBodySpawnerPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____lckBodySpawnerPrefab;

/// [SerializeField]
/// @brief Field _cameraHandleGrabbable, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckDirectGrabbable>  ____cameraHandleGrabbable;

/// [SerializeField]
/// @brief Field _cameraModelOriginTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cameraModelOriginTransform;

/// [SerializeField]
/// @brief Field _cameraModelTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cameraModelTransform;

/// [SerializeField]
/// @brief Field _cameraStrapRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____cameraStrapRenderer;

/// [SerializeField]
/// @brief Field _activateDistance, offset: 0x48, size: 0x4, def value: None
 float_t  ____activateDistance;

/// [SerializeField]
/// @brief Field _cameraStrapPoints, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____cameraStrapPoints;

/// @brief Field _cameraStrapPositions, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____cameraStrapPositions;

/// @brief Field _spawnRotationOffsetAndroid, offset: 0x60, size: 0x4, def value: None
 float_t  ____spawnRotationOffsetAndroid;

/// @brief Field _spawnRotationOffsetWindows, offset: 0x64, size: 0x4, def value: None
 float_t  ____spawnRotationOffsetWindows;

/// [SerializeField]
/// @brief Field _normalColor, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// [Header("Cosmetics References")]
/// [SerializeField]
/// @brief Field _dummyTablet, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>  ____dummyTablet;

/// [SerializeField]
/// @brief Field _swapTablet, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  ____swapTablet;

/// [SerializeField]
/// @brief Field _swapEmobi, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  ____swapEmobi;

/// @brief Field _wallSpawnerState, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState  ____wallSpawnerState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____lckBodySpawnerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____cameraHandleGrabbable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____cameraModelOriginTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____cameraModelTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____cameraStrapRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____activateDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____cameraStrapPoints) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____cameraStrapPositions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____spawnRotationOffsetAndroid) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____spawnRotationOffsetWindows) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____normalColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____dummyTablet) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____swapTablet) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____swapEmobi) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner, ____wallSpawnerState) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckWallCameraSpawner) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckWallCameraSpawner/<DestroyPrewarmCameraDelayed>d__39
class CORDL_TYPE LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LckWallCameraSpawner>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x56ce9f4, size 0xac, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x56ceaa0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x56ceaa8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x56ceae0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x56ce9f0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::LckWallCameraSpawner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::LckWallCameraSpawner>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckWallCameraSpawner>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x56ce878, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39(LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39(LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1044};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckWallCameraSpawner>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
