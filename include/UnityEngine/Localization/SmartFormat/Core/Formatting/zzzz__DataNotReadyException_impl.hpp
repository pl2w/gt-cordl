#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Formatting/DataNotReadyException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__DataNotReadyException_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException.get_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::get_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04845c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*>(),
                        {"get_Text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException.set_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::set_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb048464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb04846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb0484c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::__cordl_internal_get__Text_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::__cordl_internal_get__Text_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::__cordl_internal_set__Text_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Text_k__BackingField = value;
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::get_Text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*>(),
                        {"get_Text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::set_Text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::_ctor(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException* UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*>());
}
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException* UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::New_ctor(::StringW  text)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException*>(text));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::DataNotReadyException::DataNotReadyException()   {
}
