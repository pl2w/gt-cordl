#pragma once
// IWYU pragma private; include "GorillaTag/ObjectPoolEvents.hpp"
#include "GorillaTag/zzzz__ObjectPoolEvents_def.hpp"
//  Writing Method size for method: ::GorillaTag::ObjectPoolEvents.OnTaken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ObjectPoolEvents::*)()>(&::GorillaTag::ObjectPoolEvents::OnTaken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ObjectPoolEvents*>(),
                    {::i2c::class_of<::GorillaTag::ObjectPoolEvents*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ObjectPoolEvents.OnReturned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ObjectPoolEvents::*)()>(&::GorillaTag::ObjectPoolEvents::OnReturned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ObjectPoolEvents*>(),
                    {::i2c::class_of<::GorillaTag::ObjectPoolEvents*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void GorillaTag::ObjectPoolEvents::OnTaken()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ObjectPoolEvents*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ObjectPoolEvents::OnReturned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ObjectPoolEvents*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
