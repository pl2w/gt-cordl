#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/InjectLckAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__InjectLckAttribute_def.hpp"
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::InjectLckAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::InjectLckAttribute::*)()>(&::Liv::Lck::DependencyInjection::InjectLckAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3569c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::InjectLckAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::DependencyInjection::InjectLckAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::InjectLckAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::DependencyInjection::InjectLckAttribute* Liv::Lck::DependencyInjection::InjectLckAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::DependencyInjection::InjectLckAttribute*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::DependencyInjection::InjectLckAttribute::InjectLckAttribute()   {
}
