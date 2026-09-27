#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DES.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_impl.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__DES_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DES._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DES::*)()>(&::System::Security::Cryptography::DES::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa164148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DES.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DES::*)()>(&::System::Security::Cryptography::DES::get_Key)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa1641e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DES*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DES.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DES::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DES::set_Key)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa16464c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DES*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DES.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DES* (*)()>(&::System::Security::Cryptography::DES::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa164870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DES.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DES* (*)(::StringW)>(&::System::Security::Cryptography::DES::Create)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa1649a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DES.IsWeakKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DES::IsWeakKey)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa1642c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"IsWeakKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DES.IsSemiWeakKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DES::IsSemiWeakKey)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xa16441c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"IsSemiWeakKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DES.IsLegalKeySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DES::IsLegalKeySize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa164a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"IsLegalKeySize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DES.QuadWordFromBigEndian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DES::QuadWordFromBigEndian)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa164a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"QuadWordFromBigEndian", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::DES::setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalBlockSizes", ::System::Security::Cryptography::DES*>(std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> System::Security::Cryptography::DES::getStaticF_s_legalBlockSizes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalBlockSizes", ::System::Security::Cryptography::DES*>();
}
inline void System::Security::Cryptography::DES::setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalKeySizes", ::System::Security::Cryptography::DES*>(std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> System::Security::Cryptography::DES::getStaticF_s_legalKeySizes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalKeySizes", ::System::Security::Cryptography::DES*>();
}
inline void System::Security::Cryptography::DES::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DES::get_Key()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DES*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::DES::set_Key(::ArrayW<uint8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DES*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::DES* System::Security::Cryptography::DES::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DES*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::DES* System::Security::Cryptography::DES::Create(::StringW  algName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DES*>(nullptr, ___internal_method, algName);
}
inline bool System::Security::Cryptography::DES::IsWeakKey(::ArrayW<uint8_t>  rgbKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"IsWeakKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rgbKey);
}
inline bool System::Security::Cryptography::DES::IsSemiWeakKey(::ArrayW<uint8_t>  rgbKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"IsSemiWeakKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rgbKey);
}
inline bool System::Security::Cryptography::DES::IsLegalKeySize(::ArrayW<uint8_t>  rgbKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"IsLegalKeySize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rgbKey);
}
inline uint64_t System::Security::Cryptography::DES::QuadWordFromBigEndian(::ArrayW<uint8_t>  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DES*>(),
                        {"QuadWordFromBigEndian", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, block);
}
inline ::System::Security::Cryptography::DES* System::Security::Cryptography::DES::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DES*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DES::DES()   {
}
