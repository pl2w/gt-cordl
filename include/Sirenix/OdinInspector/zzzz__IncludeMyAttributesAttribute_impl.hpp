#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/IncludeMyAttributesAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Sirenix/OdinInspector/zzzz__IncludeMyAttributesAttribute_def.hpp"
//  Writing Method size for method: ::Sirenix::OdinInspector::IncludeMyAttributesAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Sirenix::OdinInspector::IncludeMyAttributesAttribute::*)()>(&::Sirenix::OdinInspector::IncludeMyAttributesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::IncludeMyAttributesAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Sirenix::OdinInspector::IncludeMyAttributesAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::IncludeMyAttributesAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Sirenix::OdinInspector::IncludeMyAttributesAttribute* Sirenix::OdinInspector::IncludeMyAttributesAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Sirenix::OdinInspector::IncludeMyAttributesAttribute*>());
}
// Ctor Parameters []
constexpr ::Sirenix::OdinInspector::IncludeMyAttributesAttribute::IncludeMyAttributesAttribute()   {
}
