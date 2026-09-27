#pragma once
// IWYU pragma private; include "GorillaTag/Audio/ProcessVoiceDataToLoudness.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Audio/zzzz__ProcessVoiceDataToLoudness_def.hpp"
#include "GorillaTag/Audio/zzzz__VoiceToLoudness_def.hpp"
#include "Photon/Voice/zzzz__IProcessor_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::ProcessVoiceDataToLoudness._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::ProcessVoiceDataToLoudness::*)(::GorillaTag::Audio::VoiceToLoudness*)>(&::GorillaTag::Audio::ProcessVoiceDataToLoudness::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d4fccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::ProcessVoiceDataToLoudness*>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTag::Audio::VoiceToLoudness*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::ProcessVoiceDataToLoudness.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GorillaTag::Audio::ProcessVoiceDataToLoudness::*)(::ArrayW<float_t>)>(&::GorillaTag::Audio::ProcessVoiceDataToLoudness::Process)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d4fd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::ProcessVoiceDataToLoudness*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::ProcessVoiceDataToLoudness.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::ProcessVoiceDataToLoudness::*)()>(&::GorillaTag::Audio::ProcessVoiceDataToLoudness::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d4fe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::ProcessVoiceDataToLoudness*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Audio::VoiceToLoudness>& GorillaTag::Audio::ProcessVoiceDataToLoudness::__cordl_internal_get__voiceToLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceToLoudness;
}
constexpr ::UnityW<::GorillaTag::Audio::VoiceToLoudness> const& GorillaTag::Audio::ProcessVoiceDataToLoudness::__cordl_internal_get__voiceToLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceToLoudness;
}
constexpr void GorillaTag::Audio::ProcessVoiceDataToLoudness::__cordl_internal_set__voiceToLoudness(::UnityW<::GorillaTag::Audio::VoiceToLoudness>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceToLoudness = value;
}
inline void GorillaTag::Audio::ProcessVoiceDataToLoudness::_ctor(::GorillaTag::Audio::VoiceToLoudness*  voiceToLoudness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::ProcessVoiceDataToLoudness*>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTag::Audio::VoiceToLoudness*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceToLoudness);
}
inline ::ArrayW<float_t> GorillaTag::Audio::ProcessVoiceDataToLoudness::Process(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::ProcessVoiceDataToLoudness*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method, buf);
}
inline void GorillaTag::Audio::ProcessVoiceDataToLoudness::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::ProcessVoiceDataToLoudness*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::ProcessVoiceDataToLoudness* GorillaTag::Audio::ProcessVoiceDataToLoudness::New_ctor(::GorillaTag::Audio::VoiceToLoudness*  voiceToLoudness)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::ProcessVoiceDataToLoudness*>(voiceToLoudness));
}
/// @brief Convert operator to "::Photon::Voice::IProcessor_1<float_t>"
constexpr  GorillaTag::Audio::ProcessVoiceDataToLoudness::operator ::Photon::Voice::IProcessor_1<float_t>*() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IProcessor_1<float_t>"
constexpr ::Photon::Voice::IProcessor_1<float_t>* GorillaTag::Audio::ProcessVoiceDataToLoudness::i___Photon__Voice__IProcessor_1_float_t_() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTag::Audio::ProcessVoiceDataToLoudness::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTag::Audio::ProcessVoiceDataToLoudness::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::ProcessVoiceDataToLoudness::ProcessVoiceDataToLoudness()   {
}
