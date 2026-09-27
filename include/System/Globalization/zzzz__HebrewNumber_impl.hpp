#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumber.hpp"
#include "System/Globalization/zzzz__HebrewNumber_HS_impl.hpp"
#include "System/Globalization/zzzz__HebrewNumber_HebrewValue_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__HebrewNumber_def.hpp"
#include "System/Globalization/zzzz__HebrewNumberParsingContext_def.hpp"
#include "System/Globalization/zzzz__HebrewNumberParsingState_def.hpp"
#include "System/Globalization/zzzz__HebrewNumber_HS_def.hpp"
#include "System/Globalization/zzzz__HebrewNumber_HebrewToken_def.hpp"
#include "System/Globalization/zzzz__HebrewNumber_HebrewValue_def.hpp"
//  Writing Method size for method: ::System::Globalization::HebrewNumber.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::Globalization::HebrewNumber::ToString)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xa235af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::HebrewNumber*>(),
                        {"ToString", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HebrewNumber.ParseByChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::HebrewNumberParsingState (*)(char16_t, ::by_ref<::System::Globalization::HebrewNumberParsingContext>)>(&::System::Globalization::HebrewNumber::ParseByChar)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa235da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::HebrewNumber*>(),
                        {"ParseByChar", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::System::Globalization::HebrewNumberParsingContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HebrewNumber.IsDigit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Globalization::HebrewNumber::IsDigit)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa235f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::HebrewNumber*>(),
                        {"IsDigit", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Globalization::HebrewNumber::setStaticF_s_hebrewValues(::ArrayW<::GlobalNamespace::HebrewNumber_HebrewValue>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::HebrewNumber_HebrewValue>, "s_hebrewValues", ::System::Globalization::HebrewNumber*>(std::forward<::ArrayW<::GlobalNamespace::HebrewNumber_HebrewValue>>(value));
}
inline ::ArrayW<::GlobalNamespace::HebrewNumber_HebrewValue> System::Globalization::HebrewNumber::getStaticF_s_hebrewValues()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::HebrewNumber_HebrewValue>, "s_hebrewValues", ::System::Globalization::HebrewNumber*>();
}
inline void System::Globalization::HebrewNumber::setStaticF_s_maxHebrewNumberCh(char16_t  value)  {
::cordl_internals::setStaticField<char16_t, "s_maxHebrewNumberCh", ::System::Globalization::HebrewNumber*>(std::forward<char16_t>(value));
}
inline char16_t System::Globalization::HebrewNumber::getStaticF_s_maxHebrewNumberCh()  {
return ::cordl_internals::getStaticField<char16_t, "s_maxHebrewNumberCh", ::System::Globalization::HebrewNumber*>();
}
inline void System::Globalization::HebrewNumber::setStaticF_s_numberPasingState(::ArrayW<::GlobalNamespace::HebrewNumber_HS>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::HebrewNumber_HS>, "s_numberPasingState", ::System::Globalization::HebrewNumber*>(std::forward<::ArrayW<::GlobalNamespace::HebrewNumber_HS>>(value));
}
inline ::ArrayW<::GlobalNamespace::HebrewNumber_HS> System::Globalization::HebrewNumber::getStaticF_s_numberPasingState()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::HebrewNumber_HS>, "s_numberPasingState", ::System::Globalization::HebrewNumber*>();
}
inline ::StringW System::Globalization::HebrewNumber::ToString(int32_t  Number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::HebrewNumber*>(),
                        {"ToString", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, Number);
}
inline ::System::Globalization::HebrewNumberParsingState System::Globalization::HebrewNumber::ParseByChar(char16_t  ch, ::by_ref<::System::Globalization::HebrewNumberParsingContext>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::HebrewNumber*>(),
                        {"ParseByChar", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::System::Globalization::HebrewNumberParsingContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::HebrewNumberParsingState>(nullptr, ___internal_method, ch, context);
}
inline bool System::Globalization::HebrewNumber::IsDigit(char16_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::HebrewNumber*>(),
                        {"IsDigit", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
// Ctor Parameters []
constexpr ::System::Globalization::HebrewNumber::HebrewNumber()   {
}
