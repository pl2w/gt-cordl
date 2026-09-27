#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__Interactable_2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportInteractable)
namespace Oculus::Interaction::Locomotion {
struct TeleportHit;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor;
}
namespace Oculus::Interaction::Surfaces {
class IBounds;
}
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class TeleportInteractable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::TeleportInteractable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TeleportInteractable*, "Oculus.Interaction.Locomotion", "TeleportInteractable");
// Dependencies Oculus.Interaction.Interactable`2<TInteractor, TInteractable>
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TeleportInteractable
class CORDL_TYPE TeleportInteractable : public ::Oculus::Interaction::Interactable_2<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>> {
public:
// Declarations
 __declspec(property(get=get_AllowTeleport, put=set_AllowTeleport)) bool  AllowTeleport;

 __declspec(property(get=get_EqualDistanceToBlockerOverride, put=set_EqualDistanceToBlockerOverride)) float_t  EqualDistanceToBlockerOverride;

 __declspec(property(get=get_EyeLevel, put=set_EyeLevel)) bool  EyeLevel;

 __declspec(property(get=get_FaceTargetDirection, put=set_FaceTargetDirection)) bool  FaceTargetDirection;

 __declspec(property(get=get_Surface, put=set_Surface)) ::Oculus::Interaction::Surfaces::ISurface*  Surface;

 __declspec(property(get=get_SurfaceBounds, put=set_SurfaceBounds)) ::Oculus::Interaction::Surfaces::IBounds*  SurfaceBounds;

 __declspec(property(get=get_TieBreakerScore, put=set_TieBreakerScore)) int32_t  TieBreakerScore;

/// @brief Field <SurfaceBounds>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SurfaceBounds_k__BackingField, put=__cordl_internal_set__SurfaceBounds_k__BackingField)) ::Oculus::Interaction::Surfaces::IBounds*  _SurfaceBounds_k__BackingField;

/// @brief Field <Surface>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Surface_k__BackingField, put=__cordl_internal_set__Surface_k__BackingField)) ::Oculus::Interaction::Surfaces::ISurface*  _Surface_k__BackingField;

/// @brief Field _allowTeleport, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowTeleport, put=__cordl_internal_set__allowTeleport)) bool  _allowTeleport;

/// @brief Field _equalDistanceToBlockerOverride, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__equalDistanceToBlockerOverride, put=__cordl_internal_set__equalDistanceToBlockerOverride)) float_t  _equalDistanceToBlockerOverride;

/// @brief Field _eyeLevel, offset 0xe1, size 0x1 
 __declspec(property(get=__cordl_internal_get__eyeLevel, put=__cordl_internal_set__eyeLevel)) bool  _eyeLevel;

/// @brief Field _faceTargetDirection, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__faceTargetDirection, put=__cordl_internal_set__faceTargetDirection)) bool  _faceTargetDirection;

/// @brief Field _surface, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__surface, put=__cordl_internal_set__surface)) ::UnityW<::UnityEngine::Object>  _surface;

/// @brief Field _targetPoint, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetPoint, put=__cordl_internal_set__targetPoint)) ::UnityW<::UnityEngine::Transform>  _targetPoint;

/// @brief Field _tieBreakerScore, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__tieBreakerScore, put=__cordl_internal_set__tieBreakerScore)) int32_t  _tieBreakerScore;

/// @brief Method Awake, addr 0xa4cd7b8, size 0xb0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DetectHit, addr 0xa4cd038, size 0x298, virtual false, abstract: false, final false
inline bool DetectHit(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>  hit) ;

/// @brief Method InjectAllTeleportInteractable, addr 0xa4cdca4, size 0x4, virtual false, abstract: false, final false
inline void InjectAllTeleportInteractable(::Oculus::Interaction::Surfaces::ISurface*  surface) ;

/// @brief Method InjectOptionalTargetPoint, addr 0xa4cdda8, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTargetPoint(::UnityEngine::Transform*  targetPoint) ;

/// @brief Method InjectSurface, addr 0xa4cdca8, size 0x100, virtual false, abstract: false, final false
inline void InjectSurface(::Oculus::Interaction::Surfaces::ISurface*  surface) ;

/// @brief Method IsInRange, addr 0xa4cd900, size 0x1e8, virtual false, abstract: false, final false
inline bool IsInRange(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  origin, float_t  maxSqrDistance) ;

static inline ::Oculus::Interaction::Locomotion::TeleportInteractable* New_ctor() ;

/// @brief Method Start, addr 0xa4cd868, size 0x98, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TargetPose, addr 0xa4cdbac, size 0xf8, virtual false, abstract: false, final false
inline ::UnityEngine::Pose TargetPose(::UnityEngine::Pose  hitPose) ;

/// [CompilerGenerated]
/// @brief Method <IsInRange>g__CheckSquaredDistances|32_0, addr 0xa4cdae8, size 0x3c, virtual false, abstract: false, final false
static inline bool _IsInRange_g__CheckSquaredDistances_32_0(float_t  x, float_t  y, float_t  threshold) ;

/// [CompilerGenerated]
/// @brief Method <IsInRange>g__SqrDistanceToSegment|32_1, addr 0xa4cdb24, size 0x88, virtual false, abstract: false, final false
static inline float_t _IsInRange_g__SqrDistanceToSegment_32_1(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  dir, float_t  sqrLength) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__31_0, addr 0xa4cde24, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__31_0() ;

constexpr ::Oculus::Interaction::Surfaces::IBounds* const& __cordl_internal_get__SurfaceBounds_k__BackingField() const;

constexpr ::Oculus::Interaction::Surfaces::IBounds*& __cordl_internal_get__SurfaceBounds_k__BackingField() ;

constexpr ::Oculus::Interaction::Surfaces::ISurface* const& __cordl_internal_get__Surface_k__BackingField() const;

constexpr ::Oculus::Interaction::Surfaces::ISurface*& __cordl_internal_get__Surface_k__BackingField() ;

constexpr bool const& __cordl_internal_get__allowTeleport() const;

constexpr bool& __cordl_internal_get__allowTeleport() ;

constexpr float_t const& __cordl_internal_get__equalDistanceToBlockerOverride() const;

constexpr float_t& __cordl_internal_get__equalDistanceToBlockerOverride() ;

constexpr bool const& __cordl_internal_get__eyeLevel() const;

constexpr bool& __cordl_internal_get__eyeLevel() ;

constexpr bool const& __cordl_internal_get__faceTargetDirection() const;

constexpr bool& __cordl_internal_get__faceTargetDirection() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__surface() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__surface() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetPoint() ;

constexpr int32_t const& __cordl_internal_get__tieBreakerScore() const;

constexpr int32_t& __cordl_internal_get__tieBreakerScore() ;

constexpr void __cordl_internal_set__SurfaceBounds_k__BackingField(::Oculus::Interaction::Surfaces::IBounds*  value) ;

constexpr void __cordl_internal_set__Surface_k__BackingField(::Oculus::Interaction::Surfaces::ISurface*  value) ;

constexpr void __cordl_internal_set__allowTeleport(bool  value) ;

constexpr void __cordl_internal_set__equalDistanceToBlockerOverride(float_t  value) ;

constexpr void __cordl_internal_set__eyeLevel(bool  value) ;

constexpr void __cordl_internal_set__faceTargetDirection(bool  value) ;

constexpr void __cordl_internal_set__surface(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__targetPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__tieBreakerScore(int32_t  value) ;

/// @brief Method .ctor, addr 0xa4cddb0, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AllowTeleport, addr 0xa4cd748, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowTeleport() ;

/// @brief Method get_EqualDistanceToBlockerOverride, addr 0xa4cd758, size 0x8, virtual false, abstract: false, final false
inline float_t get_EqualDistanceToBlockerOverride() ;

/// @brief Method get_EyeLevel, addr 0xa4cd7a8, size 0x8, virtual false, abstract: false, final false
inline bool get_EyeLevel() ;

/// @brief Method get_FaceTargetDirection, addr 0xa4cd798, size 0x8, virtual false, abstract: false, final false
inline bool get_FaceTargetDirection() ;

/// [CompilerGenerated]
/// @brief Method get_Surface, addr 0xa4cd778, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Surfaces::ISurface* get_Surface() ;

/// [CompilerGenerated]
/// @brief Method get_SurfaceBounds, addr 0xa4cd788, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Surfaces::IBounds* get_SurfaceBounds() ;

/// @brief Method get_TieBreakerScore, addr 0xa4cd768, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TieBreakerScore() ;

/// @brief Method set_AllowTeleport, addr 0xa4cd750, size 0x8, virtual false, abstract: false, final false
inline void set_AllowTeleport(bool  value) ;

/// @brief Method set_EqualDistanceToBlockerOverride, addr 0xa4cd760, size 0x8, virtual false, abstract: false, final false
inline void set_EqualDistanceToBlockerOverride(float_t  value) ;

/// @brief Method set_EyeLevel, addr 0xa4cd7b0, size 0x8, virtual false, abstract: false, final false
inline void set_EyeLevel(bool  value) ;

/// @brief Method set_FaceTargetDirection, addr 0xa4cd7a0, size 0x8, virtual false, abstract: false, final false
inline void set_FaceTargetDirection(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Surface, addr 0xa4cd780, size 0x8, virtual false, abstract: false, final false
inline void set_Surface(::Oculus::Interaction::Surfaces::ISurface*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SurfaceBounds, addr 0xa4cd790, size 0x8, virtual false, abstract: false, final false
inline void set_SurfaceBounds(::Oculus::Interaction::Surfaces::IBounds*  value) ;

/// @brief Method set_TieBreakerScore, addr 0xa4cd770, size 0x8, virtual false, abstract: false, final false
inline void set_TieBreakerScore(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportInteractable(TeleportInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportInteractable(TeleportInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16281};

/// [SerializeField]
/// [Tooltip("Indicates if the interactable is valid for teleport. Setting it to false can be convenient to block the arc.")]
/// @brief Field _allowTeleport, offset: 0xb0, size: 0x1, def value: None
 bool  ____allowTeleport;

/// [SerializeField]
/// [Optional]
/// [ConditionalHide("_allowTeleport", true)]
/// [Tooltip("An override for the Interactor EqualDistanceThreshold used when comparing the interactable against other interactables that does not allow teleport.")]
/// @brief Field _equalDistanceToBlockerOverride, offset: 0xb4, size: 0x4, def value: None
 float_t  ____equalDistanceToBlockerOverride;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Establishes the priority when several interactables are hit at the same time (EqualDistanceThreshold) by the arc.")]
/// @brief Field _tieBreakerScore, offset: 0xb8, size: 0x4, def value: None
 int32_t  ____tieBreakerScore;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Surfaces.ISurface), new[] {  })]
/// [Tooltip("Surface against which the interactor will check collision with the arc.")]
/// @brief Field _surface, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____surface;

/// [CompilerGenerated]
/// @brief Field <Surface>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::Oculus::Interaction::Surfaces::ISurface*  ____Surface_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SurfaceBounds>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::Oculus::Interaction::Surfaces::IBounds*  ____SurfaceBounds_k__BackingField;

/// [Header("Target", order = -1)]
/// [SerializeField]
/// [Optional]
/// [Tooltip("A specific point in space where the player should teleport to.")]
/// @brief Field _targetPoint, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____targetPoint;

/// [SerializeField]
/// [Optional]
/// [Tooltip("When true, the player will also face the direction specified by the target point.")]
/// @brief Field _faceTargetDirection, offset: 0xe0, size: 0x1, def value: None
 bool  ____faceTargetDirection;

/// [SerializeField]
/// [Optional]
/// [Tooltip("When true, instead of aligning the players feet to the TargetPoint it will align the head.")]
/// @brief Field _eyeLevel, offset: 0xe1, size: 0x1, def value: None
 bool  ____eyeLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractable, ____allowTeleport) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractable, ____equalDistanceToBlockerOverride) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractable, ____tieBreakerScore) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractable, ____surface) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractable, ____Surface_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractable, ____SurfaceBounds_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractable, ____targetPoint) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractable, ____faceTargetDirection) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractable, ____eyeLevel) == 0xe1, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::TeleportInteractable) == 0xe8, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
