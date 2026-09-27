#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewPositionControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhotonTransformViewPositionControl)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonTransformViewPositionModel;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonTransformViewPositionControl;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonTransformViewPositionControl*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonTransformViewPositionControl*, "Photon.Pun", "PhotonTransformViewPositionControl");
// Dependencies System.Object, UnityEngine.Vector3
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonTransformViewPositionControl
class CORDL_TYPE PhotonTransformViewPositionControl : public ::System::Object {
public:
// Declarations
/// @brief Field m_CurrentSpeed, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentSpeed, put=__cordl_internal_set_m_CurrentSpeed)) float_t  m_CurrentSpeed;

/// @brief Field m_LastSerializeTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastSerializeTime, put=__cordl_internal_set_m_LastSerializeTime)) double_t  m_LastSerializeTime;

/// @brief Field m_Model, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Model, put=__cordl_internal_set_m_Model)) ::Photon::Pun::PhotonTransformViewPositionModel*  m_Model;

/// @brief Field m_NetworkPosition, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_NetworkPosition, put=__cordl_internal_set_m_NetworkPosition)) ::UnityEngine::Vector3  m_NetworkPosition;

/// @brief Field m_OldNetworkPositions, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OldNetworkPositions, put=__cordl_internal_set_m_OldNetworkPositions)) ::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*  m_OldNetworkPositions;

/// @brief Field m_SynchronizedSpeed, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_SynchronizedSpeed, put=__cordl_internal_set_m_SynchronizedSpeed)) ::UnityEngine::Vector3  m_SynchronizedSpeed;

/// @brief Field m_SynchronizedTurnSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SynchronizedTurnSpeed, put=__cordl_internal_set_m_SynchronizedTurnSpeed)) float_t  m_SynchronizedTurnSpeed;

/// @brief Field m_UpdatedPositionAfterOnSerialize, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UpdatedPositionAfterOnSerialize, put=__cordl_internal_set_m_UpdatedPositionAfterOnSerialize)) bool  m_UpdatedPositionAfterOnSerialize;

/// @brief Method DeserializeData, addr 0xa741f68, size 0x1d8, virtual false, abstract: false, final false
inline void DeserializeData(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method GetExtrapolatedPositionOffset, addr 0xa741b7c, size 0x2c4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetExtrapolatedPositionOffset() ;

/// @brief Method GetNetworkPosition, addr 0xa741e40, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetNetworkPosition() ;

/// @brief Method GetOldestStoredNetworkPosition, addr 0xa741b04, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetOldestStoredNetworkPosition() ;

static inline ::Photon::Pun::PhotonTransformViewPositionControl* New_ctor(::Photon::Pun::PhotonTransformViewPositionModel*  model) ;

/// @brief Method OnPhotonSerializeView, addr 0xa7416b8, size 0xc4, virtual false, abstract: false, final false
inline void OnPhotonSerializeView(::UnityEngine::Vector3  currentPosition, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SerializeData, addr 0xa741e4c, size 0x11c, virtual false, abstract: false, final false
inline void SerializeData(::UnityEngine::Vector3  currentPosition, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetSynchronizedValues, addr 0xa741504, size 0xc, virtual false, abstract: false, final false
inline void SetSynchronizedValues(::UnityEngine::Vector3  speed, float_t  turnSpeed) ;

/// @brief Method UpdatePosition, addr 0xa740c44, size 0x588, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 UpdatePosition(::UnityEngine::Vector3  currentPosition) ;

constexpr float_t const& __cordl_internal_get_m_CurrentSpeed() const;

constexpr float_t& __cordl_internal_get_m_CurrentSpeed() ;

constexpr double_t const& __cordl_internal_get_m_LastSerializeTime() const;

constexpr double_t& __cordl_internal_get_m_LastSerializeTime() ;

constexpr ::Photon::Pun::PhotonTransformViewPositionModel* const& __cordl_internal_get_m_Model() const;

constexpr ::Photon::Pun::PhotonTransformViewPositionModel*& __cordl_internal_get_m_Model() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_NetworkPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_NetworkPosition() ;

constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>* const& __cordl_internal_get_m_OldNetworkPositions() const;

constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*& __cordl_internal_get_m_OldNetworkPositions() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_SynchronizedSpeed() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_SynchronizedSpeed() ;

constexpr float_t const& __cordl_internal_get_m_SynchronizedTurnSpeed() const;

constexpr float_t& __cordl_internal_get_m_SynchronizedTurnSpeed() ;

constexpr bool const& __cordl_internal_get_m_UpdatedPositionAfterOnSerialize() const;

constexpr bool& __cordl_internal_get_m_UpdatedPositionAfterOnSerialize() ;

constexpr void __cordl_internal_set_m_CurrentSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_LastSerializeTime(double_t  value) ;

constexpr void __cordl_internal_set_m_Model(::Photon::Pun::PhotonTransformViewPositionModel*  value) ;

constexpr void __cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_OldNetworkPositions(::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_m_SynchronizedSpeed(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_SynchronizedTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_UpdatedPositionAfterOnSerialize(bool  value) ;

/// @brief Method .ctor, addr 0xa740858, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::Photon::Pun::PhotonTransformViewPositionModel*  model) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonTransformViewPositionControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewPositionControl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonTransformViewPositionControl(PhotonTransformViewPositionControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewPositionControl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonTransformViewPositionControl(PhotonTransformViewPositionControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29741};

/// @brief Field m_Model, offset: 0x10, size: 0x8, def value: None
 ::Photon::Pun::PhotonTransformViewPositionModel*  ___m_Model;

/// @brief Field m_CurrentSpeed, offset: 0x18, size: 0x4, def value: None
 float_t  ___m_CurrentSpeed;

/// @brief Field m_LastSerializeTime, offset: 0x20, size: 0x8, def value: None
 double_t  ___m_LastSerializeTime;

/// @brief Field m_SynchronizedSpeed, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_SynchronizedSpeed;

/// @brief Field m_SynchronizedTurnSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_SynchronizedTurnSpeed;

/// @brief Field m_NetworkPosition, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_NetworkPosition;

/// @brief Field m_OldNetworkPositions, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*  ___m_OldNetworkPositions;

/// @brief Field m_UpdatedPositionAfterOnSerialize, offset: 0x50, size: 0x1, def value: None
 bool  ___m_UpdatedPositionAfterOnSerialize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionControl, ___m_Model) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionControl, ___m_CurrentSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionControl, ___m_LastSerializeTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionControl, ___m_SynchronizedSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionControl, ___m_SynchronizedTurnSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionControl, ___m_NetworkPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionControl, ___m_OldNetworkPositions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionControl, ___m_UpdatedPositionAfterOnSerialize) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonTransformViewPositionControl) == 0x58, "Size mismatch!");

} // namespace end def Photon::Pun
