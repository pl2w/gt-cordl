#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/GlobalVariablesSource.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__PersistentVariablesSource_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__GlobalVariablesSource_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource::*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*)>(&::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb03c5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource::_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatter);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource* UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource::New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource*>(formatter));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::GlobalVariablesSource::GlobalVariablesSource()   {
}
