#pragma once
// IWYU pragma private; include "UnityEngine/Networking/MultipartFormDataSection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__MultipartFormDataSection_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "UnityEngine/Networking/zzzz__IMultipartFormSection_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormDataSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::MultipartFormDataSection::*)(::StringW, ::StringW, ::System::Text::Encoding*, ::StringW)>(&::UnityEngine::Networking::MultipartFormDataSection::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb928888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormDataSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::MultipartFormDataSection::*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::Networking::MultipartFormDataSection::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb928a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormDataSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::MultipartFormDataSection::*)(::StringW, ::StringW)>(&::UnityEngine::Networking::MultipartFormDataSection::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb928a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormDataSection.get_sectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::MultipartFormDataSection::*)()>(&::UnityEngine::Networking::MultipartFormDataSection::get_sectionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {"get_sectionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormDataSection.get_sectionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::Networking::MultipartFormDataSection::*)()>(&::UnityEngine::Networking::MultipartFormDataSection::get_sectionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {"get_sectionData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormDataSection.get_fileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::MultipartFormDataSection::*)()>(&::UnityEngine::Networking::MultipartFormDataSection::get_fileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {"get_fileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::MultipartFormDataSection.get_contentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::MultipartFormDataSection::*)()>(&::UnityEngine::Networking::MultipartFormDataSection::get_contentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb928ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {"get_contentType", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Networking::MultipartFormDataSection::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& UnityEngine::Networking::MultipartFormDataSection::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void UnityEngine::Networking::MultipartFormDataSection::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::ArrayW<uint8_t>& UnityEngine::Networking::MultipartFormDataSection::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::ArrayW<uint8_t> const& UnityEngine::Networking::MultipartFormDataSection::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void UnityEngine::Networking::MultipartFormDataSection::__cordl_internal_set_data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::StringW& UnityEngine::Networking::MultipartFormDataSection::__cordl_internal_get_content()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content;
}
constexpr ::StringW const& UnityEngine::Networking::MultipartFormDataSection::__cordl_internal_get_content() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content;
}
constexpr void UnityEngine::Networking::MultipartFormDataSection::__cordl_internal_set_content(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___content = value;
}
inline void UnityEngine::Networking::MultipartFormDataSection::_ctor(::StringW  name, ::StringW  data, ::System::Text::Encoding*  encoding, ::StringW  contentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, data, encoding, contentType);
}
inline void UnityEngine::Networking::MultipartFormDataSection::_ctor(::StringW  name, ::StringW  data, ::StringW  contentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, data, contentType);
}
inline void UnityEngine::Networking::MultipartFormDataSection::_ctor(::StringW  name, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, data);
}
inline ::StringW UnityEngine::Networking::MultipartFormDataSection::get_sectionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {"get_sectionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> UnityEngine::Networking::MultipartFormDataSection::get_sectionData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {"get_sectionData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::MultipartFormDataSection::get_fileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {"get_fileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::MultipartFormDataSection::get_contentType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Networking::MultipartFormDataSection*>(),
                        {"get_contentType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Networking::MultipartFormDataSection* UnityEngine::Networking::MultipartFormDataSection::New_ctor(::StringW  name, ::StringW  data, ::System::Text::Encoding*  encoding, ::StringW  contentType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::MultipartFormDataSection*>(name, data, encoding, contentType));
}
inline ::UnityEngine::Networking::MultipartFormDataSection* UnityEngine::Networking::MultipartFormDataSection::New_ctor(::StringW  name, ::StringW  data, ::StringW  contentType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::MultipartFormDataSection*>(name, data, contentType));
}
inline ::UnityEngine::Networking::MultipartFormDataSection* UnityEngine::Networking::MultipartFormDataSection::New_ctor(::StringW  name, ::StringW  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::MultipartFormDataSection*>(name, data));
}
/// @brief Convert operator to "::UnityEngine::Networking::IMultipartFormSection"
constexpr  UnityEngine::Networking::MultipartFormDataSection::operator ::UnityEngine::Networking::IMultipartFormSection*() noexcept {
return static_cast<::UnityEngine::Networking::IMultipartFormSection*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Networking::IMultipartFormSection"
constexpr ::UnityEngine::Networking::IMultipartFormSection* UnityEngine::Networking::MultipartFormDataSection::i___UnityEngine__Networking__IMultipartFormSection() noexcept {
return static_cast<::UnityEngine::Networking::IMultipartFormSection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::MultipartFormDataSection::MultipartFormDataSection()   {
}
