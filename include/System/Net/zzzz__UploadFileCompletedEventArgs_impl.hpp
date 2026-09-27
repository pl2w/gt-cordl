#pragma once
// IWYU pragma private; include "System/Net/UploadFileCompletedEventArgs.hpp"
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_impl.hpp"
#include "System/Net/zzzz__UploadFileCompletedEventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::UploadFileCompletedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::UploadFileCompletedEventArgs::*)(::ArrayW<uint8_t>, ::System::Exception*, bool, ::System::Object*)>(&::System::Net::UploadFileCompletedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xac4d4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadFileCompletedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::UploadFileCompletedEventArgs.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::UploadFileCompletedEventArgs::*)()>(&::System::Net::UploadFileCompletedEventArgs::get_Result)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac533f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadFileCompletedEventArgs*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::UploadFileCompletedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::UploadFileCompletedEventArgs::*)()>(&::System::Net::UploadFileCompletedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac549f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadFileCompletedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Net::UploadFileCompletedEventArgs::__cordl_internal_get__result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
constexpr ::ArrayW<uint8_t> const& System::Net::UploadFileCompletedEventArgs::__cordl_internal_get__result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
constexpr void System::Net::UploadFileCompletedEventArgs::__cordl_internal_set__result(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result = value;
}
inline void System::Net::UploadFileCompletedEventArgs::_ctor(::ArrayW<uint8_t>  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadFileCompletedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, exception, cancelled, userToken);
}
inline ::ArrayW<uint8_t> System::Net::UploadFileCompletedEventArgs::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadFileCompletedEventArgs*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Net::UploadFileCompletedEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadFileCompletedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::UploadFileCompletedEventArgs* System::Net::UploadFileCompletedEventArgs::New_ctor(::ArrayW<uint8_t>  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::UploadFileCompletedEventArgs*>(result, exception, cancelled, userToken));
}
inline ::System::Net::UploadFileCompletedEventArgs* System::Net::UploadFileCompletedEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::UploadFileCompletedEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::Net::UploadFileCompletedEventArgs::UploadFileCompletedEventArgs()   {
}
