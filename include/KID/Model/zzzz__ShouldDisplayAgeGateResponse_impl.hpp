#pragma once
// IWYU pragma private; include "KID/Model/ShouldDisplayAgeGateResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__ShouldDisplayAgeGateResponse_def.hpp"
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::ShouldDisplayAgeGateResponse::*)()>(&::KID::Model::ShouldDisplayAgeGateResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::ShouldDisplayAgeGateResponse::*)(bool, bool, int32_t, int32_t)>(&::KID::Model::ShouldDisplayAgeGateResponse::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9cda400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse.get_ShouldDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::KID::Model::ShouldDisplayAgeGateResponse::*)()>(&::KID::Model::ShouldDisplayAgeGateResponse::get_ShouldDisplay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"get_ShouldDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse.set_ShouldDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::ShouldDisplayAgeGateResponse::*)(bool)>(&::KID::Model::ShouldDisplayAgeGateResponse::set_ShouldDisplay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"set_ShouldDisplay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse.get_AgeAssuranceRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::KID::Model::ShouldDisplayAgeGateResponse::*)()>(&::KID::Model::ShouldDisplayAgeGateResponse::get_AgeAssuranceRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"get_AgeAssuranceRequired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse.set_AgeAssuranceRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::ShouldDisplayAgeGateResponse::*)(bool)>(&::KID::Model::ShouldDisplayAgeGateResponse::set_AgeAssuranceRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"set_AgeAssuranceRequired", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse.get_DigitalConsentAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::ShouldDisplayAgeGateResponse::*)()>(&::KID::Model::ShouldDisplayAgeGateResponse::get_DigitalConsentAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"get_DigitalConsentAge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse.set_DigitalConsentAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::ShouldDisplayAgeGateResponse::*)(int32_t)>(&::KID::Model::ShouldDisplayAgeGateResponse::set_DigitalConsentAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"set_DigitalConsentAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse.get_CivilAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::ShouldDisplayAgeGateResponse::*)()>(&::KID::Model::ShouldDisplayAgeGateResponse::get_CivilAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"get_CivilAge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse.set_CivilAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::ShouldDisplayAgeGateResponse::*)(int32_t)>(&::KID::Model::ShouldDisplayAgeGateResponse::set_CivilAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"set_CivilAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::ShouldDisplayAgeGateResponse::*)()>(&::KID::Model::ShouldDisplayAgeGateResponse::ToString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9cda484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                    {::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ShouldDisplayAgeGateResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::ShouldDisplayAgeGateResponse::*)()>(&::KID::Model::ShouldDisplayAgeGateResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cda660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                    {::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr bool& KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_get__ShouldDisplay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShouldDisplay_k__BackingField;
}
constexpr bool const& KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_get__ShouldDisplay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShouldDisplay_k__BackingField;
}
constexpr void KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_set__ShouldDisplay_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShouldDisplay_k__BackingField = value;
}
constexpr bool& KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_get__AgeAssuranceRequired_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeAssuranceRequired_k__BackingField;
}
constexpr bool const& KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_get__AgeAssuranceRequired_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeAssuranceRequired_k__BackingField;
}
constexpr void KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_set__AgeAssuranceRequired_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeAssuranceRequired_k__BackingField = value;
}
constexpr int32_t& KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_get__DigitalConsentAge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DigitalConsentAge_k__BackingField;
}
constexpr int32_t const& KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_get__DigitalConsentAge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DigitalConsentAge_k__BackingField;
}
constexpr void KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_set__DigitalConsentAge_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DigitalConsentAge_k__BackingField = value;
}
constexpr int32_t& KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_get__CivilAge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CivilAge_k__BackingField;
}
constexpr int32_t const& KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_get__CivilAge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CivilAge_k__BackingField;
}
constexpr void KID::Model::ShouldDisplayAgeGateResponse::__cordl_internal_set__CivilAge_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CivilAge_k__BackingField = value;
}
inline void KID::Model::ShouldDisplayAgeGateResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::ShouldDisplayAgeGateResponse::_ctor(bool  shouldDisplay, bool  ageAssuranceRequired, int32_t  digitalConsentAge, int32_t  civilAge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shouldDisplay, ageAssuranceRequired, digitalConsentAge, civilAge);
}
inline bool KID::Model::ShouldDisplayAgeGateResponse::get_ShouldDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"get_ShouldDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void KID::Model::ShouldDisplayAgeGateResponse::set_ShouldDisplay(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"set_ShouldDisplay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool KID::Model::ShouldDisplayAgeGateResponse::get_AgeAssuranceRequired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"get_AgeAssuranceRequired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void KID::Model::ShouldDisplayAgeGateResponse::set_AgeAssuranceRequired(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"set_AgeAssuranceRequired", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t KID::Model::ShouldDisplayAgeGateResponse::get_DigitalConsentAge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"get_DigitalConsentAge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::ShouldDisplayAgeGateResponse::set_DigitalConsentAge(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"set_DigitalConsentAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t KID::Model::ShouldDisplayAgeGateResponse::get_CivilAge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"get_CivilAge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::ShouldDisplayAgeGateResponse::set_CivilAge(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(),
                        {"set_CivilAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::ShouldDisplayAgeGateResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::ShouldDisplayAgeGateResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::ShouldDisplayAgeGateResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::ShouldDisplayAgeGateResponse* KID::Model::ShouldDisplayAgeGateResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::ShouldDisplayAgeGateResponse*>());
}
inline ::KID::Model::ShouldDisplayAgeGateResponse* KID::Model::ShouldDisplayAgeGateResponse::New_ctor(bool  shouldDisplay, bool  ageAssuranceRequired, int32_t  digitalConsentAge, int32_t  civilAge)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::ShouldDisplayAgeGateResponse*>(shouldDisplay, ageAssuranceRequired, digitalConsentAge, civilAge));
}
// Ctor Parameters []
constexpr ::KID::Model::ShouldDisplayAgeGateResponse::ShouldDisplayAgeGateResponse()   {
}
