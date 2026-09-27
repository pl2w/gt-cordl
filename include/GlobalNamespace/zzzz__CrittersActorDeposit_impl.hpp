#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActorDeposit.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersActorDeposit_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersActorDeposit.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorDeposit::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CrittersActorDeposit::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x55f7220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorDeposit.CanDeposit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersActorDeposit::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersActorDeposit::CanDeposit)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x55f73ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorDeposit.IsAttachAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersActorDeposit::*)()>(&::GlobalNamespace::CrittersActorDeposit::IsAttachAvailable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x55f7374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(),
                        {"IsAttachAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorDeposit.HandleDeposit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorDeposit::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersActorDeposit::HandleDeposit)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55f74c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorDeposit.HandleDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorDeposit::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersActorDeposit::HandleDetach)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55f75ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorDeposit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorDeposit::*)()>(&::GlobalNamespace::CrittersActorDeposit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55f75b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CrittersActor>& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_attachPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPoint;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_attachPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPoint;
}
constexpr void GlobalNamespace::CrittersActorDeposit::__cordl_internal_set_attachPoint(::UnityW<::GlobalNamespace::CrittersActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachPoint = value;
}
constexpr ::GlobalNamespace::CrittersActor_CrittersActorType& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_actorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorType;
}
constexpr ::GlobalNamespace::CrittersActor_CrittersActorType const& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_actorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorType;
}
constexpr void GlobalNamespace::CrittersActorDeposit::__cordl_internal_set_actorType(::GlobalNamespace::CrittersActor_CrittersActorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorType = value;
}
constexpr bool& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_disableGrabOnAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrabOnAttach;
}
constexpr bool const& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_disableGrabOnAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrabOnAttach;
}
constexpr void GlobalNamespace::CrittersActorDeposit::__cordl_internal_set_disableGrabOnAttach(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableGrabOnAttach = value;
}
constexpr bool& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_allowMultiAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowMultiAttach;
}
constexpr bool const& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_allowMultiAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowMultiAttach;
}
constexpr void GlobalNamespace::CrittersActorDeposit::__cordl_internal_set_allowMultiAttach(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowMultiAttach = value;
}
constexpr bool& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_snapOnAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOnAttach;
}
constexpr bool const& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_snapOnAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOnAttach;
}
constexpr void GlobalNamespace::CrittersActorDeposit::__cordl_internal_set_snapOnAttach(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapOnAttach = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor>& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_currentAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAttach;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& GlobalNamespace::CrittersActorDeposit::__cordl_internal_get_currentAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAttach;
}
constexpr void GlobalNamespace::CrittersActorDeposit::__cordl_internal_set_currentAttach(::UnityW<::GlobalNamespace::CrittersActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAttach = value;
}
inline void GlobalNamespace::CrittersActorDeposit::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool GlobalNamespace::CrittersActorDeposit::CanDeposit(::GlobalNamespace::CrittersActor*  depositActor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, depositActor);
}
inline bool GlobalNamespace::CrittersActorDeposit::IsAttachAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(),
                        {"IsAttachAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorDeposit::HandleDeposit(::GlobalNamespace::CrittersActor*  depositedActor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depositedActor);
}
inline void GlobalNamespace::CrittersActorDeposit::HandleDetach(::GlobalNamespace::CrittersActor*  detachingActor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, detachingActor);
}
inline void GlobalNamespace::CrittersActorDeposit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorDeposit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersActorDeposit* GlobalNamespace::CrittersActorDeposit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersActorDeposit*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersActorDeposit::CrittersActorDeposit()   {
}
