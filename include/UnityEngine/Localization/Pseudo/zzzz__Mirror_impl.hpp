#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Mirror.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Mirror_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__IPseudoLocalizationMethod_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Message_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__WritableMessageFragment_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Mirror.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Mirror::*)(::UnityEngine::Localization::Pseudo::Message*)>(&::UnityEngine::Localization::Pseudo::Mirror::Transform)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb025c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Mirror*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Mirror.MirrorFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Mirror::*)(::UnityEngine::Localization::Pseudo::WritableMessageFragment*)>(&::UnityEngine::Localization::Pseudo::Mirror::MirrorFragment)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb025d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Mirror*>(),
                        {"MirrorFragment", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Mirror._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Mirror::*)()>(&::UnityEngine::Localization::Pseudo::Mirror::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb025f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Mirror*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Pseudo::Mirror::Transform(::UnityEngine::Localization::Pseudo::Message*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Mirror*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void UnityEngine::Localization::Pseudo::Mirror::MirrorFragment(::UnityEngine::Localization::Pseudo::WritableMessageFragment*  writableMessageFragment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Mirror*>(),
                        {"MirrorFragment", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writableMessageFragment);
}
inline void UnityEngine::Localization::Pseudo::Mirror::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Mirror*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::Mirror* UnityEngine::Localization::Pseudo::Mirror::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::Mirror*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr  UnityEngine::Localization::Pseudo::Mirror::operator ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*() noexcept {
return static_cast<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod* UnityEngine::Localization::Pseudo::Mirror::i___UnityEngine__Localization__Pseudo__IPseudoLocalizationMethod() noexcept {
return static_cast<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::Mirror::Mirror()   {
}
