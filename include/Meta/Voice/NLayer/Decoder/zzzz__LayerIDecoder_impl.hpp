#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/LayerIDecoder.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIIDecoderBase_impl.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIDecoder_def.hpp"
#include "Meta/Voice/NLayer/zzzz__IMpegFrame_def.hpp"
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIDecoder::*)()>(&::Meta::Voice::NLayer::Decoder::LayerIDecoder::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e05e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIDecoder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIDecoder.GetRateTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Meta::Voice::NLayer::Decoder::LayerIDecoder::*)(::Meta::Voice::NLayer::IMpegFrame*)>(&::Meta::Voice::NLayer::Decoder::LayerIDecoder::GetRateTable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e09a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIDecoder*>(),
                    {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIDecoder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIDecoder.ReadScaleFactorSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIDecoder::*)(::Meta::Voice::NLayer::IMpegFrame*, ::ArrayW<::ArrayW<int32_t>>, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIDecoder::ReadScaleFactorSelection)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e09ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIDecoder*>(),
                    {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIDecoder*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::NLayer::Decoder::LayerIDecoder::setStaticF__rateTable(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_rateTable", ::Meta::Voice::NLayer::Decoder::LayerIDecoder*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Meta::Voice::NLayer::Decoder::LayerIDecoder::getStaticF__rateTable()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_rateTable", ::Meta::Voice::NLayer::Decoder::LayerIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIDecoder::setStaticF__allocLookupTable(::ArrayW<::ArrayW<int32_t>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "_allocLookupTable", ::Meta::Voice::NLayer::Decoder::LayerIDecoder*>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
inline ::ArrayW<::ArrayW<int32_t>> Meta::Voice::NLayer::Decoder::LayerIDecoder::getStaticF__allocLookupTable()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "_allocLookupTable", ::Meta::Voice::NLayer::Decoder::LayerIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIDecoder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIDecoder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Meta::Voice::NLayer::Decoder::LayerIDecoder::GetRateTable(::Meta::Voice::NLayer::IMpegFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIDecoder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, frame);
}
inline void Meta::Voice::NLayer::Decoder::LayerIDecoder::ReadScaleFactorSelection(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<::ArrayW<int32_t>>  scfsi, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIDecoder*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, scfsi, channels);
}
inline ::Meta::Voice::NLayer::Decoder::LayerIDecoder* Meta::Voice::NLayer::Decoder::LayerIDecoder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLayer::Decoder::LayerIDecoder*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::Decoder::LayerIDecoder::LayerIDecoder()   {
}
