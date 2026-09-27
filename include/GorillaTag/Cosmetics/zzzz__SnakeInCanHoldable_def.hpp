#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SnakeInCanHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SnakeInCanHoldable)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GorillaTag::Cosmetics {
class SnakeInCanHoldable__SmoothTransition_d__15;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class SnakeInCanHoldable;
}
namespace GorillaTag::Cosmetics {
class SnakeInCanHoldable__SmoothTransition_d__15;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::SnakeInCanHoldable*);
MARK_REF_T(::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::SnakeInCanHoldable*, "GorillaTag.Cosmetics", "SnakeInCanHoldable");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*, "GorillaTag.Cosmetics", "SnakeInCanHoldable/<SmoothTransition>d__15");
// Dependencies TransferrableObject, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.SnakeInCanHoldable
class CORDL_TYPE SnakeInCanHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using _SmoothTransition_d__15 = ::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15;

/// @brief Field _events, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field compressedPoint, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_compressedPoint, put=__cordl_internal_set_compressedPoint)) ::UnityW<::UnityEngine::Transform>  compressedPoint;

/// @brief Field disableObjectBeforeTrigger, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableObjectBeforeTrigger, put=__cordl_internal_set_disableObjectBeforeTrigger)) ::UnityW<::UnityEngine::GameObject>  disableObjectBeforeTrigger;

/// @brief Field jumpSpeed, offset 0x334, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpSpeed, put=__cordl_internal_set_jumpSpeed)) float_t  jumpSpeed;

/// @brief Field originalTopRigPosition, offset 0x36c, size 0xc 
 __declspec(property(get=__cordl_internal_get_originalTopRigPosition, put=__cordl_internal_set_originalTopRigPosition)) ::UnityEngine::Vector3  originalTopRigPosition;

/// @brief Field snakeInCanCallLimiter, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_snakeInCanCallLimiter, put=__cordl_internal_set_snakeInCanCallLimiter)) ::GlobalNamespace::CallLimiter*  snakeInCanCallLimiter;

/// @brief Field stretchedPoint, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_stretchedPoint, put=__cordl_internal_set_stretchedPoint)) ::UnityW<::UnityEngine::Transform>  stretchedPoint;

/// @brief Field topRigObject, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_topRigObject, put=__cordl_internal_set_topRigObject)) ::UnityW<::UnityEngine::GameObject>  topRigObject;

/// @brief Field topRigPosition, offset 0x360, size 0xc 
 __declspec(property(get=__cordl_internal_get_topRigPosition, put=__cordl_internal_set_topRigPosition)) ::UnityEngine::Vector3  topRigPosition;

/// @brief Method Awake, addr 0x5da15d8, size 0x44, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method EnableObjectLocal, addr 0x5da1cac, size 0x12c, virtual false, abstract: false, final false
inline void EnableObjectLocal(bool  enable) ;

static inline ::GorillaTag::Cosmetics::SnakeInCanHoldable* New_ctor() ;

/// @brief Method OnButtonPressed, addr 0x5da1ff0, size 0x8, virtual false, abstract: false, final false
inline void OnButtonPressed() ;

/// @brief Method OnDisable, addr 0x5da190c, size 0x144, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5da161c, size 0x2f0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnableObject, addr 0x5da1dd8, size 0x184, virtual false, abstract: false, final false
inline void OnEnableObject(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  arg, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnRelease, addr 0x5da1a50, size 0x25c, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// [IteratorStateMachine(typeof(GorillaTag.Cosmetics.SnakeInCanHoldable::<SmoothTransition>d__15))]
/// @brief Method SmoothTransition, addr 0x5da1f5c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SmoothTransition() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_compressedPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_compressedPoint() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_disableObjectBeforeTrigger() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_disableObjectBeforeTrigger() ;

constexpr float_t const& __cordl_internal_get_jumpSpeed() const;

constexpr float_t& __cordl_internal_get_jumpSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_originalTopRigPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_originalTopRigPosition() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_snakeInCanCallLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_snakeInCanCallLimiter() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stretchedPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stretchedPoint() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_topRigObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_topRigObject() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_topRigPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_topRigPosition() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_compressedPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_disableObjectBeforeTrigger(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_jumpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_originalTopRigPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_snakeInCanCallLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_stretchedPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_topRigObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_topRigPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5da1ff8, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnakeInCanHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnakeInCanHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnakeInCanHoldable(SnakeInCanHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnakeInCanHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnakeInCanHoldable(SnakeInCanHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4972};

/// [SerializeField]
/// @brief Field jumpSpeed, offset: 0x334, size: 0x4, def value: None
 float_t  ___jumpSpeed;

/// [SerializeField]
/// @brief Field stretchedPoint, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___stretchedPoint;

/// [SerializeField]
/// @brief Field compressedPoint, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___compressedPoint;

/// [SerializeField]
/// @brief Field topRigObject, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___topRigObject;

/// [SerializeField]
/// @brief Field disableObjectBeforeTrigger, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___disableObjectBeforeTrigger;

/// @brief Field snakeInCanCallLimiter, offset: 0x358, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___snakeInCanCallLimiter;

/// @brief Field topRigPosition, offset: 0x360, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___topRigPosition;

/// @brief Field originalTopRigPosition, offset: 0x36c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___originalTopRigPosition;

/// @brief Field _events, offset: 0x378, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Size padding 0x3b0 - 0x380 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable, ___jumpSpeed) == 0x334, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable, ___stretchedPoint) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable, ___compressedPoint) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable, ___topRigObject) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable, ___disableObjectBeforeTrigger) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable, ___snakeInCanCallLimiter) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable, ___topRigPosition) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable, ___originalTopRigPosition) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable, ____events) == 0x378, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::SnakeInCanHoldable) == 0x3b0, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.SnakeInCanHoldable/<SmoothTransition>d__15
class CORDL_TYPE SnakeInCanHoldable__SmoothTransition_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTag::Cosmetics::SnakeInCanHoldable>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5da20a0, size 0x2b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5da2350, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5da2358, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5da2390, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5da209c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::SnakeInCanHoldable> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::SnakeInCanHoldable>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTag::Cosmetics::SnakeInCanHoldable>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5da1fc8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnakeInCanHoldable__SmoothTransition_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnakeInCanHoldable__SmoothTransition_d__15", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnakeInCanHoldable__SmoothTransition_d__15(SnakeInCanHoldable__SmoothTransition_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnakeInCanHoldable__SmoothTransition_d__15", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnakeInCanHoldable__SmoothTransition_d__15(SnakeInCanHoldable__SmoothTransition_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4971};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::SnakeInCanHoldable>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
