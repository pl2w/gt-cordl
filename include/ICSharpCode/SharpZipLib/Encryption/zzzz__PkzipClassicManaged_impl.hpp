#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/PkzipClassicManaged.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__PkzipClassic_impl.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__PkzipClassicManaged_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged.get_BlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::get_BlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff85dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged.set_BlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::set_BlockSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9ff85e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged.get_LegalKeySizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Security::Cryptography::KeySizes*> (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::get_LegalKeySizes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ff863c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged.GenerateIV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::GenerateIV)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ff86e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged.get_LegalBlockSizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Security::Cryptography::KeySizes*> (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::get_LegalBlockSizes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ff86ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::get_Key)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ff8798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::set_Key)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9ff882c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged.GenerateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::GenerateKey)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9ff8960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged.CreateEncryptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::CreateEncryptor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9ff8ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged.CreateDecryptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::CreateDecryptor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9ff8b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff8c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::__cordl_internal_get_key_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key_;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::__cordl_internal_get_key_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key_;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::__cordl_internal_set_key_(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key_ = value;
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::get_BlockSize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::set_BlockSize(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::get_LegalKeySizes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Security::Cryptography::KeySizes*>>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::GenerateIV()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::get_LegalBlockSizes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Security::Cryptography::KeySizes*>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::get_Key()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::set_Key(::ArrayW<uint8_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::GenerateKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::CreateEncryptor(::ArrayW<uint8_t>  rgbKey, ::ArrayW<uint8_t>  rgbIV)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, rgbKey, rgbIV);
}
inline ::System::Security::Cryptography::ICryptoTransform* ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::CreateDecryptor(::ArrayW<uint8_t>  rgbKey, ::ArrayW<uint8_t>  rgbIV)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, rgbKey, rgbIV);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged* ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*>());
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged::PkzipClassicManaged()   {
}
