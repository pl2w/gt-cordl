#pragma once
// IWYU pragma private; include "KID/Model/CheckAgeAppealRequest.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__CheckAgeAppealRequest_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::CheckAgeAppealRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeAppealRequest::*)()>(&::KID::Model::CheckAgeAppealRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeAppealRequest::*)(::StringW, ::System::Guid, ::StringW)>(&::KID::Model::CheckAgeAppealRequest::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9cd3c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealRequest.get_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeAppealRequest::*)()>(&::KID::Model::CheckAgeAppealRequest::get_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"get_Email", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealRequest.set_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeAppealRequest::*)(::StringW)>(&::KID::Model::CheckAgeAppealRequest::set_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealRequest.get_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::CheckAgeAppealRequest::*)()>(&::KID::Model::CheckAgeAppealRequest::get_PlayerId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd3cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"get_PlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealRequest.set_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeAppealRequest::*)(::System::Guid)>(&::KID::Model::CheckAgeAppealRequest::set_PlayerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"set_PlayerId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealRequest.get_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeAppealRequest::*)()>(&::KID::Model::CheckAgeAppealRequest::get_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealRequest.set_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::CheckAgeAppealRequest::*)(::StringW)>(&::KID::Model::CheckAgeAppealRequest::set_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd3d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeAppealRequest::*)()>(&::KID::Model::CheckAgeAppealRequest::ToString)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9cd3d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                    {::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::CheckAgeAppealRequest.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::CheckAgeAppealRequest::*)()>(&::KID::Model::CheckAgeAppealRequest::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd3ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                    {::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& KID::Model::CheckAgeAppealRequest::__cordl_internal_get__Email_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr ::StringW const& KID::Model::CheckAgeAppealRequest::__cordl_internal_get__Email_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr void KID::Model::CheckAgeAppealRequest::__cordl_internal_set__Email_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Email_k__BackingField = value;
}
constexpr ::System::Guid& KID::Model::CheckAgeAppealRequest::__cordl_internal_get__PlayerId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::CheckAgeAppealRequest::__cordl_internal_get__PlayerId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerId_k__BackingField;
}
constexpr void KID::Model::CheckAgeAppealRequest::__cordl_internal_set__PlayerId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerId_k__BackingField = value;
}
constexpr ::StringW& KID::Model::CheckAgeAppealRequest::__cordl_internal_get__Jurisdiction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr ::StringW const& KID::Model::CheckAgeAppealRequest::__cordl_internal_get__Jurisdiction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr void KID::Model::CheckAgeAppealRequest::__cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Jurisdiction_k__BackingField = value;
}
inline void KID::Model::CheckAgeAppealRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::CheckAgeAppealRequest::_ctor(::StringW  email, ::System::Guid  playerId, ::StringW  jurisdiction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, email, playerId, jurisdiction);
}
inline ::StringW KID::Model::CheckAgeAppealRequest::get_Email()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"get_Email", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CheckAgeAppealRequest::set_Email(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid KID::Model::CheckAgeAppealRequest::get_PlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"get_PlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::CheckAgeAppealRequest::set_PlayerId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"set_PlayerId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CheckAgeAppealRequest::get_Jurisdiction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::CheckAgeAppealRequest::set_Jurisdiction(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::CheckAgeAppealRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::CheckAgeAppealRequest::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::CheckAgeAppealRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::CheckAgeAppealRequest* KID::Model::CheckAgeAppealRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CheckAgeAppealRequest*>());
}
inline ::KID::Model::CheckAgeAppealRequest* KID::Model::CheckAgeAppealRequest::New_ctor(::StringW  email, ::System::Guid  playerId, ::StringW  jurisdiction)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::CheckAgeAppealRequest*>(email, playerId, jurisdiction));
}
// Ctor Parameters []
constexpr ::KID::Model::CheckAgeAppealRequest::CheckAgeAppealRequest()   {
}
