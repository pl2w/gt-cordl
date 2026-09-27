#pragma once
// IWYU pragma private; include "Photon/Realtime/AuthenticationValues.hpp"
#include "Photon/Realtime/zzzz__CustomAuthenticationType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Photon/Realtime/zzzz__CustomAuthenticationType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.get_AuthType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::CustomAuthenticationType (::Photon::Realtime::AuthenticationValues::*)()>(&::Photon::Realtime::AuthenticationValues::get_AuthType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.set_AuthType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AuthenticationValues::*)(::Photon::Realtime::CustomAuthenticationType)>(&::Photon::Realtime::AuthenticationValues::set_AuthType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthType", {}, {::i2c::type_of<::Photon::Realtime::CustomAuthenticationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.get_AuthGetParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::AuthenticationValues::*)()>(&::Photon::Realtime::AuthenticationValues::get_AuthGetParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthGetParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.set_AuthGetParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AuthenticationValues::*)(::StringW)>(&::Photon::Realtime::AuthenticationValues::set_AuthGetParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthGetParameters", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.get_AuthPostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Realtime::AuthenticationValues::*)()>(&::Photon::Realtime::AuthenticationValues::get_AuthPostData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthPostData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.set_AuthPostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AuthenticationValues::*)(::System::Object*)>(&::Photon::Realtime::AuthenticationValues::set_AuthPostData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthPostData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.get_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Realtime::AuthenticationValues::*)()>(&::Photon::Realtime::AuthenticationValues::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"get_Token", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.set_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AuthenticationValues::*)(::System::Object*)>(&::Photon::Realtime::AuthenticationValues::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"set_Token", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::AuthenticationValues::*)()>(&::Photon::Realtime::AuthenticationValues::get_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AuthenticationValues::*)(::StringW)>(&::Photon::Realtime::AuthenticationValues::set_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"set_UserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AuthenticationValues::*)()>(&::Photon::Realtime::AuthenticationValues::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6fa08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AuthenticationValues::*)(::StringW)>(&::Photon::Realtime::AuthenticationValues::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa709a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.SetAuthPostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AuthenticationValues::*)(::StringW)>(&::Photon::Realtime::AuthenticationValues::SetAuthPostData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa709ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                    {::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.SetAuthPostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AuthenticationValues::*)(::ArrayW<uint8_t>)>(&::Photon::Realtime::AuthenticationValues::SetAuthPostData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                    {::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.SetAuthPostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AuthenticationValues::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Photon::Realtime::AuthenticationValues::SetAuthPostData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                    {::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.AddAuthParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::AuthenticationValues::*)(::StringW, ::StringW)>(&::Photon::Realtime::AuthenticationValues::AddAuthParameter)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa709b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                    {::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::AuthenticationValues::*)()>(&::Photon::Realtime::AuthenticationValues::ToString)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xa709d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                    {::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::AuthenticationValues.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::AuthenticationValues* (::Photon::Realtime::AuthenticationValues::*)(::Photon::Realtime::AuthenticationValues*)>(&::Photon::Realtime::AuthenticationValues::CopyTo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa709f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Photon::Realtime::AuthenticationValues*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::CustomAuthenticationType& Photon::Realtime::AuthenticationValues::__cordl_internal_get_authType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authType;
}
constexpr ::Photon::Realtime::CustomAuthenticationType const& Photon::Realtime::AuthenticationValues::__cordl_internal_get_authType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authType;
}
constexpr void Photon::Realtime::AuthenticationValues::__cordl_internal_set_authType(::Photon::Realtime::CustomAuthenticationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authType = value;
}
constexpr ::StringW& Photon::Realtime::AuthenticationValues::__cordl_internal_get__AuthGetParameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AuthGetParameters_k__BackingField;
}
constexpr ::StringW const& Photon::Realtime::AuthenticationValues::__cordl_internal_get__AuthGetParameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AuthGetParameters_k__BackingField;
}
constexpr void Photon::Realtime::AuthenticationValues::__cordl_internal_set__AuthGetParameters_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AuthGetParameters_k__BackingField = value;
}
constexpr ::System::Object*& Photon::Realtime::AuthenticationValues::__cordl_internal_get__AuthPostData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AuthPostData_k__BackingField;
}
constexpr ::System::Object* const& Photon::Realtime::AuthenticationValues::__cordl_internal_get__AuthPostData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AuthPostData_k__BackingField;
}
constexpr void Photon::Realtime::AuthenticationValues::__cordl_internal_set__AuthPostData_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AuthPostData_k__BackingField = value;
}
constexpr ::System::Object*& Photon::Realtime::AuthenticationValues::__cordl_internal_get__Token_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Token_k__BackingField;
}
constexpr ::System::Object* const& Photon::Realtime::AuthenticationValues::__cordl_internal_get__Token_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Token_k__BackingField;
}
constexpr void Photon::Realtime::AuthenticationValues::__cordl_internal_set__Token_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Token_k__BackingField = value;
}
constexpr ::StringW& Photon::Realtime::AuthenticationValues::__cordl_internal_get__UserId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserId_k__BackingField;
}
constexpr ::StringW const& Photon::Realtime::AuthenticationValues::__cordl_internal_get__UserId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserId_k__BackingField;
}
constexpr void Photon::Realtime::AuthenticationValues::__cordl_internal_set__UserId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserId_k__BackingField = value;
}
inline ::Photon::Realtime::CustomAuthenticationType Photon::Realtime::AuthenticationValues::get_AuthType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::CustomAuthenticationType>(this, ___internal_method);
}
inline void Photon::Realtime::AuthenticationValues::set_AuthType(::Photon::Realtime::CustomAuthenticationType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthType", {}, {::i2c::type_of<::Photon::Realtime::CustomAuthenticationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::AuthenticationValues::get_AuthGetParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthGetParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Realtime::AuthenticationValues::set_AuthGetParameters(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthGetParameters", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Photon::Realtime::AuthenticationValues::get_AuthPostData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"get_AuthPostData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Photon::Realtime::AuthenticationValues::set_AuthPostData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"set_AuthPostData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Photon::Realtime::AuthenticationValues::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Photon::Realtime::AuthenticationValues::set_Token(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"set_Token", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::AuthenticationValues::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Realtime::AuthenticationValues::set_UserId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"set_UserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Realtime::AuthenticationValues::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::AuthenticationValues::_ctor(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void Photon::Realtime::AuthenticationValues::SetAuthPostData(::StringW  stringData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stringData);
}
inline void Photon::Realtime::AuthenticationValues::SetAuthPostData(::ArrayW<uint8_t>  byteData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, byteData);
}
inline void Photon::Realtime::AuthenticationValues::SetAuthPostData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictData);
}
inline void Photon::Realtime::AuthenticationValues::AddAuthParameter(::StringW  key, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::StringW Photon::Realtime::AuthenticationValues::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Photon::Realtime::AuthenticationValues* Photon::Realtime::AuthenticationValues::CopyTo(::Photon::Realtime::AuthenticationValues*  copy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::AuthenticationValues*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Photon::Realtime::AuthenticationValues*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::AuthenticationValues*>(this, ___internal_method, copy);
}
inline ::Photon::Realtime::AuthenticationValues* Photon::Realtime::AuthenticationValues::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::AuthenticationValues*>());
}
inline ::Photon::Realtime::AuthenticationValues* Photon::Realtime::AuthenticationValues::New_ctor(::StringW  userId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::AuthenticationValues*>(userId));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::AuthenticationValues::AuthenticationValues()   {
}
