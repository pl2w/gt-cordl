#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectSpawnException.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_impl.hpp"
#include "Fusion/zzzz__NetworkSpawnStatus_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Fusion/zzzz__NetworkObjectSpawnException_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkSpawnStatus_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectSpawnException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectSpawnException::*)(::Fusion::NetworkSpawnStatus, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>)>(&::Fusion::NetworkObjectSpawnException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fd9904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSpawnException*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkSpawnStatus>(), ::i2c::type_of<::System::Nullable_1<::Fusion::NetworkObjectTypeId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectSpawnException.get_TypeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Fusion::NetworkObjectTypeId> (::Fusion::NetworkObjectSpawnException::*)()>(&::Fusion::NetworkObjectSpawnException::get_TypeId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fda648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSpawnException*>(),
                        {"get_TypeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectSpawnException.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSpawnStatus (::Fusion::NetworkObjectSpawnException::*)()>(&::Fusion::NetworkObjectSpawnException::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fda658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSpawnException*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectSpawnException.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkObjectSpawnException::*)()>(&::Fusion::NetworkObjectSpawnException::get_Message)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5fda660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectSpawnException*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectSpawnException*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::Fusion::NetworkObjectTypeId>& Fusion::NetworkObjectSpawnException::__cordl_internal_get__TypeId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TypeId_k__BackingField;
}
constexpr ::System::Nullable_1<::Fusion::NetworkObjectTypeId> const& Fusion::NetworkObjectSpawnException::__cordl_internal_get__TypeId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TypeId_k__BackingField;
}
constexpr void Fusion::NetworkObjectSpawnException::__cordl_internal_set__TypeId_k__BackingField(::System::Nullable_1<::Fusion::NetworkObjectTypeId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TypeId_k__BackingField = value;
}
constexpr ::Fusion::NetworkSpawnStatus& Fusion::NetworkObjectSpawnException::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::Fusion::NetworkSpawnStatus const& Fusion::NetworkObjectSpawnException::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void Fusion::NetworkObjectSpawnException::__cordl_internal_set__Status_k__BackingField(::Fusion::NetworkSpawnStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
inline void Fusion::NetworkObjectSpawnException::_ctor(::Fusion::NetworkSpawnStatus  status, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSpawnException*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkSpawnStatus>(), ::i2c::type_of<::System::Nullable_1<::Fusion::NetworkObjectTypeId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, id);
}
inline ::System::Nullable_1<::Fusion::NetworkObjectTypeId> Fusion::NetworkObjectSpawnException::get_TypeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSpawnException*>(),
                        {"get_TypeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Fusion::NetworkObjectTypeId>>(this, ___internal_method);
}
inline ::Fusion::NetworkSpawnStatus Fusion::NetworkObjectSpawnException::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSpawnException*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSpawnStatus>(this, ___internal_method);
}
inline ::StringW Fusion::NetworkObjectSpawnException::get_Message()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectSpawnException*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectSpawnException* Fusion::NetworkObjectSpawnException::New_ctor(::Fusion::NetworkSpawnStatus  status, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  id)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectSpawnException*>(status, id));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectSpawnException::NetworkObjectSpawnException()   {
}
