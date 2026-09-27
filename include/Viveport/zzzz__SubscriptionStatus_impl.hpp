#pragma once
// IWYU pragma private; include "Viveport/SubscriptionStatus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/zzzz__SubscriptionStatus_TransactionType_impl.hpp"
#include "Viveport/zzzz__SubscriptionStatus_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Viveport/zzzz__SubscriptionStatus_Platform_def.hpp"
#include "Viveport/zzzz__SubscriptionStatus_TransactionType_def.hpp"
//  Writing Method size for method: ::Viveport::SubscriptionStatus.get_Platforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>* (::Viveport::SubscriptionStatus::*)()>(&::Viveport::SubscriptionStatus::get_Platforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4c010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::SubscriptionStatus*>(),
                        {"get_Platforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::SubscriptionStatus.set_Platforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::SubscriptionStatus::*)(::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*)>(&::Viveport::SubscriptionStatus::set_Platforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4c018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::SubscriptionStatus*>(),
                        {"set_Platforms", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::SubscriptionStatus.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionStatus_TransactionType (::Viveport::SubscriptionStatus::*)()>(&::Viveport::SubscriptionStatus::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4c020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::SubscriptionStatus*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::SubscriptionStatus.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::SubscriptionStatus::*)(::GlobalNamespace::SubscriptionStatus_TransactionType)>(&::Viveport::SubscriptionStatus::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4c028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::SubscriptionStatus*>(),
                        {"set_Type", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionStatus_TransactionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::SubscriptionStatus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::SubscriptionStatus::*)()>(&::Viveport::SubscriptionStatus::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b4c030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::SubscriptionStatus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*& Viveport::SubscriptionStatus::__cordl_internal_get__Platforms_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Platforms_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>* const& Viveport::SubscriptionStatus::__cordl_internal_get__Platforms_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Platforms_k__BackingField;
}
constexpr void Viveport::SubscriptionStatus::__cordl_internal_set__Platforms_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Platforms_k__BackingField = value;
}
constexpr ::GlobalNamespace::SubscriptionStatus_TransactionType& Viveport::SubscriptionStatus::__cordl_internal_get__Type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr ::GlobalNamespace::SubscriptionStatus_TransactionType const& Viveport::SubscriptionStatus::__cordl_internal_get__Type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr void Viveport::SubscriptionStatus::__cordl_internal_set__Type_k__BackingField(::GlobalNamespace::SubscriptionStatus_TransactionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>* Viveport::SubscriptionStatus::get_Platforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::SubscriptionStatus*>(),
                        {"get_Platforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*>(this, ___internal_method);
}
inline void Viveport::SubscriptionStatus::set_Platforms(::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::SubscriptionStatus*>(),
                        {"set_Platforms", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SubscriptionStatus_Platform>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SubscriptionStatus_TransactionType Viveport::SubscriptionStatus::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::SubscriptionStatus*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionStatus_TransactionType>(this, ___internal_method);
}
inline void Viveport::SubscriptionStatus::set_Type(::GlobalNamespace::SubscriptionStatus_TransactionType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::SubscriptionStatus*>(),
                        {"set_Type", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionStatus_TransactionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Viveport::SubscriptionStatus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::SubscriptionStatus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::SubscriptionStatus* Viveport::SubscriptionStatus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::SubscriptionStatus*>());
}
// Ctor Parameters []
constexpr ::Viveport::SubscriptionStatus::SubscriptionStatus()   {
}
