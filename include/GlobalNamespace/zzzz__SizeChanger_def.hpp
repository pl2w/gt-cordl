#pragma once
// IWYU pragma private; include "GlobalNamespace/SizeChanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "GlobalNamespace/zzzz__SizeChanger_ChangerType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SizeChanger)
namespace GT_CustomMapSupportRuntime {
class SizeChangerSettings;
}
namespace GlobalNamespace {
class SizeChangerTrigger;
}
namespace GlobalNamespace {
struct SizeChanger_ChangerType;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SizeChanger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SizeChanger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SizeChanger*, "", "SizeChanger");
// Dependencies GorillaTriggerBox, SizeChanger::ChangerType
namespace GlobalNamespace {
// Is value type: false
// CS Name: SizeChanger
class CORDL_TYPE SizeChanger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
using ChangerType = ::GlobalNamespace::SizeChanger_ChangerType;

 __declspec(property(get=get_EndPos)) ::UnityW<::UnityEngine::Transform>  EndPos;

 __declspec(property(get=get_MaxScale)) float_t  MaxScale;

 __declspec(property(get=get_MinScale)) float_t  MinScale;

 __declspec(property(get=get_MyType)) ::GlobalNamespace::SizeChanger_ChangerType  MyType;

/// @brief Field OnEnter, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnter, put=__cordl_internal_set_OnEnter)) ::UnityEngine::Events::UnityAction*  OnEnter;

/// @brief Field OnExit, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnExit, put=__cordl_internal_set_OnExit)) ::UnityEngine::Events::UnityAction*  OnExit;

 __declspec(property(get=get_SizeLayerMask)) int32_t  SizeLayerMask;

 __declspec(property(get=get_StartPos)) ::UnityW<::UnityEngine::Transform>  StartPos;

 __declspec(property(get=get_StaticEasing)) float_t  StaticEasing;

/// @brief Field affectLayerA, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerA, put=__cordl_internal_set_affectLayerA)) bool  affectLayerA;

/// @brief Field affectLayerB, offset 0x7d, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerB, put=__cordl_internal_set_affectLayerB)) bool  affectLayerB;

/// @brief Field affectLayerC, offset 0x7e, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerC, put=__cordl_internal_set_affectLayerC)) bool  affectLayerC;

/// @brief Field affectLayerD, offset 0x7f, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectLayerD, put=__cordl_internal_set_affectLayerD)) bool  affectLayerD;

/// @brief Field alwaysControlWhenEntered, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysControlWhenEntered, put=__cordl_internal_set_alwaysControlWhenEntered)) bool  alwaysControlWhenEntered;

/// @brief Field aprilFoolsEnabled, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_aprilFoolsEnabled, put=__cordl_internal_set_aprilFoolsEnabled)) bool  aprilFoolsEnabled;

/// @brief Field endPos, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_endPos, put=__cordl_internal_set_endPos)) ::UnityW<::UnityEngine::Transform>  endPos;

/// @brief Field endRadius, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_endRadius, put=__cordl_internal_set_endRadius)) float_t  endRadius;

/// @brief Field enterTrigger, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_enterTrigger, put=__cordl_internal_set_enterTrigger)) ::UnityW<::GlobalNamespace::SizeChangerTrigger>  enterTrigger;

/// @brief Field exitOnEnterTrigger, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitOnEnterTrigger, put=__cordl_internal_set_exitOnEnterTrigger)) ::UnityW<::GlobalNamespace::SizeChangerTrigger>  exitOnEnterTrigger;

/// @brief Field exitTrigger, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitTrigger, put=__cordl_internal_set_exitTrigger)) ::UnityW<::GlobalNamespace::SizeChangerTrigger>  exitTrigger;

/// @brief Field maxScale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxScale, put=__cordl_internal_set_maxScale)) float_t  maxScale;

/// @brief Field minScale, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minScale, put=__cordl_internal_set_minScale)) float_t  minScale;

/// @brief Field myCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCollider, put=__cordl_internal_set_myCollider)) ::UnityW<::UnityEngine::Collider>  myCollider;

/// @brief Field myType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_myType, put=__cordl_internal_set_myType)) ::GlobalNamespace::SizeChanger_ChangerType  myType;

/// @brief Field priority, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_priority, put=__cordl_internal_set_priority)) int32_t  priority;

/// @brief Field scaleAwayFromPoint, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleAwayFromPoint, put=__cordl_internal_set_scaleAwayFromPoint)) ::UnityW<::UnityEngine::Transform>  scaleAwayFromPoint;

/// @brief Field startPos, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_startPos, put=__cordl_internal_set_startPos)) ::UnityW<::UnityEngine::Transform>  startPos;

/// @brief Field startRadius, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_startRadius, put=__cordl_internal_set_startRadius)) float_t  startRadius;

/// @brief Field staticEasing, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_staticEasing, put=__cordl_internal_set_staticEasing)) float_t  staticEasing;

/// @brief Field unregisteredPresentRigs, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_unregisteredPresentRigs, put=__cordl_internal_set_unregisteredPresentRigs)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*  unregisteredPresentRigs;

/// @brief Method AddEnterTrigger, addr 0x595c2d0, size 0xcc, virtual false, abstract: false, final false
inline void AddEnterTrigger(::GlobalNamespace::SizeChangerTrigger*  trigger) ;

/// @brief Method AddExitOnEnterTrigger, addr 0x595c468, size 0xcc, virtual false, abstract: false, final false
inline void AddExitOnEnterTrigger(::GlobalNamespace::SizeChangerTrigger*  trigger) ;

/// @brief Method Awake, addr 0x595bbd4, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClosestPoint, addr 0x595c9c4, size 0x264, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3  position) ;

/// @brief Method CopyProperties, addr 0x595cd1c, size 0x104, virtual false, abstract: false, final false
inline void CopyProperties(::GT_CustomMapSupportRuntime::SizeChangerSettings*  settings) ;

static inline ::GlobalNamespace::SizeChanger* New_ctor() ;

/// @brief Method OnDisable, addr 0x595c00c, size 0x18c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x595bc40, size 0x18c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x595c600, size 0x118, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x595c824, size 0x118, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method RemoveEnterTrigger, addr 0x595c39c, size 0xcc, virtual false, abstract: false, final false
inline void RemoveEnterTrigger(::GlobalNamespace::SizeChangerTrigger*  trigger) ;

/// @brief Method RemoveExitOnEnterTrigger, addr 0x595c534, size 0xcc, virtual false, abstract: false, final false
inline void RemoveExitOnEnterTrigger(::GlobalNamespace::SizeChangerTrigger*  trigger) ;

/// @brief Method SetScaleCenterPoint, addr 0x595cc40, size 0x8, virtual false, abstract: false, final false
inline void SetScaleCenterPoint(::UnityEngine::Transform*  centerPoint) ;

/// @brief Method TryGetScaleCenterPoint, addr 0x595cc48, size 0xd4, virtual false, abstract: false, final false
inline bool TryGetScaleCenterPoint(::by_ref<::UnityEngine::Vector3>  centerPoint) ;

constexpr ::UnityEngine::Events::UnityAction* const& __cordl_internal_get_OnEnter() const;

constexpr ::UnityEngine::Events::UnityAction*& __cordl_internal_get_OnEnter() ;

constexpr ::UnityEngine::Events::UnityAction* const& __cordl_internal_get_OnExit() const;

constexpr ::UnityEngine::Events::UnityAction*& __cordl_internal_get_OnExit() ;

constexpr bool const& __cordl_internal_get_affectLayerA() const;

constexpr bool& __cordl_internal_get_affectLayerA() ;

constexpr bool const& __cordl_internal_get_affectLayerB() const;

constexpr bool& __cordl_internal_get_affectLayerB() ;

constexpr bool const& __cordl_internal_get_affectLayerC() const;

constexpr bool& __cordl_internal_get_affectLayerC() ;

constexpr bool const& __cordl_internal_get_affectLayerD() const;

constexpr bool& __cordl_internal_get_affectLayerD() ;

constexpr bool const& __cordl_internal_get_alwaysControlWhenEntered() const;

constexpr bool& __cordl_internal_get_alwaysControlWhenEntered() ;

constexpr bool const& __cordl_internal_get_aprilFoolsEnabled() const;

constexpr bool& __cordl_internal_get_aprilFoolsEnabled() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endPos() ;

constexpr float_t const& __cordl_internal_get_endRadius() const;

constexpr float_t& __cordl_internal_get_endRadius() ;

constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger> const& __cordl_internal_get_enterTrigger() const;

constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger>& __cordl_internal_get_enterTrigger() ;

constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger> const& __cordl_internal_get_exitOnEnterTrigger() const;

constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger>& __cordl_internal_get_exitOnEnterTrigger() ;

constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger> const& __cordl_internal_get_exitTrigger() const;

constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger>& __cordl_internal_get_exitTrigger() ;

constexpr float_t const& __cordl_internal_get_maxScale() const;

constexpr float_t& __cordl_internal_get_maxScale() ;

constexpr float_t const& __cordl_internal_get_minScale() const;

constexpr float_t& __cordl_internal_get_minScale() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_myCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_myCollider() ;

constexpr ::GlobalNamespace::SizeChanger_ChangerType const& __cordl_internal_get_myType() const;

constexpr ::GlobalNamespace::SizeChanger_ChangerType& __cordl_internal_get_myType() ;

constexpr int32_t const& __cordl_internal_get_priority() const;

constexpr int32_t& __cordl_internal_get_priority() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_scaleAwayFromPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_scaleAwayFromPoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startPos() ;

constexpr float_t const& __cordl_internal_get_startRadius() const;

constexpr float_t& __cordl_internal_get_startRadius() ;

constexpr float_t const& __cordl_internal_get_staticEasing() const;

constexpr float_t& __cordl_internal_get_staticEasing() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_unregisteredPresentRigs() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_unregisteredPresentRigs() ;

constexpr void __cordl_internal_set_OnEnter(::UnityEngine::Events::UnityAction*  value) ;

constexpr void __cordl_internal_set_OnExit(::UnityEngine::Events::UnityAction*  value) ;

constexpr void __cordl_internal_set_affectLayerA(bool  value) ;

constexpr void __cordl_internal_set_affectLayerB(bool  value) ;

constexpr void __cordl_internal_set_affectLayerC(bool  value) ;

constexpr void __cordl_internal_set_affectLayerD(bool  value) ;

constexpr void __cordl_internal_set_alwaysControlWhenEntered(bool  value) ;

constexpr void __cordl_internal_set_aprilFoolsEnabled(bool  value) ;

constexpr void __cordl_internal_set_endPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_endRadius(float_t  value) ;

constexpr void __cordl_internal_set_enterTrigger(::UnityW<::GlobalNamespace::SizeChangerTrigger>  value) ;

constexpr void __cordl_internal_set_exitOnEnterTrigger(::UnityW<::GlobalNamespace::SizeChangerTrigger>  value) ;

constexpr void __cordl_internal_set_exitTrigger(::UnityW<::GlobalNamespace::SizeChangerTrigger>  value) ;

constexpr void __cordl_internal_set_maxScale(float_t  value) ;

constexpr void __cordl_internal_set_minScale(float_t  value) ;

constexpr void __cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_myType(::GlobalNamespace::SizeChanger_ChangerType  value) ;

constexpr void __cordl_internal_set_priority(int32_t  value) ;

constexpr void __cordl_internal_set_scaleAwayFromPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startRadius(float_t  value) ;

constexpr void __cordl_internal_set_staticEasing(float_t  value) ;

constexpr void __cordl_internal_set_unregisteredPresentRigs(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

/// @brief Method .ctor, addr 0x595ce20, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method acceptRig, addr 0x595c718, size 0x10c, virtual false, abstract: false, final false
inline void acceptRig(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method get_EndPos, addr 0x595bbc4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_EndPos() ;

/// @brief Method get_MaxScale, addr 0x595bbac, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxScale() ;

/// @brief Method get_MinScale, addr 0x595bbb4, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinScale() ;

/// @brief Method get_MyType, addr 0x595bba4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SizeChanger_ChangerType get_MyType() ;

/// @brief Method get_SizeLayerMask, addr 0x595bb6c, size 0x38, virtual false, abstract: false, final false
inline int32_t get_SizeLayerMask() ;

/// @brief Method get_StartPos, addr 0x595bbbc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_StartPos() ;

/// @brief Method get_StaticEasing, addr 0x595bbcc, size 0x8, virtual false, abstract: false, final false
inline float_t get_StaticEasing() ;

/// @brief Method unacceptRig, addr 0x595c93c, size 0x88, virtual false, abstract: false, final false
inline void unacceptRig(::GlobalNamespace::VRRig*  rig) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SizeChanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SizeChanger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SizeChanger(SizeChanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SizeChanger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SizeChanger(SizeChanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2344};

/// [SerializeField]
/// @brief Field myType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SizeChanger_ChangerType  ___myType;

/// [SerializeField]
/// @brief Field staticEasing, offset: 0x24, size: 0x4, def value: None
 float_t  ___staticEasing;

/// [SerializeField]
/// @brief Field maxScale, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxScale;

/// [SerializeField]
/// @brief Field minScale, offset: 0x2c, size: 0x4, def value: None
 float_t  ___minScale;

/// @brief Field myCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___myCollider;

/// [SerializeField]
/// @brief Field startPos, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startPos;

/// [SerializeField]
/// @brief Field endPos, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endPos;

/// [SerializeField]
/// @brief Field enterTrigger, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SizeChangerTrigger>  ___enterTrigger;

/// [SerializeField]
/// @brief Field exitTrigger, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SizeChangerTrigger>  ___exitTrigger;

/// [SerializeField]
/// @brief Field scaleAwayFromPoint, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___scaleAwayFromPoint;

/// [SerializeField]
/// @brief Field exitOnEnterTrigger, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SizeChangerTrigger>  ___exitOnEnterTrigger;

/// @brief Field alwaysControlWhenEntered, offset: 0x68, size: 0x1, def value: None
 bool  ___alwaysControlWhenEntered;

/// @brief Field priority, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___priority;

/// @brief Field aprilFoolsEnabled, offset: 0x70, size: 0x1, def value: None
 bool  ___aprilFoolsEnabled;

/// @brief Field startRadius, offset: 0x74, size: 0x4, def value: None
 float_t  ___startRadius;

/// @brief Field endRadius, offset: 0x78, size: 0x4, def value: None
 float_t  ___endRadius;

/// @brief Field affectLayerA, offset: 0x7c, size: 0x1, def value: None
 bool  ___affectLayerA;

/// @brief Field affectLayerB, offset: 0x7d, size: 0x1, def value: None
 bool  ___affectLayerB;

/// @brief Field affectLayerC, offset: 0x7e, size: 0x1, def value: None
 bool  ___affectLayerC;

/// @brief Field affectLayerD, offset: 0x7f, size: 0x1, def value: None
 bool  ___affectLayerD;

/// @brief Field OnExit, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction*  ___OnExit;

/// @brief Field OnEnter, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction*  ___OnEnter;

/// @brief Field unregisteredPresentRigs, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*  ___unregisteredPresentRigs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SizeChanger, ___myType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___staticEasing) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___maxScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___minScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___myCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___startPos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___endPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___enterTrigger) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___exitTrigger) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___scaleAwayFromPoint) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___exitOnEnterTrigger) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___alwaysControlWhenEntered) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___priority) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___aprilFoolsEnabled) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___startRadius) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___endRadius) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___affectLayerA) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___affectLayerB) == 0x7d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___affectLayerC) == 0x7e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___affectLayerD) == 0x7f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___OnExit) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___OnEnter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChanger, ___unregisteredPresentRigs) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SizeChanger) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
