#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/PkzipClassicCryptoBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__PkzipClassicCryptoBase_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase.TransformByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::TransformByte)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9ff7f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*>(),
                        {"TransformByte", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase.SetKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::SetKeys)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9ff7f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*>(),
                        {"SetKeys", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase.UpdateKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::*)(uint8_t)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::UpdateKeys)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9ff80c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*>(),
                        {"UpdateKeys", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9ff8258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff8298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::__cordl_internal_get_keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keys;
}
constexpr ::ArrayW<uint32_t> const& ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::__cordl_internal_get_keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keys;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::__cordl_internal_set_keys(::ArrayW<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keys = value;
}
inline uint8_t ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::TransformByte()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*>(),
                        {"TransformByte", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::SetKeys(::ArrayW<uint8_t>  keyData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*>(),
                        {"SetKeys", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyData);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::UpdateKeys(uint8_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*>(),
                        {"UpdateKeys", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase* ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*>());
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase::PkzipClassicCryptoBase()   {
}
