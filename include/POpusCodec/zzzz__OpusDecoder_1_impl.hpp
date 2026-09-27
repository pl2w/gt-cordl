#pragma once
// IWYU pragma private; include "POpusCodec/OpusDecoder_1.hpp"
#include "POpusCodec/Enums/zzzz__Bandwidth_impl.hpp"
#include "Photon/Voice/zzzz__FrameBuffer_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "POpusCodec/zzzz__OpusDecoder_1_def.hpp"
#include "POpusCodec/Enums/zzzz__Bandwidth_def.hpp"
#include "POpusCodec/Enums/zzzz__Channels_def.hpp"
#include "POpusCodec/Enums/zzzz__SamplingRate_def.hpp"
#include "Photon/Voice/zzzz__FrameBuffer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename T>
constexpr bool& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get_TisFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TisFloat;
}
template<typename T>
constexpr bool const& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get_TisFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TisFloat;
}
template<typename T>
constexpr void POpusCodec::OpusDecoder_1<T>::__cordl_internal_set_TisFloat(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TisFloat = value;
}
template<typename T>
constexpr int32_t& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get_sizeofT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr int32_t const& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get_sizeofT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr void POpusCodec::OpusDecoder_1<T>::__cordl_internal_set_sizeofT(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeofT = value;
}
template<typename T>
constexpr ::System::IntPtr& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get__handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
template<typename T>
constexpr ::System::IntPtr const& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get__handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
template<typename T>
constexpr void POpusCodec::OpusDecoder_1<T>::__cordl_internal_set__handle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handle = value;
}
template<typename T>
constexpr int32_t& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get__channelCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelCount;
}
template<typename T>
constexpr int32_t const& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get__channelCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelCount;
}
template<typename T>
constexpr void POpusCodec::OpusDecoder_1<T>::__cordl_internal_set__channelCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelCount = value;
}
template<typename T>
constexpr ::System::Nullable_1<::POpusCodec::Enums::Bandwidth>& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get__previousPacketBandwidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPacketBandwidth;
}
template<typename T>
constexpr ::System::Nullable_1<::POpusCodec::Enums::Bandwidth> const& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get__previousPacketBandwidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPacketBandwidth;
}
template<typename T>
constexpr void POpusCodec::OpusDecoder_1<T>::__cordl_internal_set__previousPacketBandwidth(::System::Nullable_1<::POpusCodec::Enums::Bandwidth>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousPacketBandwidth = value;
}
template<typename T>
constexpr ::ArrayW<T>& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename T>
constexpr ::ArrayW<T> const& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename T>
constexpr void POpusCodec::OpusDecoder_1<T>::__cordl_internal_set_buffer(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
template<typename T>
constexpr ::Photon::Voice::FrameBuffer& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get_prevPacketData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPacketData;
}
template<typename T>
constexpr ::Photon::Voice::FrameBuffer const& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get_prevPacketData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPacketData;
}
template<typename T>
constexpr void POpusCodec::OpusDecoder_1<T>::__cordl_internal_set_prevPacketData(::Photon::Voice::FrameBuffer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevPacketData = value;
}
template<typename T>
constexpr bool& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get_prevPacketInvalid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPacketInvalid;
}
template<typename T>
constexpr bool const& POpusCodec::OpusDecoder_1<T>::__cordl_internal_get_prevPacketInvalid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPacketInvalid;
}
template<typename T>
constexpr void POpusCodec::OpusDecoder_1<T>::__cordl_internal_set_prevPacketInvalid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevPacketInvalid = value;
}
template<typename T>
inline void POpusCodec::OpusDecoder_1<T>::setStaticF_EmptyBuffer(::ArrayW<T>  value)  {
::cordl_internals::setStaticField<::ArrayW<T>, "EmptyBuffer", ::POpusCodec::OpusDecoder_1<T>*>(std::forward<::ArrayW<T>>(value));
}
template<typename T>
inline ::ArrayW<T> POpusCodec::OpusDecoder_1<T>::getStaticF_EmptyBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<T>, "EmptyBuffer", ::POpusCodec::OpusDecoder_1<T>*>();
}
template<typename T>
inline ::System::Nullable_1<::POpusCodec::Enums::Bandwidth> POpusCodec::OpusDecoder_1<T>::get_PreviousPacketBandwidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusDecoder_1<T>*>(),
                        {"get_PreviousPacketBandwidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::POpusCodec::Enums::Bandwidth>>(this, ___internal_method);
}
template<typename T>
inline void POpusCodec::OpusDecoder_1<T>::_ctor(::POpusCodec::Enums::SamplingRate  outputSamplingRateHz, ::POpusCodec::Enums::Channels  numChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusDecoder_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<::POpusCodec::Enums::Channels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputSamplingRateHz, numChannels);
}
template<typename T>
inline ::ArrayW<T> POpusCodec::OpusDecoder_1<T>::DecodePacket(::by_ref<::Photon::Voice::FrameBuffer>  packetData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusDecoder_1<T>*>(),
                        {"DecodePacket", {}, {::i2c::type_of<::by_ref<::Photon::Voice::FrameBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, packetData);
}
template<typename T>
inline ::ArrayW<T> POpusCodec::OpusDecoder_1<T>::DecodeEndOfStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusDecoder_1<T>*>(),
                        {"DecodeEndOfStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline void POpusCodec::OpusDecoder_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusDecoder_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::POpusCodec::OpusDecoder_1<T>* POpusCodec::OpusDecoder_1<T>::New_ctor(::POpusCodec::Enums::SamplingRate  outputSamplingRateHz, ::POpusCodec::Enums::Channels  numChannels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::POpusCodec::OpusDecoder_1<T>*>(outputSamplingRateHz, numChannels));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  POpusCodec::OpusDecoder_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* POpusCodec::OpusDecoder_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::POpusCodec::OpusDecoder_1<T>::OpusDecoder_1()   {
}
