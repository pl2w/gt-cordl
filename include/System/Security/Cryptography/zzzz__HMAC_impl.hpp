#pragma once
// IWYU pragma private; include "System/Security/Cryptography/HMAC.hpp"
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.get_BlockSizeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::HMAC::*)()>(&::System::Security::Cryptography::HMAC::get_BlockSizeValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa167638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"get_BlockSizeValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.set_BlockSizeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMAC::*)(int32_t)>(&::System::Security::Cryptography::HMAC::set_BlockSizeValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa167640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"set_BlockSizeValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.UpdateIOPadBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMAC::*)()>(&::System::Security::Cryptography::HMAC::UpdateIOPadBuffers)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa167648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"UpdateIOPadBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.InitializeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMAC::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::HMAC::InitializeKey)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa1677d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"InitializeKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::HMAC::*)()>(&::System::Security::Cryptography::HMAC::get_Key)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa1678f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                    {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMAC::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::HMAC::set_Key)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa167968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                    {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.get_HashName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::HMAC::*)()>(&::System::Security::Cryptography::HMAC::get_HashName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1679c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"get_HashName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.set_HashName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMAC::*)(::StringW)>(&::System::Security::Cryptography::HMAC::set_HashName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa1679d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"set_HashName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HMAC* (*)()>(&::System::Security::Cryptography::HMAC::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa167a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HMAC* (*)(::StringW)>(&::System::Security::Cryptography::HMAC::Create)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa167b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMAC::*)()>(&::System::Security::Cryptography::HMAC::Initialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa167bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                    {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.HashCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMAC::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::HMAC::HashCore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa167c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                    {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.HashFinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::HMAC::*)()>(&::System::Security::Cryptography::HMAC::HashFinal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa167c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                    {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMAC::*)(bool)>(&::System::Security::Cryptography::HMAC::Dispose)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa167dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                    {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC.GetHashAlgorithmWithFipsFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)(::System::Func_1<::System::Security::Cryptography::HashAlgorithm*>*, ::System::Func_1<::System::Security::Cryptography::HashAlgorithm*>*)>(&::System::Security::Cryptography::HMAC::GetHashAlgorithmWithFipsFallback)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa167f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"GetHashAlgorithmWithFipsFallback", {}, {::i2c::type_of<::System::Func_1<::System::Security::Cryptography::HashAlgorithm*>*>(), ::i2c::type_of<::System::Func_1<::System::Security::Cryptography::HashAlgorithm*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMAC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMAC::*)()>(&::System::Security::Cryptography::HMAC::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa1680d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::Cryptography::HMAC::__cordl_internal_get_blockSizeValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockSizeValue;
}
constexpr int32_t const& System::Security::Cryptography::HMAC::__cordl_internal_get_blockSizeValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockSizeValue;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_blockSizeValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockSizeValue = value;
}
constexpr ::StringW& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hashName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hashName;
}
constexpr ::StringW const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hashName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hashName;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_hashName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hashName = value;
}
constexpr ::System::Security::Cryptography::HashAlgorithm*& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hash1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hash1;
}
constexpr ::System::Security::Cryptography::HashAlgorithm* const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hash1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hash1;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_hash1(::System::Security::Cryptography::HashAlgorithm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hash1 = value;
}
constexpr ::System::Security::Cryptography::HashAlgorithm*& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hash2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hash2;
}
constexpr ::System::Security::Cryptography::HashAlgorithm* const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hash2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hash2;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_hash2(::System::Security::Cryptography::HashAlgorithm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hash2 = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::HMAC::__cordl_internal_get_m_inner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inner;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_inner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inner;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_inner(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_inner = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::HMAC::__cordl_internal_get_m_outer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_outer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_outer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_outer;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_outer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_outer = value;
}
constexpr bool& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hashing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hashing;
}
constexpr bool const& System::Security::Cryptography::HMAC::__cordl_internal_get_m_hashing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hashing;
}
constexpr void System::Security::Cryptography::HMAC::__cordl_internal_set_m_hashing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hashing = value;
}
inline int32_t System::Security::Cryptography::HMAC::get_BlockSizeValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"get_BlockSizeValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::set_BlockSizeValue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"set_BlockSizeValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::HMAC::UpdateIOPadBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"UpdateIOPadBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::InitializeKey(::ArrayW<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"InitializeKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::HMAC::get_Key()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::set_Key(::ArrayW<uint8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Security::Cryptography::HMAC::get_HashName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"get_HashName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::set_HashName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"set_HashName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::HMAC* System::Security::Cryptography::HMAC::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HMAC*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::HMAC* System::Security::Cryptography::HMAC::Create(::StringW  algorithmName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HMAC*>(nullptr, ___internal_method, algorithmName);
}
inline void System::Security::Cryptography::HMAC::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::HashCore(::ArrayW<uint8_t>  rgb, int32_t  ib, int32_t  cb)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgb, ib, cb);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::HMAC::HashFinal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMAC::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::HMAC*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::HMAC::GetHashAlgorithmWithFipsFallback(::System::Func_1<::System::Security::Cryptography::HashAlgorithm*>*  createStandardHashAlgorithmCallback, ::System::Func_1<::System::Security::Cryptography::HashAlgorithm*>*  createFipsHashAlgorithmCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {"GetHashAlgorithmWithFipsFallback", {}, {::i2c::type_of<::System::Func_1<::System::Security::Cryptography::HashAlgorithm*>*>(), ::i2c::type_of<::System::Func_1<::System::Security::Cryptography::HashAlgorithm*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*>(nullptr, ___internal_method, createStandardHashAlgorithmCallback, createFipsHashAlgorithmCallback);
}
inline void System::Security::Cryptography::HMAC::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::HMAC*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::HMAC* System::Security::Cryptography::HMAC::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::HMAC*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::HMAC::HMAC()   {
}
