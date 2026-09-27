#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/IInitialize.hpp"
#include "UnityEngine/Localization/Settings/zzzz__IInitialize_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizationSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::IInitialize.PostInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::IInitialize::*)(::UnityEngine::Localization::Settings::LocalizationSettings*)>(&::UnityEngine::Localization::Settings::IInitialize::PostInitialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::IInitialize*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::IInitialize*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Settings::IInitialize::PostInitialization(::UnityEngine::Localization::Settings::LocalizationSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::IInitialize*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
