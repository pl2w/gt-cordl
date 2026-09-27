#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtAudioTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtAudioTrigger_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtAudioTrigger.PlayTapStartedSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtAudioTrigger::*)()>(&::Liv::Lck::GorillaTag::GtAudioTrigger::PlayTapStartedSound)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d212b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtAudioTrigger*>(),
                        {"PlayTapStartedSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtAudioTrigger.PlayTapEndedSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtAudioTrigger::*)()>(&::Liv::Lck::GorillaTag::GtAudioTrigger::PlayTapEndedSound)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d212d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtAudioTrigger*>(),
                        {"PlayTapEndedSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtAudioTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtAudioTrigger::*)()>(&::Liv::Lck::GorillaTag::GtAudioTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d212f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtAudioTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::GorillaTag::GtAudioTrigger::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::GorillaTag::GtAudioTrigger::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::GorillaTag::GtAudioTrigger::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
inline void Liv::Lck::GorillaTag::GtAudioTrigger::PlayTapStartedSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtAudioTrigger*>(),
                        {"PlayTapStartedSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtAudioTrigger::PlayTapEndedSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtAudioTrigger*>(),
                        {"PlayTapEndedSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtAudioTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtAudioTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtAudioTrigger* Liv::Lck::GorillaTag::GtAudioTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtAudioTrigger*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtAudioTrigger::GtAudioTrigger()   {
}
