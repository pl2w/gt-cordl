#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckDependencyResolver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDependencyResolver_def.hpp"
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDependencyResolver.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckDependencyResolver::*)()>(&::Liv::Lck::DependencyInjection::LckDependencyResolver::Awake)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9d33c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDependencyResolver*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::DependencyInjection::LckDependencyResolver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::DependencyInjection::LckDependencyResolver::*)()>(&::Liv::Lck::DependencyInjection::LckDependencyResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d346f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDependencyResolver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::DependencyInjection::LckDependencyResolver::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDependencyResolver*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::DependencyInjection::LckDependencyResolver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::DependencyInjection::LckDependencyResolver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::DependencyInjection::LckDependencyResolver* Liv::Lck::DependencyInjection::LckDependencyResolver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::DependencyInjection::LckDependencyResolver*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::DependencyInjection::LckDependencyResolver::LckDependencyResolver()   {
}
