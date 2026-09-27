#pragma once
// IWYU pragma private; include "Fusion/NetworkRpcWeavedInvokerAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkRpcWeavedInvokerAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkRpcWeavedInvokerAttribute.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRpcWeavedInvokerAttribute::*)()>(&::Fusion::NetworkRpcWeavedInvokerAttribute::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcWeavedInvokerAttribute*>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRpcWeavedInvokerAttribute.get_Sources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRpcWeavedInvokerAttribute::*)()>(&::Fusion::NetworkRpcWeavedInvokerAttribute::get_Sources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7025c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcWeavedInvokerAttribute*>(),
                        {"get_Sources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRpcWeavedInvokerAttribute.get_Targets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRpcWeavedInvokerAttribute::*)()>(&::Fusion::NetworkRpcWeavedInvokerAttribute::get_Targets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcWeavedInvokerAttribute*>(),
                        {"get_Targets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRpcWeavedInvokerAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRpcWeavedInvokerAttribute::*)(int32_t, int32_t, int32_t)>(&::Fusion::NetworkRpcWeavedInvokerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f7026c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcWeavedInvokerAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkRpcWeavedInvokerAttribute::__cordl_internal_get__Key_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Key_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkRpcWeavedInvokerAttribute::__cordl_internal_get__Key_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Key_k__BackingField;
}
constexpr void Fusion::NetworkRpcWeavedInvokerAttribute::__cordl_internal_set__Key_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Key_k__BackingField = value;
}
constexpr int32_t& Fusion::NetworkRpcWeavedInvokerAttribute::__cordl_internal_get__Sources_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sources_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkRpcWeavedInvokerAttribute::__cordl_internal_get__Sources_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sources_k__BackingField;
}
constexpr void Fusion::NetworkRpcWeavedInvokerAttribute::__cordl_internal_set__Sources_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Sources_k__BackingField = value;
}
constexpr int32_t& Fusion::NetworkRpcWeavedInvokerAttribute::__cordl_internal_get__Targets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Targets_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkRpcWeavedInvokerAttribute::__cordl_internal_get__Targets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Targets_k__BackingField;
}
constexpr void Fusion::NetworkRpcWeavedInvokerAttribute::__cordl_internal_set__Targets_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Targets_k__BackingField = value;
}
inline int32_t Fusion::NetworkRpcWeavedInvokerAttribute::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcWeavedInvokerAttribute*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::NetworkRpcWeavedInvokerAttribute::get_Sources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcWeavedInvokerAttribute*>(),
                        {"get_Sources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::NetworkRpcWeavedInvokerAttribute::get_Targets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcWeavedInvokerAttribute*>(),
                        {"get_Targets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::NetworkRpcWeavedInvokerAttribute::_ctor(int32_t  key, int32_t  sources, int32_t  targets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRpcWeavedInvokerAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, sources, targets);
}
inline ::Fusion::NetworkRpcWeavedInvokerAttribute* Fusion::NetworkRpcWeavedInvokerAttribute::New_ctor(int32_t  key, int32_t  sources, int32_t  targets)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRpcWeavedInvokerAttribute*>(key, sources, targets));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRpcWeavedInvokerAttribute::NetworkRpcWeavedInvokerAttribute()   {
}
