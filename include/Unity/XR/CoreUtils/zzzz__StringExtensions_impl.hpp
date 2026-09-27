#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/StringExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__StringExtensions_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::StringExtensions.FirstToUpper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Unity::XR::CoreUtils::StringExtensions::FirstToUpper)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb3f00fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::StringExtensions*>(),
                        {"FirstToUpper", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::StringExtensions.InsertSpacesBetweenWords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Unity::XR::CoreUtils::StringExtensions::InsertSpacesBetweenWords)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xb3f022c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::StringExtensions*>(),
                        {"InsertSpacesBetweenWords", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::StringExtensions::setStaticF_k_StringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "k_StringBuilder", ::Unity::XR::CoreUtils::StringExtensions*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* Unity::XR::CoreUtils::StringExtensions::getStaticF_k_StringBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "k_StringBuilder", ::Unity::XR::CoreUtils::StringExtensions*>();
}
inline ::StringW Unity::XR::CoreUtils::StringExtensions::FirstToUpper(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::StringExtensions*>(),
                        {"FirstToUpper", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline ::StringW Unity::XR::CoreUtils::StringExtensions::InsertSpacesBetweenWords(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::StringExtensions*>(),
                        {"InsertSpacesBetweenWords", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::StringExtensions::StringExtensions()   {
}
