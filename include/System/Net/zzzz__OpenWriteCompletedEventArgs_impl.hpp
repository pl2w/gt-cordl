#pragma once
// IWYU pragma private; include "System/Net/OpenWriteCompletedEventArgs.hpp"
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_impl.hpp"
#include "System/Net/zzzz__OpenWriteCompletedEventArgs_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::OpenWriteCompletedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::OpenWriteCompletedEventArgs::*)(::System::IO::Stream*, ::System::Exception*, bool, ::System::Object*)>(&::System::Net::OpenWriteCompletedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xac4bbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::OpenWriteCompletedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::OpenWriteCompletedEventArgs.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::OpenWriteCompletedEventArgs::*)()>(&::System::Net::OpenWriteCompletedEventArgs::get_Result)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac53264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::OpenWriteCompletedEventArgs*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::OpenWriteCompletedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::OpenWriteCompletedEventArgs::*)()>(&::System::Net::OpenWriteCompletedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac548d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::OpenWriteCompletedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Net::OpenWriteCompletedEventArgs::__cordl_internal_get__result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
constexpr ::System::IO::Stream* const& System::Net::OpenWriteCompletedEventArgs::__cordl_internal_get__result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
constexpr void System::Net::OpenWriteCompletedEventArgs::__cordl_internal_set__result(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result = value;
}
inline void System::Net::OpenWriteCompletedEventArgs::_ctor(::System::IO::Stream*  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::OpenWriteCompletedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, exception, cancelled, userToken);
}
inline ::System::IO::Stream* System::Net::OpenWriteCompletedEventArgs::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::OpenWriteCompletedEventArgs*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void System::Net::OpenWriteCompletedEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::OpenWriteCompletedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::OpenWriteCompletedEventArgs* System::Net::OpenWriteCompletedEventArgs::New_ctor(::System::IO::Stream*  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::OpenWriteCompletedEventArgs*>(result, exception, cancelled, userToken));
}
inline ::System::Net::OpenWriteCompletedEventArgs* System::Net::OpenWriteCompletedEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::OpenWriteCompletedEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::Net::OpenWriteCompletedEventArgs::OpenWriteCompletedEventArgs()   {
}
