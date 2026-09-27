#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersEventEffects.hpp"
#include "GlobalNamespace/zzzz__CrittersManager_CritterEvent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersEventEffects_def.hpp"
#include "GlobalNamespace/zzzz__CrittersEventEffects_def.hpp"
#include "GlobalNamespace/zzzz__CrittersManager_CritterEvent_def.hpp"
#include "GlobalNamespace/zzzz__CrittersManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersEventEffects.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersEventEffects::*)()>(&::GlobalNamespace::CrittersEventEffects::Awake)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x55fe340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersEventEffects*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersEventEffects.HandleReceivedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersEventEffects::*)(::GlobalNamespace::CrittersManager_CritterEvent, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::CrittersEventEffects::HandleReceivedEvent)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x55fe630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersEventEffects*>(),
                        {"HandleReceivedEvent", {}, {::i2c::type_of<::GlobalNamespace::CrittersManager_CritterEvent>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersEventEffects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersEventEffects::*)()>(&::GlobalNamespace::CrittersEventEffects::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fe76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersEventEffects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CrittersManager>& GlobalNamespace::CrittersEventEffects::__cordl_internal_get_manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr ::UnityW<::GlobalNamespace::CrittersManager> const& GlobalNamespace::CrittersEventEffects::__cordl_internal_get_manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr void GlobalNamespace::CrittersEventEffects::__cordl_internal_set_manager(::UnityW<::GlobalNamespace::CrittersManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manager = value;
}
constexpr ::ArrayW<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>& GlobalNamespace::CrittersEventEffects::__cordl_internal_get_eventEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventEffects;
}
constexpr ::ArrayW<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*> const& GlobalNamespace::CrittersEventEffects::__cordl_internal_get_eventEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventEffects;
}
constexpr void GlobalNamespace::CrittersEventEffects::__cordl_internal_set_eventEffects(::ArrayW<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventEffects = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersManager_CritterEvent,::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::CrittersEventEffects::__cordl_internal_get_effectResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectResponse;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersManager_CritterEvent,::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::CrittersEventEffects::__cordl_internal_get_effectResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectResponse;
}
constexpr void GlobalNamespace::CrittersEventEffects::__cordl_internal_set_effectResponse(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersManager_CritterEvent,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectResponse = value;
}
inline void GlobalNamespace::CrittersEventEffects::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersEventEffects*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersEventEffects::HandleReceivedEvent(::GlobalNamespace::CrittersManager_CritterEvent  eventType, int32_t  sourceActor, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersEventEffects*>(),
                        {"HandleReceivedEvent", {}, {::i2c::type_of<::GlobalNamespace::CrittersManager_CritterEvent>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, sourceActor, position, rotation);
}
inline void GlobalNamespace::CrittersEventEffects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersEventEffects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersEventEffects* GlobalNamespace::CrittersEventEffects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersEventEffects*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersEventEffects::CrittersEventEffects()   {
}
//  Writing Method size for method: ::GlobalNamespace::CrittersEventEffects_CrittersEventResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersEventEffects_CrittersEventResponse::*)()>(&::GlobalNamespace::CrittersEventEffects_CrittersEventResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fe774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CrittersManager_CritterEvent& GlobalNamespace::CrittersEventEffects_CrittersEventResponse::__cordl_internal_get_eventType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr ::GlobalNamespace::CrittersManager_CritterEvent const& GlobalNamespace::CrittersEventEffects_CrittersEventResponse::__cordl_internal_get_eventType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr void GlobalNamespace::CrittersEventEffects_CrittersEventResponse::__cordl_internal_set_eventType(::GlobalNamespace::CrittersManager_CritterEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventType = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersEventEffects_CrittersEventResponse::__cordl_internal_get_effect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersEventEffects_CrittersEventResponse::__cordl_internal_get_effect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effect;
}
constexpr void GlobalNamespace::CrittersEventEffects_CrittersEventResponse::__cordl_internal_set_effect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effect = value;
}
inline void GlobalNamespace::CrittersEventEffects_CrittersEventResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersEventEffects_CrittersEventResponse* GlobalNamespace::CrittersEventEffects_CrittersEventResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersEventEffects_CrittersEventResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersEventEffects_CrittersEventResponse::CrittersEventEffects_CrittersEventResponse()   {
}
