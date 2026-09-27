#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Extensions/IFormatterLiteralExtractor.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormatterLiteralExtractor_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor.WriteAllLiterals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor::WriteAllLiterals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor::WriteAllLiterals(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formattingInfo);
}
