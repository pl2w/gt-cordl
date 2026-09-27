#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/LayerIIDecoder.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIIDecoderBase_impl.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIIDecoder_def.hpp"
#include "Meta/Voice/NLayer/zzzz__IMpegFrame_def.hpp"
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoder.SelectTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::Meta::Voice::NLayer::IMpegFrame*)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoder::SelectTable)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x9e09be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(),
                        {"SelectTable", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIDecoder::*)()>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoder::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e05e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoder.GetRateTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Meta::Voice::NLayer::Decoder::LayerIIDecoder::*)(::Meta::Voice::NLayer::IMpegFrame*)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoder::GetRateTable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e0a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(),
                    {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoder.ReadScaleFactorSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIDecoder::*)(::Meta::Voice::NLayer::IMpegFrame*, ::ArrayW<::ArrayW<int32_t>>, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoder::ReadScaleFactorSelection)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e0a064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(),
                    {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoder::setStaticF__rateLookupTable(::ArrayW<::ArrayW<int32_t>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "_rateLookupTable", ::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
inline ::ArrayW<::ArrayW<int32_t>> Meta::Voice::NLayer::Decoder::LayerIIDecoder::getStaticF__rateLookupTable()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "_rateLookupTable", ::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoder::setStaticF__allocLookupTable(::ArrayW<::ArrayW<int32_t>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "_allocLookupTable", ::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
inline ::ArrayW<::ArrayW<int32_t>> Meta::Voice::NLayer::Decoder::LayerIIDecoder::getStaticF__allocLookupTable()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "_allocLookupTable", ::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>();
}
inline ::ArrayW<int32_t> Meta::Voice::NLayer::Decoder::LayerIIDecoder::SelectTable(::Meta::Voice::NLayer::IMpegFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(),
                        {"SelectTable", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, frame);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Meta::Voice::NLayer::Decoder::LayerIIDecoder::GetRateTable(::Meta::Voice::NLayer::IMpegFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, frame);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoder::ReadScaleFactorSelection(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<::ArrayW<int32_t>>  scfsi, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, scfsi, channels);
}
inline ::Meta::Voice::NLayer::Decoder::LayerIIDecoder* Meta::Voice::NLayer::Decoder::LayerIIDecoder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLayer::Decoder::LayerIIDecoder*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::Decoder::LayerIIDecoder::LayerIIDecoder()   {
}
