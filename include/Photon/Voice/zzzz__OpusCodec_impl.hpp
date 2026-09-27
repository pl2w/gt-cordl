#pragma once
// IWYU pragma private; include "Photon/Voice/OpusCodec.hpp"
#include "Photon/Voice/zzzz__OpusCodec_impl.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__OpusCodec_def.hpp"
#include "POpusCodec/zzzz__OpusDecoder_1_def.hpp"
#include "POpusCodec/zzzz__OpusEncoder_def.hpp"
#include "Photon/Voice/zzzz__FrameBuffer_def.hpp"
#include "Photon/Voice/zzzz__FrameFlags_def.hpp"
#include "Photon/Voice/zzzz__FrameOut_1_def.hpp"
#include "Photon/Voice/zzzz__IDecoder_def.hpp"
#include "Photon/Voice/zzzz__IEncoderDirect_1_def.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__OpusCodec_FrameDuration_def.hpp"
#include "Photon/Voice/zzzz__OpusCodec_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::OpusCodec.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Voice::OpusCodec::get_Version)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa746734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::OpusCodec._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::OpusCodec::*)()>(&::Photon::Voice::OpusCodec::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa746738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Photon::Voice::OpusCodec::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Photon::Voice::OpusCodec::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::OpusCodec* Photon::Voice::OpusCodec::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::OpusCodec*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::OpusCodec::OpusCodec()   {
}
//  Writing Method size for method: ::Photon::Voice::OpusCodec_Util.bestEncoderSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Photon::Voice::OpusCodec_Util::bestEncoderSampleRate)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xa7468c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Util*>(),
                        {"bestEncoderSampleRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::OpusCodec_Util._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::OpusCodec_Util::*)()>(&::Photon::Voice::OpusCodec_Util::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa746c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Util*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Photon::Voice::OpusCodec_Util::bestEncoderSampleRate(int32_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Util*>(),
                        {"bestEncoderSampleRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, f);
}
inline void Photon::Voice::OpusCodec_Util::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Util*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::OpusCodec_Util* Photon::Voice::OpusCodec_Util::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::OpusCodec_Util*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::OpusCodec_Util::OpusCodec_Util()   {
}
template<typename T>
constexpr ::POpusCodec::OpusDecoder_1<T>*& Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_get_decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoder;
}
template<typename T>
constexpr ::POpusCodec::OpusDecoder_1<T>* const& Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_get_decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoder;
}
template<typename T>
constexpr void Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_set_decoder(::POpusCodec::OpusDecoder_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decoder = value;
}
template<typename T>
constexpr ::Photon::Voice::ILogger*& Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
template<typename T>
constexpr ::Photon::Voice::ILogger* const& Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
template<typename T>
constexpr void Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_set_logger(::Photon::Voice::ILogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
template<typename T>
constexpr ::StringW& Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr ::StringW const& Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
template<typename T>
constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*& Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_get_output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
template<typename T>
constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>* const& Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_get_output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
template<typename T>
constexpr void Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_set_output(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___output = value;
}
template<typename T>
constexpr ::Photon::Voice::FrameOut_1<T>*& Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_get_frameOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameOut;
}
template<typename T>
constexpr ::Photon::Voice::FrameOut_1<T>* const& Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_get_frameOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameOut;
}
template<typename T>
constexpr void Photon::Voice::OpusCodec_Decoder_1<T>::__cordl_internal_set_frameOut(::Photon::Voice::FrameOut_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameOut = value;
}
template<typename T>
inline void Photon::Voice::OpusCodec_Decoder_1<T>::_ctor(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output, ::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Decoder_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, logger);
}
template<typename T>
inline void Photon::Voice::OpusCodec_Decoder_1<T>::Open(::Photon::Voice::VoiceInfo  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Decoder_1<T>*>(),
                        {"Open", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
template<typename T>
inline ::StringW Photon::Voice::OpusCodec_Decoder_1<T>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Decoder_1<T>*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::OpusCodec_Decoder_1<T>::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Decoder_1<T>*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Photon::Voice::OpusCodec_Decoder_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Decoder_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::OpusCodec_Decoder_1<T>::Input(::by_ref<::Photon::Voice::FrameBuffer>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Decoder_1<T>*>(),
                        {"Input", {}, {::i2c::type_of<::by_ref<::Photon::Voice::FrameBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
template<typename T>
inline ::Photon::Voice::OpusCodec_Decoder_1<T>* Photon::Voice::OpusCodec_Decoder_1<T>::New_ctor(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output, ::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::OpusCodec_Decoder_1<T>*>(output, logger));
}
/// @brief Convert operator to "::Photon::Voice::IDecoder"
template<typename T>
constexpr  Photon::Voice::OpusCodec_Decoder_1<T>::operator ::Photon::Voice::IDecoder*() noexcept {
return static_cast<::Photon::Voice::IDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IDecoder"
template<typename T>
constexpr ::Photon::Voice::IDecoder* Photon::Voice::OpusCodec_Decoder_1<T>::i___Photon__Voice__IDecoder() noexcept {
return static_cast<::Photon::Voice::IDecoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::OpusCodec_Decoder_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::OpusCodec_Decoder_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::OpusCodec_Decoder_1<T>::OpusCodec_Decoder_1()   {
}
//  Writing Method size for method: ::Photon::Voice::OpusCodec_EncoderShort._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::OpusCodec_EncoderShort::*)(::Photon::Voice::VoiceInfo, ::Photon::Voice::ILogger*)>(&::Photon::Voice::OpusCodec_EncoderShort::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa746804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_EncoderShort*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::OpusCodec_EncoderShort.encodeTyped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Photon::Voice::OpusCodec_EncoderShort::*)(::ArrayW<int16_t>)>(&::Photon::Voice::OpusCodec_EncoderShort::encodeTyped)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa7468b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::OpusCodec_EncoderShort*>(),
                    {::i2c::class_of<::Photon::Voice::OpusCodec_EncoderShort*>(), 11}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::OpusCodec_EncoderShort::_ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_EncoderShort*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, logger);
}
inline ::System::ArraySegment_1<uint8_t> Photon::Voice::OpusCodec_EncoderShort::encodeTyped(::ArrayW<int16_t>  buf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::OpusCodec_EncoderShort*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method, buf);
}
inline ::Photon::Voice::OpusCodec_EncoderShort* Photon::Voice::OpusCodec_EncoderShort::New_ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::OpusCodec_EncoderShort*>(i, logger));
}
// Ctor Parameters []
constexpr ::Photon::Voice::OpusCodec_EncoderShort::OpusCodec_EncoderShort()   {
}
//  Writing Method size for method: ::Photon::Voice::OpusCodec_EncoderFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::OpusCodec_EncoderFloat::*)(::Photon::Voice::VoiceInfo, ::Photon::Voice::ILogger*)>(&::Photon::Voice::OpusCodec_EncoderFloat::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa746740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_EncoderFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::OpusCodec_EncoderFloat.encodeTyped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Photon::Voice::OpusCodec_EncoderFloat::*)(::ArrayW<float_t>)>(&::Photon::Voice::OpusCodec_EncoderFloat::encodeTyped)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa7467f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::OpusCodec_EncoderFloat*>(),
                    {::i2c::class_of<::Photon::Voice::OpusCodec_EncoderFloat*>(), 11}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::OpusCodec_EncoderFloat::_ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_EncoderFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, logger);
}
inline ::System::ArraySegment_1<uint8_t> Photon::Voice::OpusCodec_EncoderFloat::encodeTyped(::ArrayW<float_t>  buf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::OpusCodec_EncoderFloat*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method, buf);
}
inline ::Photon::Voice::OpusCodec_EncoderFloat* Photon::Voice::OpusCodec_EncoderFloat::New_ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::OpusCodec_EncoderFloat*>(i, logger));
}
// Ctor Parameters []
constexpr ::Photon::Voice::OpusCodec_EncoderFloat::OpusCodec_EncoderFloat()   {
}
template<typename T>
constexpr ::POpusCodec::OpusEncoder*& Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_get_encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
template<typename T>
constexpr ::POpusCodec::OpusEncoder* const& Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_get_encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
template<typename T>
constexpr void Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_set_encoder(::POpusCodec::OpusEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoder = value;
}
template<typename T>
constexpr bool& Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
template<typename T>
constexpr bool const& Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
template<typename T>
constexpr void Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
template<typename T>
constexpr ::StringW& Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr ::StringW const& Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
template<typename T>
constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*& Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_get__Output_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Output_k__BackingField;
}
template<typename T>
constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>* const& Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_get__Output_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Output_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::OpusCodec_Encoder_1<T>::__cordl_internal_set__Output_k__BackingField(::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Output_k__BackingField = value;
}
template<typename T>
inline void Photon::Voice::OpusCodec_Encoder_1<T>::setStaticF_EmptyBuffer(::System::ArraySegment_1<uint8_t>  value)  {
::cordl_internals::setStaticField<::System::ArraySegment_1<uint8_t>, "EmptyBuffer", ::Photon::Voice::OpusCodec_Encoder_1<T>*>(std::forward<::System::ArraySegment_1<uint8_t>>(value));
}
template<typename T>
inline ::System::ArraySegment_1<uint8_t> Photon::Voice::OpusCodec_Encoder_1<T>::getStaticF_EmptyBuffer()  {
return ::cordl_internals::getStaticField<::System::ArraySegment_1<uint8_t>, "EmptyBuffer", ::Photon::Voice::OpusCodec_Encoder_1<T>*>();
}
template<typename T>
inline void Photon::Voice::OpusCodec_Encoder_1<T>::_ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Encoder_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, logger);
}
template<typename T>
inline ::StringW Photon::Voice::OpusCodec_Encoder_1<T>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Encoder_1<T>*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::OpusCodec_Encoder_1<T>::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Encoder_1<T>*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Photon::Voice::OpusCodec_Encoder_1<T>::set_Output(::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Encoder_1<T>*>(),
                        {"set_Output", {}, {::i2c::type_of<::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>* Photon::Voice::OpusCodec_Encoder_1<T>::get_Output()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Encoder_1<T>*>(),
                        {"get_Output", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::OpusCodec_Encoder_1<T>::Input(::ArrayW<T>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Encoder_1<T>*>(),
                        {"Input", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
template<typename T>
inline void Photon::Voice::OpusCodec_Encoder_1<T>::EndOfStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Encoder_1<T>*>(),
                        {"EndOfStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::ArraySegment_1<uint8_t> Photon::Voice::OpusCodec_Encoder_1<T>::DequeueOutput(::by_ref<::Photon::Voice::FrameFlags>  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Encoder_1<T>*>(),
                        {"DequeueOutput", {}, {::i2c::type_of<::by_ref<::Photon::Voice::FrameFlags>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method, flags);
}
template<typename T>
inline ::System::ArraySegment_1<uint8_t> Photon::Voice::OpusCodec_Encoder_1<T>::encodeTyped(::ArrayW<T>  buf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::OpusCodec_Encoder_1<T>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method, buf);
}
template<typename T>
template<typename I>
requires(::cordl_internals::reference_type_constraint<I>)
inline I Photon::Voice::OpusCodec_Encoder_1<T>::GetPlatformAPI()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::OpusCodec_Encoder_1<T>*>(),
                    {"GetPlatformAPI", {::i2c::class_of<I>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<I>()}
                )));
return ::cordl_internals::RunMethodRethrow<I>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::OpusCodec_Encoder_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::OpusCodec_Encoder_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::OpusCodec_Encoder_1<T>* Photon::Voice::OpusCodec_Encoder_1<T>::New_ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::OpusCodec_Encoder_1<T>*>(i, logger));
}
/// @brief Convert operator to "::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>"
template<typename T>
constexpr  Photon::Voice::OpusCodec_Encoder_1<T>::operator ::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>*() noexcept {
return static_cast<::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>"
template<typename T>
constexpr ::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>* Photon::Voice::OpusCodec_Encoder_1<T>::i___Photon__Voice__IEncoderDirect_1___ArrayW_T__() noexcept {
return static_cast<::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IEncoder"
template<typename T>
constexpr  Photon::Voice::OpusCodec_Encoder_1<T>::operator ::Photon::Voice::IEncoder*() noexcept {
return static_cast<::Photon::Voice::IEncoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IEncoder"
template<typename T>
constexpr ::Photon::Voice::IEncoder* Photon::Voice::OpusCodec_Encoder_1<T>::i___Photon__Voice__IEncoder() noexcept {
return static_cast<::Photon::Voice::IEncoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::OpusCodec_Encoder_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::OpusCodec_Encoder_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::OpusCodec_Encoder_1<T>::OpusCodec_Encoder_1()   {
}
template<typename T>
inline ::Photon::Voice::IEncoder* Photon::Voice::OpusCodec_DecoderFactory::Create(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::OpusCodec_DecoderFactory*>(),
                    {"Create", {::i2c::class_of<T>()}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IEncoder*>(nullptr, ___internal_method, i, logger);
}
// Ctor Parameters []
constexpr ::Photon::Voice::OpusCodec_DecoderFactory::OpusCodec_DecoderFactory()   {
}
template<typename B>
inline ::Photon::Voice::IEncoder* Photon::Voice::OpusCodec_Factory::CreateEncoder(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::OpusCodec_Factory*>(),
                    {"CreateEncoder", {::i2c::class_of<B>()}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<B>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IEncoder*>(nullptr, ___internal_method, i, logger);
}
// Ctor Parameters []
constexpr ::Photon::Voice::OpusCodec_Factory::OpusCodec_Factory()   {
}
