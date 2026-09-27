#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/LayerIIIDecoder.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerDecoderBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIIIDecoder_def.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__BitReservoir_def.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIIIDecoder_def.hpp"
#include "Meta/Voice/NLayer/zzzz__IMpegFrame_def.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegChannelMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)()>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::_ctor)> {
  constexpr static std::size_t size = 0xd34;
  constexpr static std::size_t addrs = 0x9e04bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.DecodeFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(::Meta::Voice::NLayer::IMpegFrame*, ::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::DecodeFrame)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x9e0bfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                    {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.ReadSideInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(::Meta::Voice::NLayer::IMpegFrame*)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ReadSideInfo)> {
  constexpr static std::size_t size = 0x22bc;
  constexpr static std::size_t addrs = 0x9e0c578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ReadSideInfo", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.PrepTables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(::Meta::Voice::NLayer::IMpegFrame*)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::PrepTables)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x9e0e834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"PrepTables", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.ReadScalefactors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(int32_t, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ReadScalefactors)> {
  constexpr static std::size_t size = 0xf50;
  constexpr static std::size_t addrs = 0x9e0ef44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ReadScalefactors", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.ReadLsfScalefactors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(int32_t, int32_t, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ReadLsfScalefactors)> {
  constexpr static std::size_t size = 0x9ac;
  constexpr static std::size_t addrs = 0x9e0fe94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ReadLsfScalefactors", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.ReadSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(int32_t, int32_t, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ReadSamples)> {
  constexpr static std::size_t size = 0x8d8;
  constexpr static std::size_t addrs = 0x9e10840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ReadSamples", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.Dequantize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(int32_t, float_t, int32_t, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::Dequantize)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x9e11f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"Dequantize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.Stereo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(::Meta::Voice::NLayer::MpegChannelMode, int32_t, int32_t, bool)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::Stereo)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x9e11118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"Stereo", {}, {::i2c::type_of<::Meta::Voice::NLayer::MpegChannelMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.ApplyIStereo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(int32_t, int32_t, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ApplyIStereo)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x9e12760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ApplyIStereo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.ApplyLsfIStereo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(int32_t, int32_t, int32_t, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ApplyLsfIStereo)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x9e125a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ApplyLsfIStereo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.ApplyMidSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(int32_t, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ApplyMidSide)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e123e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ApplyMidSide", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.ApplyFullStereo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(int32_t, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ApplyFullStereo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e124fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ApplyFullStereo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.Reorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(::ArrayW<float_t>, bool)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::Reorder)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9e11aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"Reorder", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.AntiAlias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(::ArrayW<float_t>, bool)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::AntiAlias)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9e11bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"AntiAlias", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.FrequencyInversion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::FrequencyInversion)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9e11e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"FrequencyInversion", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder.InversePolyphase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::*)(::ArrayW<float_t>, int32_t, int32_t, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::InversePolyphase)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9e11ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"InversePolyphase", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::ArrayW<float_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__chanBufs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chanBufs;
}
constexpr ::ArrayW<::ArrayW<float_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__chanBufs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chanBufs;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__chanBufs(::ArrayW<::ArrayW<float_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chanBufs = value;
}
constexpr ::ArrayW<int32_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__readLsfScalefactorsSlen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readLsfScalefactorsSlen;
}
constexpr ::ArrayW<int32_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__readLsfScalefactorsSlen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readLsfScalefactorsSlen;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__readLsfScalefactorsSlen(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readLsfScalefactorsSlen = value;
}
constexpr ::ArrayW<int32_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__readLsfScalefactorsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readLsfScalefactorsBuffer;
}
constexpr ::ArrayW<int32_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__readLsfScalefactorsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readLsfScalefactorsBuffer;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__readLsfScalefactorsBuffer(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readLsfScalefactorsBuffer = value;
}
constexpr ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__hybrid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hybrid;
}
constexpr ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT* const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__hybrid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hybrid;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__hybrid(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hybrid = value;
}
constexpr ::Meta::Voice::NLayer::Decoder::BitReservoir*& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__bitRes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitRes;
}
constexpr ::Meta::Voice::NLayer::Decoder::BitReservoir* const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__bitRes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitRes;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__bitRes(::Meta::Voice::NLayer::Decoder::BitReservoir*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bitRes = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channels = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__privBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____privBits;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__privBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____privBits;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__privBits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____privBits = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__mainDataBegin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainDataBegin;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__mainDataBegin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainDataBegin;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__mainDataBegin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mainDataBegin = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__scfsi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scfsi;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__scfsi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scfsi;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__scfsi(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scfsi = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__part23Length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____part23Length;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__part23Length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____part23Length;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__part23Length(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____part23Length = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__bigValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bigValues;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__bigValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bigValues;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__bigValues(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bigValues = value;
}
constexpr ::ArrayW<::ArrayW<float_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__globalGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalGain;
}
constexpr ::ArrayW<::ArrayW<float_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__globalGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalGain;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__globalGain(::ArrayW<::ArrayW<float_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____globalGain = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__scalefacCompress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalefacCompress;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__scalefacCompress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalefacCompress;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__scalefacCompress(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scalefacCompress = value;
}
constexpr ::ArrayW<::ArrayW<bool>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__blockSplitFlag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockSplitFlag;
}
constexpr ::ArrayW<::ArrayW<bool>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__blockSplitFlag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockSplitFlag;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__blockSplitFlag(::ArrayW<::ArrayW<bool>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blockSplitFlag = value;
}
constexpr ::ArrayW<::ArrayW<bool>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__mixedBlockFlag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixedBlockFlag;
}
constexpr ::ArrayW<::ArrayW<bool>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__mixedBlockFlag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixedBlockFlag;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__mixedBlockFlag(::ArrayW<::ArrayW<bool>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mixedBlockFlag = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__blockType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockType;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__blockType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockType;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__blockType(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blockType = value;
}
constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__tableSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tableSelect;
}
constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__tableSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tableSelect;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__tableSelect(::ArrayW<::ArrayW<::ArrayW<int32_t>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tableSelect = value;
}
constexpr ::ArrayW<::ArrayW<::ArrayW<float_t>>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__subblockGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subblockGain;
}
constexpr ::ArrayW<::ArrayW<::ArrayW<float_t>>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__subblockGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subblockGain;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__subblockGain(::ArrayW<::ArrayW<::ArrayW<float_t>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subblockGain = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__regionAddress1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____regionAddress1;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__regionAddress1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____regionAddress1;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__regionAddress1(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____regionAddress1 = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__regionAddress2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____regionAddress2;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__regionAddress2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____regionAddress2;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__regionAddress2(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____regionAddress2 = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__preflag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preflag;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__preflag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preflag;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__preflag(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preflag = value;
}
constexpr ::ArrayW<::ArrayW<float_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__scalefacScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalefacScale;
}
constexpr ::ArrayW<::ArrayW<float_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__scalefacScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalefacScale;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__scalefacScale(::ArrayW<::ArrayW<float_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scalefacScale = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__count1TableSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count1TableSelect;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__count1TableSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count1TableSelect;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__count1TableSelect(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count1TableSelect = value;
}
constexpr ::ArrayW<int32_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__sfBandIndexL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sfBandIndexL;
}
constexpr ::ArrayW<int32_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__sfBandIndexL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sfBandIndexL;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__sfBandIndexL(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sfBandIndexL = value;
}
constexpr ::ArrayW<int32_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__sfBandIndexS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sfBandIndexS;
}
constexpr ::ArrayW<int32_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__sfBandIndexS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sfBandIndexS;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__sfBandIndexS(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sfBandIndexS = value;
}
constexpr ::ArrayW<uint8_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__cbLookupL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbLookupL;
}
constexpr ::ArrayW<uint8_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__cbLookupL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbLookupL;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__cbLookupL(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cbLookupL = value;
}
constexpr ::ArrayW<uint8_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__cbLookupS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbLookupS;
}
constexpr ::ArrayW<uint8_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__cbLookupS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbLookupS;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__cbLookupS(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cbLookupS = value;
}
constexpr ::ArrayW<uint8_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__cbwLookupS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbwLookupS;
}
constexpr ::ArrayW<uint8_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__cbwLookupS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbwLookupS;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__cbwLookupS(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cbwLookupS = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__cbLookupSR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbLookupSR;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__cbLookupSR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbLookupSR;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__cbLookupSR(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cbLookupSR = value;
}
constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__scalefac()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalefac;
}
constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__scalefac() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalefac;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__scalefac(::ArrayW<::ArrayW<::ArrayW<int32_t>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scalefac = value;
}
constexpr ::ArrayW<::ArrayW<float_t>>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr ::ArrayW<::ArrayW<float_t>> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__samples(::ArrayW<::ArrayW<float_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____samples = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__reorderBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reorderBuf;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__reorderBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reorderBuf;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__reorderBuf(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reorderBuf = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__polyPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polyPhase;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_get__polyPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____polyPhase;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::__cordl_internal_set__polyPhase(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____polyPhase = value;
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::setStaticF_GAIN_TAB(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "GAIN_TAB", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerIIIDecoder::getStaticF_GAIN_TAB()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "GAIN_TAB", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::setStaticF__sfBandIndexLTable(::ArrayW<::ArrayW<int32_t>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "_sfBandIndexLTable", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
inline ::ArrayW<::ArrayW<int32_t>> Meta::Voice::NLayer::Decoder::LayerIIIDecoder::getStaticF__sfBandIndexLTable()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "_sfBandIndexLTable", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::setStaticF__sfBandIndexSTable(::ArrayW<::ArrayW<int32_t>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "_sfBandIndexSTable", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
inline ::ArrayW<::ArrayW<int32_t>> Meta::Voice::NLayer::Decoder::LayerIIIDecoder::getStaticF__sfBandIndexSTable()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "_sfBandIndexSTable", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::setStaticF__slen(::ArrayW<::ArrayW<int32_t>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "_slen", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
inline ::ArrayW<::ArrayW<int32_t>> Meta::Voice::NLayer::Decoder::LayerIIIDecoder::getStaticF__slen()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "_slen", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::setStaticF__sfbBlockCntTab(::ArrayW<::ArrayW<::ArrayW<int32_t>>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::ArrayW<int32_t>>>, "_sfbBlockCntTab", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(std::forward<::ArrayW<::ArrayW<::ArrayW<int32_t>>>>(value));
}
inline ::ArrayW<::ArrayW<::ArrayW<int32_t>>> Meta::Voice::NLayer::Decoder::LayerIIIDecoder::getStaticF__sfbBlockCntTab()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::ArrayW<int32_t>>>, "_sfbBlockCntTab", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::setStaticF_PRETAB(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "PRETAB", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Meta::Voice::NLayer::Decoder::LayerIIIDecoder::getStaticF_PRETAB()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "PRETAB", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::setStaticF_POW2_TAB(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "POW2_TAB", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerIIIDecoder::getStaticF_POW2_TAB()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "POW2_TAB", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::setStaticF__isRatio(::ArrayW<::ArrayW<float_t>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<float_t>>, "_isRatio", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(std::forward<::ArrayW<::ArrayW<float_t>>>(value));
}
inline ::ArrayW<::ArrayW<float_t>> Meta::Voice::NLayer::Decoder::LayerIIIDecoder::getStaticF__isRatio()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<float_t>>, "_isRatio", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::setStaticF__lsfRatio(::ArrayW<::ArrayW<::ArrayW<float_t>>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::ArrayW<float_t>>>, "_lsfRatio", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(std::forward<::ArrayW<::ArrayW<::ArrayW<float_t>>>>(value));
}
inline ::ArrayW<::ArrayW<::ArrayW<float_t>>> Meta::Voice::NLayer::Decoder::LayerIIIDecoder::getStaticF__lsfRatio()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::ArrayW<float_t>>>, "_lsfRatio", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::setStaticF__scs(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "_scs", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerIIIDecoder::getStaticF__scs()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_scs", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::setStaticF__sca(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "_sca", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerIIIDecoder::getStaticF__sca()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_sca", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Meta::Voice::NLayer::Decoder::LayerIIIDecoder::DecodeFrame(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<float_t>  ch0, ::ArrayW<float_t>  ch1)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame, ch0, ch1);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ReadSideInfo(::Meta::Voice::NLayer::IMpegFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ReadSideInfo", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::PrepTables(::Meta::Voice::NLayer::IMpegFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"PrepTables", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline int32_t Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ReadScalefactors(int32_t  gr, int32_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ReadScalefactors", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, gr, ch);
}
inline int32_t Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ReadLsfScalefactors(int32_t  gr, int32_t  ch, int32_t  chanModeExt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ReadLsfScalefactors", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, gr, ch, chanModeExt);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ReadSamples(int32_t  sfBits, int32_t  gr, int32_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ReadSamples", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sfBits, gr, ch);
}
inline float_t Meta::Voice::NLayer::Decoder::LayerIIIDecoder::Dequantize(int32_t  idx, float_t  val, int32_t  gr, int32_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"Dequantize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx, val, gr, ch);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::Stereo(::Meta::Voice::NLayer::MpegChannelMode  channelMode, int32_t  chanModeExt, int32_t  gr, bool  lsf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"Stereo", {}, {::i2c::type_of<::Meta::Voice::NLayer::MpegChannelMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelMode, chanModeExt, gr, lsf);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ApplyIStereo(int32_t  i, int32_t  sb, int32_t  isPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ApplyIStereo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, sb, isPos);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ApplyLsfIStereo(int32_t  i, int32_t  sb, int32_t  isPos, int32_t  scalefacCompress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ApplyLsfIStereo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, sb, isPos, scalefacCompress);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ApplyMidSide(int32_t  i, int32_t  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ApplyMidSide", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, sb);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::ApplyFullStereo(int32_t  i, int32_t  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"ApplyFullStereo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, sb);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::Reorder(::ArrayW<float_t>  buf, bool  mixedBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"Reorder", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, mixedBlock);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::AntiAlias(::ArrayW<float_t>  buf, bool  mixedBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"AntiAlias", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, mixedBlock);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::FrequencyInversion(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"FrequencyInversion", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder::InversePolyphase(::ArrayW<float_t>  buf, int32_t  ch, int32_t  ofs, ::ArrayW<float_t>  outBuf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>(),
                        {"InversePolyphase", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, ch, ofs, outBuf);
}
inline ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder* Meta::Voice::NLayer::Decoder::LayerIIIDecoder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder::LayerIIIDecoder()   {
}
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::*)()>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::_ctor)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x9e0bd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT.GetPrevBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::*)(int32_t, ::by_ref<::ArrayW<float_t>>, ::by_ref<::ArrayW<float_t>>)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::GetPrevBlock)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x9e140fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"GetPrevBlock", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::*)(::ArrayW<float_t>, int32_t, int32_t, bool)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::Apply)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9e11d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"Apply", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT.LongImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::*)(::ArrayW<float_t>, int32_t, int32_t, ::ArrayW<float_t>, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::LongImpl)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9e143a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"LongImpl", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT.LongIMDCT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::*)(::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::LongIMDCT)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x9e14810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"LongIMDCT", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT.ICOS72_A
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::ICOS72_A)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e15044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"ICOS72_A", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT.ICOS36_A
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::ICOS36_A)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e14fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"ICOS36_A", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT.imdct_9pt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::*)(::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::imdct_9pt)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x9e14ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"imdct_9pt", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT.ShortImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::*)(::ArrayW<float_t>, int32_t, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::ShortImpl)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x9e14580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"ShortImpl", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT.ShortIMDCT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::*)(::ArrayW<float_t>, int32_t, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::ShortIMDCT)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x9e150c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"ShortIMDCT", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>*& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__prevBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevBlock;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>* const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__prevBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevBlock;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__prevBlock(::System::Collections::Generic::List_1<::ArrayW<float_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevBlock = value;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>*& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__nextBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextBlock;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>* const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__nextBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextBlock;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__nextBlock(::System::Collections::Generic::List_1<::ArrayW<float_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextBlock = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__prevBlockFirst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevBlockFirst;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__prevBlockFirst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevBlockFirst;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__prevBlockFirst(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevBlockFirst = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__nextBlockFirst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextBlockFirst;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__nextBlockFirst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextBlockFirst;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__nextBlockFirst(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextBlockFirst = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdctTemp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdctTemp;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdctTemp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdctTemp;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__imdctTemp(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imdctTemp = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdctResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdctResult;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdctResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdctResult;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__imdctResult(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imdctResult = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_H()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_H;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_H() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_H;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__imdct_H(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imdct_H = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_h()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_h;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_h() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_h;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__imdct_h(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imdct_h = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_even()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_even;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_even() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_even;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__imdct_even(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imdct_even = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_odd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_odd;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_odd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_odd;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__imdct_odd(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imdct_odd = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_even_idct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_even_idct;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_even_idct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_even_idct;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__imdct_even_idct(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imdct_even_idct = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_odd_idct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_odd_idct;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_odd_idct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_odd_idct;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__imdct_odd_idct(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imdct_odd_idct = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_9pt_even_idct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_9pt_even_idct;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_9pt_even_idct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_9pt_even_idct;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__imdct_9pt_even_idct(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imdct_9pt_even_idct = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_9pt_odd_idct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_9pt_odd_idct;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__imdct_9pt_odd_idct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imdct_9pt_odd_idct;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__imdct_9pt_odd_idct(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imdct_9pt_odd_idct = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__ShortIMDCT_H()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShortIMDCT_H;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__ShortIMDCT_H() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShortIMDCT_H;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__ShortIMDCT_H(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShortIMDCT_H = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__ShortIMDCT_h()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShortIMDCT_h;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__ShortIMDCT_h() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShortIMDCT_h;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__ShortIMDCT_h(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShortIMDCT_h = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__ShortIMDCT_even_idct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShortIMDCT_even_idct;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__ShortIMDCT_even_idct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShortIMDCT_even_idct;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__ShortIMDCT_even_idct(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShortIMDCT_even_idct = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__ShortIMDCT_odd_idct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShortIMDCT_odd_idct;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_get__ShortIMDCT_odd_idct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShortIMDCT_odd_idct;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::__cordl_internal_set__ShortIMDCT_odd_idct(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShortIMDCT_odd_idct = value;
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::setStaticF__swin(::ArrayW<::ArrayW<float_t>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<float_t>>, "_swin", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(std::forward<::ArrayW<::ArrayW<float_t>>>(value));
}
inline ::ArrayW<::ArrayW<float_t>> Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::getStaticF__swin()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<float_t>>, "_swin", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::setStaticF_icos72_table(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "icos72_table", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::getStaticF_icos72_table()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "icos72_table", ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::GetPrevBlock(int32_t  channel, ::by_ref<::ArrayW<float_t>>  prevBlock, ::by_ref<::ArrayW<float_t>>  nextBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"GetPrevBlock", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, prevBlock, nextBlock);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::Apply(::ArrayW<float_t>  fsIn, int32_t  channel, int32_t  blockType, bool  doMixed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"Apply", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fsIn, channel, blockType, doMixed);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::LongImpl(::ArrayW<float_t>  fsIn, int32_t  sbStart, int32_t  sbLimit, ::ArrayW<float_t>  nextblck, int32_t  blockType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"LongImpl", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fsIn, sbStart, sbLimit, nextblck, blockType);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::LongIMDCT(::ArrayW<float_t>  invec, ::ArrayW<float_t>  outvec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"LongIMDCT", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, invec, outvec);
}
inline float_t Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::ICOS72_A(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"ICOS72_A", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, i);
}
inline float_t Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::ICOS36_A(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"ICOS36_A", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, i);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::imdct_9pt(::ArrayW<float_t>  invec, ::ArrayW<float_t>  outvec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"imdct_9pt", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, invec, outvec);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::ShortImpl(::ArrayW<float_t>  fsIn, int32_t  sbStart, ::ArrayW<float_t>  nextblck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"ShortImpl", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fsIn, sbStart, nextblck);
}
inline void Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::ShortIMDCT(::ArrayW<float_t>  invec, int32_t  inIdx, ::ArrayW<float_t>  outvec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>(),
                        {"ShortIMDCT", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, invec, inIdx, outvec);
}
inline ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT* Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT::LayerIIIDecoder_HybridMDCT()   {
}
