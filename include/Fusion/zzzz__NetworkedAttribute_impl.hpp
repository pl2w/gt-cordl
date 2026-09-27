#pragma once
// IWYU pragma private; include "Fusion/NetworkedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkedAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkedAttribute.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkedAttribute::*)()>(&::Fusion::NetworkedAttribute::get_Default)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7009c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedAttribute*>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedAttribute.set_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkedAttribute::*)(::StringW)>(&::Fusion::NetworkedAttribute::set_Default)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f700a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedAttribute*>(),
                        {"set_Default", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkedAttribute::*)()>(&::Fusion::NetworkedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f700ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::NetworkedAttribute::__cordl_internal_get__Default_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Default_k__BackingField;
}
constexpr ::StringW const& Fusion::NetworkedAttribute::__cordl_internal_get__Default_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Default_k__BackingField;
}
constexpr void Fusion::NetworkedAttribute::__cordl_internal_set__Default_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Default_k__BackingField = value;
}
inline ::StringW Fusion::NetworkedAttribute::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedAttribute*>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::NetworkedAttribute::set_Default(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedAttribute*>(),
                        {"set_Default", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::NetworkedAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkedAttribute* Fusion::NetworkedAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkedAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkedAttribute::NetworkedAttribute()   {
}
