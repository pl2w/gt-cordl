#pragma once
// IWYU pragma private; include "System/Net/DownloadStringCompletedEventArgs.hpp"
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_impl.hpp"
#include "System/Net/zzzz__DownloadStringCompletedEventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::DownloadStringCompletedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DownloadStringCompletedEventArgs::*)(::StringW, ::System::Exception*, bool, ::System::Object*)>(&::System::Net::DownloadStringCompletedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xac4be24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadStringCompletedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DownloadStringCompletedEventArgs.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DownloadStringCompletedEventArgs::*)()>(&::System::Net::DownloadStringCompletedEventArgs::get_Result)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac531ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadStringCompletedEventArgs*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DownloadStringCompletedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DownloadStringCompletedEventArgs::*)()>(&::System::Net::DownloadStringCompletedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac54910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadStringCompletedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::DownloadStringCompletedEventArgs::__cordl_internal_get__result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
constexpr ::StringW const& System::Net::DownloadStringCompletedEventArgs::__cordl_internal_get__result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
constexpr void System::Net::DownloadStringCompletedEventArgs::__cordl_internal_set__result(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result = value;
}
inline void System::Net::DownloadStringCompletedEventArgs::_ctor(::StringW  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadStringCompletedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, exception, cancelled, userToken);
}
inline ::StringW System::Net::DownloadStringCompletedEventArgs::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadStringCompletedEventArgs*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::DownloadStringCompletedEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadStringCompletedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::DownloadStringCompletedEventArgs* System::Net::DownloadStringCompletedEventArgs::New_ctor(::StringW  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DownloadStringCompletedEventArgs*>(result, exception, cancelled, userToken));
}
inline ::System::Net::DownloadStringCompletedEventArgs* System::Net::DownloadStringCompletedEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DownloadStringCompletedEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::Net::DownloadStringCompletedEventArgs::DownloadStringCompletedEventArgs()   {
}
