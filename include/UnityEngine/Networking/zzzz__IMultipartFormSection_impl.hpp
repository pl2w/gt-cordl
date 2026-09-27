#pragma once
// IWYU pragma private; include "UnityEngine/Networking/IMultipartFormSection.hpp"
#include "UnityEngine/Networking/zzzz__IMultipartFormSection_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::IMultipartFormSection.get_sectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::IMultipartFormSection::*)()>(&::UnityEngine::Networking::IMultipartFormSection::get_sectionName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(),
                    {::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::IMultipartFormSection.get_sectionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::UnityEngine::Networking::IMultipartFormSection::*)()>(&::UnityEngine::Networking::IMultipartFormSection::get_sectionData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(),
                    {::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::IMultipartFormSection.get_fileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::IMultipartFormSection::*)()>(&::UnityEngine::Networking::IMultipartFormSection::get_fileName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(),
                    {::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::IMultipartFormSection.get_contentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::IMultipartFormSection::*)()>(&::UnityEngine::Networking::IMultipartFormSection::get_contentType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(),
                    {::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Networking::IMultipartFormSection::get_sectionName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> UnityEngine::Networking::IMultipartFormSection::get_sectionData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::IMultipartFormSection::get_fileName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::IMultipartFormSection::get_contentType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Networking::IMultipartFormSection*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
