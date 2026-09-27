#pragma once
// IWYU pragma private; include "Liv/Lck/LckLateUpdate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckLateUpdate_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckLateUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckLateUpdate::*)()>(&::Liv::Lck::LckLateUpdate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce32e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLateUpdate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckLateUpdate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckLateUpdate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckLateUpdate* Liv::Lck::LckLateUpdate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckLateUpdate*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckLateUpdate::LckLateUpdate()   {
}
