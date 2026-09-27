#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/MicAmplifier.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_impl.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__MicAmplifier_def.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__MicAmplifierFloat_def.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__MicAmplifierShort_def.hpp"
#include "Photon/Voice/Unity/zzzz__PhotonVoiceCreatedParams_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifier.get_AmplificationFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::Unity::UtilityScripts::MicAmplifier::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifier::get_AmplificationFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa788d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"get_AmplificationFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifier.set_AmplificationFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifier::*)(float_t)>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifier::set_AmplificationFactor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa788d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"set_AmplificationFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifier.get_BoostValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::Unity::UtilityScripts::MicAmplifier::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifier::get_BoostValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa788da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"get_BoostValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifier.set_BoostValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifier::*)(float_t)>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifier::set_BoostValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa788db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"set_BoostValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifier.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifier::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifier::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa788e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifier.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifier::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifier::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa788e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifier.PhotonVoiceCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifier::*)(::Photon::Voice::Unity::PhotonVoiceCreatedParams*)>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifier::PhotonVoiceCreated)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0xa788e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"PhotonVoiceCreated", {}, {::i2c::type_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifier::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7892bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_get_boostValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boostValue;
}
constexpr float_t const& Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_get_boostValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boostValue;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_set_boostValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boostValue = value;
}
constexpr float_t& Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_get_amplificationFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplificationFactor;
}
constexpr float_t const& Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_get_amplificationFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplificationFactor;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_set_amplificationFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amplificationFactor = value;
}
constexpr ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*& Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_get_floatProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatProcessor;
}
constexpr ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat* const& Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_get_floatProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatProcessor;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_set_floatProcessor(::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatProcessor = value;
}
constexpr ::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort*& Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_get_shortProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shortProcessor;
}
constexpr ::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort* const& Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_get_shortProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shortProcessor;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicAmplifier::__cordl_internal_set_shortProcessor(::Photon::Voice::Unity::UtilityScripts::MicAmplifierShort*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shortProcessor = value;
}
inline float_t Photon::Voice::Unity::UtilityScripts::MicAmplifier::get_AmplificationFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"get_AmplificationFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifier::set_AmplificationFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"set_AmplificationFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Photon::Voice::Unity::UtilityScripts::MicAmplifier::get_BoostValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"get_BoostValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifier::set_BoostValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"set_BoostValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifier::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifier::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifier::PhotonVoiceCreated(::Photon::Voice::Unity::PhotonVoiceCreatedParams*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {"PhotonVoiceCreated", {}, {::i2c::type_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::MicAmplifier* Photon::Voice::Unity::UtilityScripts::MicAmplifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::MicAmplifier*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::MicAmplifier::MicAmplifier()   {
}
