#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Encapsulator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Encapsulator_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__IPseudoLocalizationMethod_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Message_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Encapsulator.get_Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Pseudo::Encapsulator::*)()>(&::UnityEngine::Localization::Pseudo::Encapsulator::get_Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb024624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {"get_Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Encapsulator.set_Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Encapsulator::*)(::StringW)>(&::UnityEngine::Localization::Pseudo::Encapsulator::set_Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02462c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {"set_Start", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Encapsulator.get_End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Pseudo::Encapsulator::*)()>(&::UnityEngine::Localization::Pseudo::Encapsulator::get_End)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb024634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {"get_End", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Encapsulator.set_End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Encapsulator::*)(::StringW)>(&::UnityEngine::Localization::Pseudo::Encapsulator::set_End)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02463c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {"set_End", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Encapsulator.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Encapsulator::*)(::UnityEngine::Localization::Pseudo::Message*)>(&::UnityEngine::Localization::Pseudo::Encapsulator::Transform)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb024644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::Encapsulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::Encapsulator::*)()>(&::UnityEngine::Localization::Pseudo::Encapsulator::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb024744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::Pseudo::Encapsulator::__cordl_internal_get_m_Start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Start;
}
constexpr ::StringW const& UnityEngine::Localization::Pseudo::Encapsulator::__cordl_internal_get_m_Start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Start;
}
constexpr void UnityEngine::Localization::Pseudo::Encapsulator::__cordl_internal_set_m_Start(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Start = value;
}
constexpr ::StringW& UnityEngine::Localization::Pseudo::Encapsulator::__cordl_internal_get_m_End()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_End;
}
constexpr ::StringW const& UnityEngine::Localization::Pseudo::Encapsulator::__cordl_internal_get_m_End() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_End;
}
constexpr void UnityEngine::Localization::Pseudo::Encapsulator::__cordl_internal_set_m_End(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_End = value;
}
inline ::StringW UnityEngine::Localization::Pseudo::Encapsulator::get_Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {"get_Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::Encapsulator::set_Start(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {"set_Start", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::Pseudo::Encapsulator::get_End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {"get_End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::Encapsulator::set_End(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {"set_End", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Pseudo::Encapsulator::Transform(::UnityEngine::Localization::Pseudo::Message*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void UnityEngine::Localization::Pseudo::Encapsulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::Encapsulator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::Encapsulator* UnityEngine::Localization::Pseudo::Encapsulator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::Encapsulator*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr  UnityEngine::Localization::Pseudo::Encapsulator::operator ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*() noexcept {
return static_cast<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod* UnityEngine::Localization::Pseudo::Encapsulator::i___UnityEngine__Localization__Pseudo__IPseudoLocalizationMethod() noexcept {
return static_cast<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::Encapsulator::Encapsulator()   {
}
