#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/MpegFrameDecoder.hpp"
#include "Meta/Voice/NLayer/zzzz__StereoMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegFrameDecoder_def.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIDecoder_def.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIIDecoder_def.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIIIDecoder_def.hpp"
#include "Meta/Voice/NLayer/zzzz__IMpegFrame_def.hpp"
#include "Meta/Voice/NLayer/zzzz__StereoMode_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::Meta::Voice::NLayer::MpegFrameDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::MpegFrameDecoder::*)()>(&::Meta::Voice::NLayer::MpegFrameDecoder::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e04af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::MpegFrameDecoder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::MpegFrameDecoder.get_StereoMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLayer::StereoMode (::Meta::Voice::NLayer::MpegFrameDecoder::*)()>(&::Meta::Voice::NLayer::MpegFrameDecoder::get_StereoMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e058e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::MpegFrameDecoder*>(),
                        {"get_StereoMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::MpegFrameDecoder.DecodeFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::MpegFrameDecoder::*)(::Meta::Voice::NLayer::IMpegFrame*, ::ArrayW<float_t>, int32_t)>(&::Meta::Voice::NLayer::MpegFrameDecoder::DecodeFrame)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x9e058f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::MpegFrameDecoder*>(),
                        {"DecodeFrame", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::MpegFrameDecoder.DecodeFrameImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::MpegFrameDecoder::*)(::Meta::Voice::NLayer::IMpegFrame*, ::System::Array*, int32_t)>(&::Meta::Voice::NLayer::MpegFrameDecoder::DecodeFrameImpl)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x9e05aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::MpegFrameDecoder*>(),
                        {"DecodeFrameImpl", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::NLayer::Decoder::LayerIDecoder*& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__layerIDecoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerIDecoder;
}
constexpr ::Meta::Voice::NLayer::Decoder::LayerIDecoder* const& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__layerIDecoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerIDecoder;
}
constexpr void Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_set__layerIDecoder(::Meta::Voice::NLayer::Decoder::LayerIDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerIDecoder = value;
}
constexpr ::Meta::Voice::NLayer::Decoder::LayerIIDecoder*& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__layerIIDecoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerIIDecoder;
}
constexpr ::Meta::Voice::NLayer::Decoder::LayerIIDecoder* const& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__layerIIDecoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerIIDecoder;
}
constexpr void Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_set__layerIIDecoder(::Meta::Voice::NLayer::Decoder::LayerIIDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerIIDecoder = value;
}
constexpr ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__layerIIIDecoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerIIIDecoder;
}
constexpr ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder* const& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__layerIIIDecoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerIIIDecoder;
}
constexpr void Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_set__layerIIIDecoder(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerIIIDecoder = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__eqFactors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eqFactors;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__eqFactors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eqFactors;
}
constexpr void Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_set__eqFactors(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eqFactors = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__ch0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ch0;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__ch0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ch0;
}
constexpr void Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_set__ch0(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ch0 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__ch1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ch1;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__ch1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ch1;
}
constexpr void Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_set__ch1(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ch1 = value;
}
constexpr ::Meta::Voice::NLayer::StereoMode& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__StereoMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StereoMode_k__BackingField;
}
constexpr ::Meta::Voice::NLayer::StereoMode const& Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_get__StereoMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StereoMode_k__BackingField;
}
constexpr void Meta::Voice::NLayer::MpegFrameDecoder::__cordl_internal_set__StereoMode_k__BackingField(::Meta::Voice::NLayer::StereoMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StereoMode_k__BackingField = value;
}
inline void Meta::Voice::NLayer::MpegFrameDecoder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::MpegFrameDecoder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::NLayer::StereoMode Meta::Voice::NLayer::MpegFrameDecoder::get_StereoMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::MpegFrameDecoder*>(),
                        {"get_StereoMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLayer::StereoMode>(this, ___internal_method);
}
inline int32_t Meta::Voice::NLayer::MpegFrameDecoder::DecodeFrame(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<float_t>  dest, int32_t  destOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::MpegFrameDecoder*>(),
                        {"DecodeFrame", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame, dest, destOffset);
}
inline int32_t Meta::Voice::NLayer::MpegFrameDecoder::DecodeFrameImpl(::Meta::Voice::NLayer::IMpegFrame*  frame, ::System::Array*  dest, int32_t  destOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::MpegFrameDecoder*>(),
                        {"DecodeFrameImpl", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame, dest, destOffset);
}
inline ::Meta::Voice::NLayer::MpegFrameDecoder* Meta::Voice::NLayer::MpegFrameDecoder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLayer::MpegFrameDecoder*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::MpegFrameDecoder::MpegFrameDecoder()   {
}
