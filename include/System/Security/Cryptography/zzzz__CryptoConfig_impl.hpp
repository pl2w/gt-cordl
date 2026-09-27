#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoConfig_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.AddOID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::StringW>)>(&::System::Security::Cryptography::CryptoConfig::AddOID)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa17e958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"AddOID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.CreateFromName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW)>(&::System::Security::Cryptography::CryptoConfig::CreateFromName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa171954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"CreateFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.CreateFromName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::ArrayW<::System::Object*>)>(&::System::Security::Cryptography::CryptoConfig::CreateFromName)> {
  constexpr static std::size_t size = 0x1ed4;
  constexpr static std::size_t addrs = 0xa17e990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"CreateFromName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.MapNameToOID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Object*)>(&::System::Security::Cryptography::CryptoConfig::MapNameToOID)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa18095c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"MapNameToOID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.MapNameToOID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Security::Cryptography::CryptoConfig::MapNameToOID)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0xa1809b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"MapNameToOID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Security::Cryptography::CryptoConfig::Initialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa181184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.AddAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::ArrayW<::StringW>)>(&::System::Security::Cryptography::CryptoConfig::AddAlgorithm)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xa181288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"AddAlgorithm", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.EncodeOID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Security::Cryptography::CryptoConfig::EncodeOID)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xa181608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"EncodeOID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.EncodeLongNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int64_t)>(&::System::Security::Cryptography::CryptoConfig::EncodeLongNumber)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa181a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"EncodeLongNumber", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig.get_AllowOnlyFipsAlgorithms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Security::Cryptography::CryptoConfig::get_AllowOnlyFipsAlgorithms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa178234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"get_AllowOnlyFipsAlgorithms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoConfig::*)()>(&::System::Security::Cryptography::CryptoConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa181b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::CryptoConfig::setStaticF_lockObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "lockObject", ::System::Security::Cryptography::CryptoConfig*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Security::Cryptography::CryptoConfig::getStaticF_lockObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "lockObject", ::System::Security::Cryptography::CryptoConfig*>();
}
inline void System::Security::Cryptography::CryptoConfig::setStaticF_algorithms(::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*, "algorithms", ::System::Security::Cryptography::CryptoConfig*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>* System::Security::Cryptography::CryptoConfig::getStaticF_algorithms()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*, "algorithms", ::System::Security::Cryptography::CryptoConfig*>();
}
inline void System::Security::Cryptography::CryptoConfig::AddOID(::StringW  oid, /* [ParamArray] */ ::ArrayW<::StringW>  names)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"AddOID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, oid, names);
}
inline ::System::Object* System::Security::Cryptography::CryptoConfig::CreateFromName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"CreateFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, name);
}
inline ::System::Object* System::Security::Cryptography::CryptoConfig::CreateFromName(::StringW  name, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"CreateFromName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, name, args);
}
inline ::StringW System::Security::Cryptography::CryptoConfig::MapNameToOID(::StringW  name, ::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"MapNameToOID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, arg);
}
inline ::StringW System::Security::Cryptography::CryptoConfig::MapNameToOID(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"MapNameToOID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline void System::Security::Cryptography::CryptoConfig::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Security::Cryptography::CryptoConfig::AddAlgorithm(::System::Type*  algorithm, /* [ParamArray] */ ::ArrayW<::StringW>  names)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"AddAlgorithm", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, algorithm, names);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::CryptoConfig::EncodeOID(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"EncodeOID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, str);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::CryptoConfig::EncodeLongNumber(int64_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"EncodeLongNumber", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, x);
}
inline bool System::Security::Cryptography::CryptoConfig::get_AllowOnlyFipsAlgorithms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {"get_AllowOnlyFipsAlgorithms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Security::Cryptography::CryptoConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::CryptoConfig* System::Security::Cryptography::CryptoConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CryptoConfig*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CryptoConfig::CryptoConfig()   {
}
