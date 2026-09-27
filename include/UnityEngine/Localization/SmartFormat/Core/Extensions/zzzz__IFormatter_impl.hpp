#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Extensions/IFormatter.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormatter_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter.get_Names
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter::get_Names)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter.set_Names
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter::*)(::ArrayW<::StringW>)>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter::set_Names)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter.TryEvaluateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter::TryEvaluateFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW> UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter::get_Names()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter::set_Names(::ArrayW<::StringW>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter::TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
