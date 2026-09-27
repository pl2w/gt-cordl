#pragma once
// IWYU pragma private; include "Fusion/NetworkSerializeMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkSerializeMethodAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkSerializeMethodAttribute.get_MaxSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkSerializeMethodAttribute::*)()>(&::Fusion::NetworkSerializeMethodAttribute::get_MaxSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f702a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSerializeMethodAttribute*>(),
                        {"get_MaxSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSerializeMethodAttribute.set_MaxSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSerializeMethodAttribute::*)(int32_t)>(&::Fusion::NetworkSerializeMethodAttribute::set_MaxSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f702b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSerializeMethodAttribute*>(),
                        {"set_MaxSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSerializeMethodAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSerializeMethodAttribute::*)()>(&::Fusion::NetworkSerializeMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f702b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSerializeMethodAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkSerializeMethodAttribute::__cordl_internal_get__MaxSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxSize_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkSerializeMethodAttribute::__cordl_internal_get__MaxSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxSize_k__BackingField;
}
constexpr void Fusion::NetworkSerializeMethodAttribute::__cordl_internal_set__MaxSize_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxSize_k__BackingField = value;
}
inline int32_t Fusion::NetworkSerializeMethodAttribute::get_MaxSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSerializeMethodAttribute*>(),
                        {"get_MaxSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::NetworkSerializeMethodAttribute::set_MaxSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSerializeMethodAttribute*>(),
                        {"set_MaxSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::NetworkSerializeMethodAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSerializeMethodAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkSerializeMethodAttribute* Fusion::NetworkSerializeMethodAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSerializeMethodAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSerializeMethodAttribute::NetworkSerializeMethodAttribute()   {
}
