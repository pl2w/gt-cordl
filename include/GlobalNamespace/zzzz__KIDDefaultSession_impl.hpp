#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDDefaultSession.hpp"
#include "KID/Model/zzzz__AgeStatusType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__KIDDefaultSession_def.hpp"
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
#include "KID/Model/zzzz__Permission_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDDefaultSession.get_Permissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::KID::Model::Permission*>* (::GlobalNamespace::KIDDefaultSession::*)()>(&::GlobalNamespace::KIDDefaultSession::get_Permissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a260d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"get_Permissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDDefaultSession.set_Permissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDDefaultSession::*)(::System::Collections::Generic::List_1<::KID::Model::Permission*>*)>(&::GlobalNamespace::KIDDefaultSession::set_Permissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a260dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"set_Permissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDDefaultSession.get_AgeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeStatusType (::GlobalNamespace::KIDDefaultSession::*)()>(&::GlobalNamespace::KIDDefaultSession::get_AgeStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a260e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"get_AgeStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDDefaultSession.set_AgeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDDefaultSession::*)(::KID::Model::AgeStatusType)>(&::GlobalNamespace::KIDDefaultSession::set_AgeStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a260ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"set_AgeStatus", {}, {::i2c::type_of<::KID::Model::AgeStatusType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDDefaultSession.get_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::KIDDefaultSession::*)()>(&::GlobalNamespace::KIDDefaultSession::get_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a260f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"get_Age", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDDefaultSession.set_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDDefaultSession::*)(int32_t)>(&::GlobalNamespace::KIDDefaultSession::set_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a260fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"set_Age", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDDefaultSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDDefaultSession::*)()>(&::GlobalNamespace::KIDDefaultSession::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>*& GlobalNamespace::KIDDefaultSession::__cordl_internal_get__Permissions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Permissions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>* const& GlobalNamespace::KIDDefaultSession::__cordl_internal_get__Permissions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Permissions_k__BackingField;
}
constexpr void GlobalNamespace::KIDDefaultSession::__cordl_internal_set__Permissions_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Permissions_k__BackingField = value;
}
constexpr ::KID::Model::AgeStatusType& GlobalNamespace::KIDDefaultSession::__cordl_internal_get__AgeStatus_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeStatus_k__BackingField;
}
constexpr ::KID::Model::AgeStatusType const& GlobalNamespace::KIDDefaultSession::__cordl_internal_get__AgeStatus_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeStatus_k__BackingField;
}
constexpr void GlobalNamespace::KIDDefaultSession::__cordl_internal_set__AgeStatus_k__BackingField(::KID::Model::AgeStatusType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeStatus_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::KIDDefaultSession::__cordl_internal_get__Age_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::KIDDefaultSession::__cordl_internal_get__Age_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr void GlobalNamespace::KIDDefaultSession::__cordl_internal_set__Age_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Age_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* GlobalNamespace::KIDDefaultSession::get_Permissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"get_Permissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>(this, ___internal_method);
}
inline void GlobalNamespace::KIDDefaultSession::set_Permissions(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"set_Permissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::AgeStatusType GlobalNamespace::KIDDefaultSession::get_AgeStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"get_AgeStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeStatusType>(this, ___internal_method);
}
inline void GlobalNamespace::KIDDefaultSession::set_AgeStatus(::KID::Model::AgeStatusType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"set_AgeStatus", {}, {::i2c::type_of<::KID::Model::AgeStatusType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::KIDDefaultSession::get_Age()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"get_Age", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::KIDDefaultSession::set_Age(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {"set_Age", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::KIDDefaultSession::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDDefaultSession*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDDefaultSession* GlobalNamespace::KIDDefaultSession::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDDefaultSession*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDDefaultSession::KIDDefaultSession()   {
}
