#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/ParsingErrorEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__ParsingErrorEventArgs_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__ParsingErrors_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*, bool)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb046ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs.get_Errors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::get_Errors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb046f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>(),
                        {"get_Errors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs.set_Errors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::set_Errors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb046f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>(),
                        {"set_Errors", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs.get_ThrowsException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::get_ThrowsException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb046f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>(),
                        {"get_ThrowsException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs.set_ThrowsException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::*)(bool)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::set_ThrowsException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb046f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>(),
                        {"set_ThrowsException", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::__cordl_internal_get__Errors_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Errors_k__BackingField;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* const& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::__cordl_internal_get__Errors_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Errors_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::__cordl_internal_set__Errors_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Errors_k__BackingField = value;
}
constexpr bool& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::__cordl_internal_get__ThrowsException_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrowsException_k__BackingField;
}
constexpr bool const& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::__cordl_internal_get__ThrowsException_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrowsException_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::__cordl_internal_set__ThrowsException_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ThrowsException_k__BackingField = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::_ctor(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  errors, bool  throwsException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errors, throwsException);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::get_Errors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>(),
                        {"get_Errors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::set_Errors(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>(),
                        {"set_Errors", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::get_ThrowsException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>(),
                        {"get_ThrowsException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::set_ThrowsException(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>(),
                        {"set_ThrowsException", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs* UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::New_ctor(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  errors, bool  throwsException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>(errors, throwsException));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs::ParsingErrorEventArgs()   {
}
