#pragma once
// IWYU pragma private; include "KID/Model/TestVerificationWebhookRequest.hpp"
#include "KID/Model/zzzz__TestVerificationWebhookRequest_EventTypeEnum_impl.hpp"
#include "KID/Model/zzzz__VerificationStatus_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__TestVerificationWebhookRequest_def.hpp"
#include "KID/Model/zzzz__AgeRange_def.hpp"
#include "KID/Model/zzzz__TestVerificationWebhookRequest_EventTypeEnum_def.hpp"
#include "KID/Model/zzzz__VerificationStatus_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest.get_EventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum> (::KID::Model::TestVerificationWebhookRequest::*)()>(&::KID::Model::TestVerificationWebhookRequest::get_EventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"get_EventType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest.set_EventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::TestVerificationWebhookRequest::*)(::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>)>(&::KID::Model::TestVerificationWebhookRequest::set_EventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"set_EventType", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::VerificationStatus (::KID::Model::TestVerificationWebhookRequest::*)()>(&::KID::Model::TestVerificationWebhookRequest::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::TestVerificationWebhookRequest::*)(::KID::Model::VerificationStatus)>(&::KID::Model::TestVerificationWebhookRequest::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"set_Status", {}, {::i2c::type_of<::KID::Model::VerificationStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::TestVerificationWebhookRequest::*)()>(&::KID::Model::TestVerificationWebhookRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::TestVerificationWebhookRequest::*)(::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>, ::System::Guid, ::KID::Model::AgeRange*, ::KID::Model::VerificationStatus)>(&::KID::Model::TestVerificationWebhookRequest::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9cda6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::KID::Model::AgeRange*>(), ::i2c::type_of<::KID::Model::VerificationStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::TestVerificationWebhookRequest::*)()>(&::KID::Model::TestVerificationWebhookRequest::get_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cda744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::TestVerificationWebhookRequest::*)(::System::Guid)>(&::KID::Model::TestVerificationWebhookRequest::set_Id)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cda754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest.get_AgeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeRange* (::KID::Model::TestVerificationWebhookRequest::*)()>(&::KID::Model::TestVerificationWebhookRequest::get_AgeRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"get_AgeRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest.set_AgeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::TestVerificationWebhookRequest::*)(::KID::Model::AgeRange*)>(&::KID::Model::TestVerificationWebhookRequest::set_AgeRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cda768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"set_AgeRange", {}, {::i2c::type_of<::KID::Model::AgeRange*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::TestVerificationWebhookRequest::*)()>(&::KID::Model::TestVerificationWebhookRequest::ToString)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x9cda770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                    {::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::TestVerificationWebhookRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::TestVerificationWebhookRequest::*)()>(&::KID::Model::TestVerificationWebhookRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cda9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                    {::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>& KID::Model::TestVerificationWebhookRequest::__cordl_internal_get__EventType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventType_k__BackingField;
}
constexpr ::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum> const& KID::Model::TestVerificationWebhookRequest::__cordl_internal_get__EventType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventType_k__BackingField;
}
constexpr void KID::Model::TestVerificationWebhookRequest::__cordl_internal_set__EventType_k__BackingField(::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EventType_k__BackingField = value;
}
constexpr ::KID::Model::VerificationStatus& KID::Model::TestVerificationWebhookRequest::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::KID::Model::VerificationStatus const& KID::Model::TestVerificationWebhookRequest::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void KID::Model::TestVerificationWebhookRequest::__cordl_internal_set__Status_k__BackingField(::KID::Model::VerificationStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
constexpr ::System::Guid& KID::Model::TestVerificationWebhookRequest::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::TestVerificationWebhookRequest::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void KID::Model::TestVerificationWebhookRequest::__cordl_internal_set__Id_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr ::KID::Model::AgeRange*& KID::Model::TestVerificationWebhookRequest::__cordl_internal_get__AgeRange_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeRange_k__BackingField;
}
constexpr ::KID::Model::AgeRange* const& KID::Model::TestVerificationWebhookRequest::__cordl_internal_get__AgeRange_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeRange_k__BackingField;
}
constexpr void KID::Model::TestVerificationWebhookRequest::__cordl_internal_set__AgeRange_k__BackingField(::KID::Model::AgeRange*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeRange_k__BackingField = value;
}
inline ::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum> KID::Model::TestVerificationWebhookRequest::get_EventType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"get_EventType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>>(this, ___internal_method);
}
inline void KID::Model::TestVerificationWebhookRequest::set_EventType(::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"set_EventType", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::VerificationStatus KID::Model::TestVerificationWebhookRequest::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::VerificationStatus>(this, ___internal_method);
}
inline void KID::Model::TestVerificationWebhookRequest::set_Status(::KID::Model::VerificationStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"set_Status", {}, {::i2c::type_of<::KID::Model::VerificationStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::TestVerificationWebhookRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::TestVerificationWebhookRequest::_ctor(::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>  eventType, ::System::Guid  id, ::KID::Model::AgeRange*  ageRange, ::KID::Model::VerificationStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::KID::Model::AgeRange*>(), ::i2c::type_of<::KID::Model::VerificationStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, id, ageRange, status);
}
inline ::System::Guid KID::Model::TestVerificationWebhookRequest::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::TestVerificationWebhookRequest::set_Id(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::AgeRange* KID::Model::TestVerificationWebhookRequest::get_AgeRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"get_AgeRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeRange*>(this, ___internal_method);
}
inline void KID::Model::TestVerificationWebhookRequest::set_AgeRange(::KID::Model::AgeRange*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(),
                        {"set_AgeRange", {}, {::i2c::type_of<::KID::Model::AgeRange*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::TestVerificationWebhookRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::TestVerificationWebhookRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::TestVerificationWebhookRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::TestVerificationWebhookRequest* KID::Model::TestVerificationWebhookRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::TestVerificationWebhookRequest*>());
}
inline ::KID::Model::TestVerificationWebhookRequest* KID::Model::TestVerificationWebhookRequest::New_ctor(::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>  eventType, ::System::Guid  id, ::KID::Model::AgeRange*  ageRange, ::KID::Model::VerificationStatus  status)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::TestVerificationWebhookRequest*>(eventType, id, ageRange, status));
}
// Ctor Parameters []
constexpr ::KID::Model::TestVerificationWebhookRequest::TestVerificationWebhookRequest()   {
}
