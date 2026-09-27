#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaNetworkTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaNetworkTransform_NetTransformData_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaNetworkTransform)
namespace GlobalNamespace {
struct GorillaNetworkTransform_NetTransformData;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaNetworkTransform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaNetworkTransform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaNetworkTransform*, "", "GorillaNetworkTransform");
// [NetworkBehaviourWeaved(15)]
// Dependencies GorillaNetworkTransform::NetTransformData, NetworkComponent, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaNetworkTransform
class CORDL_TYPE GorillaNetworkTransform : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using NetTransformData = ::GlobalNamespace::GorillaNetworkTransform_NetTransformData;

 __declspec(property(get=get_RespectOwnership)) bool  RespectOwnership;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x105, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _data, offset 0x108, size 0x3c 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::GlobalNamespace::GorillaNetworkTransform_NetTransformData  _data;

/// @brief Field clampDistanceFromSpawn, offset 0x9d, size 0x1 
 __declspec(property(get=__cordl_internal_get_clampDistanceFromSpawn, put=__cordl_internal_set_clampDistanceFromSpawn)) bool  clampDistanceFromSpawn;

/// @brief Field clampOriginPoint, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_clampOriginPoint, put=__cordl_internal_set_clampOriginPoint)) ::UnityEngine::Vector3  clampOriginPoint;

/// @brief Field clampToSpawn, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_clampToSpawn, put=__cordl_internal_set_clampToSpawn)) bool  clampToSpawn;

/// [Networked]
/// @brief [NetworkedWeaved(0, 15)]
 __declspec(property(get=get_data, put=set_data)) ::GlobalNamespace::GorillaNetworkTransform_NetTransformData  data;

/// @brief Field m_Angle, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Angle, put=__cordl_internal_set_m_Angle)) float_t  m_Angle;

/// @brief Field m_Distance, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Distance, put=__cordl_internal_set_m_Distance)) float_t  m_Distance;

/// @brief Field m_NetworkPosition, offset 0xd0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_NetworkPosition, put=__cordl_internal_set_m_NetworkPosition)) ::UnityEngine::Vector3  m_NetworkPosition;

/// @brief Field m_NetworkRotation, offset 0xf4, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_NetworkRotation, put=__cordl_internal_set_m_NetworkRotation)) ::UnityEngine::Quaternion  m_NetworkRotation;

/// @brief Field m_NetworkScale, offset 0xe8, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_NetworkScale, put=__cordl_internal_set_m_NetworkScale)) ::UnityEngine::Vector3  m_NetworkScale;

/// @brief Field m_StoredPosition, offset 0xdc, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_StoredPosition, put=__cordl_internal_set_m_StoredPosition)) ::UnityEngine::Vector3  m_StoredPosition;

/// @brief Field m_SynchronizePosition, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SynchronizePosition, put=__cordl_internal_set_m_SynchronizePosition)) bool  m_SynchronizePosition;

/// @brief Field m_SynchronizeRotation, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SynchronizeRotation, put=__cordl_internal_set_m_SynchronizeRotation)) bool  m_SynchronizeRotation;

/// @brief Field m_SynchronizeScale, offset 0xba, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SynchronizeScale, put=__cordl_internal_set_m_SynchronizeScale)) bool  m_SynchronizeScale;

/// @brief Field m_UseLocal, offset 0x9b, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseLocal, put=__cordl_internal_set_m_UseLocal)) bool  m_UseLocal;

/// @brief Field m_Velocity, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Velocity, put=__cordl_internal_set_m_Velocity)) ::UnityEngine::Vector3  m_Velocity;

/// @brief Field m_firstTake, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_firstTake, put=__cordl_internal_set_m_firstTake)) bool  m_firstTake;

/// @brief Field maxDistance, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field maxDistanceSquare, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceSquare, put=__cordl_internal_set_maxDistanceSquare)) float_t  maxDistanceSquare;

/// @brief Field respectOwnership, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_respectOwnership, put=__cordl_internal_set_respectOwnership)) bool  respectOwnership;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x58f2fcc, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x58f4714, size 0x70, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x58f4784, size 0x74, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method GTAddition_DoTeleport, addr 0x58f46e4, size 0xc, virtual false, abstract: false, final false
inline void GTAddition_DoTeleport() ;

static inline ::GlobalNamespace::GorillaNetworkTransform* New_ctor() ;

/// @brief Method OnDisable, addr 0x58f31f0, size 0x10c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58f309c, size 0x154, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadDataFusion, addr 0x58f3c24, size 0x54, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x58f4458, size 0x28c, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SharedRead, addr 0x58f3c78, size 0x59c, virtual false, abstract: false, final false
inline void SharedRead(::GlobalNamespace::GorillaNetworkTransform_NetTransformData  data) ;

/// @brief Method SharedWrite, addr 0x58f39d8, size 0x24c, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaNetworkTransform_NetTransformData SharedWrite() ;

/// @brief Method Tick, addr 0x58f32fc, size 0x5c8, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method WriteDataFusion, addr 0x58f38c4, size 0x114, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x58f4214, size 0x244, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::GlobalNamespace::GorillaNetworkTransform_NetTransformData const& __cordl_internal_get__data() const;

constexpr ::GlobalNamespace::GorillaNetworkTransform_NetTransformData& __cordl_internal_get__data() ;

constexpr bool const& __cordl_internal_get_clampDistanceFromSpawn() const;

constexpr bool& __cordl_internal_get_clampDistanceFromSpawn() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_clampOriginPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_clampOriginPoint() ;

constexpr bool const& __cordl_internal_get_clampToSpawn() const;

constexpr bool& __cordl_internal_get_clampToSpawn() ;

constexpr float_t const& __cordl_internal_get_m_Angle() const;

constexpr float_t& __cordl_internal_get_m_Angle() ;

constexpr float_t const& __cordl_internal_get_m_Distance() const;

constexpr float_t& __cordl_internal_get_m_Distance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_NetworkPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_NetworkPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_NetworkRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_NetworkRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_NetworkScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_NetworkScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StoredPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StoredPosition() ;

constexpr bool const& __cordl_internal_get_m_SynchronizePosition() const;

constexpr bool& __cordl_internal_get_m_SynchronizePosition() ;

constexpr bool const& __cordl_internal_get_m_SynchronizeRotation() const;

constexpr bool& __cordl_internal_get_m_SynchronizeRotation() ;

constexpr bool const& __cordl_internal_get_m_SynchronizeScale() const;

constexpr bool& __cordl_internal_get_m_SynchronizeScale() ;

constexpr bool const& __cordl_internal_get_m_UseLocal() const;

constexpr bool& __cordl_internal_get_m_UseLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Velocity() ;

constexpr bool const& __cordl_internal_get_m_firstTake() const;

constexpr bool& __cordl_internal_get_m_firstTake() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr float_t const& __cordl_internal_get_maxDistanceSquare() const;

constexpr float_t& __cordl_internal_get_maxDistanceSquare() ;

constexpr bool const& __cordl_internal_get_respectOwnership() const;

constexpr bool& __cordl_internal_get_respectOwnership() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__data(::GlobalNamespace::GorillaNetworkTransform_NetTransformData  value) ;

constexpr void __cordl_internal_set_clampDistanceFromSpawn(bool  value) ;

constexpr void __cordl_internal_set_clampOriginPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_clampToSpawn(bool  value) ;

constexpr void __cordl_internal_set_m_Angle(float_t  value) ;

constexpr void __cordl_internal_set_m_Distance(float_t  value) ;

constexpr void __cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_NetworkRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_NetworkScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_StoredPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_SynchronizePosition(bool  value) ;

constexpr void __cordl_internal_set_m_SynchronizeRotation(bool  value) ;

constexpr void __cordl_internal_set_m_SynchronizeScale(bool  value) ;

constexpr void __cordl_internal_set_m_UseLocal(bool  value) ;

constexpr void __cordl_internal_set_m_Velocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_firstTake(bool  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_maxDistanceSquare(float_t  value) ;

constexpr void __cordl_internal_set_respectOwnership(bool  value) ;

/// @brief Method .ctor, addr 0x58f46f0, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RespectOwnership, addr 0x58f2ee8, size 0x8, virtual false, abstract: false, final false
inline bool get_RespectOwnership() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x58f2ef0, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Method get_data, addr 0x58f2f00, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaNetworkTransform_NetTransformData get_data() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x58f2ef8, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

/// @brief Method set_data, addr 0x58f2f70, size 0x5c, virtual false, abstract: false, final false
inline void set_data(::GlobalNamespace::GorillaNetworkTransform_NetTransformData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaNetworkTransform(GorillaNetworkTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaNetworkTransform(GorillaNetworkTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2121};

/// [Tooltip("Indicates if localPosition and localRotation should be used. Scale ignores this setting, and always uses localScale to avoid issues with lossyScale.")]
/// @brief Field m_UseLocal, offset: 0x9b, size: 0x1, def value: None
 bool  ___m_UseLocal;

/// [SerializeField]
/// @brief Field respectOwnership, offset: 0x9c, size: 0x1, def value: None
 bool  ___respectOwnership;

/// [SerializeField]
/// @brief Field clampDistanceFromSpawn, offset: 0x9d, size: 0x1, def value: None
 bool  ___clampDistanceFromSpawn;

/// [SerializeField]
/// @brief Field maxDistance, offset: 0xa0, size: 0x4, def value: None
 float_t  ___maxDistance;

/// @brief Field maxDistanceSquare, offset: 0xa4, size: 0x4, def value: None
 float_t  ___maxDistanceSquare;

/// [SerializeField]
/// @brief Field clampToSpawn, offset: 0xa8, size: 0x1, def value: None
 bool  ___clampToSpawn;

/// [Tooltip("Use this if clampToSpawn is false, to set the center point to check the synced position against")]
/// [SerializeField]
/// @brief Field clampOriginPoint, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___clampOriginPoint;

/// @brief Field m_SynchronizePosition, offset: 0xb8, size: 0x1, def value: None
 bool  ___m_SynchronizePosition;

/// @brief Field m_SynchronizeRotation, offset: 0xb9, size: 0x1, def value: None
 bool  ___m_SynchronizeRotation;

/// @brief Field m_SynchronizeScale, offset: 0xba, size: 0x1, def value: None
 bool  ___m_SynchronizeScale;

/// @brief Field m_Distance, offset: 0xbc, size: 0x4, def value: None
 float_t  ___m_Distance;

/// @brief Field m_Angle, offset: 0xc0, size: 0x4, def value: None
 float_t  ___m_Angle;

/// @brief Field m_Velocity, offset: 0xc4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Velocity;

/// @brief Field m_NetworkPosition, offset: 0xd0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_NetworkPosition;

/// @brief Field m_StoredPosition, offset: 0xdc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_StoredPosition;

/// @brief Field m_NetworkScale, offset: 0xe8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_NetworkScale;

/// @brief Field m_NetworkRotation, offset: 0xf4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_NetworkRotation;

/// @brief Field m_firstTake, offset: 0x104, size: 0x1, def value: None
 bool  ___m_firstTake;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x105, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [WeaverGenerated]
/// [DefaultForProperty("data", 0, 15)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _data, offset: 0x108, size: 0x3c, def value: None
 ::GlobalNamespace::GorillaNetworkTransform_NetTransformData  ____data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_UseLocal) == 0x9b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___respectOwnership) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___clampDistanceFromSpawn) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___maxDistance) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___maxDistanceSquare) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___clampToSpawn) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___clampOriginPoint) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_SynchronizePosition) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_SynchronizeRotation) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_SynchronizeScale) == 0xba, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_Distance) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_Angle) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_Velocity) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_NetworkPosition) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_StoredPosition) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_NetworkScale) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_NetworkRotation) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ___m_firstTake) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ____TickRunning_k__BackingField) == 0x105, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkTransform, ____data) == 0x108, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaNetworkTransform) == 0x148, "Size mismatch!");

} // namespace end def GlobalNamespace
