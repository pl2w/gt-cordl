#pragma once
// IWYU pragma private; include "System/Net/WriteStreamClosedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Net/zzzz__WriteStreamClosedEventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Net::WriteStreamClosedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WriteStreamClosedEventArgs::*)()>(&::System::Net::WriteStreamClosedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xac54b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WriteStreamClosedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WriteStreamClosedEventArgs.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Net::WriteStreamClosedEventArgs::*)()>(&::System::Net::WriteStreamClosedEventArgs::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WriteStreamClosedEventArgs*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::WriteStreamClosedEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WriteStreamClosedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Exception* System::Net::WriteStreamClosedEventArgs::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WriteStreamClosedEventArgs*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
inline ::System::Net::WriteStreamClosedEventArgs* System::Net::WriteStreamClosedEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WriteStreamClosedEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::Net::WriteStreamClosedEventArgs::WriteStreamClosedEventArgs()   {
}
