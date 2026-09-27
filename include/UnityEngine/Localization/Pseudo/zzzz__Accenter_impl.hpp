#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Accenter.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__CharacterSubstitutor_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Accenter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Accenter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Accenter::*)()>(&::UnityEngine::Localization::Pseudo::Accenter::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb023274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Accenter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Accenter.AddDefaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Accenter::*)()>(&::UnityEngine::Localization::Pseudo::Accenter::AddDefaults)> {
  constexpr static std::size_t size = 0x8c8;
  constexpr static std::size_t addrs = 0xb0233dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Accenter*>(),
                        {"AddDefaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Pseudo::Accenter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Accenter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::Accenter::AddDefaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Accenter*>(),
                        {"AddDefaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::Accenter* UnityEngine::Localization::Pseudo::Accenter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::Accenter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::Accenter::Accenter()   {
}
