#pragma once
// IWYU pragma private; include "GlobalNamespace/HauntedObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Animator_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HauntedObject_def.hpp"
#include "GlobalNamespace/zzzz__HauntedObject_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HauntedObject.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HauntedObject::*)()>(&::GlobalNamespace::HauntedObject::Awake)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5950fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HauntedObject::*)()>(&::GlobalNamespace::HauntedObject::OnDestroy)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x59512b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HauntedObject::*)()>(&::GlobalNamespace::HauntedObject::Start)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x595150c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject.TriggerEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HauntedObject::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::HauntedObject::TriggerEffects)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5951540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"TriggerEffects", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject.Shake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::HauntedObject::*)()>(&::GlobalNamespace::HauntedObject::Shake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59517b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"Shake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject.TurnOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::HauntedObject::*)()>(&::GlobalNamespace::HauntedObject::TurnOff)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5951824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"TurnOff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HauntedObject::*)()>(&::GlobalNamespace::HauntedObject::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59518e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::HauntedObject::__cordl_internal_get_rattle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rattle;
}
constexpr bool const& GlobalNamespace::HauntedObject::__cordl_internal_get_rattle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rattle;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_rattle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rattle = value;
}
constexpr float_t& GlobalNamespace::HauntedObject::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::HauntedObject::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr float_t& GlobalNamespace::HauntedObject::__cordl_internal_get_amount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amount;
}
constexpr float_t const& GlobalNamespace::HauntedObject::__cordl_internal_get_amount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amount;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_amount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amount = value;
}
constexpr float_t& GlobalNamespace::HauntedObject::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::HauntedObject::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HauntedObject::__cordl_internal_get_FBXprefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FBXprefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HauntedObject::__cordl_internal_get_FBXprefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FBXprefab;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_FBXprefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FBXprefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HauntedObject::__cordl_internal_get_TurnOffLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnOffLight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HauntedObject::__cordl_internal_get_TurnOffLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnOffLight;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_TurnOffLight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TurnOffLight = value;
}
constexpr float_t& GlobalNamespace::HauntedObject::__cordl_internal_get_TurnOffDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnOffDuration;
}
constexpr float_t const& GlobalNamespace::HauntedObject::__cordl_internal_get_TurnOffDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnOffDuration;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_TurnOffDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TurnOffDuration = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HauntedObject::__cordl_internal_get_initialPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HauntedObject::__cordl_internal_get_initialPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPos;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_initialPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialPos = value;
}
constexpr float_t& GlobalNamespace::HauntedObject::__cordl_internal_get_passedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passedTime;
}
constexpr float_t const& GlobalNamespace::HauntedObject::__cordl_internal_get_passedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passedTime;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_passedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___passedTime = value;
}
constexpr float_t& GlobalNamespace::HauntedObject::__cordl_internal_get_lightPassedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightPassedTime;
}
constexpr float_t const& GlobalNamespace::HauntedObject::__cordl_internal_get_lightPassedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightPassedTime;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_lightPassedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightPassedTime = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HauntedObject::__cordl_internal_get_lurkerGhost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lurkerGhost;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HauntedObject::__cordl_internal_get_lurkerGhost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lurkerGhost;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_lurkerGhost(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lurkerGhost = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HauntedObject::__cordl_internal_get_wanderingGhost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wanderingGhost;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HauntedObject::__cordl_internal_get_wanderingGhost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wanderingGhost;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_wanderingGhost(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wanderingGhost = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>>& GlobalNamespace::HauntedObject::__cordl_internal_get_animators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animators;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>> const& GlobalNamespace::HauntedObject::__cordl_internal_get_animators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animators;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_animators(::ArrayW<::UnityW<::UnityEngine::Animator>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animators = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::HauntedObject::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::HauntedObject::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::HauntedObject::__cordl_internal_get_hauntedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hauntedSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::HauntedObject::__cordl_internal_get_hauntedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hauntedSound;
}
constexpr void GlobalNamespace::HauntedObject::__cordl_internal_set_hauntedSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hauntedSound = value;
}
inline void GlobalNamespace::HauntedObject::setStaticF__animHaunted(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_animHaunted", ::GlobalNamespace::HauntedObject*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::HauntedObject::getStaticF__animHaunted()  {
return ::cordl_internals::getStaticField<int32_t, "_animHaunted", ::GlobalNamespace::HauntedObject*>();
}
inline void GlobalNamespace::HauntedObject::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HauntedObject::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HauntedObject::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HauntedObject::TriggerEffects(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"TriggerEffects", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::HauntedObject::Shake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"Shake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::HauntedObject::TurnOff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {"TurnOff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::HauntedObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HauntedObject* GlobalNamespace::HauntedObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HauntedObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HauntedObject::HauntedObject()   {
}
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__TurnOff_d__23._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HauntedObject__TurnOff_d__23::*)(int32_t)>(&::GlobalNamespace::HauntedObject__TurnOff_d__23::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59518b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__TurnOff_d__23.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HauntedObject__TurnOff_d__23::*)()>(&::GlobalNamespace::HauntedObject__TurnOff_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5951ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__TurnOff_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HauntedObject__TurnOff_d__23::*)()>(&::GlobalNamespace::HauntedObject__TurnOff_d__23::MoveNext)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5951ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__TurnOff_d__23.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HauntedObject__TurnOff_d__23::*)()>(&::GlobalNamespace::HauntedObject__TurnOff_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5951b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__TurnOff_d__23.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HauntedObject__TurnOff_d__23::*)()>(&::GlobalNamespace::HauntedObject__TurnOff_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5951ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__TurnOff_d__23.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HauntedObject__TurnOff_d__23::*)()>(&::GlobalNamespace::HauntedObject__TurnOff_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5951bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HauntedObject__TurnOff_d__23::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::HauntedObject__TurnOff_d__23::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::HauntedObject__TurnOff_d__23::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::HauntedObject__TurnOff_d__23::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::HauntedObject__TurnOff_d__23::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::HauntedObject__TurnOff_d__23::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::HauntedObject>& GlobalNamespace::HauntedObject__TurnOff_d__23::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::HauntedObject> const& GlobalNamespace::HauntedObject__TurnOff_d__23::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::HauntedObject__TurnOff_d__23::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HauntedObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::HauntedObject__TurnOff_d__23::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::HauntedObject__TurnOff_d__23::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HauntedObject__TurnOff_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HauntedObject__TurnOff_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::HauntedObject__TurnOff_d__23::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HauntedObject__TurnOff_d__23::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::HauntedObject__TurnOff_d__23* GlobalNamespace::HauntedObject__TurnOff_d__23::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HauntedObject__TurnOff_d__23*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::HauntedObject__TurnOff_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::HauntedObject__TurnOff_d__23::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::HauntedObject__TurnOff_d__23::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::HauntedObject__TurnOff_d__23::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::HauntedObject__TurnOff_d__23::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::HauntedObject__TurnOff_d__23::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HauntedObject__TurnOff_d__23::HauntedObject__TurnOff_d__23()   {
}
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__Shake_d__22._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HauntedObject__Shake_d__22::*)(int32_t)>(&::GlobalNamespace::HauntedObject__Shake_d__22::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5951890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__Shake_d__22.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HauntedObject__Shake_d__22::*)()>(&::GlobalNamespace::HauntedObject__Shake_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595196c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__Shake_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HauntedObject__Shake_d__22::*)()>(&::GlobalNamespace::HauntedObject__Shake_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5951970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__Shake_d__22.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HauntedObject__Shake_d__22::*)()>(&::GlobalNamespace::HauntedObject__Shake_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5951a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__Shake_d__22.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HauntedObject__Shake_d__22::*)()>(&::GlobalNamespace::HauntedObject__Shake_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5951a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HauntedObject__Shake_d__22.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HauntedObject__Shake_d__22::*)()>(&::GlobalNamespace::HauntedObject__Shake_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5951abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HauntedObject__Shake_d__22::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::HauntedObject__Shake_d__22::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::HauntedObject__Shake_d__22::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::HauntedObject__Shake_d__22::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::HauntedObject__Shake_d__22::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::HauntedObject__Shake_d__22::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::HauntedObject>& GlobalNamespace::HauntedObject__Shake_d__22::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::HauntedObject> const& GlobalNamespace::HauntedObject__Shake_d__22::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::HauntedObject__Shake_d__22::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HauntedObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::HauntedObject__Shake_d__22::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::HauntedObject__Shake_d__22::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HauntedObject__Shake_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HauntedObject__Shake_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::HauntedObject__Shake_d__22::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HauntedObject__Shake_d__22::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HauntedObject__Shake_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::HauntedObject__Shake_d__22* GlobalNamespace::HauntedObject__Shake_d__22::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HauntedObject__Shake_d__22*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::HauntedObject__Shake_d__22::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::HauntedObject__Shake_d__22::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::HauntedObject__Shake_d__22::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::HauntedObject__Shake_d__22::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::HauntedObject__Shake_d__22::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::HauntedObject__Shake_d__22::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HauntedObject__Shake_d__22::HauntedObject__Shake_d__22()   {
}
