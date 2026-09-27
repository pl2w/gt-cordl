#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersCageDeposit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActorDeposit_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersCageDeposit)
namespace GlobalNamespace {
class CrittersActor;
}
namespace GlobalNamespace {
class CrittersCageDeposit__ProcessCage_d__16;
}
namespace GlobalNamespace {
class CrittersPawn;
}
namespace GlobalNamespace {
class Menagerie_CritterData;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersCageDeposit;
}
namespace GlobalNamespace {
class CrittersCageDeposit__ProcessCage_d__16;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersCageDeposit*);
MARK_REF_T(::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersCageDeposit*, "", "CrittersCageDeposit");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16*, "", "CrittersCageDeposit/<ProcessCage>d__16");
// Dependencies CrittersActorDeposit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersCageDeposit
class CORDL_TYPE CrittersCageDeposit : public ::GlobalNamespace::CrittersActorDeposit {
public:
// Declarations
using _ProcessCage_d__16 = ::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16;

/// @brief Field OnDepositCritter, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDepositCritter, put=__cordl_internal_set_OnDepositCritter)) ::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*  OnDepositCritter;

/// @brief Field currentCage, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentCage, put=__cordl_internal_set_currentCage)) ::UnityW<::GlobalNamespace::CrittersActor>  currentCage;

/// @brief Field depositAudio, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositAudio, put=__cordl_internal_set_depositAudio)) ::UnityW<::UnityEngine::AudioSource>  depositAudio;

/// @brief Field depositCritterSound, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositCritterSound, put=__cordl_internal_set_depositCritterSound)) ::UnityW<::UnityEngine::AudioClip>  depositCritterSound;

/// @brief Field depositEmptySound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositEmptySound, put=__cordl_internal_set_depositEmptySound)) ::UnityW<::UnityEngine::AudioClip>  depositEmptySound;

/// @brief Field depositEndLocation, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_depositEndLocation, put=__cordl_internal_set_depositEndLocation)) ::UnityEngine::Vector3  depositEndLocation;

/// @brief Field depositStartLocation, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_depositStartLocation, put=__cordl_internal_set_depositStartLocation)) ::UnityEngine::Vector3  depositStartLocation;

/// @brief Field depositStartSound, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositStartSound, put=__cordl_internal_set_depositStartSound)) ::UnityW<::UnityEngine::AudioClip>  depositStartSound;

/// @brief Field isHandlingDeposit, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHandlingDeposit, put=__cordl_internal_set_isHandlingDeposit)) bool  isHandlingDeposit;

/// @brief Field returnDuration, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_returnDuration, put=__cordl_internal_set_returnDuration)) float_t  returnDuration;

/// @brief Field submitDuration, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_submitDuration, put=__cordl_internal_set_submitDuration)) float_t  submitDuration;

/// @brief Method Awake, addr 0x55fd768, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanDeposit, addr 0x55fd7f8, size 0x30, virtual true, abstract: false, final false
inline bool CanDeposit(::GlobalNamespace::CrittersActor*  depositActor) ;

static inline ::GlobalNamespace::CrittersCageDeposit* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x55fd8e8, size 0x104, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// [IteratorStateMachine(typeof(CrittersCageDeposit::<ProcessCage>d__16))]
/// @brief Method ProcessCage, addr 0x55fd854, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ProcessCage() ;

/// @brief Method StartProcessCage, addr 0x55fd828, size 0x2c, virtual false, abstract: false, final false
inline void StartProcessCage(::GlobalNamespace::CrittersActor*  depositedActor) ;

constexpr ::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>* const& __cordl_internal_get_OnDepositCritter() const;

constexpr ::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*& __cordl_internal_get_OnDepositCritter() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_currentCage() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_currentCage() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_depositAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_depositAudio() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_depositCritterSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_depositCritterSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_depositEmptySound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_depositEmptySound() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_depositEndLocation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_depositEndLocation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_depositStartLocation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_depositStartLocation() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_depositStartSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_depositStartSound() ;

constexpr bool const& __cordl_internal_get_isHandlingDeposit() const;

constexpr bool& __cordl_internal_get_isHandlingDeposit() ;

constexpr float_t const& __cordl_internal_get_returnDuration() const;

constexpr float_t& __cordl_internal_get_returnDuration() ;

constexpr float_t const& __cordl_internal_get_submitDuration() const;

constexpr float_t& __cordl_internal_get_submitDuration() ;

constexpr void __cordl_internal_set_OnDepositCritter(::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*  value) ;

constexpr void __cordl_internal_set_currentCage(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_depositAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_depositCritterSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_depositEmptySound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_depositEndLocation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_depositStartLocation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_depositStartSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_isHandlingDeposit(bool  value) ;

constexpr void __cordl_internal_set_returnDuration(float_t  value) ;

constexpr void __cordl_internal_set_submitDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x55fd9ec, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnDepositCritter, addr 0x55fd608, size 0xb0, virtual false, abstract: false, final false
inline void add_OnDepositCritter(::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnDepositCritter, addr 0x55fd6b8, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnDepositCritter(::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersCageDeposit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersCageDeposit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersCageDeposit(CrittersCageDeposit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersCageDeposit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersCageDeposit(CrittersCageDeposit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{92};

/// @brief Field isHandlingDeposit, offset: 0x38, size: 0x1, def value: None
 bool  ___isHandlingDeposit;

/// @brief Field depositStartLocation, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___depositStartLocation;

/// @brief Field depositEndLocation, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___depositEndLocation;

/// @brief Field submitDuration, offset: 0x54, size: 0x4, def value: None
 float_t  ___submitDuration;

/// @brief Field returnDuration, offset: 0x58, size: 0x4, def value: None
 float_t  ___returnDuration;

/// @brief Field depositAudio, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___depositAudio;

/// @brief Field depositStartSound, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___depositStartSound;

/// @brief Field depositEmptySound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___depositEmptySound;

/// @brief Field depositCritterSound, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___depositCritterSound;

/// @brief Field currentCage, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___currentCage;

/// [CompilerGenerated]
/// @brief Field OnDepositCritter, offset: 0x88, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::Menagerie_CritterData*,int32_t>*  ___OnDepositCritter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit, ___isHandlingDeposit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit, ___depositStartLocation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit, ___depositEndLocation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit, ___submitDuration) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit, ___returnDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit, ___depositAudio) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit, ___depositStartSound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit, ___depositEmptySound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit, ___depositCritterSound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit, ___currentCage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit, ___OnDepositCritter) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersCageDeposit) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersCageDeposit/<ProcessCage>d__16
class CORDL_TYPE CrittersCageDeposit__ProcessCage_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CrittersCageDeposit>  __4__this;

/// @brief Field <critterData>5__5, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__critterData_5__5, put=__cordl_internal_set__critterData_5__5)) ::GlobalNamespace::Menagerie_CritterData*  _critterData_5__5;

/// @brief Field <crittersPawn>5__4, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__crittersPawn_5__4, put=__cordl_internal_set__crittersPawn_5__4)) ::UnityW<::GlobalNamespace::CrittersPawn>  _crittersPawn_5__4;

/// @brief Field <isLocalDeposit>5__2, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLocalDeposit_5__2, put=__cordl_internal_set__isLocalDeposit_5__2)) bool  _isLocalDeposit_5__2;

/// @brief Field <lastGrabbedPlayer>5__6, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastGrabbedPlayer_5__6, put=__cordl_internal_set__lastGrabbedPlayer_5__6)) int32_t  _lastGrabbedPlayer_5__6;

/// @brief Field <transition>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__transition_5__3, put=__cordl_internal_set__transition_5__3)) float_t  _transition_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x55fda04, size 0x520, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x55fdf24, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x55fdf2c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x55fdf64, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x55fda00, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CrittersCageDeposit> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CrittersCageDeposit>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::Menagerie_CritterData* const& __cordl_internal_get__critterData_5__5() const;

constexpr ::GlobalNamespace::Menagerie_CritterData*& __cordl_internal_get__critterData_5__5() ;

constexpr ::UnityW<::GlobalNamespace::CrittersPawn> const& __cordl_internal_get__crittersPawn_5__4() const;

constexpr ::UnityW<::GlobalNamespace::CrittersPawn>& __cordl_internal_get__crittersPawn_5__4() ;

constexpr bool const& __cordl_internal_get__isLocalDeposit_5__2() const;

constexpr bool& __cordl_internal_get__isLocalDeposit_5__2() ;

constexpr int32_t const& __cordl_internal_get__lastGrabbedPlayer_5__6() const;

constexpr int32_t& __cordl_internal_get__lastGrabbedPlayer_5__6() ;

constexpr float_t const& __cordl_internal_get__transition_5__3() const;

constexpr float_t& __cordl_internal_get__transition_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CrittersCageDeposit>  value) ;

constexpr void __cordl_internal_set__critterData_5__5(::GlobalNamespace::Menagerie_CritterData*  value) ;

constexpr void __cordl_internal_set__crittersPawn_5__4(::UnityW<::GlobalNamespace::CrittersPawn>  value) ;

constexpr void __cordl_internal_set__isLocalDeposit_5__2(bool  value) ;

constexpr void __cordl_internal_set__lastGrabbedPlayer_5__6(int32_t  value) ;

constexpr void __cordl_internal_set__transition_5__3(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x55fd8c0, size 0x28, virtual false, abstract: false, final false
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
constexpr CrittersCageDeposit__ProcessCage_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersCageDeposit__ProcessCage_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersCageDeposit__ProcessCage_d__16(CrittersCageDeposit__ProcessCage_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersCageDeposit__ProcessCage_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersCageDeposit__ProcessCage_d__16(CrittersCageDeposit__ProcessCage_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{91};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersCageDeposit>  _____4__this;

/// @brief Field <isLocalDeposit>5__2, offset: 0x28, size: 0x1, def value: None
 bool  ____isLocalDeposit_5__2;

/// @brief Field <transition>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____transition_5__3;

/// @brief Field <crittersPawn>5__4, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersPawn>  ____crittersPawn_5__4;

/// @brief Field <critterData>5__5, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::Menagerie_CritterData*  ____critterData_5__5;

/// @brief Field <lastGrabbedPlayer>5__6, offset: 0x40, size: 0x4, def value: None
 int32_t  ____lastGrabbedPlayer_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16, ____isLocalDeposit_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16, ____transition_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16, ____crittersPawn_5__4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16, ____critterData_5__5) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16, ____lastGrabbedPlayer_5__6) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersCageDeposit__ProcessCage_d__16) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
