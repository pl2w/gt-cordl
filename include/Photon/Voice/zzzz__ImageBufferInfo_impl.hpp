#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferInfo.hpp"
#include "Photon/Voice/zzzz__Flip_impl.hpp"
#include "Photon/Voice/zzzz__ImageBufferInfo_StrideSet_impl.hpp"
#include "Photon/Voice/zzzz__ImageFormat_impl.hpp"
#include "Photon/Voice/zzzz__Rotation_impl.hpp"
#include "Photon/Voice/zzzz__ImageBufferInfo_def.hpp"
#include "Photon/Voice/zzzz__Flip_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferInfo_StrideSet_def.hpp"
#include "Photon/Voice/zzzz__ImageFormat_def.hpp"
#include "Photon/Voice/zzzz__Rotation_def.hpp"
//  Writing Method size for method: ::Photon::Voice::ImageBufferInfo.get_Width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::ImageBufferInfo::*)()>(&::Photon::Voice::ImageBufferInfo::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7536cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferInfo.get_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::ImageBufferInfo::*)()>(&::Photon::Voice::ImageBufferInfo::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7536d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferInfo.get_Stride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ImageBufferInfo_StrideSet (::Photon::Voice::ImageBufferInfo::*)()>(&::Photon::Voice::ImageBufferInfo::get_Stride)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa7536dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Stride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferInfo.get_Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::ImageFormat (::Photon::Voice::ImageBufferInfo::*)()>(&::Photon::Voice::ImageBufferInfo::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7536f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Format", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferInfo.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Rotation (::Photon::Voice::ImageBufferInfo::*)()>(&::Photon::Voice::ImageBufferInfo::get_Rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7536f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferInfo.set_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferInfo::*)(::Photon::Voice::Rotation)>(&::Photon::Voice::ImageBufferInfo::set_Rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"set_Rotation", {}, {::i2c::type_of<::Photon::Voice::Rotation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferInfo.get_Flip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Flip (::Photon::Voice::ImageBufferInfo::*)()>(&::Photon::Voice::ImageBufferInfo::get_Flip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Flip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferInfo.set_Flip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferInfo::*)(::Photon::Voice::Flip)>(&::Photon::Voice::ImageBufferInfo::set_Flip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"set_Flip", {}, {::i2c::type_of<::Photon::Voice::Flip>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferInfo::*)(int32_t, int32_t, ::GlobalNamespace::ImageBufferInfo_StrideSet, ::Photon::Voice::ImageFormat)>(&::Photon::Voice::ImageBufferInfo::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa753718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(), ::i2c::type_of<::Photon::Voice::ImageFormat>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Photon::Voice::ImageBufferInfo::get_Width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Photon::Voice::ImageBufferInfo::get_Height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::ImageBufferInfo_StrideSet Photon::Voice::ImageBufferInfo::get_Stride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Stride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ImageBufferInfo_StrideSet>(*this, ___internal_method);
}
inline ::Photon::Voice::ImageFormat Photon::Voice::ImageBufferInfo::get_Format()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Format", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::ImageFormat>(*this, ___internal_method);
}
inline ::Photon::Voice::Rotation Photon::Voice::ImageBufferInfo::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Rotation>(*this, ___internal_method);
}
inline void Photon::Voice::ImageBufferInfo::set_Rotation(::Photon::Voice::Rotation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"set_Rotation", {}, {::i2c::type_of<::Photon::Voice::Rotation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Photon::Voice::Flip Photon::Voice::ImageBufferInfo::get_Flip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"get_Flip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Flip>(*this, ___internal_method);
}
inline void Photon::Voice::ImageBufferInfo::set_Flip(::Photon::Voice::Flip  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {"set_Flip", {}, {::i2c::type_of<::Photon::Voice::Flip>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Photon::Voice::ImageBufferInfo::_ctor(int32_t  width, int32_t  height, ::GlobalNamespace::ImageBufferInfo_StrideSet  stride, ::Photon::Voice::ImageFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(), ::i2c::type_of<::Photon::Voice::ImageFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, width, height, stride, format);
}
// Ctor Parameters [CppParam { name: "_Width_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Height_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Stride_k__BackingField", ty: "::GlobalNamespace::ImageBufferInfo_StrideSet", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Format_k__BackingField", ty: "::Photon::Voice::ImageFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Rotation_k__BackingField", ty: "::Photon::Voice::Rotation", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Flip_k__BackingField", ty: "::Photon::Voice::Flip", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::ImageBufferInfo::ImageBufferInfo(int32_t  _Width_k__BackingField, int32_t  _Height_k__BackingField, ::GlobalNamespace::ImageBufferInfo_StrideSet  _Stride_k__BackingField, ::Photon::Voice::ImageFormat  _Format_k__BackingField, ::Photon::Voice::Rotation  _Rotation_k__BackingField, ::Photon::Voice::Flip  _Flip_k__BackingField) noexcept  {
this->_Width_k__BackingField = _Width_k__BackingField;
this->_Height_k__BackingField = _Height_k__BackingField;
this->_Stride_k__BackingField = _Stride_k__BackingField;
this->_Format_k__BackingField = _Format_k__BackingField;
this->_Rotation_k__BackingField = _Rotation_k__BackingField;
this->_Flip_k__BackingField = _Flip_k__BackingField;
}
// Ctor Parameters []
constexpr ::Photon::Voice::ImageBufferInfo::ImageBufferInfo()   {
}
