#pragma once
// IWYU pragma private; include "System/Security/Cryptography/KeyedHashAlgorithm.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::KeyedHashAlgorithm::*)()>(&::System::Security::Cryptography::KeyedHashAlgorithm::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1680e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::KeyedHashAlgorithm::*)(bool)>(&::System::Security::Cryptography::KeyedHashAlgorithm::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa167f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::KeyedHashAlgorithm::*)()>(&::System::Security::Cryptography::KeyedHashAlgorithm::get_Key)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa168a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::KeyedHashAlgorithm::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::KeyedHashAlgorithm::set_Key)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa168ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::KeyedHashAlgorithm* (*)()>(&::System::Security::Cryptography::KeyedHashAlgorithm::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa168bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeyedHashAlgorithm.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::KeyedHashAlgorithm* (*)(::StringW)>(&::System::Security::Cryptography::KeyedHashAlgorithm::Create)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa168c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::KeyedHashAlgorithm::__cordl_internal_get_KeyValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyValue;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::KeyedHashAlgorithm::__cordl_internal_get_KeyValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyValue;
}
constexpr void System::Security::Cryptography::KeyedHashAlgorithm::__cordl_internal_set_KeyValue(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyValue = value;
}
inline void System::Security::Cryptography::KeyedHashAlgorithm::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::KeyedHashAlgorithm::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::KeyedHashAlgorithm::get_Key()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::KeyedHashAlgorithm::set_Key(::ArrayW<uint8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::KeyedHashAlgorithm* System::Security::Cryptography::KeyedHashAlgorithm::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::KeyedHashAlgorithm*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::KeyedHashAlgorithm* System::Security::Cryptography::KeyedHashAlgorithm::Create(::StringW  algName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::KeyedHashAlgorithm*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::KeyedHashAlgorithm*>(nullptr, ___internal_method, algName);
}
inline ::System::Security::Cryptography::KeyedHashAlgorithm* System::Security::Cryptography::KeyedHashAlgorithm::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::KeyedHashAlgorithm*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::KeyedHashAlgorithm::KeyedHashAlgorithm()   {
}
