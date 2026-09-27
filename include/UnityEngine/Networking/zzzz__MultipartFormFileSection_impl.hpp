#pragma once
// IWYU pragma private; include "UnityEngine/Networking/MultipartFormFileSection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__MultipartFormFileSection_def.hpp"
#include "UnityEngine/Networking/zzzz__IMultipartFormSection_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormFileSection.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::MultipartFormFileSection::*)(::StringW, ::ArrayW<uint8_t>, ::StringW, ::StringW)>(&::UnityEngine::Networking::MultipartFormFileSection::Init)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb928ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {"Init", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormFileSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::MultipartFormFileSection::*)(::StringW, ::ArrayW<uint8_t>, ::StringW, ::StringW)>(&::UnityEngine::Networking::MultipartFormFileSection::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb928b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormFileSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::MultipartFormFileSection::*)(::StringW, ::ArrayW<uint8_t>)>(&::UnityEngine::Networking::MultipartFormFileSection::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb928c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormFileSection.get_sectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::MultipartFormFileSection::*)()>(&::UnityEngine::Networking::MultipartFormFileSection::get_sectionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {"get_sectionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormFileSection.get_sectionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::Networking::MultipartFormFileSection::*)()>(&::UnityEngine::Networking::MultipartFormFileSection::get_sectionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {"get_sectionData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormFileSection.get_fileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::MultipartFormFileSection::*)()>(&::UnityEngine::Networking::MultipartFormFileSection::get_fileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {"get_fileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormFileSection.get_contentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::MultipartFormFileSection::*)()>(&::UnityEngine::Networking::MultipartFormFileSection::get_contentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {"get_contentType", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::ArrayW<uint8_t>& UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::ArrayW<uint8_t> const& UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_set_data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::StringW& UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_get_file()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___file;
}
constexpr ::StringW const& UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_get_file() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___file;
}
constexpr void UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_set_file(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___file = value;
}
constexpr ::StringW& UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_get_content()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content;
}
constexpr ::StringW const& UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_get_content() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content;
}
constexpr void UnityEngine::Networking::MultipartFormFileSection::__cordl_internal_set_content(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___content = value;
}
inline void UnityEngine::Networking::MultipartFormFileSection::Init(::StringW  name, ::ArrayW<uint8_t>  data, ::StringW  fileName, ::StringW  contentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {"Init", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, data, fileName, contentType);
}
inline void UnityEngine::Networking::MultipartFormFileSection::_ctor(::StringW  name, ::ArrayW<uint8_t>  data, ::StringW  fileName, ::StringW  contentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, data, fileName, contentType);
}
inline void UnityEngine::Networking::MultipartFormFileSection::_ctor(::StringW  fileName, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, data);
}
inline ::StringW UnityEngine::Networking::MultipartFormFileSection::get_sectionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {"get_sectionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> UnityEngine::Networking::MultipartFormFileSection::get_sectionData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {"get_sectionData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::MultipartFormFileSection::get_fileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {"get_fileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::MultipartFormFileSection::get_contentType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormFileSection*>(),
                        {"get_contentType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Networking::MultipartFormFileSection* UnityEngine::Networking::MultipartFormFileSection::New_ctor(::StringW  name, ::ArrayW<uint8_t>  data, ::StringW  fileName, ::StringW  contentType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::MultipartFormFileSection*>(name, data, fileName, contentType));
}
inline ::UnityEngine::Networking::MultipartFormFileSection* UnityEngine::Networking::MultipartFormFileSection::New_ctor(::StringW  fileName, ::ArrayW<uint8_t>  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::MultipartFormFileSection*>(fileName, data));
}
/// @brief Convert operator to "::UnityEngine::Networking::IMultipartFormSection"
constexpr  UnityEngine::Networking::MultipartFormFileSection::operator ::UnityEngine::Networking::IMultipartFormSection*() noexcept {
return static_cast<::UnityEngine::Networking::IMultipartFormSection*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Networking::IMultipartFormSection"
constexpr ::UnityEngine::Networking::IMultipartFormSection* UnityEngine::Networking::MultipartFormFileSection::i___UnityEngine__Networking__IMultipartFormSection() noexcept {
return static_cast<::UnityEngine::Networking::IMultipartFormSection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::MultipartFormFileSection::MultipartFormFileSection()   {
}
