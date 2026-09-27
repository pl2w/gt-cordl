#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGestureTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaHandGesture_def.hpp"
#include "GlobalNamespace/zzzz__VRMap_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaGestureTracker)
namespace GlobalNamespace {
class GestureDigitNode;
}
namespace GlobalNamespace {
class GestureHandNode;
}
namespace GlobalNamespace {
class GestureNode;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaGestureTracker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaGestureTracker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaGestureTracker*, "", "GorillaGestureTracker");
// Dependencies GorillaHandGesture, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Transform, UnityEngine.Vector3, VRMap
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaGestureTracker
class CORDL_TYPE GorillaGestureTracker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TickRate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TickRate, put=setStaticF_TickRate)) uint32_t  TickRate;

/// @brief Field _bones, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__bones, put=__cordl_internal_set__bones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _bones;

/// @brief Field _debug, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__debug, put=__cordl_internal_set__debug)) bool  _debug;

/// @brief Field _faceBasisAngles, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__faceBasisAngles, put=__cordl_internal_set__faceBasisAngles)) ::UnityEngine::Quaternion  _faceBasisAngles;

/// @brief Field _faceBasisOffset, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__faceBasisOffset, put=__cordl_internal_set__faceBasisOffset)) ::UnityEngine::Vector3  _faceBasisOffset;

/// @brief Field _flexes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__flexes, put=__cordl_internal_set__flexes)) ::ArrayW<int32_t>  _flexes;

/// @brief Field _gestures, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__gestures, put=__cordl_internal_set__gestures)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaHandGesture>>  _gestures;

/// @brief Field _handBasisAngles, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__handBasisAngles, put=__cordl_internal_set__handBasisAngles)) ::UnityEngine::Vector3  _handBasisAngles;

/// @brief Field _inputs, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputs, put=__cordl_internal_set__inputs)) ::ArrayW<float_t>  _inputs;

/// @brief Field _matchesL, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__matchesL, put=__cordl_internal_set__matchesL)) ::ArrayW<bool>  _matchesL;

/// @brief Field _matchesR, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__matchesR, put=__cordl_internal_set__matchesR)) ::ArrayW<bool>  _matchesR;

/// @brief Field _normals, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__normals, put=__cordl_internal_set__normals)) ::ArrayW<::UnityEngine::Vector3>  _normals;

/// @brief Field _positions, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__positions, put=__cordl_internal_set__positions)) ::ArrayW<::UnityEngine::Vector3>  _positions;

/// @brief Field _rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rig, put=__cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::VRRig>  _rig;

/// @brief Field _rigTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigTransform, put=__cordl_internal_set__rigTransform)) ::UnityW<::UnityEngine::Transform>  _rigTransform;

/// @brief Field _setupDone, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__setupDone, put=__cordl_internal_set__setupDone)) bool  _setupDone;

/// @brief Field _vrNodes, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__vrNodes, put=__cordl_internal_set__vrNodes)) ::ArrayW<::GlobalNamespace::VRMap*>  _vrNodes;

/// @brief Method Awake, addr 0x564eca8, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x564f4b4, size 0x18, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::GorillaGestureTracker* New_ctor() ;

/// @brief Method PollFace, addr 0x564f8ec, size 0xf8, virtual false, abstract: false, final false
inline void PollFace(int32_t  index) ;

/// @brief Method PollGesture, addr 0x564f62c, size 0x2c0, virtual false, abstract: false, final false
inline void PollGesture(int32_t  hand, int32_t  i, float_t  dt, ::by_ref<::ArrayW<bool>>  results) ;

/// @brief Method PollGestures, addr 0x564f5c0, size 0x6c, virtual false, abstract: false, final false
inline void PollGestures() ;

/// @brief Method PollHandAxes, addr 0x564f9e4, size 0x2f0, virtual false, abstract: false, final false
inline void PollHandAxes(int32_t  hand) ;

/// @brief Method PollIndex, addr 0x564feb0, size 0x254, virtual false, abstract: false, final false
inline void PollIndex(int32_t  i, ::by_ref<int32_t>  flex) ;

/// @brief Method PollMiddle, addr 0x5650104, size 0x230, virtual false, abstract: false, final false
inline void PollMiddle(int32_t  i, ::by_ref<int32_t>  flex) ;

/// @brief Method PollNodes, addr 0x564f4cc, size 0xf4, virtual false, abstract: false, final false
inline void PollNodes() ;

/// @brief Method PollThumb, addr 0x564fcd4, size 0x1dc, virtual false, abstract: false, final false
inline void PollThumb(int32_t  i, ::by_ref<int32_t>  flex) ;

/// @brief Method Setup, addr 0x564ecac, size 0x808, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method TrackDigit, addr 0x56505c4, size 0x224, virtual false, abstract: false, final false
inline void TrackDigit(int32_t  digit, ::GlobalNamespace::GestureDigitNode*  node, ::by_ref<int32_t>  tracked, ::by_ref<int32_t>  matches) ;

/// @brief Method TrackHand, addr 0x5650334, size 0xfc, virtual false, abstract: false, final false
inline void TrackHand(int32_t  hand, ::GlobalNamespace::GestureHandNode*  node, ::by_ref<int32_t>  tracked, ::by_ref<int32_t>  matches) ;

/// @brief Method TrackHandAxis, addr 0x5650430, size 0x194, virtual false, abstract: false, final false
inline void TrackHandAxis(int32_t  axis, ::GlobalNamespace::GestureNode*  node, ::by_ref<int32_t>  tracked, ::by_ref<int32_t>  matches) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__bones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__bones() ;

constexpr bool const& __cordl_internal_get__debug() const;

constexpr bool& __cordl_internal_get__debug() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__faceBasisAngles() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__faceBasisAngles() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__faceBasisOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__faceBasisOffset() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__flexes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__flexes() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaHandGesture>> const& __cordl_internal_get__gestures() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaHandGesture>>& __cordl_internal_get__gestures() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__handBasisAngles() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__handBasisAngles() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__inputs() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__inputs() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get__matchesL() const;

constexpr ::ArrayW<bool>& __cordl_internal_get__matchesL() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get__matchesR() const;

constexpr ::ArrayW<bool>& __cordl_internal_get__matchesR() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__normals() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__normals() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__positions() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__positions() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__rig() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rigTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rigTransform() ;

constexpr bool const& __cordl_internal_get__setupDone() const;

constexpr bool& __cordl_internal_get__setupDone() ;

constexpr ::ArrayW<::GlobalNamespace::VRMap*> const& __cordl_internal_get__vrNodes() const;

constexpr ::ArrayW<::GlobalNamespace::VRMap*>& __cordl_internal_get__vrNodes() ;

constexpr void __cordl_internal_set__bones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__debug(bool  value) ;

constexpr void __cordl_internal_set__faceBasisAngles(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__faceBasisOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__flexes(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__gestures(::ArrayW<::UnityW<::GlobalNamespace::GorillaHandGesture>>  value) ;

constexpr void __cordl_internal_set__handBasisAngles(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__inputs(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__matchesL(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set__matchesR(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set__normals(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__rigTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__setupDone(bool  value) ;

constexpr void __cordl_internal_set__vrNodes(::ArrayW<::GlobalNamespace::VRMap*>  value) ;

/// @brief Method .ctor, addr 0x56507e8, size 0x20c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline uint32_t getStaticF_TickRate() ;

static inline void setStaticF_TickRate(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaGestureTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaGestureTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaGestureTracker(GorillaGestureTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaGestureTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaGestureTracker(GorillaGestureTracker const& ) = delete;

/// @brief Field A_DIGITS offset 0xffffffff size 0x4
static constexpr int32_t  A_DIGITS{static_cast<int32_t>(0x3)};

/// @brief Field A_PALM offset 0xffffffff size 0x4
static constexpr int32_t  A_PALM{static_cast<int32_t>(0x1)};

/// @brief Field A_WRIST offset 0xffffffff size 0x4
static constexpr int32_t  A_WRIST{static_cast<int32_t>(0x2)};

/// @brief Field D_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  D_INDEX{static_cast<int32_t>(0x5)};

/// @brief Field D_MIDDLE offset 0xffffffff size 0x4
static constexpr int32_t  D_MIDDLE{static_cast<int32_t>(0x6)};

/// @brief Field D_THUMB offset 0xffffffff size 0x4
static constexpr int32_t  D_THUMB{static_cast<int32_t>(0x4)};

/// @brief Field H_BENT offset 0xffffffff size 0x4
static constexpr int32_t  H_BENT{static_cast<int32_t>(0x0)};

/// @brief Field H_CLOSED offset 0xffffffff size 0x4
static constexpr int32_t  H_CLOSED{static_cast<int32_t>(0x6)};

/// @brief Field H_OPEN offset 0xffffffff size 0x4
static constexpr int32_t  H_OPEN{static_cast<int32_t>(0x3)};

/// @brief Field L_DIGITS offset 0xffffffff size 0x4
static constexpr int32_t  L_DIGITS{static_cast<int32_t>(0xb)};

/// @brief Field L_HAND offset 0xffffffff size 0x4
static constexpr int32_t  L_HAND{static_cast<int32_t>(0x8)};

/// @brief Field L_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  L_INDEX{static_cast<int32_t>(0xd)};

/// @brief Field L_MIDDLE offset 0xffffffff size 0x4
static constexpr int32_t  L_MIDDLE{static_cast<int32_t>(0xe)};

/// @brief Field L_PALM offset 0xffffffff size 0x4
static constexpr int32_t  L_PALM{static_cast<int32_t>(0x9)};

/// @brief Field L_THUMB offset 0xffffffff size 0x4
static constexpr int32_t  L_THUMB{static_cast<int32_t>(0xc)};

/// @brief Field L_WRIST offset 0xffffffff size 0x4
static constexpr int32_t  L_WRIST{static_cast<int32_t>(0xa)};

/// @brief Field N_FACE offset 0xffffffff size 0x4
static constexpr int32_t  N_FACE{static_cast<int32_t>(0x0)};

/// @brief Field N_HAND offset 0xffffffff size 0x4
static constexpr int32_t  N_HAND{static_cast<int32_t>(0x0)};

/// @brief Field N_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  N_SIZE{static_cast<int32_t>(0xf)};

/// @brief Field R_DIGITS offset 0xffffffff size 0x4
static constexpr int32_t  R_DIGITS{static_cast<int32_t>(0x4)};

/// @brief Field R_HAND offset 0xffffffff size 0x4
static constexpr int32_t  R_HAND{static_cast<int32_t>(0x1)};

/// @brief Field R_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  R_INDEX{static_cast<int32_t>(0x6)};

/// @brief Field R_MIDDLE offset 0xffffffff size 0x4
static constexpr int32_t  R_MIDDLE{static_cast<int32_t>(0x7)};

/// @brief Field R_PALM offset 0xffffffff size 0x4
static constexpr int32_t  R_PALM{static_cast<int32_t>(0x2)};

/// @brief Field R_THUMB offset 0xffffffff size 0x4
static constexpr int32_t  R_THUMB{static_cast<int32_t>(0x5)};

/// @brief Field R_WRIST offset 0xffffffff size 0x4
static constexpr int32_t  R_WRIST{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{725};

/// [SerializeField]
/// @brief Field _rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____rig;

/// [SerializeField]
/// @brief Field _rigTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rigTransform;

/// [Space]
/// [SerializeField]
/// @brief Field _handBasisAngles, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____handBasisAngles;

/// [Space]
/// [SerializeField]
/// @brief Field _faceBasisOffset, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____faceBasisOffset;

/// [SerializeField]
/// @brief Field _faceBasisAngles, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____faceBasisAngles;

/// [Space]
/// [SerializeField]
/// @brief Field _debug, offset: 0x58, size: 0x1, def value: None
 bool  ____debug;

/// @brief Field _setupDone, offset: 0x59, size: 0x1, def value: None
 bool  ____setupDone;

/// [Space]
/// [SerializeField]
/// @brief Field _bones, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____bones;

/// @brief Field _vrNodes, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VRMap*>  ____vrNodes;

/// @brief Field _inputs, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<float_t>  ____inputs;

/// @brief Field _flexes, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____flexes;

/// @brief Field _normals, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____normals;

/// @brief Field _positions, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____positions;

/// [Space]
/// [SerializeField]
/// @brief Field _gestures, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaHandGesture>>  ____gestures;

/// @brief Field _matchesR, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<bool>  ____matchesR;

/// @brief Field _matchesL, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<bool>  ____matchesL;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____rig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____rigTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____handBasisAngles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____faceBasisOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____faceBasisAngles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____debug) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____setupDone) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____bones) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____vrNodes) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____inputs) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____flexes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____normals) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____positions) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____gestures) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____matchesR) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGestureTracker, ____matchesL) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaGestureTracker) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
