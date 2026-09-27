#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAEncryptionPadding.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAEncryptionPaddingMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAEncryptionPadding_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAEncryptionPaddingMode_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.get_Pkcs1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAEncryptionPadding* (*)()>(&::System::Security::Cryptography::RSAEncryptionPadding::get_Pkcs1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa16143c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_Pkcs1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.get_OaepSHA1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAEncryptionPadding* (*)()>(&::System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa161494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_OaepSHA1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.get_OaepSHA256
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAEncryptionPadding* (*)()>(&::System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA256)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa1614ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_OaepSHA256", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.get_OaepSHA384
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAEncryptionPadding* (*)()>(&::System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA384)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa161544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_OaepSHA384", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.get_OaepSHA512
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAEncryptionPadding* (*)()>(&::System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA512)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa16159c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_OaepSHA512", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAEncryptionPadding::*)(::System::Security::Cryptography::RSAEncryptionPaddingMode, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::RSAEncryptionPadding::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa1615f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPaddingMode>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.CreateOaep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAEncryptionPadding* (*)(::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::RSAEncryptionPadding::CreateOaep)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa16162c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"CreateOaep", {}, {::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.get_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAEncryptionPaddingMode (::System::Security::Cryptography::RSAEncryptionPadding::*)()>(&::System::Security::Cryptography::RSAEncryptionPadding::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa161710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_Mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.get_OaepHashAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithmName (::System::Security::Cryptography::RSAEncryptionPadding::*)()>(&::System::Security::Cryptography::RSAEncryptionPadding::get_OaepHashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa161718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_OaepHashAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::RSAEncryptionPadding::*)()>(&::System::Security::Cryptography::RSAEncryptionPadding::GetHashCode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa161720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.CombineHashCodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Security::Cryptography::RSAEncryptionPadding::CombineHashCodes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa1617ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSAEncryptionPadding::*)(::System::Object*)>(&::System::Security::Cryptography::RSAEncryptionPadding::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa1617b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSAEncryptionPadding::*)(::System::Security::Cryptography::RSAEncryptionPadding*)>(&::System::Security::Cryptography::RSAEncryptionPadding::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa16181c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"Equals", {}, {::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPadding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::RSAEncryptionPadding*, ::System::Security::Cryptography::RSAEncryptionPadding*)>(&::System::Security::Cryptography::RSAEncryptionPadding::op_Equality)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa161930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPadding*>(), ::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPadding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::RSAEncryptionPadding*, ::System::Security::Cryptography::RSAEncryptionPadding*)>(&::System::Security::Cryptography::RSAEncryptionPadding::op_Inequality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa1618c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPadding*>(), ::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPadding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::RSAEncryptionPadding::*)()>(&::System::Security::Cryptography::RSAEncryptionPadding::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa161944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAEncryptionPadding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAEncryptionPadding::*)()>(&::System::Security::Cryptography::RSAEncryptionPadding::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa161ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RSAEncryptionPaddingMode& System::Security::Cryptography::RSAEncryptionPadding::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr ::System::Security::Cryptography::RSAEncryptionPaddingMode const& System::Security::Cryptography::RSAEncryptionPadding::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr void System::Security::Cryptography::RSAEncryptionPadding::__cordl_internal_set__mode(::System::Security::Cryptography::RSAEncryptionPaddingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
constexpr ::System::Security::Cryptography::HashAlgorithmName& System::Security::Cryptography::RSAEncryptionPadding::__cordl_internal_get__oaepHashAlgorithm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oaepHashAlgorithm;
}
constexpr ::System::Security::Cryptography::HashAlgorithmName const& System::Security::Cryptography::RSAEncryptionPadding::__cordl_internal_get__oaepHashAlgorithm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oaepHashAlgorithm;
}
constexpr void System::Security::Cryptography::RSAEncryptionPadding::__cordl_internal_set__oaepHashAlgorithm(::System::Security::Cryptography::HashAlgorithmName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oaepHashAlgorithm = value;
}
inline void System::Security::Cryptography::RSAEncryptionPadding::setStaticF_s_pkcs1(::System::Security::Cryptography::RSAEncryptionPadding*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RSAEncryptionPadding*, "s_pkcs1", ::System::Security::Cryptography::RSAEncryptionPadding*>(std::forward<::System::Security::Cryptography::RSAEncryptionPadding*>(value));
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::getStaticF_s_pkcs1()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RSAEncryptionPadding*, "s_pkcs1", ::System::Security::Cryptography::RSAEncryptionPadding*>();
}
inline void System::Security::Cryptography::RSAEncryptionPadding::setStaticF_s_oaepSHA1(::System::Security::Cryptography::RSAEncryptionPadding*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RSAEncryptionPadding*, "s_oaepSHA1", ::System::Security::Cryptography::RSAEncryptionPadding*>(std::forward<::System::Security::Cryptography::RSAEncryptionPadding*>(value));
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::getStaticF_s_oaepSHA1()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RSAEncryptionPadding*, "s_oaepSHA1", ::System::Security::Cryptography::RSAEncryptionPadding*>();
}
inline void System::Security::Cryptography::RSAEncryptionPadding::setStaticF_s_oaepSHA256(::System::Security::Cryptography::RSAEncryptionPadding*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RSAEncryptionPadding*, "s_oaepSHA256", ::System::Security::Cryptography::RSAEncryptionPadding*>(std::forward<::System::Security::Cryptography::RSAEncryptionPadding*>(value));
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::getStaticF_s_oaepSHA256()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RSAEncryptionPadding*, "s_oaepSHA256", ::System::Security::Cryptography::RSAEncryptionPadding*>();
}
inline void System::Security::Cryptography::RSAEncryptionPadding::setStaticF_s_oaepSHA384(::System::Security::Cryptography::RSAEncryptionPadding*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RSAEncryptionPadding*, "s_oaepSHA384", ::System::Security::Cryptography::RSAEncryptionPadding*>(std::forward<::System::Security::Cryptography::RSAEncryptionPadding*>(value));
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::getStaticF_s_oaepSHA384()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RSAEncryptionPadding*, "s_oaepSHA384", ::System::Security::Cryptography::RSAEncryptionPadding*>();
}
inline void System::Security::Cryptography::RSAEncryptionPadding::setStaticF_s_oaepSHA512(::System::Security::Cryptography::RSAEncryptionPadding*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RSAEncryptionPadding*, "s_oaepSHA512", ::System::Security::Cryptography::RSAEncryptionPadding*>(std::forward<::System::Security::Cryptography::RSAEncryptionPadding*>(value));
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::getStaticF_s_oaepSHA512()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RSAEncryptionPadding*, "s_oaepSHA512", ::System::Security::Cryptography::RSAEncryptionPadding*>();
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::get_Pkcs1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_Pkcs1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAEncryptionPadding*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_OaepSHA1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAEncryptionPadding*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA256()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_OaepSHA256", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAEncryptionPadding*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA384()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_OaepSHA384", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAEncryptionPadding*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::get_OaepSHA512()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_OaepSHA512", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAEncryptionPadding*>(nullptr, ___internal_method);
}
inline void System::Security::Cryptography::RSAEncryptionPadding::_ctor(::System::Security::Cryptography::RSAEncryptionPaddingMode  mode, ::System::Security::Cryptography::HashAlgorithmName  oaepHashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPaddingMode>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode, oaepHashAlgorithm);
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::CreateOaep(::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"CreateOaep", {}, {::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAEncryptionPadding*>(nullptr, ___internal_method, hashAlgorithm);
}
inline ::System::Security::Cryptography::RSAEncryptionPaddingMode System::Security::Cryptography::RSAEncryptionPadding::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAEncryptionPaddingMode>(this, ___internal_method);
}
inline ::System::Security::Cryptography::HashAlgorithmName System::Security::Cryptography::RSAEncryptionPadding::get_OaepHashAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"get_OaepHashAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithmName>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RSAEncryptionPadding::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RSAEncryptionPadding::CombineHashCodes(int32_t  h1, int32_t  h2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"CombineHashCodes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, h1, h2);
}
inline bool System::Security::Cryptography::RSAEncryptionPadding::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool System::Security::Cryptography::RSAEncryptionPadding::Equals(::System::Security::Cryptography::RSAEncryptionPadding*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"Equals", {}, {::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPadding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool System::Security::Cryptography::RSAEncryptionPadding::op_Equality(::System::Security::Cryptography::RSAEncryptionPadding*  left, ::System::Security::Cryptography::RSAEncryptionPadding*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPadding*>(), ::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPadding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Security::Cryptography::RSAEncryptionPadding::op_Inequality(::System::Security::Cryptography::RSAEncryptionPadding*  left, ::System::Security::Cryptography::RSAEncryptionPadding*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPadding*>(), ::i2c::type_of<::System::Security::Cryptography::RSAEncryptionPadding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::StringW System::Security::Cryptography::RSAEncryptionPadding::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSAEncryptionPadding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAEncryptionPadding*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::New_ctor(::System::Security::Cryptography::RSAEncryptionPaddingMode  mode, ::System::Security::Cryptography::HashAlgorithmName  oaepHashAlgorithm)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAEncryptionPadding*>(mode, oaepHashAlgorithm));
}
inline ::System::Security::Cryptography::RSAEncryptionPadding* System::Security::Cryptography::RSAEncryptionPadding::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAEncryptionPadding*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>"
constexpr  System::Security::Cryptography::RSAEncryptionPadding::operator ::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>*() noexcept {
return static_cast<::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>"
constexpr ::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>* System::Security::Cryptography::RSAEncryptionPadding::i___System__IEquatable_1___System__Security__Cryptography__RSAEncryptionPadding__() noexcept {
return static_cast<::System::IEquatable_1<::System::Security::Cryptography::RSAEncryptionPadding*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAEncryptionPadding::RSAEncryptionPadding()   {
}
