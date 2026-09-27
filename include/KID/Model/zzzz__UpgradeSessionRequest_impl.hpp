#pragma once
// IWYU pragma private; include "KID/Model/UpgradeSessionRequest.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__UpgradeSessionRequest_def.hpp"
#include "KID/Model/zzzz__RequestedPermission_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::UpgradeSessionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::UpgradeSessionRequest::*)()>(&::KID::Model::UpgradeSessionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdaa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::UpgradeSessionRequest::*)(::System::Guid, ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*)>(&::KID::Model::UpgradeSessionRequest::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cdaa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionRequest.get_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::UpgradeSessionRequest::*)()>(&::KID::Model::UpgradeSessionRequest::get_SessionId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cdaadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {"get_SessionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionRequest.set_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::UpgradeSessionRequest::*)(::System::Guid)>(&::KID::Model::UpgradeSessionRequest::set_SessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdaae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionRequest.get_RequestedPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>* (::KID::Model::UpgradeSessionRequest::*)()>(&::KID::Model::UpgradeSessionRequest::get_RequestedPermissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdaaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {"get_RequestedPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionRequest.set_RequestedPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::UpgradeSessionRequest::*)(::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*)>(&::KID::Model::UpgradeSessionRequest::set_RequestedPermissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdaaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {"set_RequestedPermissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::UpgradeSessionRequest::*)()>(&::KID::Model::UpgradeSessionRequest::ToString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9cdab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                    {::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::UpgradeSessionRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::UpgradeSessionRequest::*)()>(&::KID::Model::UpgradeSessionRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cdac90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                    {::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& KID::Model::UpgradeSessionRequest::__cordl_internal_get__SessionId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::UpgradeSessionRequest::__cordl_internal_get__SessionId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr void KID::Model::UpgradeSessionRequest::__cordl_internal_set__SessionId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SessionId_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*& KID::Model::UpgradeSessionRequest::__cordl_internal_get__RequestedPermissions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestedPermissions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>* const& KID::Model::UpgradeSessionRequest::__cordl_internal_get__RequestedPermissions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestedPermissions_k__BackingField;
}
constexpr void KID::Model::UpgradeSessionRequest::__cordl_internal_set__RequestedPermissions_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequestedPermissions_k__BackingField = value;
}
inline void KID::Model::UpgradeSessionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::UpgradeSessionRequest::_ctor(::System::Guid  sessionId, ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  requestedPermissions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionId, requestedPermissions);
}
inline ::System::Guid KID::Model::UpgradeSessionRequest::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::UpgradeSessionRequest::set_SessionId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>* KID::Model::UpgradeSessionRequest::get_RequestedPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {"get_RequestedPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*>(this, ___internal_method);
}
inline void KID::Model::UpgradeSessionRequest::set_RequestedPermissions(::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(),
                        {"set_RequestedPermissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::UpgradeSessionRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::UpgradeSessionRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::UpgradeSessionRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::UpgradeSessionRequest* KID::Model::UpgradeSessionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::UpgradeSessionRequest*>());
}
inline ::KID::Model::UpgradeSessionRequest* KID::Model::UpgradeSessionRequest::New_ctor(::System::Guid  sessionId, ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  requestedPermissions)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::UpgradeSessionRequest*>(sessionId, requestedPermissions));
}
// Ctor Parameters []
constexpr ::KID::Model::UpgradeSessionRequest::UpgradeSessionRequest()   {
}
