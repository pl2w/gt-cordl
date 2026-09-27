#pragma once
// IWYU pragma private; include "GlobalNamespace/PortTypeOverrideAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__PortTypeOverrideAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PortTypeOverrideAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PortTypeOverrideAttribute::*)(::System::Type*)>(&::GlobalNamespace::PortTypeOverrideAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb98b5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PortTypeOverrideAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& GlobalNamespace::PortTypeOverrideAttribute::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& GlobalNamespace::PortTypeOverrideAttribute::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::PortTypeOverrideAttribute::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
inline void GlobalNamespace::PortTypeOverrideAttribute::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PortTypeOverrideAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::GlobalNamespace::PortTypeOverrideAttribute* GlobalNamespace::PortTypeOverrideAttribute::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PortTypeOverrideAttribute*>(type));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PortTypeOverrideAttribute::PortTypeOverrideAttribute()   {
}
