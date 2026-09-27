#pragma once
// IWYU pragma private; include "Liv/Lck/ILckLateUpdate.hpp"
#include "Liv/Lck/zzzz__ILckLateUpdate_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckLateUpdate.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckLateUpdate::*)()>(&::Liv::Lck::ILckLateUpdate::LateUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckLateUpdate*>(),
                    {::i2c::class_of<::Liv::Lck::ILckLateUpdate*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::ILckLateUpdate::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckLateUpdate*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
