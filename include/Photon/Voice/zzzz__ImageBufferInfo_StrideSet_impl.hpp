#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferInfo_StrideSet.hpp"
#include "Photon/Voice/zzzz__ImageBufferInfo_StrideSet_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ImageBufferInfo_StrideSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageBufferInfo_StrideSet::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::ImageBufferInfo_StrideSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7537b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageBufferInfo_StrideSet.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ImageBufferInfo_StrideSet::*)(int32_t)>(&::GlobalNamespace::ImageBufferInfo_StrideSet::get_Item)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa7537c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageBufferInfo_StrideSet.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageBufferInfo_StrideSet::*)(int32_t, int32_t)>(&::GlobalNamespace::ImageBufferInfo_StrideSet::set_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa753808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageBufferInfo_StrideSet.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ImageBufferInfo_StrideSet::*)()>(&::GlobalNamespace::ImageBufferInfo_StrideSet::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageBufferInfo_StrideSet.set_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageBufferInfo_StrideSet::*)(int32_t)>(&::GlobalNamespace::ImageBufferInfo_StrideSet::set_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ImageBufferInfo_StrideSet::_ctor(int32_t  length, int32_t  s0, int32_t  s1, int32_t  s2, int32_t  s3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, s0, s1, s2, s3);
}
inline int32_t GlobalNamespace::ImageBufferInfo_StrideSet::get_Item(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, key);
}
inline void GlobalNamespace::ImageBufferInfo_StrideSet::set_Item(int32_t  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
inline int32_t GlobalNamespace::ImageBufferInfo_StrideSet::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ImageBufferInfo_StrideSet::set_Length(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferInfo_StrideSet>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "stride0", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stride1", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stride2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stride3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Length_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ImageBufferInfo_StrideSet::ImageBufferInfo_StrideSet(int32_t  stride0, int32_t  stride1, int32_t  stride2, int32_t  stride3, int32_t  _Length_k__BackingField) noexcept  {
this->stride0 = stride0;
this->stride1 = stride1;
this->stride2 = stride2;
this->stride3 = stride3;
this->_Length_k__BackingField = _Length_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImageBufferInfo_StrideSet::ImageBufferInfo_StrideSet()   {
}
