#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewClassic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhotonTransformViewClassic)
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
class PhotonTransformViewPositionControl;
}
namespace Photon::Pun {
class PhotonTransformViewPositionModel;
}
namespace Photon::Pun {
class PhotonTransformViewRotationControl;
}
namespace Photon::Pun {
class PhotonTransformViewRotationModel;
}
namespace Photon::Pun {
class PhotonTransformViewScaleControl;
}
namespace Photon::Pun {
class PhotonTransformViewScaleModel;
}
namespace Photon::Pun {
class PhotonView;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonTransformViewClassic;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonTransformViewClassic*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonTransformViewClassic*, "Photon.Pun", "PhotonTransformViewClassic");
// [AddComponentMenu("Photon Networking/Photon Transform View Classic")]
// Dependencies Photon.Pun.MonoBehaviourPun
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonTransformViewClassic
class CORDL_TYPE PhotonTransformViewClassic : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
/// @brief Field m_PhotonView, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PhotonView, put=__cordl_internal_set_m_PhotonView)) ::UnityW<::Photon::Pun::PhotonView>  m_PhotonView;

/// @brief Field m_PositionControl, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PositionControl, put=__cordl_internal_set_m_PositionControl)) ::Photon::Pun::PhotonTransformViewPositionControl*  m_PositionControl;

/// @brief Field m_PositionModel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PositionModel, put=__cordl_internal_set_m_PositionModel)) ::Photon::Pun::PhotonTransformViewPositionModel*  m_PositionModel;

/// @brief Field m_ReceivedNetworkUpdate, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ReceivedNetworkUpdate, put=__cordl_internal_set_m_ReceivedNetworkUpdate)) bool  m_ReceivedNetworkUpdate;

/// @brief Field m_RotationControl, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RotationControl, put=__cordl_internal_set_m_RotationControl)) ::Photon::Pun::PhotonTransformViewRotationControl*  m_RotationControl;

/// @brief Field m_RotationModel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RotationModel, put=__cordl_internal_set_m_RotationModel)) ::Photon::Pun::PhotonTransformViewRotationModel*  m_RotationModel;

/// @brief Field m_ScaleControl, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScaleControl, put=__cordl_internal_set_m_ScaleControl)) ::Photon::Pun::PhotonTransformViewScaleControl*  m_ScaleControl;

/// @brief Field m_ScaleModel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScaleModel, put=__cordl_internal_set_m_ScaleModel)) ::Photon::Pun::PhotonTransformViewScaleModel*  m_ScaleModel;

/// @brief Field m_firstTake, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_firstTake, put=__cordl_internal_set_m_firstTake)) bool  m_firstTake;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method Awake, addr 0xa74072c, size 0x12c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Photon::Pun::PhotonTransformViewClassic* New_ctor() ;

/// @brief Method OnEnable, addr 0xa7409e0, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPhotonSerializeView, addr 0xa741510, size 0x1a8, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetSynchronizedValues, addr 0xa7414e8, size 0x1c, virtual false, abstract: false, final false
inline void SetSynchronizedValues(::UnityEngine::Vector3  speed, float_t  turnSpeed) ;

/// @brief Method Update, addr 0xa7409ec, size 0xcc, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePosition, addr 0xa740ab8, size 0x84, virtual false, abstract: false, final false
inline void UpdatePosition() ;

/// @brief Method UpdateRotation, addr 0xa740b3c, size 0x84, virtual false, abstract: false, final false
inline void UpdateRotation() ;

/// @brief Method UpdateScale, addr 0xa740bc0, size 0x84, virtual false, abstract: false, final false
inline void UpdateScale() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_m_PhotonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_m_PhotonView() ;

constexpr ::Photon::Pun::PhotonTransformViewPositionControl* const& __cordl_internal_get_m_PositionControl() const;

constexpr ::Photon::Pun::PhotonTransformViewPositionControl*& __cordl_internal_get_m_PositionControl() ;

constexpr ::Photon::Pun::PhotonTransformViewPositionModel* const& __cordl_internal_get_m_PositionModel() const;

constexpr ::Photon::Pun::PhotonTransformViewPositionModel*& __cordl_internal_get_m_PositionModel() ;

constexpr bool const& __cordl_internal_get_m_ReceivedNetworkUpdate() const;

constexpr bool& __cordl_internal_get_m_ReceivedNetworkUpdate() ;

constexpr ::Photon::Pun::PhotonTransformViewRotationControl* const& __cordl_internal_get_m_RotationControl() const;

constexpr ::Photon::Pun::PhotonTransformViewRotationControl*& __cordl_internal_get_m_RotationControl() ;

constexpr ::Photon::Pun::PhotonTransformViewRotationModel* const& __cordl_internal_get_m_RotationModel() const;

constexpr ::Photon::Pun::PhotonTransformViewRotationModel*& __cordl_internal_get_m_RotationModel() ;

constexpr ::Photon::Pun::PhotonTransformViewScaleControl* const& __cordl_internal_get_m_ScaleControl() const;

constexpr ::Photon::Pun::PhotonTransformViewScaleControl*& __cordl_internal_get_m_ScaleControl() ;

constexpr ::Photon::Pun::PhotonTransformViewScaleModel* const& __cordl_internal_get_m_ScaleModel() const;

constexpr ::Photon::Pun::PhotonTransformViewScaleModel*& __cordl_internal_get_m_ScaleModel() ;

constexpr bool const& __cordl_internal_get_m_firstTake() const;

constexpr bool& __cordl_internal_get_m_firstTake() ;

constexpr void __cordl_internal_set_m_PhotonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_m_PositionControl(::Photon::Pun::PhotonTransformViewPositionControl*  value) ;

constexpr void __cordl_internal_set_m_PositionModel(::Photon::Pun::PhotonTransformViewPositionModel*  value) ;

constexpr void __cordl_internal_set_m_ReceivedNetworkUpdate(bool  value) ;

constexpr void __cordl_internal_set_m_RotationControl(::Photon::Pun::PhotonTransformViewRotationControl*  value) ;

constexpr void __cordl_internal_set_m_RotationModel(::Photon::Pun::PhotonTransformViewRotationModel*  value) ;

constexpr void __cordl_internal_set_m_ScaleControl(::Photon::Pun::PhotonTransformViewScaleControl*  value) ;

constexpr void __cordl_internal_set_m_ScaleModel(::Photon::Pun::PhotonTransformViewScaleModel*  value) ;

constexpr void __cordl_internal_set_m_firstTake(bool  value) ;

/// @brief Method .ctor, addr 0xa741978, size 0x12c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonTransformViewClassic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewClassic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonTransformViewClassic(PhotonTransformViewClassic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewClassic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonTransformViewClassic(PhotonTransformViewClassic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29737};

/// [HideInInspector]
/// @brief Field m_PositionModel, offset: 0x28, size: 0x8, def value: None
 ::Photon::Pun::PhotonTransformViewPositionModel*  ___m_PositionModel;

/// [HideInInspector]
/// @brief Field m_RotationModel, offset: 0x30, size: 0x8, def value: None
 ::Photon::Pun::PhotonTransformViewRotationModel*  ___m_RotationModel;

/// [HideInInspector]
/// @brief Field m_ScaleModel, offset: 0x38, size: 0x8, def value: None
 ::Photon::Pun::PhotonTransformViewScaleModel*  ___m_ScaleModel;

/// @brief Field m_PositionControl, offset: 0x40, size: 0x8, def value: None
 ::Photon::Pun::PhotonTransformViewPositionControl*  ___m_PositionControl;

/// @brief Field m_RotationControl, offset: 0x48, size: 0x8, def value: None
 ::Photon::Pun::PhotonTransformViewRotationControl*  ___m_RotationControl;

/// @brief Field m_ScaleControl, offset: 0x50, size: 0x8, def value: None
 ::Photon::Pun::PhotonTransformViewScaleControl*  ___m_ScaleControl;

/// @brief Field m_PhotonView, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___m_PhotonView;

/// @brief Field m_ReceivedNetworkUpdate, offset: 0x60, size: 0x1, def value: None
 bool  ___m_ReceivedNetworkUpdate;

/// @brief Field m_firstTake, offset: 0x61, size: 0x1, def value: None
 bool  ___m_firstTake;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_PositionModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_RotationModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_ScaleModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_PositionControl) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_RotationControl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_ScaleControl) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_PhotonView) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_ReceivedNetworkUpdate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_firstTake) == 0x61, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonTransformViewClassic) == 0x68, "Size mismatch!");

} // namespace end def Photon::Pun
