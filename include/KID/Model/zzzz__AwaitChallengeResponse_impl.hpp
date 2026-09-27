#pragma once
// IWYU pragma private; include "KID/Model/AwaitChallengeResponse.hpp"
#include "KID/Model/zzzz__AwaitChallengeResponse_StatusEnum_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__AwaitChallengeResponse_def.hpp"
#include "KID/Model/zzzz__AwaitChallengeResponse_StatusEnum_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::AwaitChallengeResponse.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AwaitChallengeResponse_StatusEnum (::KID::Model::AwaitChallengeResponse::*)()>(&::KID::Model::AwaitChallengeResponse::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AwaitChallengeResponse.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AwaitChallengeResponse::*)(::GlobalNamespace::AwaitChallengeResponse_StatusEnum)>(&::KID::Model::AwaitChallengeResponse::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd358c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::AwaitChallengeResponse_StatusEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AwaitChallengeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AwaitChallengeResponse::*)()>(&::KID::Model::AwaitChallengeResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AwaitChallengeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AwaitChallengeResponse::*)(::GlobalNamespace::AwaitChallengeResponse_StatusEnum, ::System::Guid, ::StringW)>(&::KID::Model::AwaitChallengeResponse::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9cd359c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AwaitChallengeResponse_StatusEnum>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AwaitChallengeResponse.get_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::AwaitChallengeResponse::*)()>(&::KID::Model::AwaitChallengeResponse::get_SessionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cd35ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"get_SessionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AwaitChallengeResponse.set_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AwaitChallengeResponse::*)(::System::Guid)>(&::KID::Model::AwaitChallengeResponse::set_SessionId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd35fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AwaitChallengeResponse.get_ApproverEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::AwaitChallengeResponse::*)()>(&::KID::Model::AwaitChallengeResponse::get_ApproverEmail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"get_ApproverEmail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AwaitChallengeResponse.set_ApproverEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AwaitChallengeResponse::*)(::StringW)>(&::KID::Model::AwaitChallengeResponse::set_ApproverEmail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"set_ApproverEmail", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AwaitChallengeResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::AwaitChallengeResponse::*)()>(&::KID::Model::AwaitChallengeResponse::ToString)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9cd3618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                    {::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AwaitChallengeResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::AwaitChallengeResponse::*)()>(&::KID::Model::AwaitChallengeResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd381c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                    {::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AwaitChallengeResponse_StatusEnum& KID::Model::AwaitChallengeResponse::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::GlobalNamespace::AwaitChallengeResponse_StatusEnum const& KID::Model::AwaitChallengeResponse::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void KID::Model::AwaitChallengeResponse::__cordl_internal_set__Status_k__BackingField(::GlobalNamespace::AwaitChallengeResponse_StatusEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
constexpr ::System::Guid& KID::Model::AwaitChallengeResponse::__cordl_internal_get__SessionId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::AwaitChallengeResponse::__cordl_internal_get__SessionId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr void KID::Model::AwaitChallengeResponse::__cordl_internal_set__SessionId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SessionId_k__BackingField = value;
}
constexpr ::StringW& KID::Model::AwaitChallengeResponse::__cordl_internal_get__ApproverEmail_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApproverEmail_k__BackingField;
}
constexpr ::StringW const& KID::Model::AwaitChallengeResponse::__cordl_internal_get__ApproverEmail_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApproverEmail_k__BackingField;
}
constexpr void KID::Model::AwaitChallengeResponse::__cordl_internal_set__ApproverEmail_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApproverEmail_k__BackingField = value;
}
inline ::GlobalNamespace::AwaitChallengeResponse_StatusEnum KID::Model::AwaitChallengeResponse::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AwaitChallengeResponse_StatusEnum>(this, ___internal_method);
}
inline void KID::Model::AwaitChallengeResponse::set_Status(::GlobalNamespace::AwaitChallengeResponse_StatusEnum  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::AwaitChallengeResponse_StatusEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::AwaitChallengeResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::AwaitChallengeResponse::_ctor(::GlobalNamespace::AwaitChallengeResponse_StatusEnum  status, ::System::Guid  sessionId, ::StringW  approverEmail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AwaitChallengeResponse_StatusEnum>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, sessionId, approverEmail);
}
inline ::System::Guid KID::Model::AwaitChallengeResponse::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::AwaitChallengeResponse::set_SessionId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::AwaitChallengeResponse::get_ApproverEmail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"get_ApproverEmail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::AwaitChallengeResponse::set_ApproverEmail(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(),
                        {"set_ApproverEmail", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::AwaitChallengeResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::AwaitChallengeResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::AwaitChallengeResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::AwaitChallengeResponse* KID::Model::AwaitChallengeResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::AwaitChallengeResponse*>());
}
inline ::KID::Model::AwaitChallengeResponse* KID::Model::AwaitChallengeResponse::New_ctor(::GlobalNamespace::AwaitChallengeResponse_StatusEnum  status, ::System::Guid  sessionId, ::StringW  approverEmail)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::AwaitChallengeResponse*>(status, sessionId, approverEmail));
}
// Ctor Parameters []
constexpr ::KID::Model::AwaitChallengeResponse::AwaitChallengeResponse()   {
}
