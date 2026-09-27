#pragma once
// IWYU pragma private; include "GlobalNamespace/IFXContext.hpp"
#include "GlobalNamespace/zzzz__IFXContext_def.hpp"
#include "GlobalNamespace/zzzz__FXSystemSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IFXContext.get_settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FXSystemSettings> (::GlobalNamespace::IFXContext::*)()>(&::GlobalNamespace::IFXContext::get_settings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IFXContext*>(),
                    {::i2c::class_of<::GlobalNamespace::IFXContext*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IFXContext.OnPlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IFXContext::*)()>(&::GlobalNamespace::IFXContext::OnPlayFX)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IFXContext*>(),
                    {::i2c::class_of<::GlobalNamespace::IFXContext*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::FXSystemSettings> GlobalNamespace::IFXContext::get_settings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IFXContext*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FXSystemSettings>>(this, ___internal_method);
}
inline void GlobalNamespace::IFXContext::OnPlayFX()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IFXContext*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
