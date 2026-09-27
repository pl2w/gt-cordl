#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigEvents.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VRRigEvents_def.hpp"
#include "GlobalNamespace/zzzz__IPreDisable_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GorillaTag/zzzz__DelegateListProcessor_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRRigEvents.PreDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigEvents::*)()>(&::GlobalNamespace::VRRigEvents::PreDisable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57481a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigEvents*>(),
                        {"PreDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigEvents.SendPostEnableEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigEvents::*)()>(&::GlobalNamespace::VRRigEvents::SendPostEnableEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5748204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigEvents*>(),
                        {"SendPostEnableEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigEvents::*)()>(&::GlobalNamespace::VRRigEvents::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5748260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RigContainer>& GlobalNamespace::VRRigEvents::__cordl_internal_get_rigRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigRef;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer> const& GlobalNamespace::VRRigEvents::__cordl_internal_get_rigRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigRef;
}
constexpr void GlobalNamespace::VRRigEvents::__cordl_internal_set_rigRef(::UnityW<::GlobalNamespace::RigContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigRef = value;
}
constexpr ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*& GlobalNamespace::VRRigEvents::__cordl_internal_get_disableEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableEvent;
}
constexpr ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>* const& GlobalNamespace::VRRigEvents::__cordl_internal_get_disableEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableEvent;
}
constexpr void GlobalNamespace::VRRigEvents::__cordl_internal_set_disableEvent(::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableEvent = value;
}
constexpr ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*& GlobalNamespace::VRRigEvents::__cordl_internal_get_enableEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableEvent;
}
constexpr ::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>* const& GlobalNamespace::VRRigEvents::__cordl_internal_get_enableEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableEvent;
}
constexpr void GlobalNamespace::VRRigEvents::__cordl_internal_set_enableEvent(::GorillaTag::DelegateListProcessor_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableEvent = value;
}
inline void GlobalNamespace::VRRigEvents::PreDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigEvents*>(),
                        {"PreDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigEvents::SendPostEnableEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigEvents*>(),
                        {"SendPostEnableEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRRigEvents* GlobalNamespace::VRRigEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRRigEvents*>());
}
/// @brief Convert operator to "::GlobalNamespace::IPreDisable"
constexpr  GlobalNamespace::VRRigEvents::operator ::GlobalNamespace::IPreDisable*() noexcept {
return static_cast<::GlobalNamespace::IPreDisable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPreDisable"
constexpr ::GlobalNamespace::IPreDisable* GlobalNamespace::VRRigEvents::i___GlobalNamespace__IPreDisable() noexcept {
return static_cast<::GlobalNamespace::IPreDisable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRRigEvents::VRRigEvents()   {
}
