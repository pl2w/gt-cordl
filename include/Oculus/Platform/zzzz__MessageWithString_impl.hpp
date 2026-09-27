#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithString.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithString_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithString._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithString::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithString::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa53c5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::MessageWithString*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithString.GetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Platform::MessageWithString::*)()>(&::Oculus::Platform::MessageWithString::GetString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa53fdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::MessageWithString*>(),
                    {::i2c::class_of<::Oculus::Platform::MessageWithString*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithString.GetDataFromMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Platform::MessageWithString::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithString::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa53fde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::MessageWithString*>(),
                    {::i2c::class_of<::Oculus::Platform::MessageWithString*>(), 71}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithString::_ctor(::System::IntPtr  c_message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::MessageWithString*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::StringW Oculus::Platform::MessageWithString::GetString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::MessageWithString*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Oculus::Platform::MessageWithString::GetDataFromMessage(::System::IntPtr  c_message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::MessageWithString*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithString* Oculus::Platform::MessageWithString::New_ctor(::System::IntPtr  c_message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithString*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithString::MessageWithString()   {
}
