#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/FormatDelegate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__FormatDelegate_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::*)(::System::Func_2<::StringW,::StringW>*)>(&::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb02fe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::*)(::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*)>(&::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb02fe8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::*)(::StringW, ::System::IFormatProvider*)>(&::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::ToString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb02febc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate*>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::StringW,::StringW>*& UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::__cordl_internal_get_getFormat1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getFormat1;
}
constexpr ::System::Func_2<::StringW,::StringW>* const& UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::__cordl_internal_get_getFormat1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getFormat1;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::__cordl_internal_set_getFormat1(::System::Func_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getFormat1 = value;
}
constexpr ::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*& UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::__cordl_internal_get_getFormat2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getFormat2;
}
constexpr ::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>* const& UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::__cordl_internal_get_getFormat2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getFormat2;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::__cordl_internal_set_getFormat2(::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getFormat2 = value;
}
inline void UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::_ctor(::System::Func_2<::StringW,::StringW>*  getFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, getFormat);
}
inline void UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::_ctor(::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*  getFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, getFormat);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate*>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, format, formatProvider);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate* UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::New_ctor(::System::Func_2<::StringW,::StringW>*  getFormat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate*>(getFormat));
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate* UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::New_ctor(::System::Func_3<::StringW,::System::IFormatProvider*,::StringW>*  getFormat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate*>(getFormat));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::operator ::System::IFormattable*() noexcept {
return static_cast<::System::IFormattable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::i___System__IFormattable() noexcept {
return static_cast<::System::IFormattable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::FormatDelegate::FormatDelegate()   {
}
