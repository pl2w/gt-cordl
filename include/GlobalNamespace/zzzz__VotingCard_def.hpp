#pragma once
// IWYU pragma private; include "GlobalNamespace/VotingCard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VotingCard)
namespace GlobalNamespace {
class VotingCard__DoActivate_d__8;
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
namespace GlobalNamespace {
class VotingCard;
}
namespace GlobalNamespace {
class VotingCard__DoActivate_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VotingCard*);
MARK_REF_T(::GlobalNamespace::VotingCard__DoActivate_d__8*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VotingCard*, "", "VotingCard");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VotingCard__DoActivate_d__8*, "", "VotingCard/<DoActivate>d__8");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VotingCard
class CORDL_TYPE VotingCard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DoActivate_d__8 = ::GlobalNamespace::VotingCard__DoActivate_d__8;

/// @brief Field _card, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__card, put=__cordl_internal_set__card)) ::UnityW<::UnityEngine::GameObject>  _card;

/// @brief Field _isVisible, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isVisible, put=__cordl_internal_set__isVisible)) bool  _isVisible;

/// @brief Field _offPosition, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__offPosition, put=__cordl_internal_set__offPosition)) ::UnityW<::UnityEngine::Transform>  _offPosition;

/// @brief Field _onPosition, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPosition, put=__cordl_internal_set__onPosition)) ::UnityW<::UnityEngine::Transform>  _onPosition;

/// @brief Field activationTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationTime, put=__cordl_internal_set_activationTime)) float_t  activationTime;

/// [IteratorStateMachine(typeof(VotingCard::<DoActivate>d__8))]
/// @brief Method DoActivate, addr 0x5623fc8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoActivate() ;

/// @brief Method MoveToOffPosition, addr 0x5623e14, size 0x48, virtual false, abstract: false, final false
inline void MoveToOffPosition() ;

/// @brief Method MoveToOnPosition, addr 0x5623e5c, size 0x48, virtual false, abstract: false, final false
inline void MoveToOnPosition() ;

static inline ::GlobalNamespace::VotingCard* New_ctor() ;

/// @brief Method SetVisible, addr 0x5623ea4, size 0x124, virtual false, abstract: false, final false
inline void SetVisible(bool  showVote, bool  instant) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__card() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__card() ;

constexpr bool const& __cordl_internal_get__isVisible() const;

constexpr bool& __cordl_internal_get__isVisible() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__offPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__offPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__onPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__onPosition() ;

constexpr float_t const& __cordl_internal_get_activationTime() const;

constexpr float_t& __cordl_internal_get_activationTime() ;

constexpr void __cordl_internal_set__card(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__isVisible(bool  value) ;

constexpr void __cordl_internal_set__offPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__onPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_activationTime(float_t  value) ;

/// @brief Method .ctor, addr 0x562405c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VotingCard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VotingCard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VotingCard(VotingCard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VotingCard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VotingCard(VotingCard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{589};

/// [SerializeField]
/// @brief Field _card, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____card;

/// [SerializeField]
/// @brief Field _offPosition, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____offPosition;

/// [SerializeField]
/// @brief Field _onPosition, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____onPosition;

/// [SerializeField]
/// @brief Field activationTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___activationTime;

/// @brief Field _isVisible, offset: 0x3c, size: 0x1, def value: None
 bool  ____isVisible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VotingCard, ____card) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VotingCard, ____offPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VotingCard, ____onPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VotingCard, ___activationTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VotingCard, ____isVisible) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VotingCard) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: VotingCard/<DoActivate>d__8
class CORDL_TYPE VotingCard__DoActivate_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::VotingCard>  __4__this;

/// @brief Field <from>5__2, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get__from_5__2, put=__cordl_internal_set__from_5__2)) ::UnityEngine::Vector3  _from_5__2;

/// @brief Field <lerpVal>5__4, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__lerpVal_5__4, put=__cordl_internal_set__lerpVal_5__4)) float_t  _lerpVal_5__4;

/// @brief Field <to>5__3, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__to_5__3, put=__cordl_internal_set__to_5__3)) ::UnityEngine::Vector3  _to_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5624070, size 0x178, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::VotingCard__DoActivate_d__8* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x56241e8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x56241f0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5624228, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x562406c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::VotingCard> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::VotingCard>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__from_5__2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__from_5__2() ;

constexpr float_t const& __cordl_internal_get__lerpVal_5__4() const;

constexpr float_t& __cordl_internal_get__lerpVal_5__4() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__to_5__3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__to_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VotingCard>  value) ;

constexpr void __cordl_internal_set__from_5__2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lerpVal_5__4(float_t  value) ;

constexpr void __cordl_internal_set__to_5__3(::UnityEngine::Vector3  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5624034, size 0x28, virtual false, abstract: false, final false
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
constexpr VotingCard__DoActivate_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VotingCard__DoActivate_d__8", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VotingCard__DoActivate_d__8(VotingCard__DoActivate_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VotingCard__DoActivate_d__8", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VotingCard__DoActivate_d__8(VotingCard__DoActivate_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{588};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VotingCard>  _____4__this;

/// @brief Field <from>5__2, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____from_5__2;

/// @brief Field <to>5__3, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____to_5__3;

/// @brief Field <lerpVal>5__4, offset: 0x40, size: 0x4, def value: None
 float_t  ____lerpVal_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VotingCard__DoActivate_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VotingCard__DoActivate_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VotingCard__DoActivate_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VotingCard__DoActivate_d__8, ____from_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VotingCard__DoActivate_d__8, ____to_5__3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VotingCard__DoActivate_d__8, ____lerpVal_5__4) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VotingCard__DoActivate_d__8) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
