#pragma once
// IWYU pragma private; include "Fusion/NetworkRpcStaticWeavedInvokerAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkRpcStaticWeavedInvokerAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkRpcStaticWeavedInvokerAttribute.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkRpcStaticWeavedInvokerAttribute::*)()>(&::Fusion::NetworkRpcStaticWeavedInvokerAttribute::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7021c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcStaticWeavedInvokerAttribute*>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRpcStaticWeavedInvokerAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRpcStaticWeavedInvokerAttribute::*)(::StringW)>(&::Fusion::NetworkRpcStaticWeavedInvokerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f70224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcStaticWeavedInvokerAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::NetworkRpcStaticWeavedInvokerAttribute::__cordl_internal_get__Key_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Key_k__BackingField;
}
constexpr ::StringW const& Fusion::NetworkRpcStaticWeavedInvokerAttribute::__cordl_internal_get__Key_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Key_k__BackingField;
}
constexpr void Fusion::NetworkRpcStaticWeavedInvokerAttribute::__cordl_internal_set__Key_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Key_k__BackingField = value;
}
inline ::StringW Fusion::NetworkRpcStaticWeavedInvokerAttribute::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcStaticWeavedInvokerAttribute*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::NetworkRpcStaticWeavedInvokerAttribute::_ctor(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcStaticWeavedInvokerAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::Fusion::NetworkRpcStaticWeavedInvokerAttribute* Fusion::NetworkRpcStaticWeavedInvokerAttribute::New_ctor(::StringW  key)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRpcStaticWeavedInvokerAttribute*>(key));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRpcStaticWeavedInvokerAttribute::NetworkRpcStaticWeavedInvokerAttribute()   {
}
