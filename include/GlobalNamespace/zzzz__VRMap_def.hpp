#pragma once
// IWYU pragma private; include "GlobalNamespace/VRMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VRMap)
namespace GlobalNamespace {
class NetworkVector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VRMap;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRMap*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRMap*, "", "VRMap");
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.XR.InputDevice, UnityEngine.XR.XRNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRMap
class CORDL_TYPE VRMap : public ::System::Object {
public:
// Declarations
/// @brief Field calcT, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_calcT, put=__cordl_internal_set_calcT)) float_t  calcT;

/// @brief Field handholdOverrideTarget, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_handholdOverrideTarget, put=__cordl_internal_set_handholdOverrideTarget)) ::UnityW<::UnityEngine::Transform>  handholdOverrideTarget;

/// @brief Field handholdOverrideTargetOffset, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_handholdOverrideTargetOffset, put=__cordl_internal_set_handholdOverrideTargetOffset)) ::UnityEngine::Vector3  handholdOverrideTargetOffset;

/// @brief Field hasInputDevice, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasInputDevice, put=__cordl_internal_set_hasInputDevice)) bool  hasInputDevice;

/// @brief Field myInputDevice, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_myInputDevice, put=__cordl_internal_set_myInputDevice)) ::UnityEngine::XR::InputDevice  myInputDevice;

/// @brief Field netSyncPos, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_netSyncPos, put=__cordl_internal_set_netSyncPos)) ::GlobalNamespace::NetworkVector3*  netSyncPos;

/// @brief Field overrideTarget, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideTarget, put=__cordl_internal_set_overrideTarget)) ::UnityW<::UnityEngine::Transform>  overrideTarget;

/// @brief Field rigTarget, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigTarget, put=__cordl_internal_set_rigTarget)) ::UnityW<::UnityEngine::Transform>  rigTarget;

 __declspec(property(get=get_syncPos, put=set_syncPos)) ::UnityEngine::Vector3  syncPos;

/// @brief Field syncRotation, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_syncRotation, put=__cordl_internal_set_syncRotation)) ::UnityEngine::Quaternion  syncRotation;

/// @brief Field trackingPositionOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_trackingPositionOffset, put=__cordl_internal_set_trackingPositionOffset)) ::UnityEngine::Vector3  trackingPositionOffset;

/// @brief Field trackingRotationOffset, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_trackingRotationOffset, put=__cordl_internal_set_trackingRotationOffset)) ::UnityEngine::Vector3  trackingRotationOffset;

/// @brief Field vrTargetNode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_vrTargetNode, put=__cordl_internal_set_vrTargetNode)) ::UnityEngine::XR::XRNode  vrTargetNode;

/// @brief Method GetExtrapolatedControllerPosition, addr 0x573e01c, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetExtrapolatedControllerPosition() ;

/// @brief Method Initialize, addr 0x57460d4, size 0x4, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method LerpFinger, addr 0x5746930, size 0x4, virtual true, abstract: false, final false
inline void LerpFinger(float_t  lerpValue, bool  isOther) ;

/// @brief Method MapMine, addr 0x57461d8, size 0x738, virtual false, abstract: false, final false
inline void MapMine(float_t  ratio, ::UnityEngine::Transform*  playerOffsetTransform) ;

/// @brief Method MapMyFinger, addr 0x574692c, size 0x4, virtual true, abstract: false, final false
inline void MapMyFinger(float_t  lerpValue) ;

/// @brief Method MapOther, addr 0x57460d8, size 0x100, virtual false, abstract: false, final false
inline void MapOther(float_t  lerpValue) ;

/// @brief Method MapOtherFinger, addr 0x5746910, size 0x1c, virtual true, abstract: false, final false
inline void MapOtherFinger(float_t  handSync, float_t  lerpValue) ;

static inline ::GlobalNamespace::VRMap* New_ctor() ;

constexpr float_t const& __cordl_internal_get_calcT() const;

constexpr float_t& __cordl_internal_get_calcT() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_handholdOverrideTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_handholdOverrideTarget() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_handholdOverrideTargetOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_handholdOverrideTargetOffset() ;

constexpr bool const& __cordl_internal_get_hasInputDevice() const;

constexpr bool& __cordl_internal_get_hasInputDevice() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_myInputDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_myInputDevice() ;

constexpr ::GlobalNamespace::NetworkVector3* const& __cordl_internal_get_netSyncPos() const;

constexpr ::GlobalNamespace::NetworkVector3*& __cordl_internal_get_netSyncPos() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_overrideTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_overrideTarget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rigTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rigTarget() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_syncRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_syncRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_trackingPositionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_trackingPositionOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_trackingRotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_trackingRotationOffset() ;

constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_vrTargetNode() const;

constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_vrTargetNode() ;

constexpr void __cordl_internal_set_calcT(float_t  value) ;

constexpr void __cordl_internal_set_handholdOverrideTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_handholdOverrideTargetOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_hasInputDevice(bool  value) ;

constexpr void __cordl_internal_set_myInputDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_netSyncPos(::GlobalNamespace::NetworkVector3*  value) ;

constexpr void __cordl_internal_set_overrideTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rigTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_syncRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_trackingPositionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_trackingRotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_vrTargetNode(::UnityEngine::XR::XRNode  value) ;

/// @brief Method .ctor, addr 0x5746934, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_syncPos, addr 0x57460a0, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_syncPos() ;

/// @brief Method set_syncPos, addr 0x57460bc, size 0x18, virtual false, abstract: false, final false
inline void set_syncPos(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRMap(VRMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRMap(VRMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1274};

/// @brief Field vrTargetNode, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::XR::XRNode  ___vrTargetNode;

/// @brief Field overrideTarget, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___overrideTarget;

/// @brief Field rigTarget, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rigTarget;

/// @brief Field trackingPositionOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___trackingPositionOffset;

/// @brief Field trackingRotationOffset, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___trackingRotationOffset;

/// @brief Field netSyncPos, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::NetworkVector3*  ___netSyncPos;

/// @brief Field syncRotation, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___syncRotation;

/// @brief Field calcT, offset: 0x58, size: 0x4, def value: None
 float_t  ___calcT;

/// @brief Field myInputDevice, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___myInputDevice;

/// @brief Field hasInputDevice, offset: 0x70, size: 0x1, def value: None
 bool  ___hasInputDevice;

/// @brief Field handholdOverrideTarget, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___handholdOverrideTarget;

/// @brief Field handholdOverrideTargetOffset, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___handholdOverrideTargetOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRMap, ___vrTargetNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMap, ___overrideTarget) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMap, ___rigTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMap, ___trackingPositionOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMap, ___trackingRotationOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMap, ___netSyncPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMap, ___syncRotation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMap, ___calcT) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMap, ___myInputDevice) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMap, ___hasInputDevice) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMap, ___handholdOverrideTarget) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRMap, ___handholdOverrideTargetOffset) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRMap) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
