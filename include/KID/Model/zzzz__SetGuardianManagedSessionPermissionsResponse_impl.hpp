#pragma once
// IWYU pragma private; include "KID/Model/SetGuardianManagedSessionPermissionsResponse.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__SetGuardianManagedSessionPermissionsResponse_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetGuardianManagedSessionPermissionsResponse::*)()>(&::KID::Model::SetGuardianManagedSessionPermissionsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetGuardianManagedSessionPermissionsResponse::*)(::System::Guid, ::System::Collections::Generic::List_1<::StringW>*)>(&::KID::Model::SetGuardianManagedSessionPermissionsResponse::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cda158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsResponse.get_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::SetGuardianManagedSessionPermissionsResponse::*)()>(&::KID::Model::SetGuardianManagedSessionPermissionsResponse::get_SessionId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cda1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {"get_SessionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsResponse.set_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetGuardianManagedSessionPermissionsResponse::*)(::System::Guid)>(&::KID::Model::SetGuardianManagedSessionPermissionsResponse::set_SessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsResponse.get_EnabledPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::KID::Model::SetGuardianManagedSessionPermissionsResponse::*)()>(&::KID::Model::SetGuardianManagedSessionPermissionsResponse::get_EnabledPermissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {"get_EnabledPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsResponse.set_EnabledPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetGuardianManagedSessionPermissionsResponse::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::KID::Model::SetGuardianManagedSessionPermissionsResponse::set_EnabledPermissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {"set_EnabledPermissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SetGuardianManagedSessionPermissionsResponse::*)()>(&::KID::Model::SetGuardianManagedSessionPermissionsResponse::ToString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9cda20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                    {::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SetGuardianManagedSessionPermissionsResponse::*)()>(&::KID::Model::SetGuardianManagedSessionPermissionsResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cda39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                    {::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& KID::Model::SetGuardianManagedSessionPermissionsResponse::__cordl_internal_get__SessionId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::SetGuardianManagedSessionPermissionsResponse::__cordl_internal_get__SessionId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr void KID::Model::SetGuardianManagedSessionPermissionsResponse::__cordl_internal_set__SessionId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SessionId_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& KID::Model::SetGuardianManagedSessionPermissionsResponse::__cordl_internal_get__EnabledPermissions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnabledPermissions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& KID::Model::SetGuardianManagedSessionPermissionsResponse::__cordl_internal_get__EnabledPermissions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnabledPermissions_k__BackingField;
}
constexpr void KID::Model::SetGuardianManagedSessionPermissionsResponse::__cordl_internal_set__EnabledPermissions_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnabledPermissions_k__BackingField = value;
}
inline void KID::Model::SetGuardianManagedSessionPermissionsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::SetGuardianManagedSessionPermissionsResponse::_ctor(::System::Guid  sessionId, ::System::Collections::Generic::List_1<::StringW>*  enabledPermissions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionId, enabledPermissions);
}
inline ::System::Guid KID::Model::SetGuardianManagedSessionPermissionsResponse::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::SetGuardianManagedSessionPermissionsResponse::set_SessionId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* KID::Model::SetGuardianManagedSessionPermissionsResponse::get_EnabledPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {"get_EnabledPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void KID::Model::SetGuardianManagedSessionPermissionsResponse::set_EnabledPermissions(::System::Collections::Generic::List_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(),
                        {"set_EnabledPermissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::SetGuardianManagedSessionPermissionsResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::SetGuardianManagedSessionPermissionsResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::SetGuardianManagedSessionPermissionsResponse* KID::Model::SetGuardianManagedSessionPermissionsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>());
}
inline ::KID::Model::SetGuardianManagedSessionPermissionsResponse* KID::Model::SetGuardianManagedSessionPermissionsResponse::New_ctor(::System::Guid  sessionId, ::System::Collections::Generic::List_1<::StringW>*  enabledPermissions)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::SetGuardianManagedSessionPermissionsResponse*>(sessionId, enabledPermissions));
}
// Ctor Parameters []
constexpr ::KID::Model::SetGuardianManagedSessionPermissionsResponse::SetGuardianManagedSessionPermissionsResponse()   {
}
