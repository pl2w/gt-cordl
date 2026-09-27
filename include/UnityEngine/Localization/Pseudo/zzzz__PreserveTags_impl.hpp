#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/PreserveTags.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__PreserveTags_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__IPseudoLocalizationMethod_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Message_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PreserveTags.get_Opening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::Localization::Pseudo::PreserveTags::*)()>(&::UnityEngine::Localization::Pseudo::PreserveTags::get_Opening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb025f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {"get_Opening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PreserveTags.set_Opening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::PreserveTags::*)(char16_t)>(&::UnityEngine::Localization::Pseudo::PreserveTags::set_Opening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb025f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {"set_Opening", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PreserveTags.get_Closing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::Localization::Pseudo::PreserveTags::*)()>(&::UnityEngine::Localization::Pseudo::PreserveTags::get_Closing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb025f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {"get_Closing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PreserveTags.set_Closing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::PreserveTags::*)(char16_t)>(&::UnityEngine::Localization::Pseudo::PreserveTags::set_Closing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb025f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {"set_Closing", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PreserveTags.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::PreserveTags::*)(::UnityEngine::Localization::Pseudo::Message*)>(&::UnityEngine::Localization::Pseudo::PreserveTags::Transform)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0xb025f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::PreserveTags._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::PreserveTags::*)()>(&::UnityEngine::Localization::Pseudo::PreserveTags::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb026498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr char16_t& UnityEngine::Localization::Pseudo::PreserveTags::__cordl_internal_get_m_Opening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Opening;
}
constexpr char16_t const& UnityEngine::Localization::Pseudo::PreserveTags::__cordl_internal_get_m_Opening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Opening;
}
constexpr void UnityEngine::Localization::Pseudo::PreserveTags::__cordl_internal_set_m_Opening(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Opening = value;
}
constexpr char16_t& UnityEngine::Localization::Pseudo::PreserveTags::__cordl_internal_get_m_Closing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Closing;
}
constexpr char16_t const& UnityEngine::Localization::Pseudo::PreserveTags::__cordl_internal_get_m_Closing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Closing;
}
constexpr void UnityEngine::Localization::Pseudo::PreserveTags::__cordl_internal_set_m_Closing(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Closing = value;
}
inline char16_t UnityEngine::Localization::Pseudo::PreserveTags::get_Opening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {"get_Opening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::PreserveTags::set_Opening(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {"set_Opening", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline char16_t UnityEngine::Localization::Pseudo::PreserveTags::get_Closing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {"get_Closing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::PreserveTags::set_Closing(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {"set_Closing", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Pseudo::PreserveTags::Transform(::UnityEngine::Localization::Pseudo::Message*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void UnityEngine::Localization::Pseudo::PreserveTags::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::PreserveTags*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::PreserveTags* UnityEngine::Localization::Pseudo::PreserveTags::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::PreserveTags*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr  UnityEngine::Localization::Pseudo::PreserveTags::operator ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*() noexcept {
return static_cast<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod* UnityEngine::Localization::Pseudo::PreserveTags::i___UnityEngine__Localization__Pseudo__IPseudoLocalizationMethod() noexcept {
return static_cast<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::PreserveTags::PreserveTags()   {
}
