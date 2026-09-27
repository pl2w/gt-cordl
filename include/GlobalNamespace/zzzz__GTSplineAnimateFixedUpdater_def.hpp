#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSplineAnimateFixedUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GTSplineAnimateFixedUpdater)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace UnityEngine::Splines {
class SplineAnimate;
}
// Forward declare root types
namespace GlobalNamespace {
class GTSplineAnimateFixedUpdater;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTSplineAnimateFixedUpdater*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTSplineAnimateFixedUpdater*, "", "GTSplineAnimateFixedUpdater");
// [NetworkBehaviourWeaved(1)]
// Dependencies NetworkComponent, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTSplineAnimateFixedUpdater
class CORDL_TYPE GTSplineAnimateFixedUpdater : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
/// @brief Field Duration, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_Duration, put=__cordl_internal_set_Duration)) float_t  Duration;

/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_Netdata, put=set_Netdata)) float_t  Netdata;

/// @brief Field _Netdata, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__Netdata, put=__cordl_internal_set__Netdata)) float_t  _Netdata;

/// @brief Field isSplineLoaded, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSplineLoaded, put=__cordl_internal_set_isSplineLoaded)) bool  isSplineLoaded;

/// @brief Field progress, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field progressLerpEnd, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressLerpEnd, put=__cordl_internal_set_progressLerpEnd)) float_t  progressLerpEnd;

/// @brief Field progressLerpStart, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressLerpStart, put=__cordl_internal_set_progressLerpStart)) float_t  progressLerpStart;

/// @brief Field progressLerpStartTime, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressLerpStartTime, put=__cordl_internal_set_progressLerpStartTime)) float_t  progressLerpStartTime;

/// @brief Field splineAnimate, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_splineAnimate, put=__cordl_internal_set_splineAnimate)) ::UnityW<::UnityEngine::Splines::SplineAnimate>  splineAnimate;

/// @brief Field splineAnimateRef, offset 0xa0, size 0x18 
 __declspec(property(get=__cordl_internal_get_splineAnimateRef, put=__cordl_internal_set_splineAnimateRef)) ::GlobalNamespace::XSceneRef  splineAnimateRef;

/// @brief Method Awake, addr 0x567aae4, size 0xd0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearSplineAnimate, addr 0x567ac6c, size 0x24, virtual false, abstract: false, final false
inline void ClearSplineAnimate() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x567afd0, size 0x20, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x567aff0, size 0x24, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method FixedUpdate, addr 0x567ac90, size 0xe0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method InitSplineAnimate, addr 0x567abb4, size 0xb8, virtual false, abstract: false, final false
inline void InitSplineAnimate() ;

static inline ::GlobalNamespace::GTSplineAnimateFixedUpdater* New_ctor() ;

/// @brief Method ReadDataFusion, addr 0x567ae38, size 0x18, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x567af3c, size 0x8c, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SharedReadData, addr 0x567ae50, size 0x7c, virtual false, abstract: false, final false
inline void SharedReadData(float_t  incomingValue) ;

/// @brief Method WriteDataFusion, addr 0x567ae28, size 0x10, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x567aecc, size 0x70, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr float_t const& __cordl_internal_get_Duration() const;

constexpr float_t& __cordl_internal_get_Duration() ;

constexpr float_t const& __cordl_internal_get__Netdata() const;

constexpr float_t& __cordl_internal_get__Netdata() ;

constexpr bool const& __cordl_internal_get_isSplineLoaded() const;

constexpr bool& __cordl_internal_get_isSplineLoaded() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr float_t const& __cordl_internal_get_progressLerpEnd() const;

constexpr float_t& __cordl_internal_get_progressLerpEnd() ;

constexpr float_t const& __cordl_internal_get_progressLerpStart() const;

constexpr float_t& __cordl_internal_get_progressLerpStart() ;

constexpr float_t const& __cordl_internal_get_progressLerpStartTime() const;

constexpr float_t& __cordl_internal_get_progressLerpStartTime() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineAnimate> const& __cordl_internal_get_splineAnimate() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineAnimate>& __cordl_internal_get_splineAnimate() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_splineAnimateRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_splineAnimateRef() ;

constexpr void __cordl_internal_set_Duration(float_t  value) ;

constexpr void __cordl_internal_set__Netdata(float_t  value) ;

constexpr void __cordl_internal_set_isSplineLoaded(bool  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_progressLerpEnd(float_t  value) ;

constexpr void __cordl_internal_set_progressLerpStart(float_t  value) ;

constexpr void __cordl_internal_set_progressLerpStartTime(float_t  value) ;

constexpr void __cordl_internal_set_splineAnimate(::UnityW<::UnityEngine::Splines::SplineAnimate>  value) ;

constexpr void __cordl_internal_set_splineAnimateRef(::GlobalNamespace::XSceneRef  value) ;

/// @brief Method .ctor, addr 0x567afc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Netdata, addr 0x567ad70, size 0x5c, virtual false, abstract: false, final false
inline float_t get_Netdata() ;

/// @brief Method set_Netdata, addr 0x567adcc, size 0x5c, virtual false, abstract: false, final false
inline void set_Netdata(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSplineAnimateFixedUpdater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSplineAnimateFixedUpdater", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSplineAnimateFixedUpdater(GTSplineAnimateFixedUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSplineAnimateFixedUpdater", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSplineAnimateFixedUpdater(GTSplineAnimateFixedUpdater const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{851};

/// @brief Field progressLerpDuration offset 0xffffffff size 0x4
static constexpr float_t  progressLerpDuration{static_cast<float_t>(1.0f)};

/// [SerializeField]
/// @brief Field splineAnimateRef, offset: 0xa0, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___splineAnimateRef;

/// [SerializeField]
/// @brief Field Duration, offset: 0xb8, size: 0x4, def value: None
 float_t  ___Duration;

/// @brief Field splineAnimate, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineAnimate>  ___splineAnimate;

/// @brief Field isSplineLoaded, offset: 0xc8, size: 0x1, def value: None
 bool  ___isSplineLoaded;

/// @brief Field progress, offset: 0xcc, size: 0x4, def value: None
 float_t  ___progress;

/// @brief Field progressLerpStart, offset: 0xd0, size: 0x4, def value: None
 float_t  ___progressLerpStart;

/// @brief Field progressLerpEnd, offset: 0xd4, size: 0x4, def value: None
 float_t  ___progressLerpEnd;

/// @brief Field progressLerpStartTime, offset: 0xd8, size: 0x4, def value: None
 float_t  ___progressLerpStartTime;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Netdata", 0, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Netdata, offset: 0xdc, size: 0x4, def value: None
 float_t  ____Netdata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTSplineAnimateFixedUpdater, ___splineAnimateRef) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSplineAnimateFixedUpdater, ___Duration) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSplineAnimateFixedUpdater, ___splineAnimate) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSplineAnimateFixedUpdater, ___isSplineLoaded) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSplineAnimateFixedUpdater, ___progress) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSplineAnimateFixedUpdater, ___progressLerpStart) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSplineAnimateFixedUpdater, ___progressLerpEnd) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSplineAnimateFixedUpdater, ___progressLerpStartTime) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSplineAnimateFixedUpdater, ____Netdata) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTSplineAnimateFixedUpdater) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
