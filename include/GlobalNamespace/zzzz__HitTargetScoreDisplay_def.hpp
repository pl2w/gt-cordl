#pragma once
// IWYU pragma private; include "GlobalNamespace/HitTargetScoreDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HitTargetScoreDisplay)
namespace GlobalNamespace {
class HitTargetScoreDisplay__RotatingCo_d__18;
}
namespace GorillaTag {
class WatchableIntSO;
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
class Coroutine;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HitTargetScoreDisplay;
}
namespace GlobalNamespace {
class HitTargetScoreDisplay__RotatingCo_d__18;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HitTargetScoreDisplay*);
MARK_REF_T(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HitTargetScoreDisplay*, "", "HitTargetScoreDisplay");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18*, "", "HitTargetScoreDisplay/<RotatingCo>d__18");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: HitTargetScoreDisplay
class CORDL_TYPE HitTargetScoreDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _RotatingCo_d__18 = ::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18;

/// @brief Field currentRotationCoroutine, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentRotationCoroutine, put=__cordl_internal_set_currentRotationCoroutine)) ::UnityEngine::Coroutine*  currentRotationCoroutine;

/// @brief Field currentScore, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentScore, put=__cordl_internal_set_currentScore)) int32_t  currentScore;

/// @brief Field hundredsCard, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_hundredsCard, put=__cordl_internal_set_hundredsCard)) ::UnityW<::UnityEngine::Transform>  hundredsCard;

/// @brief Field hundredsOld, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_hundredsOld, put=__cordl_internal_set_hundredsOld)) int32_t  hundredsOld;

/// @brief Field hundredsRend, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_hundredsRend, put=__cordl_internal_set_hundredsRend)) ::UnityW<::UnityEngine::Renderer>  hundredsRend;

/// @brief Field matPropBlock, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_matPropBlock, put=__cordl_internal_set_matPropBlock)) ::UnityEngine::MaterialPropertyBlock*  matPropBlock;

/// @brief Field networkedScore, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkedScore, put=__cordl_internal_set_networkedScore)) ::UnityW<::GorillaTag::WatchableIntSO>  networkedScore;

/// @brief Field numberSheet, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_numberSheet, put=__cordl_internal_set_numberSheet)) ::ArrayW<::UnityEngine::Vector4>  numberSheet;

/// @brief Field rotateSpeed, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotateSpeed, put=__cordl_internal_set_rotateSpeed)) int32_t  rotateSpeed;

/// @brief Field rotateTimeTotal, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotateTimeTotal, put=__cordl_internal_set_rotateTimeTotal)) float_t  rotateTimeTotal;

/// @brief Field singlesCard, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_singlesCard, put=__cordl_internal_set_singlesCard)) ::UnityW<::UnityEngine::Transform>  singlesCard;

/// @brief Field singlesRend, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_singlesRend, put=__cordl_internal_set_singlesRend)) ::UnityW<::UnityEngine::Renderer>  singlesRend;

/// @brief Field tensCard, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tensCard, put=__cordl_internal_set_tensCard)) ::UnityW<::UnityEngine::Transform>  tensCard;

/// @brief Field tensOld, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tensOld, put=__cordl_internal_set_tensOld)) int32_t  tensOld;

/// @brief Field tensRend, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_tensRend, put=__cordl_internal_set_tensRend)) ::UnityW<::UnityEngine::Renderer>  tensRend;

/// @brief Method Awake, addr 0x571d46c, size 0x1a4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::HitTargetScoreDisplay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x571d6a4, size 0xa4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnScoreChanged, addr 0x571d7bc, size 0x94, virtual false, abstract: false, final false
inline void OnScoreChanged(int32_t  newScore) ;

/// @brief Method ResetRotation, addr 0x571d610, size 0x94, virtual false, abstract: false, final false
inline void ResetRotation() ;

/// [IteratorStateMachine(typeof(HitTargetScoreDisplay::<RotatingCo>d__18))]
/// @brief Method RotatingCo, addr 0x571d748, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RotatingCo() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_currentRotationCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_currentRotationCoroutine() ;

constexpr int32_t const& __cordl_internal_get_currentScore() const;

constexpr int32_t& __cordl_internal_get_currentScore() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_hundredsCard() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_hundredsCard() ;

constexpr int32_t const& __cordl_internal_get_hundredsOld() const;

constexpr int32_t& __cordl_internal_get_hundredsOld() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_hundredsRend() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_hundredsRend() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_matPropBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_matPropBlock() ;

constexpr ::UnityW<::GorillaTag::WatchableIntSO> const& __cordl_internal_get_networkedScore() const;

constexpr ::UnityW<::GorillaTag::WatchableIntSO>& __cordl_internal_get_networkedScore() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_numberSheet() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_numberSheet() ;

constexpr int32_t const& __cordl_internal_get_rotateSpeed() const;

constexpr int32_t& __cordl_internal_get_rotateSpeed() ;

constexpr float_t const& __cordl_internal_get_rotateTimeTotal() const;

constexpr float_t& __cordl_internal_get_rotateTimeTotal() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_singlesCard() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_singlesCard() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_singlesRend() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_singlesRend() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tensCard() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tensCard() ;

constexpr int32_t const& __cordl_internal_get_tensOld() const;

constexpr int32_t& __cordl_internal_get_tensOld() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_tensRend() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_tensRend() ;

constexpr void __cordl_internal_set_currentRotationCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_currentScore(int32_t  value) ;

constexpr void __cordl_internal_set_hundredsCard(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hundredsOld(int32_t  value) ;

constexpr void __cordl_internal_set_hundredsRend(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_matPropBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_networkedScore(::UnityW<::GorillaTag::WatchableIntSO>  value) ;

constexpr void __cordl_internal_set_numberSheet(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_rotateSpeed(int32_t  value) ;

constexpr void __cordl_internal_set_rotateTimeTotal(float_t  value) ;

constexpr void __cordl_internal_set_singlesCard(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_singlesRend(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_tensCard(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tensOld(int32_t  value) ;

constexpr void __cordl_internal_set_tensRend(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x571d850, size 0x1b8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitTargetScoreDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitTargetScoreDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitTargetScoreDisplay(HitTargetScoreDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitTargetScoreDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitTargetScoreDisplay(HitTargetScoreDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1204};

/// [SerializeField]
/// @brief Field networkedScore, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::WatchableIntSO>  ___networkedScore;

/// @brief Field currentScore, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentScore;

/// @brief Field tensOld, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___tensOld;

/// @brief Field hundredsOld, offset: 0x30, size: 0x4, def value: None
 int32_t  ___hundredsOld;

/// @brief Field rotateTimeTotal, offset: 0x34, size: 0x4, def value: None
 float_t  ___rotateTimeTotal;

/// @brief Field matPropBlock, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___matPropBlock;

/// @brief Field numberSheet, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___numberSheet;

/// @brief Field rotateSpeed, offset: 0x48, size: 0x4, def value: None
 int32_t  ___rotateSpeed;

/// @brief Field singlesCard, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___singlesCard;

/// @brief Field tensCard, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tensCard;

/// @brief Field hundredsCard, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___hundredsCard;

/// @brief Field singlesRend, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___singlesRend;

/// @brief Field tensRend, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___tensRend;

/// @brief Field hundredsRend, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___hundredsRend;

/// @brief Field currentRotationCoroutine, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___currentRotationCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___networkedScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___currentScore) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___tensOld) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___hundredsOld) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___rotateTimeTotal) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___matPropBlock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___numberSheet) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___rotateSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___singlesCard) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___tensCard) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___hundredsCard) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___singlesRend) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___tensRend) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___hundredsRend) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay, ___currentRotationCoroutine) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HitTargetScoreDisplay) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HitTargetScoreDisplay/<RotatingCo>d__18
class CORDL_TYPE HitTargetScoreDisplay__RotatingCo_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HitTargetScoreDisplay>  __4__this;

/// @brief Field <digitsChange>5__8, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get__digitsChange_5__8, put=__cordl_internal_set__digitsChange_5__8)) bool  _digitsChange_5__8;

/// @brief Field <hundredsChange>5__7, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__hundredsChange_5__7, put=__cordl_internal_set__hundredsChange_5__7)) bool  _hundredsChange_5__7;

/// @brief Field <hundredsPlace>5__6, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__hundredsPlace_5__6, put=__cordl_internal_set__hundredsPlace_5__6)) int32_t  _hundredsPlace_5__6;

/// @brief Field <singlesPlace>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__singlesPlace_5__3, put=__cordl_internal_set__singlesPlace_5__3)) int32_t  _singlesPlace_5__3;

/// @brief Field <tensChange>5__5, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__tensChange_5__5, put=__cordl_internal_set__tensChange_5__5)) bool  _tensChange_5__5;

/// @brief Field <tensPlace>5__4, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__tensPlace_5__4, put=__cordl_internal_set__tensPlace_5__4)) int32_t  _tensPlace_5__4;

/// @brief Field <timeElapsedSinceHit>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeElapsedSinceHit_5__2, put=__cordl_internal_set__timeElapsedSinceHit_5__2)) float_t  _timeElapsedSinceHit_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5735090, size 0x448, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57354d8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x57354e0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5735518, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x573508c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::HitTargetScoreDisplay> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::HitTargetScoreDisplay>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get__digitsChange_5__8() const;

constexpr bool& __cordl_internal_get__digitsChange_5__8() ;

constexpr bool const& __cordl_internal_get__hundredsChange_5__7() const;

constexpr bool& __cordl_internal_get__hundredsChange_5__7() ;

constexpr int32_t const& __cordl_internal_get__hundredsPlace_5__6() const;

constexpr int32_t& __cordl_internal_get__hundredsPlace_5__6() ;

constexpr int32_t const& __cordl_internal_get__singlesPlace_5__3() const;

constexpr int32_t& __cordl_internal_get__singlesPlace_5__3() ;

constexpr bool const& __cordl_internal_get__tensChange_5__5() const;

constexpr bool& __cordl_internal_get__tensChange_5__5() ;

constexpr int32_t const& __cordl_internal_get__tensPlace_5__4() const;

constexpr int32_t& __cordl_internal_get__tensPlace_5__4() ;

constexpr float_t const& __cordl_internal_get__timeElapsedSinceHit_5__2() const;

constexpr float_t& __cordl_internal_get__timeElapsedSinceHit_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HitTargetScoreDisplay>  value) ;

constexpr void __cordl_internal_set__digitsChange_5__8(bool  value) ;

constexpr void __cordl_internal_set__hundredsChange_5__7(bool  value) ;

constexpr void __cordl_internal_set__hundredsPlace_5__6(int32_t  value) ;

constexpr void __cordl_internal_set__singlesPlace_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__tensChange_5__5(bool  value) ;

constexpr void __cordl_internal_set__tensPlace_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__timeElapsedSinceHit_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5735064, size 0x28, virtual false, abstract: false, final false
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
constexpr HitTargetScoreDisplay__RotatingCo_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitTargetScoreDisplay__RotatingCo_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitTargetScoreDisplay__RotatingCo_d__18(HitTargetScoreDisplay__RotatingCo_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitTargetScoreDisplay__RotatingCo_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitTargetScoreDisplay__RotatingCo_d__18(HitTargetScoreDisplay__RotatingCo_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1203};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HitTargetScoreDisplay>  _____4__this;

/// @brief Field <timeElapsedSinceHit>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____timeElapsedSinceHit_5__2;

/// @brief Field <singlesPlace>5__3, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____singlesPlace_5__3;

/// @brief Field <tensPlace>5__4, offset: 0x30, size: 0x4, def value: None
 int32_t  ____tensPlace_5__4;

/// @brief Field <tensChange>5__5, offset: 0x34, size: 0x1, def value: None
 bool  ____tensChange_5__5;

/// @brief Field <hundredsPlace>5__6, offset: 0x38, size: 0x4, def value: None
 int32_t  ____hundredsPlace_5__6;

/// @brief Field <hundredsChange>5__7, offset: 0x3c, size: 0x1, def value: None
 bool  ____hundredsChange_5__7;

/// @brief Field <digitsChange>5__8, offset: 0x3d, size: 0x1, def value: None
 bool  ____digitsChange_5__8;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18, ____timeElapsedSinceHit_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18, ____singlesPlace_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18, ____tensPlace_5__4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18, ____tensChange_5__5) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18, ____hundredsPlace_5__6) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18, ____hundredsChange_5__7) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18, ____digitsChange_5__8) == 0x3d, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HitTargetScoreDisplay__RotatingCo_d__18) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
