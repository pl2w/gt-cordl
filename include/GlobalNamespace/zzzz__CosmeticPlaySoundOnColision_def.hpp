#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticPlaySoundOnColision.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SoundIdRemapping_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticPlaySoundOnColision)
namespace GlobalNamespace {
class CosmeticPlaySoundOnColision__waitForStopPlayback_d__17;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticPlaySoundOnColision;
}
namespace GlobalNamespace {
class CosmeticPlaySoundOnColision__waitForStopPlayback_d__17;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticPlaySoundOnColision*);
MARK_REF_T(::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticPlaySoundOnColision*, "", "CosmeticPlaySoundOnColision");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*, "", "CosmeticPlaySoundOnColision/<waitForStopPlayback>d__17");
// Dependencies SoundIdRemapping, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticPlaySoundOnColision
class CORDL_TYPE CosmeticPlaySoundOnColision : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _waitForStopPlayback_d__17 = ::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17;

/// @brief Field OnStartPlayback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartPlayback, put=__cordl_internal_set_OnStartPlayback)) ::UnityEngine::Events::UnityEvent*  OnStartPlayback;

/// @brief Field OnStopPlayback, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStopPlayback, put=__cordl_internal_set_OnStopPlayback)) ::UnityEngine::Events::UnityEvent*  OnStopPlayback;

/// @brief Field audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field crWaitForStopPlayback, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_crWaitForStopPlayback, put=__cordl_internal_set_crWaitForStopPlayback)) ::UnityEngine::Coroutine*  crWaitForStopPlayback;

/// @brief Field defaultSound, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultSound, put=__cordl_internal_set_defaultSound)) int32_t  defaultSound;

/// @brief Field invokeEventOnDefaultSound, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get_invokeEventOnDefaultSound, put=__cordl_internal_set_invokeEventOnDefaultSound)) bool  invokeEventOnDefaultSound;

/// @brief Field invokeEventOnOverideSound, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_invokeEventOnOverideSound, put=__cordl_internal_set_invokeEventOnOverideSound)) bool  invokeEventOnOverideSound;

/// @brief Field invokeEventsOnAllClients, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_invokeEventsOnAllClients, put=__cordl_internal_set_invokeEventsOnAllClients)) bool  invokeEventsOnAllClients;

/// @brief Field minSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSpeed, put=__cordl_internal_set_minSpeed)) float_t  minSpeed;

/// @brief Field previousFramePosition, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousFramePosition, put=__cordl_internal_set_previousFramePosition)) ::UnityEngine::Vector3  previousFramePosition;

/// @brief Field soundIdRemappings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundIdRemappings, put=__cordl_internal_set_soundIdRemappings)) ::ArrayW<::GlobalNamespace::SoundIdRemapping*>  soundIdRemappings;

/// @brief Field soundLookup, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundLookup, put=__cordl_internal_set_soundLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  soundLookup;

/// @brief Field speed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field transferrableObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableObject, put=__cordl_internal_set_transferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableObject;

/// @brief Method Awake, addr 0x55eeb90, size 0x158, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x55ef0b8, size 0xf4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::CosmeticPlaySoundOnColision* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x55eece8, size 0xdc, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnStartPlayback() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnStartPlayback() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnStopPlayback() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnStopPlayback() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_crWaitForStopPlayback() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_crWaitForStopPlayback() ;

constexpr int32_t const& __cordl_internal_get_defaultSound() const;

constexpr int32_t& __cordl_internal_get_defaultSound() ;

constexpr bool const& __cordl_internal_get_invokeEventOnDefaultSound() const;

constexpr bool& __cordl_internal_get_invokeEventOnDefaultSound() ;

constexpr bool const& __cordl_internal_get_invokeEventOnOverideSound() const;

constexpr bool& __cordl_internal_get_invokeEventOnOverideSound() ;

constexpr bool const& __cordl_internal_get_invokeEventsOnAllClients() const;

constexpr bool& __cordl_internal_get_invokeEventsOnAllClients() ;

constexpr float_t const& __cordl_internal_get_minSpeed() const;

constexpr float_t& __cordl_internal_get_minSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousFramePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousFramePosition() ;

constexpr ::ArrayW<::GlobalNamespace::SoundIdRemapping*> const& __cordl_internal_get_soundIdRemappings() const;

constexpr ::ArrayW<::GlobalNamespace::SoundIdRemapping*>& __cordl_internal_get_soundIdRemappings() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_soundLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_soundLookup() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableObject() ;

constexpr void __cordl_internal_set_OnStartPlayback(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnStopPlayback(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_crWaitForStopPlayback(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_defaultSound(int32_t  value) ;

constexpr void __cordl_internal_set_invokeEventOnDefaultSound(bool  value) ;

constexpr void __cordl_internal_set_invokeEventOnOverideSound(bool  value) ;

constexpr void __cordl_internal_set_invokeEventsOnAllClients(bool  value) ;

constexpr void __cordl_internal_set_minSpeed(float_t  value) ;

constexpr void __cordl_internal_set_previousFramePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_soundIdRemappings(::ArrayW<::GlobalNamespace::SoundIdRemapping*>  value) ;

constexpr void __cordl_internal_set_soundLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x55ef1ac, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method playSound, addr 0x55eedc4, size 0x260, virtual false, abstract: false, final false
inline void playSound(int32_t  soundIndex, bool  invokeEvent) ;

/// [IteratorStateMachine(typeof(CosmeticPlaySoundOnColision::<waitForStopPlayback>d__17))]
/// @brief Method waitForStopPlayback, addr 0x55ef024, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* waitForStopPlayback() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticPlaySoundOnColision() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticPlaySoundOnColision", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticPlaySoundOnColision(CosmeticPlaySoundOnColision && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticPlaySoundOnColision", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticPlaySoundOnColision(CosmeticPlaySoundOnColision const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{64};

/// [GorillaSoundLookup]
/// [SerializeField]
/// @brief Field defaultSound, offset: 0x20, size: 0x4, def value: None
 int32_t  ___defaultSound;

/// [SerializeField]
/// @brief Field soundIdRemappings, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SoundIdRemapping*>  ___soundIdRemappings;

/// [SerializeField]
/// @brief Field OnStartPlayback, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnStartPlayback;

/// [SerializeField]
/// @brief Field OnStopPlayback, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnStopPlayback;

/// [SerializeField]
/// @brief Field minSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___minSpeed;

/// @brief Field transferrableObject, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableObject;

/// @brief Field soundLookup, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___soundLookup;

/// @brief Field audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field crWaitForStopPlayback, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___crWaitForStopPlayback;

/// @brief Field speed, offset: 0x68, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field previousFramePosition, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousFramePosition;

/// [SerializeField]
/// @brief Field invokeEventsOnAllClients, offset: 0x78, size: 0x1, def value: None
 bool  ___invokeEventsOnAllClients;

/// [SerializeField]
/// @brief Field invokeEventOnOverideSound, offset: 0x79, size: 0x1, def value: None
 bool  ___invokeEventOnOverideSound;

/// [SerializeField]
/// @brief Field invokeEventOnDefaultSound, offset: 0x7a, size: 0x1, def value: None
 bool  ___invokeEventOnDefaultSound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___defaultSound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___soundIdRemappings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___OnStartPlayback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___OnStopPlayback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___minSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___transferrableObject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___soundLookup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___crWaitForStopPlayback) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___speed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___previousFramePosition) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___invokeEventsOnAllClients) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___invokeEventOnOverideSound) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision, ___invokeEventOnDefaultSound) == 0x7a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticPlaySoundOnColision) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticPlaySoundOnColision/<waitForStopPlayback>d__17
class CORDL_TYPE CosmeticPlaySoundOnColision__waitForStopPlayback_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CosmeticPlaySoundOnColision>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x55ef1d0, size 0xb0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x55ef280, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x55ef288, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x55ef2c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x55ef1cc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticPlaySoundOnColision> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticPlaySoundOnColision>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CosmeticPlaySoundOnColision>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x55ef090, size 0x28, virtual false, abstract: false, final false
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
constexpr CosmeticPlaySoundOnColision__waitForStopPlayback_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticPlaySoundOnColision__waitForStopPlayback_d__17", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticPlaySoundOnColision__waitForStopPlayback_d__17(CosmeticPlaySoundOnColision__waitForStopPlayback_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticPlaySoundOnColision__waitForStopPlayback_d__17", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticPlaySoundOnColision__waitForStopPlayback_d__17(CosmeticPlaySoundOnColision__waitForStopPlayback_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{63};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticPlaySoundOnColision>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
