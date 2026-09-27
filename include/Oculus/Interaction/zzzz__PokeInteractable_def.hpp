#pragma once
// IWYU pragma private; include "Oculus/Interaction/PokeInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointerInteractable_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PokeInteractable)
namespace Oculus::Interaction::Surfaces {
class ISurfacePatch;
}
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
namespace Oculus::Interaction {
class PokeInteractable_DragThresholdsConfig;
}
namespace Oculus::Interaction {
class PokeInteractable_MinThresholdsConfig;
}
namespace Oculus::Interaction {
class PokeInteractable_PositionPinningConfig;
}
namespace Oculus::Interaction {
class PokeInteractable_RecoilAssistConfig;
}
namespace Oculus::Interaction {
class PokeInteractor;
}
namespace Oculus::Interaction {
class ProgressCurve;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class PokeInteractable;
}
namespace Oculus::Interaction {
class PokeInteractable_DragThresholdsConfig;
}
namespace Oculus::Interaction {
class PokeInteractable_MinThresholdsConfig;
}
namespace Oculus::Interaction {
class PokeInteractable_PositionPinningConfig;
}
namespace Oculus::Interaction {
class PokeInteractable_RecoilAssistConfig;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PokeInteractable*);
MARK_REF_T(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*);
MARK_REF_T(::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*);
MARK_REF_T(::Oculus::Interaction::PokeInteractable_PositionPinningConfig*);
MARK_REF_T(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PokeInteractable*, "Oculus.Interaction", "PokeInteractable");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*, "Oculus.Interaction", "PokeInteractable/DragThresholdsConfig");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*, "Oculus.Interaction", "PokeInteractable/MinThresholdsConfig");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PokeInteractable_PositionPinningConfig*, "Oculus.Interaction", "PokeInteractable/PositionPinningConfig");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*, "Oculus.Interaction", "PokeInteractable/RecoilAssistConfig");
// Dependencies Oculus.Interaction.PointerInteractable`2<TInteractor, TInteractable>
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PokeInteractable
class CORDL_TYPE PokeInteractable : public ::Oculus::Interaction::PointerInteractable_2<::UnityW<::Oculus::Interaction::PokeInteractor>,::UnityW<::Oculus::Interaction::PokeInteractable>> {
public:
// Declarations
using DragThresholdsConfig = ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig;

using MinThresholdsConfig = ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig;

using PositionPinningConfig = ::Oculus::Interaction::PokeInteractable_PositionPinningConfig;

using RecoilAssistConfig = ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig;

 __declspec(property(get=get_CancelSelectNormal, put=set_CancelSelectNormal)) float_t  CancelSelectNormal;

 __declspec(property(get=get_CancelSelectTangent, put=set_CancelSelectTangent)) float_t  CancelSelectTangent;

 __declspec(property(get=get_CloseDistanceThreshold, put=set_CloseDistanceThreshold)) float_t  CloseDistanceThreshold;

 __declspec(property(get=get_DragThresholds, put=set_DragThresholds)) ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*  DragThresholds;

 __declspec(property(get=get_EnterHoverNormal, put=set_EnterHoverNormal)) float_t  EnterHoverNormal;

 __declspec(property(get=get_EnterHoverTangent, put=set_EnterHoverTangent)) float_t  EnterHoverTangent;

 __declspec(property(get=get_ExitHoverNormal, put=set_ExitHoverNormal)) float_t  ExitHoverNormal;

 __declspec(property(get=get_ExitHoverTangent, put=set_ExitHoverTangent)) float_t  ExitHoverTangent;

 __declspec(property(get=get_MinThresholds, put=set_MinThresholds)) ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*  MinThresholds;

 __declspec(property(get=get_PositionPinning, put=set_PositionPinning)) ::Oculus::Interaction::PokeInteractable_PositionPinningConfig*  PositionPinning;

 __declspec(property(get=get_RecoilAssist, put=set_RecoilAssist)) ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*  RecoilAssist;

 __declspec(property(get=get_SurfacePatch, put=set_SurfacePatch)) ::Oculus::Interaction::Surfaces::ISurfacePatch*  SurfacePatch;

 __declspec(property(get=get_TiebreakerScore, put=set_TiebreakerScore)) int32_t  TiebreakerScore;

/// @brief Field <SurfacePatch>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SurfacePatch_k__BackingField, put=__cordl_internal_set__SurfacePatch_k__BackingField)) ::Oculus::Interaction::Surfaces::ISurfacePatch*  _SurfacePatch_k__BackingField;

/// @brief Field _cancelSelectNormal, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get__cancelSelectNormal, put=__cordl_internal_set__cancelSelectNormal)) float_t  _cancelSelectNormal;

/// @brief Field _cancelSelectTangent, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get__cancelSelectTangent, put=__cordl_internal_set__cancelSelectTangent)) float_t  _cancelSelectTangent;

/// @brief Field _closeDistanceThreshold, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__closeDistanceThreshold, put=__cordl_internal_set__closeDistanceThreshold)) float_t  _closeDistanceThreshold;

/// @brief Field _dragThresholds, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__dragThresholds, put=__cordl_internal_set__dragThresholds)) ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*  _dragThresholds;

/// @brief Field _enterHoverNormal, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__enterHoverNormal, put=__cordl_internal_set__enterHoverNormal)) float_t  _enterHoverNormal;

/// @brief Field _enterHoverTangent, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__enterHoverTangent, put=__cordl_internal_set__enterHoverTangent)) float_t  _enterHoverTangent;

/// @brief Field _exitHoverNormal, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__exitHoverNormal, put=__cordl_internal_set__exitHoverNormal)) float_t  _exitHoverNormal;

/// @brief Field _exitHoverTangent, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get__exitHoverTangent, put=__cordl_internal_set__exitHoverTangent)) float_t  _exitHoverTangent;

/// @brief Field _minThresholds, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__minThresholds, put=__cordl_internal_set__minThresholds)) ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*  _minThresholds;

/// @brief Field _positionPinning, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionPinning, put=__cordl_internal_set__positionPinning)) ::Oculus::Interaction::PokeInteractable_PositionPinningConfig*  _positionPinning;

/// @brief Field _recoilAssist, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__recoilAssist, put=__cordl_internal_set__recoilAssist)) ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*  _recoilAssist;

/// @brief Field _surfacePatch, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__surfacePatch, put=__cordl_internal_set__surfacePatch)) ::UnityW<::UnityEngine::Object>  _surfacePatch;

/// @brief Field _tiebreakerScore, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get__tiebreakerScore, put=__cordl_internal_set__tiebreakerScore)) int32_t  _tiebreakerScore;

/// @brief Method Awake, addr 0xa4550cc, size 0x80, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClosestBackingSurfaceHit, addr 0xa455308, size 0x140, virtual false, abstract: false, final false
inline bool ClosestBackingSurfaceHit(::UnityEngine::Vector3  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit) ;

/// @brief Method ClosestSurfacePatchHit, addr 0xa45523c, size 0xcc, virtual false, abstract: false, final false
inline bool ClosestSurfacePatchHit(::UnityEngine::Vector3  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit) ;

/// @brief Method InjectAllPokeInteractable, addr 0xa455494, size 0x4, virtual false, abstract: false, final false
inline void InjectAllPokeInteractable(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch) ;

/// @brief Method InjectSurfacePatch, addr 0xa455498, size 0xd0, virtual false, abstract: false, final false
inline void InjectSurfacePatch(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch) ;

static inline ::Oculus::Interaction::PokeInteractable* New_ctor() ;

/// @brief Method Reset, addr 0xa455448, size 0x4c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa45514c, size 0xf0, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__58_0, addr 0xa455958, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__58_0() ;

constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch* const& __cordl_internal_get__SurfacePatch_k__BackingField() const;

constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch*& __cordl_internal_get__SurfacePatch_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__cancelSelectNormal() const;

constexpr float_t& __cordl_internal_get__cancelSelectNormal() ;

constexpr float_t const& __cordl_internal_get__cancelSelectTangent() const;

constexpr float_t& __cordl_internal_get__cancelSelectTangent() ;

constexpr float_t const& __cordl_internal_get__closeDistanceThreshold() const;

constexpr float_t& __cordl_internal_get__closeDistanceThreshold() ;

constexpr ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig* const& __cordl_internal_get__dragThresholds() const;

constexpr ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*& __cordl_internal_get__dragThresholds() ;

constexpr float_t const& __cordl_internal_get__enterHoverNormal() const;

constexpr float_t& __cordl_internal_get__enterHoverNormal() ;

constexpr float_t const& __cordl_internal_get__enterHoverTangent() const;

constexpr float_t& __cordl_internal_get__enterHoverTangent() ;

constexpr float_t const& __cordl_internal_get__exitHoverNormal() const;

constexpr float_t& __cordl_internal_get__exitHoverNormal() ;

constexpr float_t const& __cordl_internal_get__exitHoverTangent() const;

constexpr float_t& __cordl_internal_get__exitHoverTangent() ;

constexpr ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig* const& __cordl_internal_get__minThresholds() const;

constexpr ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*& __cordl_internal_get__minThresholds() ;

constexpr ::Oculus::Interaction::PokeInteractable_PositionPinningConfig* const& __cordl_internal_get__positionPinning() const;

constexpr ::Oculus::Interaction::PokeInteractable_PositionPinningConfig*& __cordl_internal_get__positionPinning() ;

constexpr ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig* const& __cordl_internal_get__recoilAssist() const;

constexpr ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*& __cordl_internal_get__recoilAssist() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__surfacePatch() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__surfacePatch() ;

constexpr int32_t const& __cordl_internal_get__tiebreakerScore() const;

constexpr int32_t& __cordl_internal_get__tiebreakerScore() ;

constexpr void __cordl_internal_set__SurfacePatch_k__BackingField(::Oculus::Interaction::Surfaces::ISurfacePatch*  value) ;

constexpr void __cordl_internal_set__cancelSelectNormal(float_t  value) ;

constexpr void __cordl_internal_set__cancelSelectTangent(float_t  value) ;

constexpr void __cordl_internal_set__closeDistanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set__dragThresholds(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*  value) ;

constexpr void __cordl_internal_set__enterHoverNormal(float_t  value) ;

constexpr void __cordl_internal_set__enterHoverTangent(float_t  value) ;

constexpr void __cordl_internal_set__exitHoverNormal(float_t  value) ;

constexpr void __cordl_internal_set__exitHoverTangent(float_t  value) ;

constexpr void __cordl_internal_set__minThresholds(::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*  value) ;

constexpr void __cordl_internal_set__positionPinning(::Oculus::Interaction::PokeInteractable_PositionPinningConfig*  value) ;

constexpr void __cordl_internal_set__recoilAssist(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*  value) ;

constexpr void __cordl_internal_set__surfacePatch(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__tiebreakerScore(int32_t  value) ;

/// @brief Method .ctor, addr 0xa455568, size 0x3c4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CancelSelectNormal, addr 0xa45503c, size 0x8, virtual false, abstract: false, final false
inline float_t get_CancelSelectNormal() ;

/// @brief Method get_CancelSelectTangent, addr 0xa45504c, size 0x8, virtual false, abstract: false, final false
inline float_t get_CancelSelectTangent() ;

/// @brief Method get_CloseDistanceThreshold, addr 0xa45505c, size 0x8, virtual false, abstract: false, final false
inline float_t get_CloseDistanceThreshold() ;

/// @brief Method get_DragThresholds, addr 0xa45508c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig* get_DragThresholds() ;

/// @brief Method get_EnterHoverNormal, addr 0xa454ffc, size 0x8, virtual false, abstract: false, final false
inline float_t get_EnterHoverNormal() ;

/// @brief Method get_EnterHoverTangent, addr 0xa45500c, size 0x8, virtual false, abstract: false, final false
inline float_t get_EnterHoverTangent() ;

/// @brief Method get_ExitHoverNormal, addr 0xa45501c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ExitHoverNormal() ;

/// @brief Method get_ExitHoverTangent, addr 0xa45502c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ExitHoverTangent() ;

/// @brief Method get_MinThresholds, addr 0xa45507c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig* get_MinThresholds() ;

/// @brief Method get_PositionPinning, addr 0xa45509c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PokeInteractable_PositionPinningConfig* get_PositionPinning() ;

/// @brief Method get_RecoilAssist, addr 0xa4550b4, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig* get_RecoilAssist() ;

/// [CompilerGenerated]
/// @brief Method get_SurfacePatch, addr 0xa454fec, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Surfaces::ISurfacePatch* get_SurfacePatch() ;

/// @brief Method get_TiebreakerScore, addr 0xa45506c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TiebreakerScore() ;

/// @brief Method set_CancelSelectNormal, addr 0xa455044, size 0x8, virtual false, abstract: false, final false
inline void set_CancelSelectNormal(float_t  value) ;

/// @brief Method set_CancelSelectTangent, addr 0xa455054, size 0x8, virtual false, abstract: false, final false
inline void set_CancelSelectTangent(float_t  value) ;

/// @brief Method set_CloseDistanceThreshold, addr 0xa455064, size 0x8, virtual false, abstract: false, final false
inline void set_CloseDistanceThreshold(float_t  value) ;

/// @brief Method set_DragThresholds, addr 0xa455094, size 0x8, virtual false, abstract: false, final false
inline void set_DragThresholds(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*  value) ;

/// @brief Method set_EnterHoverNormal, addr 0xa455004, size 0x8, virtual false, abstract: false, final false
inline void set_EnterHoverNormal(float_t  value) ;

/// @brief Method set_EnterHoverTangent, addr 0xa455014, size 0x8, virtual false, abstract: false, final false
inline void set_EnterHoverTangent(float_t  value) ;

/// @brief Method set_ExitHoverNormal, addr 0xa455024, size 0x8, virtual false, abstract: false, final false
inline void set_ExitHoverNormal(float_t  value) ;

/// @brief Method set_ExitHoverTangent, addr 0xa455034, size 0x8, virtual false, abstract: false, final false
inline void set_ExitHoverTangent(float_t  value) ;

/// @brief Method set_MinThresholds, addr 0xa455084, size 0x8, virtual false, abstract: false, final false
inline void set_MinThresholds(::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*  value) ;

/// @brief Method set_PositionPinning, addr 0xa4550a4, size 0x10, virtual false, abstract: false, final false
inline void set_PositionPinning(::Oculus::Interaction::PokeInteractable_PositionPinningConfig*  value) ;

/// @brief Method set_RecoilAssist, addr 0xa4550bc, size 0x10, virtual false, abstract: false, final false
inline void set_RecoilAssist(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SurfacePatch, addr 0xa454ff4, size 0x8, virtual false, abstract: false, final false
inline void set_SurfacePatch(::Oculus::Interaction::Surfaces::ISurfacePatch*  value) ;

/// @brief Method set_TiebreakerScore, addr 0xa455074, size 0x8, virtual false, abstract: false, final false
inline void set_TiebreakerScore(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeInteractable(PokeInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeInteractable(PokeInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15854};

/// [Tooltip("Represents the pokeable surface area of this interactable.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Surfaces.ISurfacePatch), new[] {  })]
/// @brief Field _surfacePatch, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____surfacePatch;

/// [CompilerGenerated]
/// @brief Field <SurfacePatch>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::Oculus::Interaction::Surfaces::ISurfacePatch*  ____SurfacePatch_k__BackingField;

/// [SerializeField]
/// [FormerlySerializedAs("_maxDistance")]
/// [Tooltip("The distance required for a poke interactor to enter hovering, measured along the normal to the surface (in meters)")]
/// @brief Field _enterHoverNormal, offset: 0xd8, size: 0x4, def value: None
 float_t  ____enterHoverNormal;

/// [SerializeField]
/// [Tooltip("The distance required for a poke interactor to enter hovering, measured along the tangent plane to the surface (in meters)")]
/// @brief Field _enterHoverTangent, offset: 0xdc, size: 0x4, def value: None
 float_t  ____enterHoverTangent;

/// [SerializeField]
/// [Tooltip("The distance required for a poke interactor to exit hovering, measured along the normal to the surface (in meters)")]
/// @brief Field _exitHoverNormal, offset: 0xe0, size: 0x4, def value: None
 float_t  ____exitHoverNormal;

/// [SerializeField]
/// [Tooltip("The distance required for a poke interactor to exit hovering, measured along the tangent plane to the surface (in meters)")]
/// @brief Field _exitHoverTangent, offset: 0xe4, size: 0x4, def value: None
 float_t  ____exitHoverTangent;

/// [SerializeField]
/// [FormerlySerializedAs("_releaseDistance")]
/// [Tooltip("If greater than zero, the distance required for a selecting poke interactor to cancel selection, measured along the negative normal to the surface (in meters).")]
/// @brief Field _cancelSelectNormal, offset: 0xe8, size: 0x4, def value: None
 float_t  ____cancelSelectNormal;

/// [SerializeField]
/// [Tooltip("If greater than zero, the distance required for a selecting poke interactor to cancel selection, measured along the tangent plane to the surface (in meters).")]
/// @brief Field _cancelSelectTangent, offset: 0xec, size: 0x4, def value: None
 float_t  ____cancelSelectTangent;

/// [SerializeField]
/// [Tooltip("If enabled, a poke interactor must approach the surface from at least a minimum distance of the surface (in meters).")]
/// @brief Field _minThresholds, offset: 0xf0, size: 0x8, def value: None
 ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*  ____minThresholds;

/// [SerializeField]
/// [FormerlySerializedAs("_dragThresholding")]
/// [Tooltip("If enabled, drag thresholds will be applied in 3D space. Useful for disambiguating press vs drag and suppressing move pointer events when a poke interactor follows a pressing motion.")]
/// @brief Field _dragThresholds, offset: 0xf8, size: 0x8, def value: None
 ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*  ____dragThresholds;

/// [SerializeField]
/// [Tooltip("If enabled, position pinning will be applied to surface motion during drag. Useful for adding a sense of friction to initial drag motion.")]
/// @brief Field _positionPinning, offset: 0x100, size: 0x8, def value: None
 ::Oculus::Interaction::PokeInteractable_PositionPinningConfig*  ____positionPinning;

/// [SerializeField]
/// [Tooltip("If enabled, recoil assist will affect unselection and reselection criteria. Useful for triggering unselect in response to a smaller motion in the negative direction from a surface.")]
/// @brief Field _recoilAssist, offset: 0x108, size: 0x8, def value: None
 ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*  ____recoilAssist;

/// [SerializeField]
/// [Optional]
/// [Tooltip("(Meters, World) The threshold below which distances near this surface are treated as equal in depth for the purposes of ranking.")]
/// @brief Field _closeDistanceThreshold, offset: 0x110, size: 0x4, def value: None
 float_t  ____closeDistanceThreshold;

/// [SerializeField]
/// [Optional]
/// @brief Field _tiebreakerScore, offset: 0x114, size: 0x4, def value: None
 int32_t  ____tiebreakerScore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____surfacePatch) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____SurfacePatch_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____enterHoverNormal) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____enterHoverTangent) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____exitHoverNormal) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____exitHoverTangent) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____cancelSelectNormal) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____cancelSelectTangent) == 0xec, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____minThresholds) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____dragThresholds) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____positionPinning) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____recoilAssist) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____closeDistanceThreshold) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable, ____tiebreakerScore) == 0x114, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PokeInteractable) == 0x118, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PokeInteractable/RecoilAssistConfig
class CORDL_TYPE PokeInteractable_RecoilAssistConfig : public ::System::Object {
public:
// Declarations
/// @brief Field DynamicDecayCurve, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DynamicDecayCurve, put=__cordl_internal_set_DynamicDecayCurve)) ::UnityEngine::AnimationCurve*  DynamicDecayCurve;

/// @brief Field Enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

/// @brief Field ExitDistance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExitDistance, put=__cordl_internal_set_ExitDistance)) float_t  ExitDistance;

/// @brief Field ReEnterDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReEnterDistance, put=__cordl_internal_set_ReEnterDistance)) float_t  ReEnterDistance;

/// @brief Field UseDynamicDecay, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseDynamicDecay, put=__cordl_internal_set_UseDynamicDecay)) bool  UseDynamicDecay;

/// @brief Field UseVelocityExpansion, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseVelocityExpansion, put=__cordl_internal_set_UseVelocityExpansion)) bool  UseVelocityExpansion;

/// @brief Field VelocityExpansionDecayRate, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_VelocityExpansionDecayRate, put=__cordl_internal_set_VelocityExpansionDecayRate)) float_t  VelocityExpansionDecayRate;

/// @brief Field VelocityExpansionDistance, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_VelocityExpansionDistance, put=__cordl_internal_set_VelocityExpansionDistance)) float_t  VelocityExpansionDistance;

/// @brief Field VelocityExpansionMaxSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_VelocityExpansionMaxSpeed, put=__cordl_internal_set_VelocityExpansionMaxSpeed)) float_t  VelocityExpansionMaxSpeed;

/// @brief Field VelocityExpansionMinSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_VelocityExpansionMinSpeed, put=__cordl_internal_set_VelocityExpansionMinSpeed)) float_t  VelocityExpansionMinSpeed;

static inline ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_DynamicDecayCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_DynamicDecayCurve() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr float_t const& __cordl_internal_get_ExitDistance() const;

constexpr float_t& __cordl_internal_get_ExitDistance() ;

constexpr float_t const& __cordl_internal_get_ReEnterDistance() const;

constexpr float_t& __cordl_internal_get_ReEnterDistance() ;

constexpr bool const& __cordl_internal_get_UseDynamicDecay() const;

constexpr bool& __cordl_internal_get_UseDynamicDecay() ;

constexpr bool const& __cordl_internal_get_UseVelocityExpansion() const;

constexpr bool& __cordl_internal_get_UseVelocityExpansion() ;

constexpr float_t const& __cordl_internal_get_VelocityExpansionDecayRate() const;

constexpr float_t& __cordl_internal_get_VelocityExpansionDecayRate() ;

constexpr float_t const& __cordl_internal_get_VelocityExpansionDistance() const;

constexpr float_t& __cordl_internal_get_VelocityExpansionDistance() ;

constexpr float_t const& __cordl_internal_get_VelocityExpansionMaxSpeed() const;

constexpr float_t& __cordl_internal_get_VelocityExpansionMaxSpeed() ;

constexpr float_t const& __cordl_internal_get_VelocityExpansionMinSpeed() const;

constexpr float_t& __cordl_internal_get_VelocityExpansionMinSpeed() ;

constexpr void __cordl_internal_set_DynamicDecayCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

constexpr void __cordl_internal_set_ExitDistance(float_t  value) ;

constexpr void __cordl_internal_set_ReEnterDistance(float_t  value) ;

constexpr void __cordl_internal_set_UseDynamicDecay(bool  value) ;

constexpr void __cordl_internal_set_UseVelocityExpansion(bool  value) ;

constexpr void __cordl_internal_set_VelocityExpansionDecayRate(float_t  value) ;

constexpr void __cordl_internal_set_VelocityExpansionDistance(float_t  value) ;

constexpr void __cordl_internal_set_VelocityExpansionMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_VelocityExpansionMinSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0xa455950, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeInteractable_RecoilAssistConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractable_RecoilAssistConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeInteractable_RecoilAssistConfig(PokeInteractable_RecoilAssistConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractable_RecoilAssistConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeInteractable_RecoilAssistConfig(PokeInteractable_RecoilAssistConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15853};

/// [Tooltip("If true, recoil assist will be applied.")]
/// @brief Field Enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___Enabled;

/// [Tooltip("If true, DynamicDecayCurve will be used to decay the max distance based on the normal velocity.")]
/// @brief Field UseDynamicDecay, offset: 0x11, size: 0x1, def value: None
 bool  ___UseDynamicDecay;

/// [Tooltip("A function of the normal movement ratio to determine the rate of decay.")]
/// @brief Field DynamicDecayCurve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___DynamicDecayCurve;

/// [Tooltip("Expand recoil window when fast Z motion is detected.")]
/// @brief Field UseVelocityExpansion, offset: 0x20, size: 0x1, def value: None
 bool  ___UseVelocityExpansion;

/// [Tooltip("When average velocity in interactable Z is greater than min speed, the recoil window will begin expanding.")]
/// @brief Field VelocityExpansionMinSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___VelocityExpansionMinSpeed;

/// [Tooltip("Full recoil window expansion reached at this speed.")]
/// @brief Field VelocityExpansionMaxSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___VelocityExpansionMaxSpeed;

/// [Tooltip("Window will expand by this distance when Z velocity reaches max speed.")]
/// @brief Field VelocityExpansionDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  ___VelocityExpansionDistance;

/// [Tooltip("Window will contract toward ExitDistance at this rate (in meters) per second when velocity lowers.")]
/// @brief Field VelocityExpansionDecayRate, offset: 0x30, size: 0x4, def value: None
 float_t  ___VelocityExpansionDecayRate;

/// [Tooltip("The distance over which a poke interactor must surpass to trigger an early unselect, measured along the normal to the surface (in meters)")]
/// @brief Field ExitDistance, offset: 0x34, size: 0x4, def value: None
 float_t  ___ExitDistance;

/// [Tooltip("When in recoil, the distance which a poke interactor must surpass to trigger a subsequent select, measured along the negative normal to the surface (in meters)")]
/// @brief Field ReEnterDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ___ReEnterDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig, ___Enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig, ___UseDynamicDecay) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig, ___DynamicDecayCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig, ___UseVelocityExpansion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig, ___VelocityExpansionMinSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig, ___VelocityExpansionMaxSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig, ___VelocityExpansionDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig, ___VelocityExpansionDecayRate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig, ___ExitDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig, ___ReEnterDistance) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PokeInteractable/PositionPinningConfig
class CORDL_TYPE PokeInteractable_PositionPinningConfig : public ::System::Object {
public:
// Declarations
/// @brief Field Enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

/// @brief Field MaxPinDistance, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxPinDistance, put=__cordl_internal_set_MaxPinDistance)) float_t  MaxPinDistance;

/// @brief Field PinningEaseCurve, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PinningEaseCurve, put=__cordl_internal_set_PinningEaseCurve)) ::UnityEngine::AnimationCurve*  PinningEaseCurve;

/// @brief Field ResyncCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ResyncCurve, put=__cordl_internal_set_ResyncCurve)) ::Oculus::Interaction::ProgressCurve*  ResyncCurve;

static inline ::Oculus::Interaction::PokeInteractable_PositionPinningConfig* New_ctor() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr float_t const& __cordl_internal_get_MaxPinDistance() const;

constexpr float_t& __cordl_internal_get_MaxPinDistance() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_PinningEaseCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_PinningEaseCurve() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get_ResyncCurve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get_ResyncCurve() ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

constexpr void __cordl_internal_set_MaxPinDistance(float_t  value) ;

constexpr void __cordl_internal_set_PinningEaseCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_ResyncCurve(::Oculus::Interaction::ProgressCurve*  value) ;

/// @brief Method .ctor, addr 0xa455948, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeInteractable_PositionPinningConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractable_PositionPinningConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeInteractable_PositionPinningConfig(PokeInteractable_PositionPinningConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractable_PositionPinningConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeInteractable_PositionPinningConfig(PokeInteractable_PositionPinningConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15852};

/// [Tooltip("If true, position pinning will be applied.")]
/// @brief Field Enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___Enabled;

/// [Tooltip("The distance over which a poke interactor drag motion will be remapped measured along the tangent plane to the surface (in meters)")]
/// @brief Field MaxPinDistance, offset: 0x14, size: 0x4, def value: None
 float_t  ___MaxPinDistance;

/// [Tooltip("The poke interactor position will be remapped along this curve from the initial touch point to the current position on surface.")]
/// @brief Field PinningEaseCurve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___PinningEaseCurve;

/// [Tooltip("In cases where a resync is necessary between the pinned position and the unpinned position, this time-based curve will be used.")]
/// @brief Field ResyncCurve, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ___ResyncCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PokeInteractable_PositionPinningConfig, ___Enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_PositionPinningConfig, ___MaxPinDistance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_PositionPinningConfig, ___PinningEaseCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_PositionPinningConfig, ___ResyncCurve) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PokeInteractable_PositionPinningConfig) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PokeInteractable/DragThresholdsConfig
class CORDL_TYPE PokeInteractable_DragThresholdsConfig : public ::System::Object {
public:
// Declarations
/// @brief Field DragEaseCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DragEaseCurve, put=__cordl_internal_set_DragEaseCurve)) ::Oculus::Interaction::ProgressCurve*  DragEaseCurve;

/// @brief Field DragNormal, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_DragNormal, put=__cordl_internal_set_DragNormal)) float_t  DragNormal;

/// @brief Field DragTangent, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_DragTangent, put=__cordl_internal_set_DragTangent)) float_t  DragTangent;

/// @brief Field Enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

static inline ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig* New_ctor() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get_DragEaseCurve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get_DragEaseCurve() ;

constexpr float_t const& __cordl_internal_get_DragNormal() const;

constexpr float_t& __cordl_internal_get_DragNormal() ;

constexpr float_t const& __cordl_internal_get_DragTangent() const;

constexpr float_t& __cordl_internal_get_DragTangent() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr void __cordl_internal_set_DragEaseCurve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set_DragNormal(float_t  value) ;

constexpr void __cordl_internal_set_DragTangent(float_t  value) ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

/// @brief Method .ctor, addr 0xa455940, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeInteractable_DragThresholdsConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractable_DragThresholdsConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeInteractable_DragThresholdsConfig(PokeInteractable_DragThresholdsConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractable_DragThresholdsConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeInteractable_DragThresholdsConfig(PokeInteractable_DragThresholdsConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15851};

/// [Tooltip("If true, drag thresholds will be applied.")]
/// @brief Field Enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___Enabled;

/// [FormerlySerializedAs("ZThreshold")]
/// [Tooltip("The distance a poke interactor must travel to be treated as a press, measured as a distance along the normal to the surface (in meters).")]
/// @brief Field DragNormal, offset: 0x14, size: 0x4, def value: None
 float_t  ___DragNormal;

/// [FormerlySerializedAs("SurfaceThreshold")]
/// [Tooltip("The distance a poke interactor must travel to be treated as a drag, measured as a distance along the tangent plane to the surface (in meters).")]
/// @brief Field DragTangent, offset: 0x18, size: 0x4, def value: None
 float_t  ___DragTangent;

/// [Tooltip("The curve that a poke interactor will use to ease when transitioning between a press and drag state.")]
/// @brief Field DragEaseCurve, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ___DragEaseCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig, ___Enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig, ___DragNormal) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig, ___DragTangent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig, ___DragEaseCurve) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PokeInteractable/MinThresholdsConfig
class CORDL_TYPE PokeInteractable_MinThresholdsConfig : public ::System::Object {
public:
// Declarations
/// @brief Field Enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

/// @brief Field MinNormal, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinNormal, put=__cordl_internal_set_MinNormal)) float_t  MinNormal;

static inline ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig* New_ctor() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr float_t const& __cordl_internal_get_MinNormal() const;

constexpr float_t& __cordl_internal_get_MinNormal() ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

constexpr void __cordl_internal_set_MinNormal(float_t  value) ;

/// @brief Method .ctor, addr 0xa45592c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeInteractable_MinThresholdsConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractable_MinThresholdsConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeInteractable_MinThresholdsConfig(PokeInteractable_MinThresholdsConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractable_MinThresholdsConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeInteractable_MinThresholdsConfig(PokeInteractable_MinThresholdsConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15850};

/// [Tooltip("If true, minimum thresholds will be applied.")]
/// @brief Field Enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___Enabled;

/// [Tooltip("The minimum distance required for a poke interactor to surpass before being able to hover, measured along the normal to the surface (in meters).")]
/// @brief Field MinNormal, offset: 0x14, size: 0x4, def value: None
 float_t  ___MinNormal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PokeInteractable_MinThresholdsConfig, ___Enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractable_MinThresholdsConfig, ___MinNormal) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PokeInteractable_MinThresholdsConfig) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction
