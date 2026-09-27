#pragma once
// IWYU pragma private; include "Oculus/Interaction/Demo/WaterSpray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__SnapAxis_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterSpray)
namespace GlobalNamespace {
struct WaterSpray_NozzleMode;
}
namespace Oculus::Interaction::Demo {
class MeshBlit;
}
namespace Oculus::Interaction::Demo {
class WaterSpray_NonAlloc;
}
namespace Oculus::Interaction::Demo {
class WaterSpray__StampRoutine_d__35;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabUseDelegate;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace Oculus::Interaction::Demo {
class WaterSpray;
}
namespace Oculus::Interaction::Demo {
class WaterSpray_NonAlloc;
}
namespace Oculus::Interaction::Demo {
class WaterSpray__StampRoutine_d__35;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Demo::WaterSpray*);
MARK_REF_T(::Oculus::Interaction::Demo::WaterSpray_NonAlloc*);
MARK_REF_T(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Demo::WaterSpray*, "Oculus.Interaction.Demo", "WaterSpray");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Demo::WaterSpray_NonAlloc*, "Oculus.Interaction.Demo", "WaterSpray/NonAlloc");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35*, "Oculus.Interaction.Demo", "WaterSpray/<StampRoutine>d__35");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.SnapAxis
namespace Oculus::Interaction::Demo {
// Is value type: false
// CS Name: Oculus.Interaction.Demo.WaterSpray
class CORDL_TYPE WaterSpray : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using NozzleMode = ::GlobalNamespace::WaterSpray_NozzleMode;

using NonAlloc = ::Oculus::Interaction::Demo::WaterSpray_NonAlloc;

using _StampRoutine_d__35 = ::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35;

/// @brief Field STAMP_MATRIX_PROPERTY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_STAMP_MATRIX_PROPERTY, put=setStaticF_STAMP_MATRIX_PROPERTY)) int32_t  STAMP_MATRIX_PROPERTY;

/// @brief Field STAMP_MULTIPLIER_PROPERTY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_STAMP_MULTIPLIER_PROPERTY, put=setStaticF_STAMP_MULTIPLIER_PROPERTY)) int32_t  STAMP_MULTIPLIER_PROPERTY;

/// @brief Field SUBTRACT_PROPERTY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SUBTRACT_PROPERTY, put=setStaticF_SUBTRACT_PROPERTY)) int32_t  SUBTRACT_PROPERTY;

/// @brief Field WAIT_TIME, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WAIT_TIME, put=setStaticF_WAIT_TIME)) ::UnityEngine::WaitForSeconds*  WAIT_TIME;

/// @brief Field WET_BUMPMAP_PROPERTY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WET_BUMPMAP_PROPERTY, put=setStaticF_WET_BUMPMAP_PROPERTY)) int32_t  WET_BUMPMAP_PROPERTY;

/// @brief Field WET_MAP_PROPERTY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WET_MAP_PROPERTY, put=setStaticF_WET_MAP_PROPERTY)) int32_t  WET_MAP_PROPERTY;

/// @brief Field WhenSpray, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSpray, put=__cordl_internal_set_WhenSpray)) ::UnityEngine::Events::UnityEvent*  WhenSpray;

/// @brief Field WhenStream, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenStream, put=__cordl_internal_set_WhenStream)) ::UnityEngine::Events::UnityEvent*  WhenStream;

/// @brief Field _axis, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__axis, put=__cordl_internal_set__axis)) ::UnityEngine::SnapAxis  _axis;

/// @brief Field _dampedUseStrength, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__dampedUseStrength, put=__cordl_internal_set__dampedUseStrength)) float_t  _dampedUseStrength;

/// @brief Field _dryingSpeed, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__dryingSpeed, put=__cordl_internal_set__dryingSpeed)) float_t  _dryingSpeed;

/// @brief Field _fireThresold, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__fireThresold, put=__cordl_internal_set__fireThresold)) float_t  _fireThresold;

/// @brief Field _lastUseTime, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUseTime, put=__cordl_internal_set__lastUseTime)) float_t  _lastUseTime;

/// @brief Field _maxDistance, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistance, put=__cordl_internal_set__maxDistance)) float_t  _maxDistance;

/// @brief Field _nozzle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__nozzle, put=__cordl_internal_set__nozzle)) ::UnityW<::UnityEngine::Transform>  _nozzle;

/// @brief Field _raycastLayerMask, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__raycastLayerMask, put=__cordl_internal_set__raycastLayerMask)) ::UnityEngine::LayerMask  _raycastLayerMask;

/// @brief Field _releaseThresold, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__releaseThresold, put=__cordl_internal_set__releaseThresold)) float_t  _releaseThresold;

/// @brief Field _sprayHits, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__sprayHits, put=__cordl_internal_set__sprayHits)) int32_t  _sprayHits;

/// @brief Field _sprayRandomness, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__sprayRandomness, put=__cordl_internal_set__sprayRandomness)) float_t  _sprayRandomness;

/// @brief Field _spraySpreadAngle, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__spraySpreadAngle, put=__cordl_internal_set__spraySpreadAngle)) float_t  _spraySpreadAngle;

/// @brief Field _sprayStampMaterial, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__sprayStampMaterial, put=__cordl_internal_set__sprayStampMaterial)) ::UnityW<::UnityEngine::Material>  _sprayStampMaterial;

/// @brief Field _sprayStrength, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sprayStrength, put=__cordl_internal_set__sprayStrength)) float_t  _sprayStrength;

/// @brief Field _streamSpreadAngle, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__streamSpreadAngle, put=__cordl_internal_set__streamSpreadAngle)) float_t  _streamSpreadAngle;

/// @brief Field _strengthCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__strengthCurve, put=__cordl_internal_set__strengthCurve)) ::UnityEngine::AnimationCurve*  _strengthCurve;

/// @brief Field _trigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__trigger, put=__cordl_internal_set__trigger)) ::UnityW<::UnityEngine::Transform>  _trigger;

/// @brief Field _triggerRotationCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggerRotationCurve, put=__cordl_internal_set__triggerRotationCurve)) ::UnityEngine::AnimationCurve*  _triggerRotationCurve;

/// @brief Field _triggerSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__triggerSpeed, put=__cordl_internal_set__triggerSpeed)) float_t  _triggerSpeed;

/// @brief Field _wasFired, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasFired, put=__cordl_internal_set__wasFired)) bool  _wasFired;

/// @brief Field _waterBumpOverride, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterBumpOverride, put=__cordl_internal_set__waterBumpOverride)) ::UnityW<::UnityEngine::Texture>  _waterBumpOverride;

/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr operator  ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*() noexcept;

/// @brief Method BeginUse, addr 0xa431144, size 0x20, virtual true, abstract: false, final true
inline void BeginUse() ;

/// @brief Method ComputeUseStrength, addr 0xa431168, size 0xa8, virtual true, abstract: false, final true
inline float_t ComputeUseStrength(float_t  strength) ;

/// @brief Method CreateMeshBlit, addr 0xa430ae8, size 0x250, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::Demo::MeshBlit> CreateMeshBlit(::UnityEngine::MeshFilter*  meshFilter) ;

/// @brief Method CreateStampMatrix, addr 0xa43052c, size 0x220, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 CreateStampMatrix(::UnityEngine::Pose  pose, float_t  angle) ;

/// @brief Method EndUse, addr 0xa431164, size 0x4, virtual true, abstract: false, final true
inline void EndUse() ;

/// @brief Method GetNozzleMode, addr 0xa42fe94, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::WaterSpray_NozzleMode GetNozzleMode() ;

static inline ::Oculus::Interaction::Demo::WaterSpray* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa430e00, size 0x4c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RenderSplash, addr 0xa43087c, size 0x1dc, virtual false, abstract: false, final false
inline void RenderSplash(::UnityEngine::Transform*  rootObject) ;

/// @brief Method Spray, addr 0xa42feec, size 0x30, virtual false, abstract: false, final false
inline void Spray() ;

/// @brief Method SprayWater, addr 0xa42fe50, size 0x44, virtual false, abstract: false, final false
inline void SprayWater() ;

/// @brief Method Stamp, addr 0xa4301b4, size 0x378, virtual false, abstract: false, final false
inline void Stamp(::UnityEngine::Pose  pose, float_t  maxDistance, float_t  angle, float_t  strength) ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.Demo.WaterSpray::<StampRoutine>d__35))]
/// @brief Method StampRoutine, addr 0xa42ffb0, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StampRoutine(int32_t  stampCount, float_t  randomness, float_t  spread, float_t  strength) ;

/// @brief Method StartDrying, addr 0xa4300ec, size 0xc8, virtual false, abstract: false, final false
inline void StartDrying() ;

/// @brief Method StartStamping, addr 0xa430078, size 0x74, virtual false, abstract: false, final false
inline void StartStamping() ;

/// @brief Method Stream, addr 0xa42ff1c, size 0x2c, virtual false, abstract: false, final false
inline void Stream() ;

/// @brief Method UpdateTriggerProgress, addr 0xa431210, size 0x5c, virtual false, abstract: false, final false
inline void UpdateTriggerProgress(float_t  progress) ;

/// @brief Method UpdateTriggerRotation, addr 0xa42ff48, size 0x68, virtual false, abstract: false, final false
inline void UpdateTriggerRotation(float_t  progress) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenSpray() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenSpray() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenStream() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenStream() ;

constexpr ::UnityEngine::SnapAxis const& __cordl_internal_get__axis() const;

constexpr ::UnityEngine::SnapAxis& __cordl_internal_get__axis() ;

constexpr float_t const& __cordl_internal_get__dampedUseStrength() const;

constexpr float_t& __cordl_internal_get__dampedUseStrength() ;

constexpr float_t const& __cordl_internal_get__dryingSpeed() const;

constexpr float_t& __cordl_internal_get__dryingSpeed() ;

constexpr float_t const& __cordl_internal_get__fireThresold() const;

constexpr float_t& __cordl_internal_get__fireThresold() ;

constexpr float_t const& __cordl_internal_get__lastUseTime() const;

constexpr float_t& __cordl_internal_get__lastUseTime() ;

constexpr float_t const& __cordl_internal_get__maxDistance() const;

constexpr float_t& __cordl_internal_get__maxDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__nozzle() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__nozzle() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__raycastLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__raycastLayerMask() ;

constexpr float_t const& __cordl_internal_get__releaseThresold() const;

constexpr float_t& __cordl_internal_get__releaseThresold() ;

constexpr int32_t const& __cordl_internal_get__sprayHits() const;

constexpr int32_t& __cordl_internal_get__sprayHits() ;

constexpr float_t const& __cordl_internal_get__sprayRandomness() const;

constexpr float_t& __cordl_internal_get__sprayRandomness() ;

constexpr float_t const& __cordl_internal_get__spraySpreadAngle() const;

constexpr float_t& __cordl_internal_get__spraySpreadAngle() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__sprayStampMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__sprayStampMaterial() ;

constexpr float_t const& __cordl_internal_get__sprayStrength() const;

constexpr float_t& __cordl_internal_get__sprayStrength() ;

constexpr float_t const& __cordl_internal_get__streamSpreadAngle() const;

constexpr float_t& __cordl_internal_get__streamSpreadAngle() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__strengthCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__strengthCurve() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__trigger() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__trigger() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__triggerRotationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__triggerRotationCurve() ;

constexpr float_t const& __cordl_internal_get__triggerSpeed() const;

constexpr float_t& __cordl_internal_get__triggerSpeed() ;

constexpr bool const& __cordl_internal_get__wasFired() const;

constexpr bool& __cordl_internal_get__wasFired() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__waterBumpOverride() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__waterBumpOverride() ;

constexpr void __cordl_internal_set_WhenSpray(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_WhenStream(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__axis(::UnityEngine::SnapAxis  value) ;

constexpr void __cordl_internal_set__dampedUseStrength(float_t  value) ;

constexpr void __cordl_internal_set__dryingSpeed(float_t  value) ;

constexpr void __cordl_internal_set__fireThresold(float_t  value) ;

constexpr void __cordl_internal_set__lastUseTime(float_t  value) ;

constexpr void __cordl_internal_set__maxDistance(float_t  value) ;

constexpr void __cordl_internal_set__nozzle(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__raycastLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__releaseThresold(float_t  value) ;

constexpr void __cordl_internal_set__sprayHits(int32_t  value) ;

constexpr void __cordl_internal_set__sprayRandomness(float_t  value) ;

constexpr void __cordl_internal_set__spraySpreadAngle(float_t  value) ;

constexpr void __cordl_internal_set__sprayStampMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__sprayStrength(float_t  value) ;

constexpr void __cordl_internal_set__streamSpreadAngle(float_t  value) ;

constexpr void __cordl_internal_set__strengthCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__trigger(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__triggerRotationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__triggerSpeed(float_t  value) ;

constexpr void __cordl_internal_set__wasFired(bool  value) ;

constexpr void __cordl_internal_set__waterBumpOverride(::UnityW<::UnityEngine::Texture>  value) ;

/// @brief Method .ctor, addr 0xa43126c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_STAMP_MATRIX_PROPERTY() ;

static inline int32_t getStaticF_STAMP_MULTIPLIER_PROPERTY() ;

static inline int32_t getStaticF_SUBTRACT_PROPERTY() ;

static inline ::UnityEngine::WaitForSeconds* getStaticF_WAIT_TIME() ;

static inline int32_t getStaticF_WET_BUMPMAP_PROPERTY() ;

static inline int32_t getStaticF_WET_MAP_PROPERTY() ;

/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate* i___Oculus__Interaction__HandGrab__IHandGrabUseDelegate() noexcept;

static inline void setStaticF_STAMP_MATRIX_PROPERTY(int32_t  value) ;

static inline void setStaticF_STAMP_MULTIPLIER_PROPERTY(int32_t  value) ;

static inline void setStaticF_SUBTRACT_PROPERTY(int32_t  value) ;

static inline void setStaticF_WAIT_TIME(::UnityEngine::WaitForSeconds*  value) ;

static inline void setStaticF_WET_BUMPMAP_PROPERTY(int32_t  value) ;

static inline void setStaticF_WET_MAP_PROPERTY(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterSpray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterSpray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterSpray(WaterSpray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterSpray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterSpray(WaterSpray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28278};

/// [Header("Input")]
/// [SerializeField]
/// @brief Field _trigger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____trigger;

/// [SerializeField]
/// @brief Field _nozzle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____nozzle;

/// [SerializeField]
/// @brief Field _triggerRotationCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____triggerRotationCurve;

/// [SerializeField]
/// @brief Field _axis, offset: 0x38, size: 0x1, def value: None
 ::UnityEngine::SnapAxis  ____axis;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _releaseThresold, offset: 0x3c, size: 0x4, def value: None
 float_t  ____releaseThresold;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _fireThresold, offset: 0x40, size: 0x4, def value: None
 float_t  ____fireThresold;

/// [SerializeField]
/// @brief Field _triggerSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ____triggerSpeed;

/// [SerializeField]
/// @brief Field _strengthCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____strengthCurve;

/// [Header("Output")]
/// [SerializeField]
/// [Tooltip("Masks the Raycast used to find objects to make wet")]
/// @brief Field _raycastLayerMask, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____raycastLayerMask;

/// [SerializeField]
/// [Tooltip("The spread angle when spraying, larger values will make a larger area wet")]
/// @brief Field _spraySpreadAngle, offset: 0x54, size: 0x4, def value: None
 float_t  ____spraySpreadAngle;

/// [SerializeField]
/// [Tooltip("The spread angle when using stream, larger values will make a larger area wet")]
/// @brief Field _streamSpreadAngle, offset: 0x58, size: 0x4, def value: None
 float_t  ____streamSpreadAngle;

/// [SerializeField]
/// @brief Field _sprayStrength, offset: 0x5c, size: 0x4, def value: None
 float_t  ____sprayStrength;

/// [SerializeField]
/// @brief Field _sprayHits, offset: 0x60, size: 0x4, def value: None
 int32_t  ____sprayHits;

/// [SerializeField]
/// @brief Field _sprayRandomness, offset: 0x64, size: 0x4, def value: None
 float_t  ____sprayRandomness;

/// [SerializeField]
/// [Tooltip("The max distance of the spray, controls the raycast and shader")]
/// @brief Field _maxDistance, offset: 0x68, size: 0x4, def value: None
 float_t  ____maxDistance;

/// [SerializeField]
/// @brief Field _dryingSpeed, offset: 0x6c, size: 0x4, def value: None
 float_t  ____dryingSpeed;

/// [SerializeField]
/// [Tooltip("Material for applying a stamp, should using the MeshBlitStamp shader or similar")]
/// @brief Field _sprayStampMaterial, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____sprayStampMaterial;

/// [SerializeField]
/// [Tooltip("When not null, will be set as the \'_WetBumpMap\' property on wet renderers")]
/// @brief Field _waterBumpOverride, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____waterBumpOverride;

/// [SerializeField]
/// @brief Field WhenSpray, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenSpray;

/// [SerializeField]
/// @brief Field WhenStream, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenStream;

/// @brief Field _wasFired, offset: 0x90, size: 0x1, def value: None
 bool  ____wasFired;

/// @brief Field _dampedUseStrength, offset: 0x94, size: 0x4, def value: None
 float_t  ____dampedUseStrength;

/// @brief Field _lastUseTime, offset: 0x98, size: 0x4, def value: None
 float_t  ____lastUseTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____trigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____nozzle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____triggerRotationCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____axis) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____releaseThresold) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____fireThresold) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____triggerSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____strengthCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____raycastLayerMask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____spraySpreadAngle) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____streamSpreadAngle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____sprayStrength) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____sprayHits) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____sprayRandomness) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____maxDistance) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____dryingSpeed) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____sprayStampMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____waterBumpOverride) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ___WhenSpray) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ___WhenStream) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____wasFired) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____dampedUseStrength) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray, ____lastUseTime) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Demo::WaterSpray) == 0xa0, "Size mismatch!");

} // namespace end def Oculus::Interaction::Demo
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction::Demo {
// Is value type: false
// CS Name: Oculus.Interaction.Demo.WaterSpray/<StampRoutine>d__35
class CORDL_TYPE WaterSpray__StampRoutine_d__35 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Demo::WaterSpray>  __4__this;

/// @brief Field <i>5__3, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__3, put=__cordl_internal_set__i_5__3)) int32_t  _i_5__3;

/// @brief Field <originalPose>5__2, offset 0x38, size 0x1c 
 __declspec(property(get=__cordl_internal_get__originalPose_5__2, put=__cordl_internal_set__originalPose_5__2)) ::UnityEngine::Pose  _originalPose_5__2;

/// @brief Field randomness, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomness, put=__cordl_internal_set_randomness)) float_t  randomness;

/// @brief Field spread, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_spread, put=__cordl_internal_set_spread)) float_t  spread;

/// @brief Field stampCount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_stampCount, put=__cordl_internal_set_stampCount)) int32_t  stampCount;

/// @brief Field strength, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_strength, put=__cordl_internal_set_strength)) float_t  strength;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa43170c, size 0x25c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa431968, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa431970, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa4319a8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa431708, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::Demo::WaterSpray> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Demo::WaterSpray>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__3() const;

constexpr int32_t& __cordl_internal_get__i_5__3() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__originalPose_5__2() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__originalPose_5__2() ;

constexpr float_t const& __cordl_internal_get_randomness() const;

constexpr float_t& __cordl_internal_get_randomness() ;

constexpr float_t const& __cordl_internal_get_spread() const;

constexpr float_t& __cordl_internal_get_spread() ;

constexpr int32_t const& __cordl_internal_get_stampCount() const;

constexpr int32_t& __cordl_internal_get_stampCount() ;

constexpr float_t const& __cordl_internal_get_strength() const;

constexpr float_t& __cordl_internal_get_strength() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Demo::WaterSpray>  value) ;

constexpr void __cordl_internal_set__i_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__originalPose_5__2(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_randomness(float_t  value) ;

constexpr void __cordl_internal_set_spread(float_t  value) ;

constexpr void __cordl_internal_set_stampCount(int32_t  value) ;

constexpr void __cordl_internal_set_strength(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa430050, size 0x28, virtual false, abstract: false, final false
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
constexpr WaterSpray__StampRoutine_d__35() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterSpray__StampRoutine_d__35", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterSpray__StampRoutine_d__35(WaterSpray__StampRoutine_d__35 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterSpray__StampRoutine_d__35", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterSpray__StampRoutine_d__35(WaterSpray__StampRoutine_d__35 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28277};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Demo::WaterSpray>  _____4__this;

/// @brief Field randomness, offset: 0x28, size: 0x4, def value: None
 float_t  ___randomness;

/// @brief Field spread, offset: 0x2c, size: 0x4, def value: None
 float_t  ___spread;

/// @brief Field strength, offset: 0x30, size: 0x4, def value: None
 float_t  ___strength;

/// @brief Field stampCount, offset: 0x34, size: 0x4, def value: None
 int32_t  ___stampCount;

/// @brief Field <originalPose>5__2, offset: 0x38, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____originalPose_5__2;

/// @brief Field <i>5__3, offset: 0x54, size: 0x4, def value: None
 int32_t  ____i_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35, ___randomness) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35, ___spread) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35, ___strength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35, ___stampCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35, ____originalPose_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35, ____i_5__3) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Demo::WaterSpray__StampRoutine_d__35) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::Demo
// Dependencies System.Object, UnityEngine.Collider
namespace Oculus::Interaction::Demo {
// Is value type: false
// CS Name: Oculus.Interaction.Demo.WaterSpray/NonAlloc
class CORDL_TYPE WaterSpray_NonAlloc : public ::System::Object {
public:
// Declarations
/// @brief Field _blits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__blits, put=setStaticF__blits)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::Demo::MeshBlit>>*  _blits;

/// @brief Field _block, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__block, put=setStaticF__block)) ::UnityEngine::MaterialPropertyBlock*  _block;

/// @brief Field _meshFilters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__meshFilters, put=setStaticF__meshFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  _meshFilters;

/// @brief Field _overlapResults, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__overlapResults, put=setStaticF__overlapResults)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _overlapResults;

/// @brief Field _roots, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__roots, put=setStaticF__roots)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*  _roots;

/// @brief Method CleanUpDestroyedBlits, addr 0xa430e4c, size 0x2f8, virtual false, abstract: false, final false
static inline void CleanUpDestroyedBlits() ;

/// @brief Method GetMeshFiltersInChildren, addr 0xa430a58, size 0x90, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* GetMeshFiltersInChildren(::UnityEngine::Transform*  root) ;

/// @brief Method GetRoot, addr 0xa43148c, size 0x100, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> GetRoot(::UnityEngine::Collider*  hit) ;

/// @brief Method GetRootsFromOverlapResults, addr 0xa43074c, size 0x130, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>* GetRootsFromOverlapResults(int32_t  hitCount) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::Demo::MeshBlit>>* getStaticF__blits() ;

static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__block() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* getStaticF__meshFilters() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> getStaticF__overlapResults() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>* getStaticF__roots() ;

/// @brief Method get_PropertyBlock, addr 0xa430d38, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::MaterialPropertyBlock* get_PropertyBlock() ;

static inline void setStaticF__blits(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Oculus::Interaction::Demo::MeshBlit>>*  value) ;

static inline void setStaticF__block(::UnityEngine::MaterialPropertyBlock*  value) ;

static inline void setStaticF__meshFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value) ;

static inline void setStaticF__overlapResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

static inline void setStaticF__roots(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterSpray_NonAlloc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterSpray_NonAlloc", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterSpray_NonAlloc(WaterSpray_NonAlloc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterSpray_NonAlloc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterSpray_NonAlloc(WaterSpray_NonAlloc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28276};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Demo::WaterSpray_NonAlloc) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Demo
