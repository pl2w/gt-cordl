#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoiceAudio_1.hpp"
#include "Photon/Voice/zzzz__LocalVoiceFramed_1_impl.hpp"
#include "Photon/Voice/zzzz__LocalVoiceAudio_1_def.hpp"
#include "Photon/Voice/zzzz__AudioUtil_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "Photon/Voice/zzzz__ILocalVoiceAudio_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
constexpr ::Photon::Voice::AudioUtil_VoiceDetector_1<T>*& Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_get_voiceDetector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetector;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_VoiceDetector_1<T>* const& Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_get_voiceDetector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetector;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_set_voiceDetector(::Photon::Voice::AudioUtil_VoiceDetector_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceDetector = value;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*& Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_get_voiceDetectorCalibration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetectorCalibration;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>* const& Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_get_voiceDetectorCalibration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetectorCalibration;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_set_voiceDetectorCalibration(::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceDetectorCalibration = value;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_LevelMeter_1<T>*& Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_get_levelMeter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelMeter;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_LevelMeter_1<T>* const& Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_get_levelMeter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelMeter;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_set_levelMeter(::Photon::Voice::AudioUtil_LevelMeter_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelMeter = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr int32_t const& Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_set_channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
template<typename T>
constexpr bool& Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_get_resampleSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resampleSource;
}
template<typename T>
constexpr bool const& Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_get_resampleSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resampleSource;
}
template<typename T>
constexpr void Photon::Voice::LocalVoiceAudio_1<T>::__cordl_internal_set_resampleSource(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resampleSource = value;
}
template<typename T>
inline ::Photon::Voice::LocalVoiceAudio_1<T>* Photon::Voice::LocalVoiceAudio_1<T>::Create(::Photon::Voice::VoiceClient*  voiceClient, uint8_t  voiceId, ::Photon::Voice::IEncoder*  encoder, ::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudio_1<T>*>(),
                        {"Create", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::IAudioDesc*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoiceAudio_1<T>*>(nullptr, ___internal_method, voiceClient, voiceId, encoder, voiceInfo, audioSourceDesc, channelId);
}
template<typename T>
inline ::Photon::Voice::AudioUtil_IVoiceDetector* Photon::Voice::LocalVoiceAudio_1<T>::get_VoiceDetector()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::LocalVoiceAudio_1<T>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::AudioUtil_IVoiceDetector*>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::AudioUtil_ILevelMeter* Photon::Voice::LocalVoiceAudio_1<T>::get_LevelMeter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::LocalVoiceAudio_1<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::AudioUtil_ILevelMeter*>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::LocalVoiceAudio_1<T>::VoiceDetectorCalibrate(int32_t  durationMs, ::System::Action_1<float_t>*  onCalibrated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudio_1<T>*>(),
                        {"VoiceDetectorCalibrate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, durationMs, onCalibrated);
}
template<typename T>
inline bool Photon::Voice::LocalVoiceAudio_1<T>::get_VoiceDetectorCalibrating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudio_1<T>*>(),
                        {"get_VoiceDetectorCalibrating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::LocalVoiceAudio_1<T>::_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudio_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::IAudioDesc*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceClient, encoder, id, voiceInfo, audioSourceDesc, channelId);
}
template<typename T>
inline void Photon::Voice::LocalVoiceAudio_1<T>::initBuiltinProcessors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudio_1<T>*>(),
                        {"initBuiltinProcessors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::LocalVoiceAudio_1<T>* Photon::Voice::LocalVoiceAudio_1<T>::New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, int32_t  channelId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::LocalVoiceAudio_1<T>*>(voiceClient, encoder, id, voiceInfo, audioSourceDesc, channelId));
}
/// @brief Convert operator to "::Photon::Voice::ILocalVoiceAudio"
template<typename T>
constexpr  Photon::Voice::LocalVoiceAudio_1<T>::operator ::Photon::Voice::ILocalVoiceAudio*() noexcept {
return static_cast<::Photon::Voice::ILocalVoiceAudio*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::ILocalVoiceAudio"
template<typename T>
constexpr ::Photon::Voice::ILocalVoiceAudio* Photon::Voice::LocalVoiceAudio_1<T>::i___Photon__Voice__ILocalVoiceAudio() noexcept {
return static_cast<::Photon::Voice::ILocalVoiceAudio*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::LocalVoiceAudio_1<T>::LocalVoiceAudio_1()   {
}
