#pragma once
// IWYU pragma private; include "Fusion/PreserveInPluginAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__PreserveInPluginAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::PreserveInPluginAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::PreserveInPluginAttribute::*)()>(&::Fusion::PreserveInPluginAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f70360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::PreserveInPluginAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::PreserveInPluginAttribute.get_KeepNonStateMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::PreserveInPluginAttribute::*)()>(&::Fusion::PreserveInPluginAttribute::get_KeepNonStateMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::PreserveInPluginAttribute*>(),
                        {"get_KeepNonStateMembers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::PreserveInPluginAttribute.set_KeepNonStateMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::PreserveInPluginAttribute::*)(bool)>(&::Fusion::PreserveInPluginAttribute::set_KeepNonStateMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::PreserveInPluginAttribute*>(),
                        {"set_KeepNonStateMembers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::PreserveInPluginAttribute::__cordl_internal_get__KeepNonStateMembers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KeepNonStateMembers_k__BackingField;
}
constexpr bool const& Fusion::PreserveInPluginAttribute::__cordl_internal_get__KeepNonStateMembers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KeepNonStateMembers_k__BackingField;
}
constexpr void Fusion::PreserveInPluginAttribute::__cordl_internal_set__KeepNonStateMembers_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____KeepNonStateMembers_k__BackingField = value;
}
inline void Fusion::PreserveInPluginAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::PreserveInPluginAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::PreserveInPluginAttribute::get_KeepNonStateMembers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::PreserveInPluginAttribute*>(),
                        {"get_KeepNonStateMembers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::PreserveInPluginAttribute::set_KeepNonStateMembers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::PreserveInPluginAttribute*>(),
                        {"set_KeepNonStateMembers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::PreserveInPluginAttribute* Fusion::PreserveInPluginAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::PreserveInPluginAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::PreserveInPluginAttribute::PreserveInPluginAttribute()   {
}
