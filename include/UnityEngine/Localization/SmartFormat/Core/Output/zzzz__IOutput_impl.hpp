#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Output/IOutput.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Output/zzzz__IOutput_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Output::IOutput::*)(::StringW, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Core::Output::IOutput::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Output::IOutput::*)(::StringW, int32_t, int32_t, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Core::Output::IOutput::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Core::Output::IOutput::Write(::StringW  text, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, formattingInfo);
}
inline void UnityEngine::Localization::SmartFormat::Core::Output::IOutput::Write(::StringW  text, int32_t  startIndex, int32_t  length, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, startIndex, length, formattingInfo);
}
