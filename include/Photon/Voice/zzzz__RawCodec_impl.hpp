#pragma once
// IWYU pragma private; include "Photon/Voice/RawCodec.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__RawCodec_def.hpp"
#include "Photon/Voice/zzzz__FrameBuffer_def.hpp"
#include "Photon/Voice/zzzz__FrameFlags_def.hpp"
#include "Photon/Voice/zzzz__FrameOut_1_def.hpp"
#include "Photon/Voice/zzzz__IDecoder_def.hpp"
#include "Photon/Voice/zzzz__IEncoderDirect_1_def.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "Photon/Voice/zzzz__RawCodec_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::RawCodec._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RawCodec::*)()>(&::Photon::Voice::RawCodec::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa747ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::RawCodec::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::RawCodec* Photon::Voice::RawCodec::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::RawCodec*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::RawCodec::RawCodec()   {
}
//  Writing Method size for method: ::Photon::Voice::RawCodec_ShortToFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RawCodec_ShortToFloat::*)(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*)>(&::Photon::Voice::RawCodec_ShortToFloat::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa747ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_ShortToFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RawCodec_ShortToFloat.Output
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RawCodec_ShortToFloat::*)(::Photon::Voice::FrameOut_1<int16_t>*)>(&::Photon::Voice::RawCodec_ShortToFloat::Output)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa747f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_ShortToFloat*>(),
                        {"Output", {}, {::i2c::type_of<::Photon::Voice::FrameOut_1<int16_t>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*& Photon::Voice::RawCodec_ShortToFloat::__cordl_internal_get_output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>* const& Photon::Voice::RawCodec_ShortToFloat::__cordl_internal_get_output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr void Photon::Voice::RawCodec_ShortToFloat::__cordl_internal_set_output(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___output = value;
}
constexpr ::ArrayW<float_t>& Photon::Voice::RawCodec_ShortToFloat::__cordl_internal_get_buf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buf;
}
constexpr ::ArrayW<float_t> const& Photon::Voice::RawCodec_ShortToFloat::__cordl_internal_get_buf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buf;
}
constexpr void Photon::Voice::RawCodec_ShortToFloat::__cordl_internal_set_buf(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buf = value;
}
inline void Photon::Voice::RawCodec_ShortToFloat::_ctor(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_ShortToFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void Photon::Voice::RawCodec_ShortToFloat::Output(::Photon::Voice::FrameOut_1<int16_t>*  shortBuf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_ShortToFloat*>(),
                        {"Output", {}, {::i2c::type_of<::Photon::Voice::FrameOut_1<int16_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shortBuf);
}
inline ::Photon::Voice::RawCodec_ShortToFloat* Photon::Voice::RawCodec_ShortToFloat::New_ctor(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  output)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::RawCodec_ShortToFloat*>(output));
}
// Ctor Parameters []
constexpr ::Photon::Voice::RawCodec_ShortToFloat::RawCodec_ShortToFloat()   {
}
template<typename T>
constexpr ::StringW& Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr ::StringW const& Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_get_buf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buf;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_get_buf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buf;
}
template<typename T>
constexpr void Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_set_buf(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buf = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_get_sizeofT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr int32_t const& Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_get_sizeofT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr void Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_set_sizeofT(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeofT = value;
}
template<typename T>
constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*& Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_get_output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
template<typename T>
constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>* const& Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_get_output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
template<typename T>
constexpr void Photon::Voice::RawCodec_Decoder_1<T>::__cordl_internal_set_output(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___output = value;
}
template<typename T>
inline ::StringW Photon::Voice::RawCodec_Decoder_1<T>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Decoder_1<T>*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::RawCodec_Decoder_1<T>::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Decoder_1<T>*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Photon::Voice::RawCodec_Decoder_1<T>::_ctor(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Decoder_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
template<typename T>
inline void Photon::Voice::RawCodec_Decoder_1<T>::Open(::Photon::Voice::VoiceInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Decoder_1<T>*>(),
                        {"Open", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
template<typename T>
inline void Photon::Voice::RawCodec_Decoder_1<T>::Input(::by_ref<::Photon::Voice::FrameBuffer>  byteBuf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Decoder_1<T>*>(),
                        {"Input", {}, {::i2c::type_of<::by_ref<::Photon::Voice::FrameBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, byteBuf);
}
template<typename T>
inline void Photon::Voice::RawCodec_Decoder_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Decoder_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::RawCodec_Decoder_1<T>* Photon::Voice::RawCodec_Decoder_1<T>::New_ctor(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::RawCodec_Decoder_1<T>*>(output));
}
/// @brief Convert operator to "::Photon::Voice::IDecoder"
template<typename T>
constexpr  Photon::Voice::RawCodec_Decoder_1<T>::operator ::Photon::Voice::IDecoder*() noexcept {
return static_cast<::Photon::Voice::IDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IDecoder"
template<typename T>
constexpr ::Photon::Voice::IDecoder* Photon::Voice::RawCodec_Decoder_1<T>::i___Photon__Voice__IDecoder() noexcept {
return static_cast<::Photon::Voice::IDecoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::RawCodec_Decoder_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::RawCodec_Decoder_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::RawCodec_Decoder_1<T>::RawCodec_Decoder_1()   {
}
template<typename T>
constexpr ::StringW& Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr ::StringW const& Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
template<typename T>
constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*& Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_get__Output_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Output_k__BackingField;
}
template<typename T>
constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>* const& Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_get__Output_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Output_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_set__Output_k__BackingField(::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Output_k__BackingField = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_get_sizeofT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr int32_t const& Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_get_sizeofT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr void Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_set_sizeofT(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeofT = value;
}
template<typename T>
constexpr ::ArrayW<uint8_t>& Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_get_byteBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___byteBuf;
}
template<typename T>
constexpr ::ArrayW<uint8_t> const& Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_get_byteBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___byteBuf;
}
template<typename T>
constexpr void Photon::Voice::RawCodec_Encoder_1<T>::__cordl_internal_set_byteBuf(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___byteBuf = value;
}
template<typename T>
inline void Photon::Voice::RawCodec_Encoder_1<T>::setStaticF_EmptyBuffer(::System::ArraySegment_1<uint8_t>  value)  {
::cordl_internals::setStaticField<::System::ArraySegment_1<uint8_t>, "EmptyBuffer", ::Photon::Voice::RawCodec_Encoder_1<T>*>(std::forward<::System::ArraySegment_1<uint8_t>>(value));
}
template<typename T>
inline ::System::ArraySegment_1<uint8_t> Photon::Voice::RawCodec_Encoder_1<T>::getStaticF_EmptyBuffer()  {
return ::cordl_internals::getStaticField<::System::ArraySegment_1<uint8_t>, "EmptyBuffer", ::Photon::Voice::RawCodec_Encoder_1<T>*>();
}
template<typename T>
inline ::StringW Photon::Voice::RawCodec_Encoder_1<T>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Encoder_1<T>*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::RawCodec_Encoder_1<T>::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Encoder_1<T>*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Photon::Voice::RawCodec_Encoder_1<T>::set_Output(::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Encoder_1<T>*>(),
                        {"set_Output", {}, {::i2c::type_of<::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>* Photon::Voice::RawCodec_Encoder_1<T>::get_Output()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Encoder_1<T>*>(),
                        {"get_Output", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*>(this, ___internal_method);
}
template<typename T>
inline ::System::ArraySegment_1<uint8_t> Photon::Voice::RawCodec_Encoder_1<T>::DequeueOutput(::by_ref<::Photon::Voice::FrameFlags>  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Encoder_1<T>*>(),
                        {"DequeueOutput", {}, {::i2c::type_of<::by_ref<::Photon::Voice::FrameFlags>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method, flags);
}
template<typename T>
inline void Photon::Voice::RawCodec_Encoder_1<T>::EndOfStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Encoder_1<T>*>(),
                        {"EndOfStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
template<typename I>
requires(::cordl_internals::reference_type_constraint<I>)
inline I Photon::Voice::RawCodec_Encoder_1<T>::GetPlatformAPI()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::RawCodec_Encoder_1<T>*>(),
                    {"GetPlatformAPI", {::i2c::class_of<I>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<I>()}
                )));
return ::cordl_internals::RunMethodRethrow<I>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::RawCodec_Encoder_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Encoder_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::RawCodec_Encoder_1<T>::Input(::ArrayW<T>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Encoder_1<T>*>(),
                        {"Input", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
template<typename T>
inline void Photon::Voice::RawCodec_Encoder_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RawCodec_Encoder_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::RawCodec_Encoder_1<T>* Photon::Voice::RawCodec_Encoder_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::RawCodec_Encoder_1<T>*>());
}
/// @brief Convert operator to "::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>"
template<typename T>
constexpr  Photon::Voice::RawCodec_Encoder_1<T>::operator ::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>*() noexcept {
return static_cast<::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>"
template<typename T>
constexpr ::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>* Photon::Voice::RawCodec_Encoder_1<T>::i___Photon__Voice__IEncoderDirect_1___ArrayW_T__() noexcept {
return static_cast<::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IEncoder"
template<typename T>
constexpr  Photon::Voice::RawCodec_Encoder_1<T>::operator ::Photon::Voice::IEncoder*() noexcept {
return static_cast<::Photon::Voice::IEncoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IEncoder"
template<typename T>
constexpr ::Photon::Voice::IEncoder* Photon::Voice::RawCodec_Encoder_1<T>::i___Photon__Voice__IEncoder() noexcept {
return static_cast<::Photon::Voice::IEncoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::RawCodec_Encoder_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::RawCodec_Encoder_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::RawCodec_Encoder_1<T>::RawCodec_Encoder_1()   {
}
