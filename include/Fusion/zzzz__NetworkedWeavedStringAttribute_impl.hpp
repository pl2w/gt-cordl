#pragma once
// IWYU pragma private; include "Fusion/NetworkedWeavedStringAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkedWeavedStringAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkedWeavedStringAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkedWeavedStringAttribute::*)(int32_t, ::StringW)>(&::Fusion::NetworkedWeavedStringAttribute::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f7019c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedStringAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedWeavedStringAttribute.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkedWeavedStringAttribute::*)()>(&::Fusion::NetworkedWeavedStringAttribute::get_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f701d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedStringAttribute*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedWeavedStringAttribute.get_CacheFieldName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkedWeavedStringAttribute::*)()>(&::Fusion::NetworkedWeavedStringAttribute::get_CacheFieldName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f701dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedStringAttribute*>(),
                        {"get_CacheFieldName", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkedWeavedStringAttribute::__cordl_internal_get__Capacity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkedWeavedStringAttribute::__cordl_internal_get__Capacity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
constexpr void Fusion::NetworkedWeavedStringAttribute::__cordl_internal_set__Capacity_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Capacity_k__BackingField = value;
}
constexpr ::StringW& Fusion::NetworkedWeavedStringAttribute::__cordl_internal_get__CacheFieldName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CacheFieldName_k__BackingField;
}
constexpr ::StringW const& Fusion::NetworkedWeavedStringAttribute::__cordl_internal_get__CacheFieldName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CacheFieldName_k__BackingField;
}
constexpr void Fusion::NetworkedWeavedStringAttribute::__cordl_internal_set__CacheFieldName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CacheFieldName_k__BackingField = value;
}
inline void Fusion::NetworkedWeavedStringAttribute::_ctor(int32_t  capacity, ::StringW  cacheFieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedStringAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, cacheFieldName);
}
inline int32_t Fusion::NetworkedWeavedStringAttribute::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedStringAttribute*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Fusion::NetworkedWeavedStringAttribute::get_CacheFieldName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedStringAttribute*>(),
                        {"get_CacheFieldName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::NetworkedWeavedStringAttribute* Fusion::NetworkedWeavedStringAttribute::New_ctor(int32_t  capacity, ::StringW  cacheFieldName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkedWeavedStringAttribute*>(capacity, cacheFieldName));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkedWeavedStringAttribute::NetworkedWeavedStringAttribute()   {
}
