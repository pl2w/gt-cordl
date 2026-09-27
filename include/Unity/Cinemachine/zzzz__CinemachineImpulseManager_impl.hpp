#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_EnvelopeDefinition_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_ImpulseEvent_DirectionModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_ImpulseEvent_DissipationModes_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_EnvelopeDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_ImpulseEvent_DirectionModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_ImpulseEvent_DissipationModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_def.hpp"
#include "Unity/Cinemachine/zzzz__ISignalSource6D_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseManager::*)()>(&::Unity::Cinemachine::CinemachineImpulseManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee4130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineImpulseManager* (*)()>(&::Unity::Cinemachine::CinemachineImpulseManager::get_Instance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaee4138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager.InitializeModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::CinemachineImpulseManager::InitializeModule)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaee41c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"InitializeModule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager.EvaluateDissipationScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::Unity::Cinemachine::CinemachineImpulseManager::EvaluateDissipationScale)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaee42d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"EvaluateDissipationScale", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager.GetImpulseAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineImpulseManager::*)(::UnityEngine::Vector3, bool, int32_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::CinemachineImpulseManager::GetImpulseAt)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xaee437c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"GetImpulseAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager.GetStrongestImpulseAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineImpulseManager::*)(::UnityEngine::Vector3, bool, int32_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::CinemachineImpulseManager::GetStrongestImpulseAt)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xaee4ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"GetStrongestImpulseAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager.get_CurrentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineImpulseManager::*)()>(&::Unity::Cinemachine::CinemachineImpulseManager::get_CurrentTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaee4fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager.NewImpulseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent* (::Unity::Cinemachine::CinemachineImpulseManager::*)()>(&::Unity::Cinemachine::CinemachineImpulseManager::NewImpulseEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaee5028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"NewImpulseEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager.AddImpulseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseManager::*)(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*)>(&::Unity::Cinemachine::CinemachineImpulseManager::AddImpulseEvent)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xaee510c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"AddImpulseEvent", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseManager::*)()>(&::Unity::Cinemachine::CinemachineImpulseManager::Clear)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaee4218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*& Unity::Cinemachine::CinemachineImpulseManager::__cordl_internal_get_m_ExpiredEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpiredEvents;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>* const& Unity::Cinemachine::CinemachineImpulseManager::__cordl_internal_get_m_ExpiredEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpiredEvents;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager::__cordl_internal_set_m_ExpiredEvents(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExpiredEvents = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*& Unity::Cinemachine::CinemachineImpulseManager::__cordl_internal_get_m_ActiveEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveEvents;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>* const& Unity::Cinemachine::CinemachineImpulseManager::__cordl_internal_get_m_ActiveEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveEvents;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager::__cordl_internal_set_m_ActiveEvents(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveEvents = value;
}
constexpr bool& Unity::Cinemachine::CinemachineImpulseManager::__cordl_internal_get_IgnoreTimeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTimeScale;
}
constexpr bool const& Unity::Cinemachine::CinemachineImpulseManager::__cordl_internal_get_IgnoreTimeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTimeScale;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager::__cordl_internal_set_IgnoreTimeScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreTimeScale = value;
}
inline void Unity::Cinemachine::CinemachineImpulseManager::setStaticF_s_Instance(::Unity::Cinemachine::CinemachineImpulseManager*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineImpulseManager*, "s_Instance", ::Unity::Cinemachine::CinemachineImpulseManager*>(std::forward<::Unity::Cinemachine::CinemachineImpulseManager*>(value));
}
inline ::Unity::Cinemachine::CinemachineImpulseManager* Unity::Cinemachine::CinemachineImpulseManager::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineImpulseManager*, "s_Instance", ::Unity::Cinemachine::CinemachineImpulseManager*>();
}
inline void Unity::Cinemachine::CinemachineImpulseManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineImpulseManager* Unity::Cinemachine::CinemachineImpulseManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineImpulseManager*>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseManager::InitializeModule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"InitializeModule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineImpulseManager::EvaluateDissipationScale(float_t  spread, float_t  normalizedDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"EvaluateDissipationScale", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, spread, normalizedDistance);
}
inline bool Unity::Cinemachine::CinemachineImpulseManager::GetImpulseAt(::UnityEngine::Vector3  listenerLocation, bool  distance2D, int32_t  channelMask, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"GetImpulseAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, listenerLocation, distance2D, channelMask, pos, rot);
}
inline bool Unity::Cinemachine::CinemachineImpulseManager::GetStrongestImpulseAt(::UnityEngine::Vector3  listenerLocation, bool  distance2D, int32_t  channelMask, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"GetStrongestImpulseAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, listenerLocation, distance2D, channelMask, pos, rot);
}
inline float_t Unity::Cinemachine::CinemachineImpulseManager::get_CurrentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent* Unity::Cinemachine::CinemachineImpulseManager::NewImpulseEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"NewImpulseEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseManager::AddImpulseEvent(::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"AddImpulseEvent", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Unity::Cinemachine::CinemachineImpulseManager::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineImpulseManager* Unity::Cinemachine::CinemachineImpulseManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineImpulseManager*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineImpulseManager::CinemachineImpulseManager()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent.get_Expired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::*)()>(&::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::get_Expired)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaee471c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {"get_Expired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::*)(float_t, bool)>(&::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::Cancel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaee5440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {"Cancel", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent.DistanceDecay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::*)(float_t)>(&::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::DistanceDecay)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaee5480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {"DistanceDecay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent.GetDecayedSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::*)(::UnityEngine::Vector3, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::GetDecayedSignal)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0xaee4858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {"GetDecayedSignal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::*)()>(&::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::Clear)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaee47ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::*)()>(&::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee5104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_StartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_StartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartTime;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_set_StartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartTime = value;
}
constexpr ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_Envelope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Envelope;
}
constexpr ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition const& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_Envelope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Envelope;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_set_Envelope(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Envelope = value;
}
constexpr ::Unity::Cinemachine::ISignalSource6D*& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_SignalSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SignalSource;
}
constexpr ::Unity::Cinemachine::ISignalSource6D* const& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_SignalSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SignalSource;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_set_SignalSource(::Unity::Cinemachine::ISignalSource6D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SignalSource = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_Position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Position;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_Position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Position;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_set_Position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Position = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_DirectionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectionMode;
}
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes const& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_DirectionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectionMode;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_set_DirectionMode(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DirectionMode = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_Channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Channel;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_Channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Channel;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_set_Channel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Channel = value;
}
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_DissipationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissipationMode;
}
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes const& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_DissipationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissipationMode;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_set_DissipationMode(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DissipationMode = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_DissipationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissipationDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_DissipationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissipationDistance;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_set_DissipationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DissipationDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_CustomDissipation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomDissipation;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_CustomDissipation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomDissipation;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_set_CustomDissipation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomDissipation = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_PropagationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropagationSpeed;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_get_PropagationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropagationSpeed;
}
constexpr void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::__cordl_internal_set_PropagationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PropagationSpeed = value;
}
inline bool Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::get_Expired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {"get_Expired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::Cancel(float_t  time, bool  forceNoDecay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {"Cancel", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, forceNoDecay);
}
inline float_t Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::DistanceDecay(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {"DistanceDecay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, distance);
}
inline bool Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::GetDecayedSignal(::UnityEngine::Vector3  listenerPosition, bool  use2D, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {"GetDecayedSignal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, listenerPosition, use2D, pos, rot);
}
inline void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent* Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent::CinemachineImpulseManager_ImpulseEvent()   {
}
