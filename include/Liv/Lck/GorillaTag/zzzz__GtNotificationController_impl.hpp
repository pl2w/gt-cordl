#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtNotificationController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtNotificationController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtNotificationController_def.hpp"
#include "Liv/Lck/Recorder/zzzz__RecordingData_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtNotificationController::*)()>(&::Liv::Lck::GorillaTag::GtNotificationController::Start)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d23a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtNotificationController::*)()>(&::Liv::Lck::GorillaTag::GtNotificationController::OnEnable)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x9d23ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtNotificationController::*)()>(&::Liv::Lck::GorillaTag::GtNotificationController::OnDisable)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x9d23c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController.OnRecordingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtNotificationController::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::GorillaTag::GtNotificationController::OnRecordingStarted)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d23e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController.OnRecordingSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtNotificationController::*)(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*)>(&::Liv::Lck::GorillaTag::GtNotificationController::OnRecordingSaved)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9d23fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"OnRecordingSaved", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController.NotificationTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::GorillaTag::GtNotificationController::*)()>(&::Liv::Lck::GorillaTag::GtNotificationController::NotificationTimer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d24128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"NotificationTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController.SetHiddenObjectsState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtNotificationController::*)(bool)>(&::Liv::Lck::GorillaTag::GtNotificationController::SetHiddenObjectsState)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9d23e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"SetHiddenObjectsState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtNotificationController::*)()>(&::Liv::Lck::GorillaTag::GtNotificationController::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d241bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__ui()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ui;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__ui() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ui;
}
constexpr void Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_set__ui(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ui = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__questMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questMessage;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__questMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questMessage;
}
constexpr void Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_set__questMessage(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____questMessage = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__pcMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pcMessage;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__pcMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pcMessage;
}
constexpr void Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_set__pcMessage(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pcMessage = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__notificationShowDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationShowDuration;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__notificationShowDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationShowDuration;
}
constexpr void Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_set__notificationShowDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notificationShowDuration = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__hiddenDuringNotification()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hiddenDuringNotification;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__hiddenDuringNotification() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hiddenDuringNotification;
}
constexpr void Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_set__hiddenDuringNotification(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hiddenDuringNotification = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__hiddenObjectsState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hiddenObjectsState;
}
constexpr bool const& Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_get__hiddenObjectsState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hiddenObjectsState;
}
constexpr void Liv::Lck::GorillaTag::GtNotificationController::__cordl_internal_set__hiddenObjectsState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hiddenObjectsState = value;
}
inline void Liv::Lck::GorillaTag::GtNotificationController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtNotificationController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtNotificationController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtNotificationController::OnRecordingStarted(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::GorillaTag::GtNotificationController::OnRecordingSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"OnRecordingSaved", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Collections::IEnumerator* Liv::Lck::GorillaTag::GtNotificationController::NotificationTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"NotificationTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtNotificationController::SetHiddenObjectsState(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {"SetHiddenObjectsState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Liv::Lck::GorillaTag::GtNotificationController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtNotificationController* Liv::Lck::GorillaTag::GtNotificationController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtNotificationController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtNotificationController::GtNotificationController()   {
}
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::*)(int32_t)>(&::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d24194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::*)()>(&::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d24254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::*)()>(&::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::MoveNext)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9d24258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::*)()>(&::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2433c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::*)()>(&::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d24344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::*)()>(&::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2437c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtNotificationController>& Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtNotificationController> const& Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::__cordl_internal_set___4__this(::UnityW<::Liv::Lck::GorillaTag::GtNotificationController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12* Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12::GtNotificationController__NotificationTimer_d__12()   {
}
