#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioAnimator.hpp"
#include "GlobalNamespace/zzzz__AudioAnimator_AudioTarget_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioAnimator_def.hpp"
#include "GlobalNamespace/zzzz__AudioAnimator_AudioTarget_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioAnimator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioAnimator::*)()>(&::GlobalNamespace::AudioAnimator::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56466ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAnimator*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAnimator.InitBaseVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioAnimator::*)()>(&::GlobalNamespace::AudioAnimator::InitBaseVolume)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56466fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAnimator*>(),
                        {"InitBaseVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAnimator.UpdateValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioAnimator::*)(float_t, bool)>(&::GlobalNamespace::AudioAnimator::UpdateValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5646784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAnimator*>(),
                        {"UpdateValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAnimator.UpdatePitchAndVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioAnimator::*)(float_t, float_t, bool)>(&::GlobalNamespace::AudioAnimator::UpdatePitchAndVolume)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x564678c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAnimator*>(),
                        {"UpdatePitchAndVolume", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAnimator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioAnimator::*)()>(&::GlobalNamespace::AudioAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5646934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAnimator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AudioAnimator::__cordl_internal_get_didInitBaseVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didInitBaseVolume;
}
constexpr bool const& GlobalNamespace::AudioAnimator::__cordl_internal_get_didInitBaseVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didInitBaseVolume;
}
constexpr void GlobalNamespace::AudioAnimator::__cordl_internal_set_didInitBaseVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didInitBaseVolume = value;
}
constexpr ::ArrayW<::GlobalNamespace::AudioAnimator_AudioTarget>& GlobalNamespace::AudioAnimator::__cordl_internal_get_targets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr ::ArrayW<::GlobalNamespace::AudioAnimator_AudioTarget> const& GlobalNamespace::AudioAnimator::__cordl_internal_get_targets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr void GlobalNamespace::AudioAnimator::__cordl_internal_set_targets(::ArrayW<::GlobalNamespace::AudioAnimator_AudioTarget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targets = value;
}
inline void GlobalNamespace::AudioAnimator::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAnimator*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioAnimator::InitBaseVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAnimator*>(),
                        {"InitBaseVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioAnimator::UpdateValue(float_t  value, bool  ignoreSmoothing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAnimator*>(),
                        {"UpdateValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, ignoreSmoothing);
}
inline void GlobalNamespace::AudioAnimator::UpdatePitchAndVolume(float_t  pitchValue, float_t  volumeValue, bool  ignoreSmoothing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAnimator*>(),
                        {"UpdatePitchAndVolume", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pitchValue, volumeValue, ignoreSmoothing);
}
inline void GlobalNamespace::AudioAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAnimator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioAnimator* GlobalNamespace::AudioAnimator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioAnimator::AudioAnimator()   {
}
