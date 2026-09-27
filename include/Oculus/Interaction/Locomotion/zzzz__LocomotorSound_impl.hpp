#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotorSound.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotorSound_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__AdjustableAudio_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventHandler_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.get_Locomotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler* (::Oculus::Interaction::Locomotion::LocomotorSound::*)()>(&::Oculus::Interaction::Locomotion::LocomotorSound::get_Locomotor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42f200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"get_Locomotor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.set_Locomotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*)>(&::Oculus::Interaction::Locomotion::LocomotorSound::set_Locomotor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42f208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"set_Locomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)()>(&::Oculus::Interaction::Locomotion::LocomotorSound::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa42f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)()>(&::Oculus::Interaction::Locomotion::LocomotorSound::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa42f268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)()>(&::Oculus::Interaction::Locomotion::LocomotorSound::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa42f294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)()>(&::Oculus::Interaction::Locomotion::LocomotorSound::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa42f394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.HandleLocomotionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)(::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::LocomotorSound::HandleLocomotionEvent)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa42f494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.PlayTranslationSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotorSound::PlayTranslationSound)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa42f5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"PlayTranslationSound", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.PlayDenialSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotorSound::PlayDenialSound)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa42f68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"PlayDenialSound", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.PlayRotationSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotorSound::PlayRotationSound)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa42f62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"PlayRotationSound", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.InjectAllLocomotorSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*)>(&::Oculus::Interaction::Locomotion::LocomotorSound::InjectAllLocomotorSound)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa42f6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"InjectAllLocomotorSound", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound.InjectPlayerLocomotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*)>(&::Oculus::Interaction::Locomotion::LocomotorSound::InjectPlayerLocomotor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa42f6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"InjectPlayerLocomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotorSound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotorSound::*)()>(&::Oculus::Interaction::Locomotion::LocomotorSound::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa42f7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__locomotor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__locomotor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotor;
}
constexpr void Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_set__locomotor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locomotor = value;
}
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__Locomotor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locomotor_k__BackingField;
}
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* const& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__Locomotor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locomotor_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_set__Locomotor_k__BackingField(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Locomotor_k__BackingField = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__translationSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translationSound;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio> const& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__translationSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translationSound;
}
constexpr void Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_set__translationSound(::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____translationSound = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__translationDeniedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translationDeniedSound;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio> const& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__translationDeniedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translationDeniedSound;
}
constexpr void Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_set__translationDeniedSound(::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____translationDeniedSound = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__snapTurnSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapTurnSound;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio> const& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__snapTurnSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapTurnSound;
}
constexpr void Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_set__snapTurnSound(::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapTurnSound = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__translationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__translationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translationCurve;
}
constexpr void Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_set__translationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____translationCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__rotationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__rotationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationCurve;
}
constexpr void Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_set__rotationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationCurve = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__pitchVariance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchVariance;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__pitchVariance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchVariance;
}
constexpr void Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_set__pitchVariance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitchVariance = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::LocomotorSound::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* Oculus::Interaction::Locomotion::LocomotorSound::get_Locomotor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"get_Locomotor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::set_Locomotor(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"set_Locomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent, ::UnityEngine::Pose  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionEvent, delta);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::PlayTranslationSound(float_t  translationDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"PlayTranslationSound", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, translationDistance);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::PlayDenialSound(float_t  translationDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"PlayDenialSound", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, translationDistance);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::PlayRotationSound(float_t  rotationLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"PlayRotationSound", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotationLength);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::InjectAllLocomotorSound(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  locomotor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"InjectAllLocomotorSound", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotor);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::InjectPlayerLocomotor(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  locomotor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {"InjectPlayerLocomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotor);
}
inline void Oculus::Interaction::Locomotion::LocomotorSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotorSound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotorSound* Oculus::Interaction::Locomotion::LocomotorSound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotorSound*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotorSound::LocomotorSound()   {
}
