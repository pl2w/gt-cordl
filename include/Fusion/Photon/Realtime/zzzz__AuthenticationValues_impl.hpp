#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/AuthenticationValues.hpp"
#include "Fusion/Photon/Realtime/zzzz__CustomAuthenticationType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__CustomAuthenticationType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.get_AuthType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::CustomAuthenticationType (::Fusion::Photon::Realtime::AuthenticationValues::*)()>(&::Fusion::Photon::Realtime::AuthenticationValues::get_AuthType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5cf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.set_AuthType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AuthenticationValues::*)(::Fusion::Photon::Realtime::CustomAuthenticationType)>(&::Fusion::Photon::Realtime::AuthenticationValues::set_AuthType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthType", {}, {::i2c::type_of<::Fusion::Photon::Realtime::CustomAuthenticationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.get_AuthGetParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::AuthenticationValues::*)()>(&::Fusion::Photon::Realtime::AuthenticationValues::get_AuthGetParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5e0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthGetParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.set_AuthGetParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AuthenticationValues::*)(::StringW)>(&::Fusion::Photon::Realtime::AuthenticationValues::set_AuthGetParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5e0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthGetParameters", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.get_AuthPostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::Photon::Realtime::AuthenticationValues::*)()>(&::Fusion::Photon::Realtime::AuthenticationValues::get_AuthPostData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5e0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthPostData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.set_AuthPostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AuthenticationValues::*)(::System::Object*)>(&::Fusion::Photon::Realtime::AuthenticationValues::set_AuthPostData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5e0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthPostData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.get_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::Photon::Realtime::AuthenticationValues::*)()>(&::Fusion::Photon::Realtime::AuthenticationValues::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5e0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"get_Token", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.set_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AuthenticationValues::*)(::System::Object*)>(&::Fusion::Photon::Realtime::AuthenticationValues::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5e0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"set_Token", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::AuthenticationValues::*)()>(&::Fusion::Photon::Realtime::AuthenticationValues::get_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5e0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AuthenticationValues::*)(::StringW)>(&::Fusion::Photon::Realtime::AuthenticationValues::set_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5e0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"set_UserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AuthenticationValues::*)()>(&::Fusion::Photon::Realtime::AuthenticationValues::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f5e0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AuthenticationValues::*)(::StringW)>(&::Fusion::Photon::Realtime::AuthenticationValues::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f5e0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.SetAuthPostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AuthenticationValues::*)(::StringW)>(&::Fusion::Photon::Realtime::AuthenticationValues::SetAuthPostData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f5e130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.SetAuthPostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AuthenticationValues::*)(::ArrayW<uint8_t>)>(&::Fusion::Photon::Realtime::AuthenticationValues::SetAuthPostData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5e170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.SetAuthPostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AuthenticationValues::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::Photon::Realtime::AuthenticationValues::SetAuthPostData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5e178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.AddAuthParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::AuthenticationValues::*)(::StringW, ::StringW)>(&::Fusion::Photon::Realtime::AuthenticationValues::AddAuthParameter)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5f5e180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::AuthenticationValues::*)()>(&::Fusion::Photon::Realtime::AuthenticationValues::ToString)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5f5e388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::AuthenticationValues.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::AuthenticationValues* (::Fusion::Photon::Realtime::AuthenticationValues::*)(::Fusion::Photon::Realtime::AuthenticationValues*)>(&::Fusion::Photon::Realtime::AuthenticationValues::CopyTo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f5e5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::Photon::Realtime::AuthenticationValues*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::CustomAuthenticationType& Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_get_authType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authType;
}
constexpr ::Fusion::Photon::Realtime::CustomAuthenticationType const& Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_get_authType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authType;
}
constexpr void Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_set_authType(::Fusion::Photon::Realtime::CustomAuthenticationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authType = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_get__AuthGetParameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AuthGetParameters_k__BackingField;
}
constexpr ::StringW const& Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_get__AuthGetParameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AuthGetParameters_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_set__AuthGetParameters_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AuthGetParameters_k__BackingField = value;
}
constexpr ::System::Object*& Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_get__AuthPostData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AuthPostData_k__BackingField;
}
constexpr ::System::Object* const& Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_get__AuthPostData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AuthPostData_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_set__AuthPostData_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AuthPostData_k__BackingField = value;
}
constexpr ::System::Object*& Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_get__Token_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Token_k__BackingField;
}
constexpr ::System::Object* const& Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_get__Token_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Token_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_set__Token_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Token_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_get__UserId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserId_k__BackingField;
}
constexpr ::StringW const& Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_get__UserId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserId_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::AuthenticationValues::__cordl_internal_set__UserId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserId_k__BackingField = value;
}
inline ::Fusion::Photon::Realtime::CustomAuthenticationType Fusion::Photon::Realtime::AuthenticationValues::get_AuthType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::CustomAuthenticationType>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::AuthenticationValues::set_AuthType(::Fusion::Photon::Realtime::CustomAuthenticationType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthType", {}, {::i2c::type_of<::Fusion::Photon::Realtime::CustomAuthenticationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::AuthenticationValues::get_AuthGetParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthGetParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::AuthenticationValues::set_AuthGetParameters(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthGetParameters", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Fusion::Photon::Realtime::AuthenticationValues::get_AuthPostData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthPostData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::AuthenticationValues::set_AuthPostData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthPostData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Fusion::Photon::Realtime::AuthenticationValues::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::AuthenticationValues::set_Token(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"set_Token", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::AuthenticationValues::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::AuthenticationValues::set_UserId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"set_UserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::AuthenticationValues::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::AuthenticationValues::_ctor(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void Fusion::Photon::Realtime::AuthenticationValues::SetAuthPostData(::StringW  stringData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stringData);
}
inline void Fusion::Photon::Realtime::AuthenticationValues::SetAuthPostData(::ArrayW<uint8_t>  byteData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, byteData);
}
inline void Fusion::Photon::Realtime::AuthenticationValues::SetAuthPostData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictData);
}
inline void Fusion::Photon::Realtime::AuthenticationValues::AddAuthParameter(::StringW  key, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::StringW Fusion::Photon::Realtime::AuthenticationValues::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::AuthenticationValues* Fusion::Photon::Realtime::AuthenticationValues::CopyTo(::Fusion::Photon::Realtime::AuthenticationValues*  copy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::AuthenticationValues*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::Photon::Realtime::AuthenticationValues*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::AuthenticationValues*>(this, ___internal_method, copy);
}
inline ::Fusion::Photon::Realtime::AuthenticationValues* Fusion::Photon::Realtime::AuthenticationValues::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::AuthenticationValues*>());
}
inline ::Fusion::Photon::Realtime::AuthenticationValues* Fusion::Photon::Realtime::AuthenticationValues::New_ctor(::StringW  userId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::AuthenticationValues*>(userId));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::AuthenticationValues::AuthenticationValues()   {
}
