#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RNGCryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Security/Cryptography/zzzz__RNGCryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__CspParameters_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)()>(&::System::Security::Cryptography::RNGCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa186118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RNGCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa1861f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)(::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::RNGCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa1862a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)(::StringW)>(&::System::Security::Cryptography::RNGCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa186318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)()>(&::System::Security::Cryptography::RNGCryptoServiceProvider::Check)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa186190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"Check", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.RngOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Security::Cryptography::RNGCryptoServiceProvider::RngOpen)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa186114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"RngOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.RngInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(uint8_t*, ::System::IntPtr)>(&::System::Security::Cryptography::RNGCryptoServiceProvider::RngInitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa18618c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"RngInitialize", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.RngGetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, uint8_t*, ::System::IntPtr)>(&::System::Security::Cryptography::RNGCryptoServiceProvider::RngGetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa1863fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"RngGetBytes", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.RngClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::System::Security::Cryptography::RNGCryptoServiceProvider::RngClose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa186400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"RngClose", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RNGCryptoServiceProvider::GetBytes)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa186404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)(uint8_t*, ::System::IntPtr)>(&::System::Security::Cryptography::RNGCryptoServiceProvider::GetBytes)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa186624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"GetBytes", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.GetNonZeroBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RNGCryptoServiceProvider::GetNonZeroBytes)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa1867c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)()>(&::System::Security::Cryptography::RNGCryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa186970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RNGCryptoServiceProvider.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RNGCryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::RNGCryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa186a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Security::Cryptography::RNGCryptoServiceProvider::__cordl_internal_get__handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr ::System::IntPtr const& System::Security::Cryptography::RNGCryptoServiceProvider::__cordl_internal_get__handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr void System::Security::Cryptography::RNGCryptoServiceProvider::__cordl_internal_set__handle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handle = value;
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::setStaticF__lock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "_lock", ::System::Security::Cryptography::RNGCryptoServiceProvider*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Security::Cryptography::RNGCryptoServiceProvider::getStaticF__lock()  {
return ::cordl_internals::getStaticField<::System::Object*, "_lock", ::System::Security::Cryptography::RNGCryptoServiceProvider*>();
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::_ctor(::ArrayW<uint8_t>  rgb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgb);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::_ctor(::System::Security::Cryptography::CspParameters*  cspParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cspParams);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::_ctor(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::Check()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"Check", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Security::Cryptography::RNGCryptoServiceProvider::RngOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"RngOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::IntPtr System::Security::Cryptography::RNGCryptoServiceProvider::RngInitialize(uint8_t*  seed, ::System::IntPtr  seed_length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"RngInitialize", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, seed, seed_length);
}
inline ::System::IntPtr System::Security::Cryptography::RNGCryptoServiceProvider::RngGetBytes(::System::IntPtr  handle, uint8_t*  data, ::System::IntPtr  data_length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"RngGetBytes", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle, data, data_length);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::RngClose(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"RngClose", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::GetBytes(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::GetBytes(uint8_t*  data, ::System::IntPtr  data_length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(),
                        {"GetBytes", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, data_length);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::GetNonZeroBytes(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RNGCryptoServiceProvider::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RNGCryptoServiceProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::RNGCryptoServiceProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RNGCryptoServiceProvider*>());
}
inline ::System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::RNGCryptoServiceProvider::New_ctor(::ArrayW<uint8_t>  rgb)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RNGCryptoServiceProvider*>(rgb));
}
inline ::System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::RNGCryptoServiceProvider::New_ctor(::System::Security::Cryptography::CspParameters*  cspParams)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RNGCryptoServiceProvider*>(cspParams));
}
inline ::System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::RNGCryptoServiceProvider::New_ctor(::StringW  str)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RNGCryptoServiceProvider*>(str));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RNGCryptoServiceProvider::RNGCryptoServiceProvider()   {
}
