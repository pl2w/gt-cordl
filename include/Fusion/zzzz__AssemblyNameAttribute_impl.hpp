#pragma once
// IWYU pragma private; include "Fusion/AssemblyNameAttribute.hpp"
#include "Fusion/zzzz__DrawerPropertyAttribute_impl.hpp"
#include "Fusion/zzzz__AssemblyNameAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::AssemblyNameAttribute.set_RequiresUnsafeCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::AssemblyNameAttribute::*)(bool)>(&::Fusion::AssemblyNameAttribute::set_RequiresUnsafeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3d3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::AssemblyNameAttribute*>(),
                        {"set_RequiresUnsafeCode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::AssemblyNameAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::AssemblyNameAttribute::*)()>(&::Fusion::AssemblyNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3d3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::AssemblyNameAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::AssemblyNameAttribute::__cordl_internal_get__RequiresUnsafeCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresUnsafeCode_k__BackingField;
}
constexpr bool const& Fusion::AssemblyNameAttribute::__cordl_internal_get__RequiresUnsafeCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresUnsafeCode_k__BackingField;
}
constexpr void Fusion::AssemblyNameAttribute::__cordl_internal_set__RequiresUnsafeCode_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequiresUnsafeCode_k__BackingField = value;
}
inline void Fusion::AssemblyNameAttribute::set_RequiresUnsafeCode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::AssemblyNameAttribute*>(),
                        {"set_RequiresUnsafeCode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::AssemblyNameAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::AssemblyNameAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::AssemblyNameAttribute* Fusion::AssemblyNameAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::AssemblyNameAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::AssemblyNameAttribute::AssemblyNameAttribute()   {
}
