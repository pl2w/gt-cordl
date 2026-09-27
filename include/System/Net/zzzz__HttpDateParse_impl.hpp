#pragma once
// IWYU pragma private; include "System/Net/HttpDateParse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpDateParse_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Net::HttpDateParse.MAKE_UPPER
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::System::Net::HttpDateParse::MAKE_UPPER)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xac6f718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpDateParse*>(),
                        {"MAKE_UPPER", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpDateParse.MapDayMonthToDword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<char16_t>, int32_t)>(&::System::Net::HttpDateParse::MapDayMonthToDword)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xac6f79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpDateParse*>(),
                        {"MapDayMonthToDword", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpDateParse.ParseHttpDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::DateTime>)>(&::System::Net::HttpDateParse::ParseHttpDate)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0xac6fa1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpDateParse*>(),
                        {"ParseHttpDate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
inline char16_t System::Net::HttpDateParse::MAKE_UPPER(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpDateParse*>(),
                        {"MAKE_UPPER", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline int32_t System::Net::HttpDateParse::MapDayMonthToDword(::ArrayW<char16_t>  lpszDay, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpDateParse*>(),
                        {"MapDayMonthToDword", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lpszDay, index);
}
inline bool System::Net::HttpDateParse::ParseHttpDate(::StringW  DateString, ::by_ref<::System::DateTime>  dtOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpDateParse*>(),
                        {"ParseHttpDate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, DateString, dtOut);
}
// Ctor Parameters []
constexpr ::System::Net::HttpDateParse::HttpDateParse()   {
}
