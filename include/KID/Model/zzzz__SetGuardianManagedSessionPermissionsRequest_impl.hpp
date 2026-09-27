#pragma once
// IWYU pragma private; include "KID/Model/SetGuardianManagedSessionPermissionsRequest.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__SetGuardianManagedSessionPermissionsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetGuardianManagedSessionPermissionsRequest::*)()>(&::KID::Model::SetGuardianManagedSessionPermissionsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetGuardianManagedSessionPermissionsRequest::*)(::System::Guid, ::System::Collections::Generic::List_1<::StringW>*)>(&::KID::Model::SetGuardianManagedSessionPermissionsRequest::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cd9eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsRequest.get_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::SetGuardianManagedSessionPermissionsRequest::*)()>(&::KID::Model::SetGuardianManagedSessionPermissionsRequest::get_SessionId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd9f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {"get_SessionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsRequest.set_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetGuardianManagedSessionPermissionsRequest::*)(::System::Guid)>(&::KID::Model::SetGuardianManagedSessionPermissionsRequest::set_SessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsRequest.get_EnabledPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::KID::Model::SetGuardianManagedSessionPermissionsRequest::*)()>(&::KID::Model::SetGuardianManagedSessionPermissionsRequest::get_EnabledPermissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {"get_EnabledPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsRequest.set_EnabledPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetGuardianManagedSessionPermissionsRequest::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::KID::Model::SetGuardianManagedSessionPermissionsRequest::set_EnabledPermissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {"set_EnabledPermissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SetGuardianManagedSessionPermissionsRequest::*)()>(&::KID::Model::SetGuardianManagedSessionPermissionsRequest::ToString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9cd9f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                    {::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetGuardianManagedSessionPermissionsRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SetGuardianManagedSessionPermissionsRequest::*)()>(&::KID::Model::SetGuardianManagedSessionPermissionsRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cda0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                    {::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& KID::Model::SetGuardianManagedSessionPermissionsRequest::__cordl_internal_get__SessionId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::SetGuardianManagedSessionPermissionsRequest::__cordl_internal_get__SessionId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr void KID::Model::SetGuardianManagedSessionPermissionsRequest::__cordl_internal_set__SessionId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SessionId_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& KID::Model::SetGuardianManagedSessionPermissionsRequest::__cordl_internal_get__EnabledPermissions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnabledPermissions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& KID::Model::SetGuardianManagedSessionPermissionsRequest::__cordl_internal_get__EnabledPermissions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnabledPermissions_k__BackingField;
}
constexpr void KID::Model::SetGuardianManagedSessionPermissionsRequest::__cordl_internal_set__EnabledPermissions_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnabledPermissions_k__BackingField = value;
}
inline void KID::Model::SetGuardianManagedSessionPermissionsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::SetGuardianManagedSessionPermissionsRequest::_ctor(::System::Guid  sessionId, ::System::Collections::Generic::List_1<::StringW>*  enabledPermissions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionId, enabledPermissions);
}
inline ::System::Guid KID::Model::SetGuardianManagedSessionPermissionsRequest::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::SetGuardianManagedSessionPermissionsRequest::set_SessionId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* KID::Model::SetGuardianManagedSessionPermissionsRequest::get_EnabledPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {"get_EnabledPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void KID::Model::SetGuardianManagedSessionPermissionsRequest::set_EnabledPermissions(::System::Collections::Generic::List_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(),
                        {"set_EnabledPermissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::SetGuardianManagedSessionPermissionsRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::SetGuardianManagedSessionPermissionsRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::SetGuardianManagedSessionPermissionsRequest* KID::Model::SetGuardianManagedSessionPermissionsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>());
}
inline ::KID::Model::SetGuardianManagedSessionPermissionsRequest* KID::Model::SetGuardianManagedSessionPermissionsRequest::New_ctor(::System::Guid  sessionId, ::System::Collections::Generic::List_1<::StringW>*  enabledPermissions)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::SetGuardianManagedSessionPermissionsRequest*>(sessionId, enabledPermissions));
}
// Ctor Parameters []
constexpr ::KID::Model::SetGuardianManagedSessionPermissionsRequest::SetGuardianManagedSessionPermissionsRequest()   {
}
