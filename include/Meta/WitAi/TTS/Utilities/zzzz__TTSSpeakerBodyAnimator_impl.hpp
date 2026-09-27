#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeakerBodyAnimator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeakerBodyAnimator_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ISpeaker_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator.get_Speaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Interfaces::ISpeaker* (::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::get_Speaker)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e65444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(),
                        {"get_Speaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::Awake)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9e6548c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e655c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator.RefreshSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::RefreshSpeaking)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e65710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(),
                        {"RefreshSpeaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator.RefreshPausing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::RefreshPausing)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9e655d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(),
                        {"RefreshPausing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e65838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_get__speaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speaker;
}
constexpr ::UnityW<::UnityEngine::Object> const& Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_get__speaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speaker;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_set__speaker(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speaker = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_get_Animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_get_Animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Animator;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_set_Animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Animator = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_get_AnimatorSpeakKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimatorSpeakKey;
}
constexpr ::StringW const& Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_get_AnimatorSpeakKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimatorSpeakKey;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_set_AnimatorSpeakKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnimatorSpeakKey = value;
}
constexpr bool& Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_get__speaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speaking;
}
constexpr bool const& Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_get__speaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speaking;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_set__speaking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speaking = value;
}
constexpr bool& Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_get__pausing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pausing;
}
constexpr bool const& Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_get__pausing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pausing;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::__cordl_internal_set__pausing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pausing = value;
}
inline ::Meta::WitAi::TTS::Interfaces::ISpeaker* Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::get_Speaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(),
                        {"get_Speaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Interfaces::ISpeaker*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::RefreshSpeaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(),
                        {"RefreshSpeaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::RefreshPausing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(),
                        {"RefreshPausing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator* Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator::TTSSpeakerBodyAnimator()   {
}
