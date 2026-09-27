#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticPlaySoundOnColision.hpp"
#include "GlobalNamespace/zzzz__SoundIdRemapping_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticPlaySoundOnColision_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticPlaySoundOnColision_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticPlaySoundOnColision::*)()>(&::GlobalNamespace::CosmeticPlaySoundOnColision::Awake)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x55eeb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticPlaySoundOnColision::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CosmeticPlaySoundOnColision::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55eece8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision.playSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticPlaySoundOnColision::*)(int32_t, bool)>(&::GlobalNamespace::CosmeticPlaySoundOnColision::playSound)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x55eedc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {"playSound", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision.waitForStopPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CosmeticPlaySoundOnColision::*)()>(&::GlobalNamespace::CosmeticPlaySoundOnColision::waitForStopPlayback)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55ef024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {"waitForStopPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticPlaySoundOnColision::*)()>(&::GlobalNamespace::CosmeticPlaySoundOnColision::FixedUpdate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55ef0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticPlaySoundOnColision::*)()>(&::GlobalNamespace::CosmeticPlaySoundOnColision::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x55ef1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_defaultSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSound;
}
constexpr int32_t const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_defaultSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSound;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_defaultSound(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultSound = value;
}
constexpr ::ArrayW<::GlobalNamespace::SoundIdRemapping*>& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_soundIdRemappings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundIdRemappings;
}
constexpr ::ArrayW<::GlobalNamespace::SoundIdRemapping*> const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_soundIdRemappings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundIdRemappings;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_soundIdRemappings(::ArrayW<::GlobalNamespace::SoundIdRemapping*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundIdRemappings = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_OnStartPlayback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartPlayback;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_OnStartPlayback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartPlayback;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_OnStartPlayback(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStartPlayback = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_OnStopPlayback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopPlayback;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_OnStopPlayback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopPlayback;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_OnStopPlayback(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStopPlayback = value;
}
constexpr float_t& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_minSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeed;
}
constexpr float_t const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_minSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeed;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_minSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSpeed = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_transferrableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_transferrableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableObject = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_soundLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_soundLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundLookup;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_soundLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundLookup = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_crWaitForStopPlayback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crWaitForStopPlayback;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_crWaitForStopPlayback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crWaitForStopPlayback;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_crWaitForStopPlayback(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crWaitForStopPlayback = value;
}
constexpr float_t& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_previousFramePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousFramePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_previousFramePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousFramePosition;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_previousFramePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousFramePosition = value;
}
constexpr bool& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_invokeEventsOnAllClients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invokeEventsOnAllClients;
}
constexpr bool const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_invokeEventsOnAllClients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invokeEventsOnAllClients;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_invokeEventsOnAllClients(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invokeEventsOnAllClients = value;
}
constexpr bool& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_invokeEventOnOverideSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invokeEventOnOverideSound;
}
constexpr bool const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_invokeEventOnOverideSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invokeEventOnOverideSound;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_invokeEventOnOverideSound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invokeEventOnOverideSound = value;
}
constexpr bool& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_invokeEventOnDefaultSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invokeEventOnDefaultSound;
}
constexpr bool const& GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_get_invokeEventOnDefaultSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invokeEventOnDefaultSound;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision::__cordl_internal_set_invokeEventOnDefaultSound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invokeEventOnDefaultSound = value;
}
inline void GlobalNamespace::CosmeticPlaySoundOnColision::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticPlaySoundOnColision::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::CosmeticPlaySoundOnColision::playSound(int32_t  soundIndex, bool  invokeEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {"playSound", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, soundIndex, invokeEvent);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CosmeticPlaySoundOnColision::waitForStopPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {"waitForStopPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticPlaySoundOnColision::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticPlaySoundOnColision::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticPlaySoundOnColision* GlobalNamespace::CosmeticPlaySoundOnColision::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticPlaySoundOnColision*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticPlaySoundOnColision::CosmeticPlaySoundOnColision()   {
}
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::*)(int32_t)>(&::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55ef090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::*)()>(&::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55ef1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::*)()>(&::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::MoveNext)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55ef1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::*)()>(&::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ef280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::*)()>(&::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55ef288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::*)()>(&::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ef2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticPlaySoundOnColision>& GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticPlaySoundOnColision> const& GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CosmeticPlaySoundOnColision>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17* GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17::CosmeticPlaySoundOnColision__waitForStopPlayback_d__17()   {
}
