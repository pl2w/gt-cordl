#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Extensions/ISource.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISource_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISelectorInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource.TryEvaluateSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*)>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource::TryEvaluateSelector)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::Localization::SmartFormat::Core::Extensions::ISource::TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, selectorInfo);
}
