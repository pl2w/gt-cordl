#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/ShaderTextureProperty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::ShaderTextureProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ShaderTextureProperty::*)(::StringW, bool)>(&::DigitalOpus::MB::Core::ShaderTextureProperty::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9dc9030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ShaderTextureProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ShaderTextureProperty::*)(::StringW, bool, bool, bool)>(&::DigitalOpus::MB::Core::ShaderTextureProperty::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9dc9078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ShaderTextureProperty.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::ShaderTextureProperty::*)(::System::Object*)>(&::DigitalOpus::MB::Core::ShaderTextureProperty::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9dc90cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ShaderTextureProperty.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::ShaderTextureProperty::*)()>(&::DigitalOpus::MB::Core::ShaderTextureProperty::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc9174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ShaderTextureProperty.GetNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*)>(&::DigitalOpus::MB::Core::ShaderTextureProperty::GetNames)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9dc917c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(),
                        {"GetNames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr bool& DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_get_isNormalMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNormalMap;
}
constexpr bool const& DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_get_isNormalMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNormalMap;
}
constexpr void DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_set_isNormalMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isNormalMap = value;
}
constexpr bool& DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_get_isGammaCorrected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGammaCorrected;
}
constexpr bool const& DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_get_isGammaCorrected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGammaCorrected;
}
constexpr void DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_set_isGammaCorrected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGammaCorrected = value;
}
constexpr bool& DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_get_isNormalDontKnow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNormalDontKnow;
}
constexpr bool const& DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_get_isNormalDontKnow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNormalDontKnow;
}
constexpr void DigitalOpus::MB::Core::ShaderTextureProperty::__cordl_internal_set_isNormalDontKnow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isNormalDontKnow = value;
}
inline void DigitalOpus::MB::Core::ShaderTextureProperty::_ctor(::StringW  n, bool  norm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, norm);
}
inline void DigitalOpus::MB::Core::ShaderTextureProperty::_ctor(::StringW  n, bool  norm, bool  isGamma, bool  isNormalDontKnow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, norm, isGamma, isNormalDontKnow);
}
inline bool DigitalOpus::MB::Core::ShaderTextureProperty::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t DigitalOpus::MB::Core::ShaderTextureProperty::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::StringW> DigitalOpus::MB::Core::ShaderTextureProperty::GetNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  props)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>(),
                        {"GetNames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, props);
}
inline ::DigitalOpus::MB::Core::ShaderTextureProperty* DigitalOpus::MB::Core::ShaderTextureProperty::New_ctor(::StringW  n, bool  norm)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::ShaderTextureProperty*>(n, norm));
}
inline ::DigitalOpus::MB::Core::ShaderTextureProperty* DigitalOpus::MB::Core::ShaderTextureProperty::New_ctor(::StringW  n, bool  norm, bool  isGamma, bool  isNormalDontKnow)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::ShaderTextureProperty*>(n, norm, isGamma, isNormalDontKnow));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty::ShaderTextureProperty()   {
}
