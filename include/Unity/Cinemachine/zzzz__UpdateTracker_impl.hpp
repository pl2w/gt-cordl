#pragma once
// IWYU pragma private; include "Unity/Cinemachine/UpdateTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__UpdateTracker_UpdateClock_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "Unity/Cinemachine/zzzz__UpdateTracker_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__UpdateTracker_UpdateClock_def.hpp"
#include "Unity/Cinemachine/zzzz__UpdateTracker_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::UpdateTracker.InitializeModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::UpdateTracker::InitializeModule)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaec1aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {"InitializeModule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UpdateTracker.UpdateTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::UpdateTracker_UpdateClock)>(&::Unity::Cinemachine::UpdateTracker::UpdateTargets)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xaec1b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {"UpdateTargets", {}, {::i2c::type_of<::GlobalNamespace::UpdateTracker_UpdateClock>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UpdateTracker.GetPreferredUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UpdateTracker_UpdateClock (*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::UpdateTracker::GetPreferredUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xaec1fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {"GetPreferredUpdate", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UpdateTracker.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::UpdateTracker_UpdateClock, ::System::Object*)>(&::Unity::Cinemachine::UpdateTracker::OnUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaec21e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::GlobalNamespace::UpdateTracker_UpdateClock>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UpdateTracker.ForgetContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Unity::Cinemachine::UpdateTracker::ForgetContext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaec22a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {"ForgetContext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UpdateTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::UpdateTracker::*)()>(&::Unity::Cinemachine::UpdateTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec2338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::UpdateTracker::setStaticF_s_UpdateStatus(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::UpdateTracker_UpdateStatus*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::UpdateTracker_UpdateStatus*>*, "s_UpdateStatus", ::Unity::Cinemachine::UpdateTracker*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::UpdateTracker_UpdateStatus*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::UpdateTracker_UpdateStatus*>* Unity::Cinemachine::UpdateTracker::getStaticF_s_UpdateStatus()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::UpdateTracker_UpdateStatus*>*, "s_UpdateStatus", ::Unity::Cinemachine::UpdateTracker*>();
}
inline void Unity::Cinemachine::UpdateTracker::setStaticF_s_ToDelete(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "s_ToDelete", ::Unity::Cinemachine::UpdateTracker*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* Unity::Cinemachine::UpdateTracker::getStaticF_s_ToDelete()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "s_ToDelete", ::Unity::Cinemachine::UpdateTracker*>();
}
inline void Unity::Cinemachine::UpdateTracker::setStaticF_s_LastUpdateContext(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_LastUpdateContext", ::Unity::Cinemachine::UpdateTracker*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Unity::Cinemachine::UpdateTracker::getStaticF_s_LastUpdateContext()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_LastUpdateContext", ::Unity::Cinemachine::UpdateTracker*>();
}
inline void Unity::Cinemachine::UpdateTracker::InitializeModule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {"InitializeModule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::UpdateTracker::UpdateTargets(::GlobalNamespace::UpdateTracker_UpdateClock  currentClock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {"UpdateTargets", {}, {::i2c::type_of<::GlobalNamespace::UpdateTracker_UpdateClock>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentClock);
}
inline ::GlobalNamespace::UpdateTracker_UpdateClock Unity::Cinemachine::UpdateTracker::GetPreferredUpdate(::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {"GetPreferredUpdate", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UpdateTracker_UpdateClock>(nullptr, ___internal_method, target);
}
inline void Unity::Cinemachine::UpdateTracker::OnUpdate(::GlobalNamespace::UpdateTracker_UpdateClock  currentClock, ::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::GlobalNamespace::UpdateTracker_UpdateClock>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentClock, context);
}
inline void Unity::Cinemachine::UpdateTracker::ForgetContext(::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {"ForgetContext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context);
}
inline void Unity::Cinemachine::UpdateTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::UpdateTracker* Unity::Cinemachine::UpdateTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::UpdateTracker*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::UpdateTracker::UpdateTracker()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::UpdateTracker_UpdateStatus.get_PreferredUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UpdateTracker_UpdateClock (::Unity::Cinemachine::UpdateTracker_UpdateStatus::*)()>(&::Unity::Cinemachine::UpdateTracker_UpdateStatus::get_PreferredUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec2430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker_UpdateStatus*>(),
                        {"get_PreferredUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UpdateTracker_UpdateStatus.set_PreferredUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::UpdateTracker_UpdateStatus::*)(::GlobalNamespace::UpdateTracker_UpdateClock)>(&::Unity::Cinemachine::UpdateTracker_UpdateStatus::set_PreferredUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec2438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker_UpdateStatus*>(),
                        {"set_PreferredUpdate", {}, {::i2c::type_of<::GlobalNamespace::UpdateTracker_UpdateClock>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UpdateTracker_UpdateStatus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::UpdateTracker_UpdateStatus::*)(int32_t, ::UnityEngine::Matrix4x4)>(&::Unity::Cinemachine::UpdateTracker_UpdateStatus::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaec2190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker_UpdateStatus*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::UpdateTracker_UpdateStatus.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::UpdateTracker_UpdateStatus::*)(int32_t, ::GlobalNamespace::UpdateTracker_UpdateClock, ::UnityEngine::Matrix4x4)>(&::Unity::Cinemachine::UpdateTracker_UpdateStatus::OnUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xaec1e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker_UpdateStatus*>(),
                        {"OnUpdate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::UpdateTracker_UpdateClock>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_WindowStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WindowStart;
}
constexpr int32_t const& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_WindowStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WindowStart;
}
constexpr void Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_set_m_WindowStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WindowStart = value;
}
constexpr int32_t& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_NumWindowLateUpdateMoves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumWindowLateUpdateMoves;
}
constexpr int32_t const& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_NumWindowLateUpdateMoves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumWindowLateUpdateMoves;
}
constexpr void Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_set_m_NumWindowLateUpdateMoves(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NumWindowLateUpdateMoves = value;
}
constexpr int32_t& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_NumWindowFixedUpdateMoves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumWindowFixedUpdateMoves;
}
constexpr int32_t const& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_NumWindowFixedUpdateMoves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumWindowFixedUpdateMoves;
}
constexpr void Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_set_m_NumWindowFixedUpdateMoves(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NumWindowFixedUpdateMoves = value;
}
constexpr int32_t& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_NumWindows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumWindows;
}
constexpr int32_t const& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_NumWindows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumWindows;
}
constexpr void Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_set_m_NumWindows(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NumWindows = value;
}
constexpr int32_t& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_LastFrameUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameUpdated;
}
constexpr int32_t const& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_LastFrameUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameUpdated;
}
constexpr void Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_set_m_LastFrameUpdated(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastFrameUpdated = value;
}
constexpr ::UnityEngine::Matrix4x4& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_LastPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPos;
}
constexpr ::UnityEngine::Matrix4x4 const& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get_m_LastPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPos;
}
constexpr void Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_set_m_LastPos(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastPos = value;
}
constexpr ::GlobalNamespace::UpdateTracker_UpdateClock& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get__PreferredUpdate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreferredUpdate_k__BackingField;
}
constexpr ::GlobalNamespace::UpdateTracker_UpdateClock const& Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_get__PreferredUpdate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreferredUpdate_k__BackingField;
}
constexpr void Unity::Cinemachine::UpdateTracker_UpdateStatus::__cordl_internal_set__PreferredUpdate_k__BackingField(::GlobalNamespace::UpdateTracker_UpdateClock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreferredUpdate_k__BackingField = value;
}
inline ::GlobalNamespace::UpdateTracker_UpdateClock Unity::Cinemachine::UpdateTracker_UpdateStatus::get_PreferredUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker_UpdateStatus*>(),
                        {"get_PreferredUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UpdateTracker_UpdateClock>(this, ___internal_method);
}
inline void Unity::Cinemachine::UpdateTracker_UpdateStatus::set_PreferredUpdate(::GlobalNamespace::UpdateTracker_UpdateClock  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker_UpdateStatus*>(),
                        {"set_PreferredUpdate", {}, {::i2c::type_of<::GlobalNamespace::UpdateTracker_UpdateClock>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::UpdateTracker_UpdateStatus::_ctor(int32_t  currentFrame, ::UnityEngine::Matrix4x4  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker_UpdateStatus*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentFrame, pos);
}
inline void Unity::Cinemachine::UpdateTracker_UpdateStatus::OnUpdate(int32_t  currentFrame, ::GlobalNamespace::UpdateTracker_UpdateClock  currentClock, ::UnityEngine::Matrix4x4  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UpdateTracker_UpdateStatus*>(),
                        {"OnUpdate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::UpdateTracker_UpdateClock>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentFrame, currentClock, pos);
}
inline ::Unity::Cinemachine::UpdateTracker_UpdateStatus* Unity::Cinemachine::UpdateTracker_UpdateStatus::New_ctor(int32_t  currentFrame, ::UnityEngine::Matrix4x4  pos)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::UpdateTracker_UpdateStatus*>(currentFrame, pos));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::UpdateTracker_UpdateStatus::UpdateTracker_UpdateStatus()   {
}
