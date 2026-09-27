#pragma once
// IWYU pragma private; include "Cosmetics/GenericNetworkedEventsProvider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Cosmetics/zzzz__GenericNetworkedEventsProvider_def.hpp"
#include "Cosmetics/zzzz__GenericNetworkedEventsProvider_EventType_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)()>(&::Cosmetics::GenericNetworkedEventsProvider::OnEnable)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5d1ddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)()>(&::Cosmetics::GenericNetworkedEventsProvider::OnDisable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5d1e074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.TriggerSharedEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvents)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5d1e1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvents", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.InvokeSharedEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)(::ArrayW<::System::Object*>)>(&::Cosmetics::GenericNetworkedEventsProvider::InvokeSharedEvents)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x5d1e2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"InvokeSharedEvents", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.Raise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)(::ArrayW<::System::Object*>)>(&::Cosmetics::GenericNetworkedEventsProvider::Raise)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d1e70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"Raise", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.TriggerSharedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)()>(&::Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d1e7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.TriggerSharedEvent_Int
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)(int32_t)>(&::Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Int)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5d1e8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Int", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.TriggerSharedEvent_Float
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)(float_t)>(&::Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Float)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5d1e9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Float", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.TriggerSharedEvent_Bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)(bool)>(&::Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Bool)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d1eb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Bool", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.TriggerSharedEvent_Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)(::UnityEngine::Vector3)>(&::Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Vector3)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5d1ec28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.TriggerSharedEvent_String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)(::StringW)>(&::Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_String)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d1ed78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_String", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.TriggerSharedEvent_Long
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)(int64_t)>(&::Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Long)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5d1ee7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Long", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider.TriggerSharedEvent_Quaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)(::UnityEngine::Quaternion)>(&::Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Quaternion)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5d1ef9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Quaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::GenericNetworkedEventsProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::GenericNetworkedEventsProvider::*)()>(&::Cosmetics::GenericNetworkedEventsProvider::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d1f0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr ::GlobalNamespace::CallLimiter*& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_callLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_callLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr void Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiter = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent;
}
constexpr void Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_set_sharedEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedEvent = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_int()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_int;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_int() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_int;
}
constexpr void Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_set_sharedEvent_int(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedEvent_int = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_float()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_float;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_float() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_float;
}
constexpr void Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_set_sharedEvent_float(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedEvent_float = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_bool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_bool;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_bool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_bool;
}
constexpr void Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_set_sharedEvent_bool(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedEvent_bool = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_vector3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_vector3;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_vector3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_vector3;
}
constexpr void Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_set_sharedEvent_vector3(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedEvent_vector3 = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_string()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_string;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_string() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_string;
}
constexpr void Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_set_sharedEvent_string(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedEvent_string = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int64_t>*& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_long()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_long;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int64_t>* const& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_long() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_long;
}
constexpr void Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_set_sharedEvent_long(::UnityEngine::Events::UnityEvent_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedEvent_long = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Quaternion>*& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_quaternion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_quaternion;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Quaternion>* const& Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_get_sharedEvent_quaternion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedEvent_quaternion;
}
constexpr void Cosmetics::GenericNetworkedEventsProvider::__cordl_internal_set_sharedEvent_quaternion(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedEvent_quaternion = value;
}
inline void Cosmetics::GenericNetworkedEventsProvider::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::GenericNetworkedEventsProvider::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvents(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvents", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void Cosmetics::GenericNetworkedEventsProvider::InvokeSharedEvents(::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"InvokeSharedEvents", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Cosmetics::GenericNetworkedEventsProvider::Raise(::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"Raise", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Int(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Int", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Float(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Float", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Bool(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Bool", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Vector3(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_String(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_String", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Long(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Long", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Cosmetics::GenericNetworkedEventsProvider::TriggerSharedEvent_Quaternion(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {"TriggerSharedEvent_Quaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Cosmetics::GenericNetworkedEventsProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::GenericNetworkedEventsProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cosmetics::GenericNetworkedEventsProvider* Cosmetics::GenericNetworkedEventsProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cosmetics::GenericNetworkedEventsProvider*>());
}
// Ctor Parameters []
constexpr ::Cosmetics::GenericNetworkedEventsProvider::GenericNetworkedEventsProvider()   {
}
