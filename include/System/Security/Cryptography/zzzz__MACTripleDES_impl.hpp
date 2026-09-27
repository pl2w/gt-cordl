#pragma once
// IWYU pragma private; include "System/Security/Cryptography/MACTripleDES.hpp"
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__MACTripleDES_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
#include "System/Security/Cryptography/zzzz__TailStream_def.hpp"
#include "System/Security/Cryptography/zzzz__TripleDES_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)()>(&::System::Security::Cryptography::MACTripleDES::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa168cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::MACTripleDES::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa168e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(::StringW, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::MACTripleDES::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xa168eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)()>(&::System::Security::Cryptography::MACTripleDES::Initialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa1690b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                    {::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.get_Padding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::PaddingMode (::System::Security::Cryptography::MACTripleDES::*)()>(&::System::Security::Cryptography::MACTripleDES::get_Padding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa1690c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                        {"get_Padding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.set_Padding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(::System::Security::Cryptography::PaddingMode)>(&::System::Security::Cryptography::MACTripleDES::set_Padding)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa1690e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                        {"set_Padding", {}, {::i2c::type_of<::System::Security::Cryptography::PaddingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.HashCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::MACTripleDES::HashCore)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa169164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                    {::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.HashFinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::MACTripleDES::*)()>(&::System::Security::Cryptography::MACTripleDES::HashFinal)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa169384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                    {::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(bool)>(&::System::Security::Cryptography::MACTripleDES::Dispose)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa169564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                    {::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(), 13}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::ICryptoTransform*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_encryptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_encryptor;
}
constexpr ::System::Security::Cryptography::ICryptoTransform* const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_encryptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_encryptor;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set_m_encryptor(::System::Security::Cryptography::ICryptoTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_encryptor = value;
}
constexpr ::System::Security::Cryptography::CryptoStream*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__cs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cs;
}
constexpr ::System::Security::Cryptography::CryptoStream* const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__cs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cs;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set__cs(::System::Security::Cryptography::CryptoStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cs = value;
}
constexpr ::System::Security::Cryptography::TailStream*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__ts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ts;
}
constexpr ::System::Security::Cryptography::TailStream* const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__ts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ts;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set__ts(::System::Security::Cryptography::TailStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ts = value;
}
constexpr int32_t& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_bytesPerBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bytesPerBlock;
}
constexpr int32_t const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_bytesPerBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bytesPerBlock;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set_m_bytesPerBlock(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bytesPerBlock = value;
}
constexpr ::System::Security::Cryptography::TripleDES*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_des()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___des;
}
constexpr ::System::Security::Cryptography::TripleDES* const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_des() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___des;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set_des(::System::Security::Cryptography::TripleDES*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___des = value;
}
inline void System::Security::Cryptography::MACTripleDES::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::MACTripleDES::_ctor(::ArrayW<uint8_t>  rgbKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgbKey);
}
inline void System::Security::Cryptography::MACTripleDES::_ctor(::StringW  strTripleDES, ::ArrayW<uint8_t>  rgbKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strTripleDES, rgbKey);
}
inline void System::Security::Cryptography::MACTripleDES::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::PaddingMode System::Security::Cryptography::MACTripleDES::get_Padding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                        {"get_Padding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::PaddingMode>(this, ___internal_method);
}
inline void System::Security::Cryptography::MACTripleDES::set_Padding(::System::Security::Cryptography::PaddingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(),
                        {"set_Padding", {}, {::i2c::type_of<::System::Security::Cryptography::PaddingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::MACTripleDES::HashCore(::ArrayW<uint8_t>  rgbData, int32_t  ibStart, int32_t  cbSize)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgbData, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::MACTripleDES::HashFinal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::MACTripleDES::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::MACTripleDES*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Security::Cryptography::MACTripleDES* System::Security::Cryptography::MACTripleDES::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::MACTripleDES*>());
}
inline ::System::Security::Cryptography::MACTripleDES* System::Security::Cryptography::MACTripleDES::New_ctor(::ArrayW<uint8_t>  rgbKey)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::MACTripleDES*>(rgbKey));
}
inline ::System::Security::Cryptography::MACTripleDES* System::Security::Cryptography::MACTripleDES::New_ctor(::StringW  strTripleDES, ::ArrayW<uint8_t>  rgbKey)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::MACTripleDES*>(strTripleDES, rgbKey));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::MACTripleDES::MACTripleDES()   {
}
