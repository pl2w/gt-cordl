#pragma once
// IWYU pragma private; include "System/Net/MonoHttpDate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__MonoHttpDate_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Net::MonoHttpDate.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Net::MonoHttpDate::Parse)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaca1df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoHttpDate*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoHttpDate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::MonoHttpDate::*)()>(&::System::Net::MonoHttpDate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacac618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoHttpDate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::MonoHttpDate::setStaticF_rfc1123_date(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "rfc1123_date", ::System::Net::MonoHttpDate*>(std::forward<::StringW>(value));
}
inline ::StringW System::Net::MonoHttpDate::getStaticF_rfc1123_date()  {
return ::cordl_internals::getStaticField<::StringW, "rfc1123_date", ::System::Net::MonoHttpDate*>();
}
inline void System::Net::MonoHttpDate::setStaticF_rfc850_date(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "rfc850_date", ::System::Net::MonoHttpDate*>(std::forward<::StringW>(value));
}
inline ::StringW System::Net::MonoHttpDate::getStaticF_rfc850_date()  {
return ::cordl_internals::getStaticField<::StringW, "rfc850_date", ::System::Net::MonoHttpDate*>();
}
inline void System::Net::MonoHttpDate::setStaticF_asctime_date(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "asctime_date", ::System::Net::MonoHttpDate*>(std::forward<::StringW>(value));
}
inline ::StringW System::Net::MonoHttpDate::getStaticF_asctime_date()  {
return ::cordl_internals::getStaticField<::StringW, "asctime_date", ::System::Net::MonoHttpDate*>();
}
inline void System::Net::MonoHttpDate::setStaticF_formats(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "formats", ::System::Net::MonoHttpDate*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Net::MonoHttpDate::getStaticF_formats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "formats", ::System::Net::MonoHttpDate*>();
}
inline ::System::DateTime System::Net::MonoHttpDate::Parse(::StringW  dateStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoHttpDate*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateStr);
}
inline void System::Net::MonoHttpDate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoHttpDate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::MonoHttpDate* System::Net::MonoHttpDate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::MonoHttpDate*>());
}
// Ctor Parameters []
constexpr ::System::Net::MonoHttpDate::MonoHttpDate()   {
}
