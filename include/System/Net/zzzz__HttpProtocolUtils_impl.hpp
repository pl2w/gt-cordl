#pragma once
// IWYU pragma private; include "System/Net/HttpProtocolUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpProtocolUtils_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Net::HttpProtocolUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpProtocolUtils::*)()>(&::System::Net::HttpProtocolUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac5b988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpProtocolUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpProtocolUtils.string2date
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::Net::HttpProtocolUtils::string2date)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xac5b990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpProtocolUtils*>(),
                        {"string2date", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpProtocolUtils.date2string
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime)>(&::System::Net::HttpProtocolUtils::date2string)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xac5ba10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpProtocolUtils*>(),
                        {"date2string", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::HttpProtocolUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpProtocolUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DateTime System::Net::HttpProtocolUtils::string2date(::StringW  S)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpProtocolUtils*>(),
                        {"string2date", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, S);
}
inline ::StringW System::Net::HttpProtocolUtils::date2string(::System::DateTime  D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpProtocolUtils*>(),
                        {"date2string", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, D);
}
inline ::System::Net::HttpProtocolUtils* System::Net::HttpProtocolUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpProtocolUtils*>());
}
// Ctor Parameters []
constexpr ::System::Net::HttpProtocolUtils::HttpProtocolUtils()   {
}
