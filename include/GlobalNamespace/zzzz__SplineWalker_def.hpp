#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineWalker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SplineWalkerMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SplineWalker)
namespace GlobalNamespace {
class BezierSpline;
}
namespace GlobalNamespace {
class LinearSpline;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
}
// Forward declare root types
namespace GlobalNamespace {
class SplineWalker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SplineWalker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineWalker*, "", "SplineWalker");
// Dependencies SplineWalkerMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SplineWalker
class CORDL_TYPE SplineWalker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field DoNetworkSync, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_DoNetworkSync, put=__cordl_internal_set_DoNetworkSync)) bool  DoNetworkSync;

/// @brief Field _view, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__view, put=__cordl_internal_set__view)) ::UnityW<::Photon::Pun::PhotonView>  _view;

/// @brief Field duration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field goingForward, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_goingForward, put=__cordl_internal_set_goingForward)) bool  goingForward;

/// @brief Field linearSpline, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_linearSpline, put=__cordl_internal_set_linearSpline)) ::UnityW<::GlobalNamespace::LinearSpline>  linearSpline;

/// @brief Field lookForward, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_lookForward, put=__cordl_internal_set_lookForward)) bool  lookForward;

/// @brief Field mode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::SplineWalkerMode  mode;

/// @brief Field progress, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field spline, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::GlobalNamespace::BezierSpline>  spline;

/// @brief Field useWorldPosition, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_useWorldPosition, put=__cordl_internal_set_useWorldPosition)) bool  useWorldPosition;

/// @brief Field walkLinearPath, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_walkLinearPath, put=__cordl_internal_set_walkLinearPath)) bool  walkLinearPath;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method Awake, addr 0x5b16290, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SplineWalker* New_ctor() ;

/// @brief Method OnPhotonSerializeView, addr 0x5b16588, size 0x20, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Update, addr 0x5b162e8, size 0x2a0, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_DoNetworkSync() const;

constexpr bool& __cordl_internal_get_DoNetworkSync() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get__view() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get__view() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr bool const& __cordl_internal_get_goingForward() const;

constexpr bool& __cordl_internal_get_goingForward() ;

constexpr ::UnityW<::GlobalNamespace::LinearSpline> const& __cordl_internal_get_linearSpline() const;

constexpr ::UnityW<::GlobalNamespace::LinearSpline>& __cordl_internal_get_linearSpline() ;

constexpr bool const& __cordl_internal_get_lookForward() const;

constexpr bool& __cordl_internal_get_lookForward() ;

constexpr ::GlobalNamespace::SplineWalkerMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::SplineWalkerMode& __cordl_internal_get_mode() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::GlobalNamespace::BezierSpline>& __cordl_internal_get_spline() ;

constexpr bool const& __cordl_internal_get_useWorldPosition() const;

constexpr bool& __cordl_internal_get_useWorldPosition() ;

constexpr bool const& __cordl_internal_get_walkLinearPath() const;

constexpr bool& __cordl_internal_get_walkLinearPath() ;

constexpr void __cordl_internal_set_DoNetworkSync(bool  value) ;

constexpr void __cordl_internal_set__view(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_goingForward(bool  value) ;

constexpr void __cordl_internal_set_linearSpline(::UnityW<::GlobalNamespace::LinearSpline>  value) ;

constexpr void __cordl_internal_set_lookForward(bool  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::SplineWalkerMode  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value) ;

constexpr void __cordl_internal_set_useWorldPosition(bool  value) ;

constexpr void __cordl_internal_set_walkLinearPath(bool  value) ;

/// @brief Method .ctor, addr 0x5b165a8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineWalker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineWalker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineWalker(SplineWalker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineWalker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineWalker(SplineWalker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3558};

/// @brief Field spline, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BezierSpline>  ___spline;

/// @brief Field linearSpline, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LinearSpline>  ___linearSpline;

/// @brief Field duration, offset: 0x30, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field lookForward, offset: 0x34, size: 0x1, def value: None
 bool  ___lookForward;

/// @brief Field mode, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::SplineWalkerMode  ___mode;

/// @brief Field walkLinearPath, offset: 0x3c, size: 0x1, def value: None
 bool  ___walkLinearPath;

/// @brief Field useWorldPosition, offset: 0x3d, size: 0x1, def value: None
 bool  ___useWorldPosition;

/// @brief Field progress, offset: 0x40, size: 0x4, def value: None
 float_t  ___progress;

/// @brief Field goingForward, offset: 0x44, size: 0x1, def value: None
 bool  ___goingForward;

/// @brief Field DoNetworkSync, offset: 0x45, size: 0x1, def value: None
 bool  ___DoNetworkSync;

/// @brief Field _view, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ____view;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineWalker, ___spline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineWalker, ___linearSpline) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineWalker, ___duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineWalker, ___lookForward) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineWalker, ___mode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineWalker, ___walkLinearPath) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineWalker, ___useWorldPosition) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineWalker, ___progress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineWalker, ___goingForward) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineWalker, ___DoNetworkSync) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineWalker, ____view) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineWalker) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
