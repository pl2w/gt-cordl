#pragma once
// IWYU pragma private; include "GlobalNamespace/LowEffortZone.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GlobalNamespace/zzzz__LowEffortZone_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LowEffortZone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LowEffortZone::*)()>(&::GlobalNamespace::LowEffortZone::Awake)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56b6db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LowEffortZone*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LowEffortZone.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LowEffortZone::*)()>(&::GlobalNamespace::LowEffortZone::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x56b6dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LowEffortZone*>(),
                    {::i2c::class_of<::GlobalNamespace::LowEffortZone*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LowEffortZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LowEffortZone::*)()>(&::GlobalNamespace::LowEffortZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b6f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LowEffortZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::LowEffortZone::__cordl_internal_get_objectsToEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToEnable;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::LowEffortZone::__cordl_internal_get_objectsToEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToEnable;
}
constexpr void GlobalNamespace::LowEffortZone::__cordl_internal_set_objectsToEnable(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToEnable = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::LowEffortZone::__cordl_internal_get_objectsToDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToDisable;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::LowEffortZone::__cordl_internal_get_objectsToDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToDisable;
}
constexpr void GlobalNamespace::LowEffortZone::__cordl_internal_set_objectsToDisable(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToDisable = value;
}
constexpr bool& GlobalNamespace::LowEffortZone::__cordl_internal_get_triggerOnAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOnAwake;
}
constexpr bool const& GlobalNamespace::LowEffortZone::__cordl_internal_get_triggerOnAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOnAwake;
}
constexpr void GlobalNamespace::LowEffortZone::__cordl_internal_set_triggerOnAwake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerOnAwake = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::LowEffortZone::__cordl_internal_get_onTriggeredEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTriggeredEvents;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::LowEffortZone::__cordl_internal_get_onTriggeredEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTriggeredEvents;
}
constexpr void GlobalNamespace::LowEffortZone::__cordl_internal_set_onTriggeredEvents(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTriggeredEvents = value;
}
inline void GlobalNamespace::LowEffortZone::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LowEffortZone*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LowEffortZone::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LowEffortZone*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LowEffortZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LowEffortZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LowEffortZone* GlobalNamespace::LowEffortZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LowEffortZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LowEffortZone::LowEffortZone()   {
}
