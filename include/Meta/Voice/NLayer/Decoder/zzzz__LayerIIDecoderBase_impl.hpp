#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/LayerIIDecoderBase.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerDecoderBase_impl.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIIDecoderBase_def.hpp"
#include "Meta/Voice/NLayer/zzzz__IMpegFrame_def.hpp"
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::*)(::ArrayW<::ArrayW<int32_t>>, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::_ctor)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x9e096f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::ArrayW<int32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase.DecodeFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::*)(::Meta::Voice::NLayer::IMpegFrame*, ::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::DecodeFrame)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9e0a678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                    {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase.InitFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::*)(::Meta::Voice::NLayer::IMpegFrame*)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::InitFrame)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9e0a7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {"InitFrame", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase.GetRateTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::*)(::Meta::Voice::NLayer::IMpegFrame*)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::GetRateTable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                    {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase.ReadAllocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::*)(::Meta::Voice::NLayer::IMpegFrame*, ::ArrayW<int32_t>)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::ReadAllocation)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x9e0a920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {"ReadAllocation", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase.ReadScaleFactorSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::*)(::Meta::Voice::NLayer::IMpegFrame*, ::ArrayW<::ArrayW<int32_t>>, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::ReadScaleFactorSelection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                    {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase.ReadScaleFactors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::*)(::Meta::Voice::NLayer::IMpegFrame*)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::ReadScaleFactors)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x9e0ac50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {"ReadScaleFactors", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase.ReadSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::*)(::Meta::Voice::NLayer::IMpegFrame*)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::ReadSamples)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x9e0b304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {"ReadSamples", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase.DecodeSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::*)(::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::DecodeSamples)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x9e0b6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {"DecodeSamples", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_set__channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channels = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__jsbound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jsbound;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__jsbound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jsbound;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_set__jsbound(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jsbound = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__granuleCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____granuleCount;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__granuleCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____granuleCount;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_set__granuleCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____granuleCount = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__allocLookupTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocLookupTable;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__allocLookupTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocLookupTable;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_set__allocLookupTable(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allocLookupTable = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__scfsi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scfsi;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__scfsi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scfsi;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_set__scfsi(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scfsi = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_set__samples(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____samples = value;
}
constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>>& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__scalefac()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalefac;
}
constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>> const& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__scalefac() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalefac;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_set__scalefac(::ArrayW<::ArrayW<::ArrayW<int32_t>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scalefac = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__polyPhaseBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polyPhaseBuf;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__polyPhaseBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polyPhaseBuf;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_set__polyPhaseBuf(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____polyPhaseBuf = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__allocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocation;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_get__allocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocation;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::__cordl_internal_set__allocation(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allocation = value;
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::setStaticF__groupedC(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "_groupedC", ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::getStaticF__groupedC()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_groupedC", ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::setStaticF__groupedD(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "_groupedD", ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::getStaticF__groupedD()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_groupedD", ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::setStaticF__C(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "_C", ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::getStaticF__C()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_C", ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::setStaticF__D(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "_D", ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::getStaticF__D()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_D", ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::setStaticF__denormalMultiplier(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "_denormalMultiplier", ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::getStaticF__denormalMultiplier()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_denormalMultiplier", ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::_ctor(::ArrayW<::ArrayW<int32_t>>  allocLookupTable, int32_t  granuleCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::ArrayW<int32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocLookupTable, granuleCount);
}
inline int32_t Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::DecodeFrame(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<float_t>  ch0, ::ArrayW<float_t>  ch1)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame, ch0, ch1);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::InitFrame(::Meta::Voice::NLayer::IMpegFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {"InitFrame", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline ::ArrayW<int32_t> Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::GetRateTable(::Meta::Voice::NLayer::IMpegFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, frame);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::ReadAllocation(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<int32_t>  rateTable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {"ReadAllocation", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, rateTable);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::ReadScaleFactorSelection(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<::ArrayW<int32_t>>  scfsi, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, scfsi, channels);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::ReadScaleFactors(::Meta::Voice::NLayer::IMpegFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {"ReadScaleFactors", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::ReadSamples(::Meta::Voice::NLayer::IMpegFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {"ReadSamples", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline int32_t Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::DecodeSamples(::ArrayW<float_t>  ch0, ::ArrayW<float_t>  ch1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(),
                        {"DecodeSamples", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ch0, ch1);
}
inline ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase* Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::New_ctor(::ArrayW<::ArrayW<int32_t>>  allocLookupTable, int32_t  granuleCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*>(allocLookupTable, granuleCount));
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase::LayerIIDecoderBase()   {
}
