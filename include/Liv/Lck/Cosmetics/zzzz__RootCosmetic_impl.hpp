#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/RootCosmetic.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Cosmetics/zzzz__RootCosmetic_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Cosmetics::RootCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::RootCosmetic::*)()>(&::Liv::Lck::Cosmetics::RootCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d64f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::RootCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Liv::Lck::Cosmetics::RootCosmetic::__cordl_internal_get_Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr ::UnityW<::UnityEngine::Object> const& Liv::Lck::Cosmetics::RootCosmetic::__cordl_internal_get_Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr void Liv::Lck::Cosmetics::RootCosmetic::__cordl_internal_set_Asset(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Asset = value;
}
inline void Liv::Lck::Cosmetics::RootCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Cosmetics::RootCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Cosmetics::RootCosmetic* Liv::Lck::Cosmetics::RootCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Cosmetics::RootCosmetic*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Cosmetics::RootCosmetic::RootCosmetic()   {
}
