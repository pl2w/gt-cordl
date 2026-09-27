#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/LayerDecoderBase.hpp"
#include "Meta/Voice/NLayer/zzzz__StereoMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerDecoderBase_def.hpp"
#include "Meta/Voice/NLayer/zzzz__IMpegFrame_def.hpp"
#include "Meta/Voice/NLayer/zzzz__StereoMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)()>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::_ctor)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x9e08198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase.DecodeFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)(::Meta::Voice::NLayer::IMpegFrame*, ::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::DecodeFrame)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                    {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase.SetEQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)(::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::SetEQ)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e05f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"SetEQ", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase.get_StereoMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLayer::StereoMode (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)()>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::get_StereoMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e08420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"get_StereoMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase.set_StereoMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)(::Meta::Voice::NLayer::StereoMode)>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::set_StereoMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e08428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"set_StereoMode", {}, {::i2c::type_of<::Meta::Voice::NLayer::StereoMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase.InversePolyPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)(int32_t, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::InversePolyPhase)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e08430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"InversePolyPhase", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase.GetBufAndOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)(int32_t, ::by_ref<::ArrayW<float_t>>, ::by_ref<int32_t>)>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::GetBufAndOffset)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x9e084f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"GetBufAndOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase.DCT32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)(::ArrayW<float_t>, ::ArrayW<float_t>, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::DCT32)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9e08760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"DCT32", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase.DCT16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)(::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::DCT16)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x9e08e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"DCT16", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase.DCT8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)(::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::DCT8)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x9e09280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"DCT8", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase.BuildUVec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)(::ArrayW<float_t>, ::ArrayW<float_t>, int32_t)>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::BuildUVec)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9e0897c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"BuildUVec", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::LayerDecoderBase.DewindowOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::LayerDecoderBase::*)(::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Meta::Voice::NLayer::Decoder::LayerDecoderBase::DewindowOutput)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x9e08ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"DewindowOutput", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>*& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get__synBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synBuf;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>* const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get__synBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synBuf;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set__synBuf(::System::Collections::Generic::List_1<::ArrayW<float_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____synBuf = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get__bufOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufOffset;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get__bufOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufOffset;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set__bufOffset(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufOffset = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get__eq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eq;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get__eq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eq;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set__eq(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eq = value;
}
constexpr ::Meta::Voice::NLayer::StereoMode& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get__StereoMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StereoMode_k__BackingField;
}
constexpr ::Meta::Voice::NLayer::StereoMode const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get__StereoMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StereoMode_k__BackingField;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set__StereoMode_k__BackingField(::Meta::Voice::NLayer::StereoMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StereoMode_k__BackingField = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_ippuv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ippuv;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_ippuv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ippuv;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_ippuv(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ippuv = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get__synBufFirst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synBufFirst;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get__synBufFirst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synBufFirst;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set__synBufFirst(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____synBufFirst = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_ei32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ei32;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_ei32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ei32;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_ei32(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ei32 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_eo32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eo32;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_eo32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eo32;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_eo32(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eo32 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oi32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oi32;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oi32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oi32;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_oi32(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oi32 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oo32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oo32;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oo32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oo32;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_oo32(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oo32 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_ei16()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ei16;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_ei16() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ei16;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_ei16(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ei16 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_eo16()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eo16;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_eo16() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eo16;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_eo16(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eo16 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oi16()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oi16;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oi16() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oi16;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_oi16(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oi16 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oo16()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oo16;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oo16() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oo16;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_oo16(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oo16 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_ei8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ei8;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_ei8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ei8;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_ei8(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ei8 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_tmp8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmp8;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_tmp8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmp8;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_tmp8(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tmp8 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oi8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oi8;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oi8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oi8;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_oi8(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oi8 = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oo8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oo8;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_get_oo8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oo8;
}
constexpr void Meta::Voice::NLayer::Decoder::LayerDecoderBase::__cordl_internal_set_oo8(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oo8 = value;
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::setStaticF_DEWINDOW_TABLE(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "DEWINDOW_TABLE", ::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerDecoderBase::getStaticF_DEWINDOW_TABLE()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "DEWINDOW_TABLE", ::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::setStaticF_SYNTH_COS64_TABLE(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "SYNTH_COS64_TABLE", ::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::LayerDecoderBase::getStaticF_SYNTH_COS64_TABLE()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "SYNTH_COS64_TABLE", ::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>();
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Meta::Voice::NLayer::Decoder::LayerDecoderBase::DecodeFrame(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<float_t>  ch0, ::ArrayW<float_t>  ch1)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame, ch0, ch1);
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::SetEQ(::ArrayW<float_t>  eq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"SetEQ", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eq);
}
inline ::Meta::Voice::NLayer::StereoMode Meta::Voice::NLayer::Decoder::LayerDecoderBase::get_StereoMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"get_StereoMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLayer::StereoMode>(this, ___internal_method);
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::set_StereoMode(::Meta::Voice::NLayer::StereoMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"set_StereoMode", {}, {::i2c::type_of<::Meta::Voice::NLayer::StereoMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::InversePolyPhase(int32_t  channel, ::ArrayW<float_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"InversePolyPhase", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, data);
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::GetBufAndOffset(int32_t  channel, ::by_ref<::ArrayW<float_t>>  synBuf, ::by_ref<int32_t>  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"GetBufAndOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, synBuf, k);
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::DCT32(::ArrayW<float_t>  _in, ::ArrayW<float_t>  _out, int32_t  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"DCT32", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _in, _out, k);
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::DCT16(::ArrayW<float_t>  _in, ::ArrayW<float_t>  _out)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"DCT16", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _in, _out);
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::DCT8(::ArrayW<float_t>  _in, ::ArrayW<float_t>  _out)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"DCT8", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _in, _out);
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::BuildUVec(::ArrayW<float_t>  u_vec, ::ArrayW<float_t>  cur_synbuf, int32_t  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"BuildUVec", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, u_vec, cur_synbuf, k);
}
inline void Meta::Voice::NLayer::Decoder::LayerDecoderBase::DewindowOutput(::ArrayW<float_t>  u_vec, ::ArrayW<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>(),
                        {"DewindowOutput", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, u_vec, samples);
}
inline ::Meta::Voice::NLayer::Decoder::LayerDecoderBase* Meta::Voice::NLayer::Decoder::LayerDecoderBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLayer::Decoder::LayerDecoderBase*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::Decoder::LayerDecoderBase::LayerDecoderBase()   {
}
