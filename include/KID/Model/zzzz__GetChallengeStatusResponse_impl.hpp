#pragma once
// IWYU pragma private; include "KID/Model/GetChallengeStatusResponse.hpp"
#include "KID/Model/zzzz__GetChallengeStatusResponse_StatusEnum_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__GetChallengeStatusResponse_def.hpp"
#include "KID/Model/zzzz__GetChallengeStatusResponse_StatusEnum_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::GetChallengeStatusResponse.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GetChallengeStatusResponse_StatusEnum (::KID::Model::GetChallengeStatusResponse::*)()>(&::KID::Model::GetChallengeStatusResponse::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetChallengeStatusResponse.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetChallengeStatusResponse::*)(::GlobalNamespace::GetChallengeStatusResponse_StatusEnum)>(&::KID::Model::GetChallengeStatusResponse::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::GetChallengeStatusResponse_StatusEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetChallengeStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetChallengeStatusResponse::*)()>(&::KID::Model::GetChallengeStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetChallengeStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetChallengeStatusResponse::*)(::GlobalNamespace::GetChallengeStatusResponse_StatusEnum, ::System::Guid, ::StringW)>(&::KID::Model::GetChallengeStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9cd8188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GetChallengeStatusResponse_StatusEnum>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetChallengeStatusResponse.get_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::GetChallengeStatusResponse::*)()>(&::KID::Model::GetChallengeStatusResponse::get_SessionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cd81d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"get_SessionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetChallengeStatusResponse.set_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetChallengeStatusResponse::*)(::System::Guid)>(&::KID::Model::GetChallengeStatusResponse::set_SessionId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd81e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetChallengeStatusResponse.get_ApproverEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GetChallengeStatusResponse::*)()>(&::KID::Model::GetChallengeStatusResponse::get_ApproverEmail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd81f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"get_ApproverEmail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetChallengeStatusResponse.set_ApproverEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetChallengeStatusResponse::*)(::StringW)>(&::KID::Model::GetChallengeStatusResponse::set_ApproverEmail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd81fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"set_ApproverEmail", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetChallengeStatusResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GetChallengeStatusResponse::*)()>(&::KID::Model::GetChallengeStatusResponse::ToString)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9cd8204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                    {::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetChallengeStatusResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GetChallengeStatusResponse::*)()>(&::KID::Model::GetChallengeStatusResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd8408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                    {::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum& KID::Model::GetChallengeStatusResponse::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum const& KID::Model::GetChallengeStatusResponse::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void KID::Model::GetChallengeStatusResponse::__cordl_internal_set__Status_k__BackingField(::GlobalNamespace::GetChallengeStatusResponse_StatusEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
constexpr ::System::Guid& KID::Model::GetChallengeStatusResponse::__cordl_internal_get__SessionId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::GetChallengeStatusResponse::__cordl_internal_get__SessionId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr void KID::Model::GetChallengeStatusResponse::__cordl_internal_set__SessionId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SessionId_k__BackingField = value;
}
constexpr ::StringW& KID::Model::GetChallengeStatusResponse::__cordl_internal_get__ApproverEmail_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApproverEmail_k__BackingField;
}
constexpr ::StringW const& KID::Model::GetChallengeStatusResponse::__cordl_internal_get__ApproverEmail_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApproverEmail_k__BackingField;
}
constexpr void KID::Model::GetChallengeStatusResponse::__cordl_internal_set__ApproverEmail_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApproverEmail_k__BackingField = value;
}
inline ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum KID::Model::GetChallengeStatusResponse::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GetChallengeStatusResponse_StatusEnum>(this, ___internal_method);
}
inline void KID::Model::GetChallengeStatusResponse::set_Status(::GlobalNamespace::GetChallengeStatusResponse_StatusEnum  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::GetChallengeStatusResponse_StatusEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::GetChallengeStatusResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::GetChallengeStatusResponse::_ctor(::GlobalNamespace::GetChallengeStatusResponse_StatusEnum  status, ::System::Guid  sessionId, ::StringW  approverEmail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GetChallengeStatusResponse_StatusEnum>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, sessionId, approverEmail);
}
inline ::System::Guid KID::Model::GetChallengeStatusResponse::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::GetChallengeStatusResponse::set_SessionId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::GetChallengeStatusResponse::get_ApproverEmail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"get_ApproverEmail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::GetChallengeStatusResponse::set_ApproverEmail(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(),
                        {"set_ApproverEmail", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::GetChallengeStatusResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::GetChallengeStatusResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GetChallengeStatusResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::GetChallengeStatusResponse* KID::Model::GetChallengeStatusResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GetChallengeStatusResponse*>());
}
inline ::KID::Model::GetChallengeStatusResponse* KID::Model::GetChallengeStatusResponse::New_ctor(::GlobalNamespace::GetChallengeStatusResponse_StatusEnum  status, ::System::Guid  sessionId, ::StringW  approverEmail)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GetChallengeStatusResponse*>(status, sessionId, approverEmail));
}
// Ctor Parameters []
constexpr ::KID::Model::GetChallengeStatusResponse::GetChallengeStatusResponse()   {
}
