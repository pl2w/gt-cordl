#pragma once
// IWYU pragma private; include "KID/Model/SetChallengeStatusRequest.hpp"
#include "KID/Model/zzzz__SetChallengeStatusRequest_StatusEnum_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__SetChallengeStatusRequest_def.hpp"
#include "KID/Model/zzzz__SetChallengeStatusRequest_StatusEnum_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SetChallengeStatusRequest_StatusEnum (::KID::Model::SetChallengeStatusRequest::*)()>(&::KID::Model::SetChallengeStatusRequest::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetChallengeStatusRequest::*)(::GlobalNamespace::SetChallengeStatusRequest_StatusEnum)>(&::KID::Model::SetChallengeStatusRequest::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::SetChallengeStatusRequest_StatusEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetChallengeStatusRequest::*)()>(&::KID::Model::SetChallengeStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetChallengeStatusRequest::*)(::System::Guid, ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum, int32_t, ::StringW, ::StringW)>(&::KID::Model::SetChallengeStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9cd9ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::SetChallengeStatusRequest_StatusEnum>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.get_ChallengeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::SetChallengeStatusRequest::*)()>(&::KID::Model::SetChallengeStatusRequest::get_ChallengeId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cd9b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"get_ChallengeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.set_ChallengeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetChallengeStatusRequest::*)(::System::Guid)>(&::KID::Model::SetChallengeStatusRequest::set_ChallengeId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd9b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"set_ChallengeId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.get_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::SetChallengeStatusRequest::*)()>(&::KID::Model::SetChallengeStatusRequest::get_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"get_Age", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.set_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetChallengeStatusRequest::*)(int32_t)>(&::KID::Model::SetChallengeStatusRequest::set_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"set_Age", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.get_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SetChallengeStatusRequest::*)()>(&::KID::Model::SetChallengeStatusRequest::get_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.set_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetChallengeStatusRequest::*)(::StringW)>(&::KID::Model::SetChallengeStatusRequest::set_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.get_ApproverEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SetChallengeStatusRequest::*)()>(&::KID::Model::SetChallengeStatusRequest::get_ApproverEmail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"get_ApproverEmail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.set_ApproverEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::SetChallengeStatusRequest::*)(::StringW)>(&::KID::Model::SetChallengeStatusRequest::set_ApproverEmail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"set_ApproverEmail", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SetChallengeStatusRequest::*)()>(&::KID::Model::SetChallengeStatusRequest::ToString)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x9cd9bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                    {::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::SetChallengeStatusRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::SetChallengeStatusRequest::*)()>(&::KID::Model::SetChallengeStatusRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd9e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                    {::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum& KID::Model::SetChallengeStatusRequest::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum const& KID::Model::SetChallengeStatusRequest::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void KID::Model::SetChallengeStatusRequest::__cordl_internal_set__Status_k__BackingField(::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
constexpr ::System::Guid& KID::Model::SetChallengeStatusRequest::__cordl_internal_get__ChallengeId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChallengeId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::SetChallengeStatusRequest::__cordl_internal_get__ChallengeId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChallengeId_k__BackingField;
}
constexpr void KID::Model::SetChallengeStatusRequest::__cordl_internal_set__ChallengeId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChallengeId_k__BackingField = value;
}
constexpr int32_t& KID::Model::SetChallengeStatusRequest::__cordl_internal_get__Age_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr int32_t const& KID::Model::SetChallengeStatusRequest::__cordl_internal_get__Age_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr void KID::Model::SetChallengeStatusRequest::__cordl_internal_set__Age_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Age_k__BackingField = value;
}
constexpr ::StringW& KID::Model::SetChallengeStatusRequest::__cordl_internal_get__Jurisdiction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr ::StringW const& KID::Model::SetChallengeStatusRequest::__cordl_internal_get__Jurisdiction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr void KID::Model::SetChallengeStatusRequest::__cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Jurisdiction_k__BackingField = value;
}
constexpr ::StringW& KID::Model::SetChallengeStatusRequest::__cordl_internal_get__ApproverEmail_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApproverEmail_k__BackingField;
}
constexpr ::StringW const& KID::Model::SetChallengeStatusRequest::__cordl_internal_get__ApproverEmail_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApproverEmail_k__BackingField;
}
constexpr void KID::Model::SetChallengeStatusRequest::__cordl_internal_set__ApproverEmail_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApproverEmail_k__BackingField = value;
}
inline ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum KID::Model::SetChallengeStatusRequest::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SetChallengeStatusRequest_StatusEnum>(this, ___internal_method);
}
inline void KID::Model::SetChallengeStatusRequest::set_Status(::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::SetChallengeStatusRequest_StatusEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::SetChallengeStatusRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::SetChallengeStatusRequest::_ctor(::System::Guid  challengeId, ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  status, int32_t  age, ::StringW  jurisdiction, ::StringW  approverEmail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::SetChallengeStatusRequest_StatusEnum>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, challengeId, status, age, jurisdiction, approverEmail);
}
inline ::System::Guid KID::Model::SetChallengeStatusRequest::get_ChallengeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"get_ChallengeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::SetChallengeStatusRequest::set_ChallengeId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"set_ChallengeId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t KID::Model::SetChallengeStatusRequest::get_Age()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"get_Age", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::SetChallengeStatusRequest::set_Age(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"set_Age", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::SetChallengeStatusRequest::get_Jurisdiction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::SetChallengeStatusRequest::set_Jurisdiction(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::SetChallengeStatusRequest::get_ApproverEmail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"get_ApproverEmail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::SetChallengeStatusRequest::set_ApproverEmail(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(),
                        {"set_ApproverEmail", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::SetChallengeStatusRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::SetChallengeStatusRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::SetChallengeStatusRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::SetChallengeStatusRequest* KID::Model::SetChallengeStatusRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::SetChallengeStatusRequest*>());
}
inline ::KID::Model::SetChallengeStatusRequest* KID::Model::SetChallengeStatusRequest::New_ctor(::System::Guid  challengeId, ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  status, int32_t  age, ::StringW  jurisdiction, ::StringW  approverEmail)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::SetChallengeStatusRequest*>(challengeId, status, age, jurisdiction, approverEmail));
}
// Ctor Parameters []
constexpr ::KID::Model::SetChallengeStatusRequest::SetChallengeStatusRequest()   {
}
