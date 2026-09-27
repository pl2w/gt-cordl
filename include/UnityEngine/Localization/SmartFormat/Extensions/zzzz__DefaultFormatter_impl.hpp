#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/DefaultFormatter.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__DefaultFormatter_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb028564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter.get_DefaultNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter::get_DefaultNames)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb03abbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter.TryEvaluateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter::TryEvaluateFormat)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0xb03acac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter::get_DefaultNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter::TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter* UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::DefaultFormatter::DefaultFormatter()   {
}
