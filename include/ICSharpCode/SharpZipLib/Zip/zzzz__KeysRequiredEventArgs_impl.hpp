#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/KeysRequiredEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__KeysRequiredEventArgs_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f8397c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::*)(::StringW, ::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f839f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs.get_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::get_FileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f83a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(),
                        {"get_FileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f83a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::set_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f83a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(),
                        {"set_Key", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::__cordl_internal_get_fileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::__cordl_internal_get_fileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr void ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::__cordl_internal_set_fileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileName = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::__cordl_internal_set_key(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
inline void ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::_ctor(::StringW  name, ::ArrayW<uint8_t>  keyValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, keyValue);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(),
                        {"get_FileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::set_Key(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(),
                        {"set_Key", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs* ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(name));
}
inline ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs* ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::New_ctor(::StringW  name, ::ArrayW<uint8_t>  keyValue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*>(name, keyValue));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs::KeysRequiredEventArgs()   {
}
