#pragma once
// IWYU pragma private; include "Oculus/Interaction/TouchShadowHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchShadowHand)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class ShadowHand;
}
namespace Oculus::Interaction {
class ColliderGroup;
}
namespace Oculus::Interaction {
struct HandSphere;
}
namespace Oculus::Interaction {
class IHandSphereMap;
}
namespace Oculus::Interaction {
class TouchShadowHand_GrabTouchInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class TouchShadowHand;
}
namespace Oculus::Interaction {
class TouchShadowHand_GrabTouchInfo;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TouchShadowHand*);
MARK_REF_T(::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TouchShadowHand*, "Oculus.Interaction", "TouchShadowHand");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*, "Oculus.Interaction", "TouchShadowHand/GrabTouchInfo");
// Dependencies Oculus.Interaction.Input.Handedness, System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TouchShadowHand
class CORDL_TYPE TouchShadowHand : public ::System::Object {
public:
// Declarations
using GrabTouchInfo = ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo;

/// @brief Field Iterations, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Iterations, put=__cordl_internal_set_Iterations)) int32_t  Iterations;

 __declspec(property(get=get_PushoutIterations, put=set_PushoutIterations)) int32_t  PushoutIterations;

 __declspec(property(get=get_ShadowHand)) ::Oculus::Interaction::Input::ShadowHand*  ShadowHand;

 __declspec(property(get=get_TotalIterations, put=set_TotalIterations)) int32_t  TotalIterations;

/// @brief Field _handSphereMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__handSphereMap, put=__cordl_internal_set__handSphereMap)) ::Oculus::Interaction::IHandSphereMap*  _handSphereMap;

/// @brief Field _handedness, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__handedness, put=__cordl_internal_set__handedness)) ::Oculus::Interaction::Input::Handedness  _handedness;

/// @brief Field _pushoutIterations, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__pushoutIterations, put=__cordl_internal_set__pushoutIterations)) int32_t  _pushoutIterations;

/// @brief Field _shadowHand, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__shadowHand, put=__cordl_internal_set__shadowHand)) ::Oculus::Interaction::Input::ShadowHand*  _shadowHand;

/// @brief Field _sphereHit, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__sphereHit, put=__cordl_internal_set__sphereHit)) ::System::Collections::Generic::List_1<int32_t>*  _sphereHit;

/// @brief Field _spheres, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__spheres, put=__cordl_internal_set__spheres)) ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*  _spheres;

/// @brief Field _totalIterations, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalIterations, put=__cordl_internal_set__totalIterations)) int32_t  _totalIterations;

/// @brief Method CheckFingerTouch, addr 0xa467130, size 0x5c, virtual false, abstract: false, final false
inline bool CheckFingerTouch(int32_t  fingerIdx, int32_t  jointIdx, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset, ::System::Collections::Generic::List_1<int32_t>*  sphereHit) ;

/// @brief Method CheckSphereCollision, addr 0xa4696bc, size 0x280, virtual false, abstract: false, final false
inline bool CheckSphereCollision(::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset, ::System::Collections::Generic::List_1<int32_t>*  sphereHit, ::System::Collections::Generic::List_1<int32_t>*  sphereIndices) ;

/// @brief Method CheckTouchFingers, addr 0xa46993c, size 0x148, virtual false, abstract: false, final false
inline void CheckTouchFingers(::Oculus::Interaction::Input::ShadowHand*  hand, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*  result) ;

/// @brief Method GetJointsFromShadow, addr 0xa4674e4, size 0xf8, virtual false, abstract: false, final false
inline void GetJointsFromShadow(::ArrayW<::Oculus::Interaction::Input::HandJointId>  jointIds, ::ArrayW<::UnityEngine::Pose>  outJoints, bool  local) ;

/// @brief Method GrabConformFinger, addr 0xa46718c, size 0x358, virtual false, abstract: false, final false
inline bool GrabConformFinger(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  fromHand, ::Oculus::Interaction::Input::ShadowHand*  toHand, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset) ;

/// @brief Method GrabConformFingers, addr 0xa469a84, size 0x7c, virtual false, abstract: false, final false
inline void GrabConformFingers(::Oculus::Interaction::Input::ShadowHand*  fromHand, ::Oculus::Interaction::Input::ShadowHand*  toHand, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset) ;

/// @brief Method GrabReleaseFinger, addr 0xa4677b8, size 0xf8, virtual false, abstract: false, final false
inline bool GrabReleaseFinger(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  fromHand, ::Oculus::Interaction::Input::ShadowHand*  toHand, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset) ;

/// @brief Method GrabTouch, addr 0xa466a10, size 0xd4, virtual false, abstract: false, final false
inline void GrabTouch(::Oculus::Interaction::Input::ShadowHand*  fromHand, ::Oculus::Interaction::Input::ShadowHand*  toHand, ::Oculus::Interaction::ColliderGroup*  colliderGroup, bool  pushout, ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*  result) ;

/// @brief Method GrabTouchStep, addr 0xa469b00, size 0x608, virtual false, abstract: false, final false
inline void GrabTouchStep(::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, ::Oculus::Interaction::ColliderGroup*  colliderGroup, int32_t  iteration, ::UnityEngine::Vector3  colliderOffset, bool  pushout, ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*  result) ;

/// @brief Method LoadSpheresForFingerFromShadow, addr 0xa469390, size 0x1d4, virtual false, abstract: false, final false
inline void LoadSpheresForFingerFromShadow(int32_t  fingerIdx, int32_t  jointIdx) ;

/// @brief Method LoadSpheresForHandFromShadow, addr 0xa469564, size 0x158, virtual false, abstract: false, final false
inline void LoadSpheresForHandFromShadow() ;

static inline ::Oculus::Interaction::TouchShadowHand* New_ctor(::Oculus::Interaction::IHandSphereMap*  map, ::Oculus::Interaction::Input::Handedness  handedness, int32_t  iterations) ;

/// @brief Method PushoutFinger, addr 0xa466e24, size 0xf8, virtual false, abstract: false, final false
inline bool PushoutFinger(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset) ;

/// @brief Method SetShadowFingerFrom, addr 0xa46701c, size 0x114, virtual false, abstract: false, final false
inline void SetShadowFingerFrom(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  from) ;

/// @brief Method SetShadowFingerFromLerp, addr 0xa468ed0, size 0x194, virtual false, abstract: false, final false
inline void SetShadowFingerFromLerp(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, float_t  t) ;

/// @brief Method SetShadowFingerFromLerps, addr 0xa469064, size 0x1a8, virtual false, abstract: false, final false
inline void SetShadowFingerFromLerps(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, ::ArrayW<float_t>  t) ;

/// @brief Method SetShadowFromLerpHands, addr 0xa46920c, size 0x184, virtual false, abstract: false, final false
inline void SetShadowFromLerpHands(::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, float_t  t) ;

/// @brief Method SetShadowRootFromHand, addr 0xa467d24, size 0x64, virtual false, abstract: false, final false
inline void SetShadowRootFromHand(::Oculus::Interaction::Input::ShadowHand*  hand) ;

/// @brief Method SetShadowRootFromHands, addr 0xa466ae4, size 0xb0, virtual false, abstract: false, final false
inline void SetShadowRootFromHands(::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, float_t  t) ;

constexpr int32_t const& __cordl_internal_get_Iterations() const;

constexpr int32_t& __cordl_internal_get_Iterations() ;

constexpr ::Oculus::Interaction::IHandSphereMap* const& __cordl_internal_get__handSphereMap() const;

constexpr ::Oculus::Interaction::IHandSphereMap*& __cordl_internal_get__handSphereMap() ;

constexpr ::Oculus::Interaction::Input::Handedness const& __cordl_internal_get__handedness() const;

constexpr ::Oculus::Interaction::Input::Handedness& __cordl_internal_get__handedness() ;

constexpr int32_t const& __cordl_internal_get__pushoutIterations() const;

constexpr int32_t& __cordl_internal_get__pushoutIterations() ;

constexpr ::Oculus::Interaction::Input::ShadowHand* const& __cordl_internal_get__shadowHand() const;

constexpr ::Oculus::Interaction::Input::ShadowHand*& __cordl_internal_get__shadowHand() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__sphereHit() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__sphereHit() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>* const& __cordl_internal_get__spheres() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*& __cordl_internal_get__spheres() ;

constexpr int32_t const& __cordl_internal_get__totalIterations() const;

constexpr int32_t& __cordl_internal_get__totalIterations() ;

constexpr void __cordl_internal_set_Iterations(int32_t  value) ;

constexpr void __cordl_internal_set__handSphereMap(::Oculus::Interaction::IHandSphereMap*  value) ;

constexpr void __cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value) ;

constexpr void __cordl_internal_set__pushoutIterations(int32_t  value) ;

constexpr void __cordl_internal_set__shadowHand(::Oculus::Interaction::Input::ShadowHand*  value) ;

constexpr void __cordl_internal_set__sphereHit(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__spheres(::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*  value) ;

constexpr void __cordl_internal_set__totalIterations(int32_t  value) ;

/// @brief Method .ctor, addr 0xa465f90, size 0x168, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::IHandSphereMap*  map, ::Oculus::Interaction::Input::Handedness  handedness, int32_t  iterations) ;

/// @brief Method get_PushoutIterations, addr 0xa468eb4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PushoutIterations() ;

/// @brief Method get_ShadowHand, addr 0xa468e90, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ShadowHand* get_ShadowHand() ;

/// @brief Method get_TotalIterations, addr 0xa468e98, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TotalIterations() ;

/// @brief Method set_PushoutIterations, addr 0xa468ebc, size 0x14, virtual false, abstract: false, final false
inline void set_PushoutIterations(int32_t  value) ;

/// @brief Method set_TotalIterations, addr 0xa468ea0, size 0x14, virtual false, abstract: false, final false
inline void set_TotalIterations(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchShadowHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchShadowHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchShadowHand(TouchShadowHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchShadowHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchShadowHand(TouchShadowHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15894};

/// @brief Field _shadowHand, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ShadowHand*  ____shadowHand;

/// @brief Field _handSphereMap, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::IHandSphereMap*  ____handSphereMap;

/// @brief Field _handedness, offset: 0x20, size: 0x4, def value: None
 ::Oculus::Interaction::Input::Handedness  ____handedness;

/// @brief Field _spheres, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*  ____spheres;

/// @brief Field _totalIterations, offset: 0x30, size: 0x4, def value: None
 int32_t  ____totalIterations;

/// @brief Field _pushoutIterations, offset: 0x34, size: 0x4, def value: None
 int32_t  ____pushoutIterations;

/// @brief Field Iterations, offset: 0x38, size: 0x4, def value: None
 int32_t  ___Iterations;

/// @brief Field _sphereHit, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____sphereHit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TouchShadowHand, ____shadowHand) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchShadowHand, ____handSphereMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchShadowHand, ____handedness) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchShadowHand, ____spheres) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchShadowHand, ____totalIterations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchShadowHand, ____pushoutIterations) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchShadowHand, ___Iterations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchShadowHand, ____sphereHit) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TouchShadowHand) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TouchShadowHand/GrabTouchInfo
class CORDL_TYPE TouchShadowHand_GrabTouchInfo : public ::System::Object {
public:
// Declarations
/// @brief Field grabT, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabT, put=__cordl_internal_set_grabT)) float_t  grabT;

/// @brief Field grabbing, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_grabbing, put=__cordl_internal_set_grabbing)) bool  grabbing;

/// @brief Field grabbingFingers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbingFingers, put=__cordl_internal_set_grabbingFingers)) ::ArrayW<bool>  grabbingFingers;

/// @brief Field offset, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

static inline ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo* New_ctor() ;

constexpr float_t const& __cordl_internal_get_grabT() const;

constexpr float_t& __cordl_internal_get_grabT() ;

constexpr bool const& __cordl_internal_get_grabbing() const;

constexpr bool& __cordl_internal_get_grabbing() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_grabbingFingers() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_grabbingFingers() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr void __cordl_internal_set_grabT(float_t  value) ;

constexpr void __cordl_internal_set_grabbing(bool  value) ;

constexpr void __cordl_internal_set_grabbingFingers(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa4669ac, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchShadowHand_GrabTouchInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchShadowHand_GrabTouchInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchShadowHand_GrabTouchInfo(TouchShadowHand_GrabTouchInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchShadowHand_GrabTouchInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchShadowHand_GrabTouchInfo(TouchShadowHand_GrabTouchInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15893};

/// @brief Field offset, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

/// @brief Field grabbing, offset: 0x1c, size: 0x1, def value: None
 bool  ___grabbing;

/// @brief Field grabbingFingers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<bool>  ___grabbingFingers;

/// @brief Field grabT, offset: 0x28, size: 0x4, def value: None
 float_t  ___grabT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TouchShadowHand_GrabTouchInfo, ___offset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchShadowHand_GrabTouchInfo, ___grabbing) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchShadowHand_GrabTouchInfo, ___grabbingFingers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchShadowHand_GrabTouchInfo, ___grabT) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TouchShadowHand_GrabTouchInfo) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
