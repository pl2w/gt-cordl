#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClickDetector_def.hpp"
#include "UnityEngine/UIElements/zzzz__DispatchMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_DispatchContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_EventRecord_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDispatchState_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.get_pointerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PointerDispatchState* (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::get_pointerState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb88c324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"get_pointerState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.CreateDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventDispatcher* (*)()>(&::UnityEngine::UIElements::EventDispatcher::CreateDefault)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb88c32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"CreateDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb88c37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.get_dispatchImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::get_dispatchImmediately)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb88c4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"get_dispatchImmediately", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.set_processingEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(bool)>(&::UnityEngine::UIElements::EventDispatcher::set_processingEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb88c508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"set_processingEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::DispatchMode)>(&::UnityEngine::UIElements::EventDispatcher::Dispatch)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb88c510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"Dispatch", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.HandleRecursiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::EventDispatcher::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::EventDispatcher::HandleRecursiveState)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0xb88ca08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"HandleRecursiveState", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.CloseGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::CloseGate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb88c0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"CloseGate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.OpenGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::OpenGate)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb88c0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"OpenGate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.ProcessEventQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::ProcessEventQueue)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xb88ce24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"ProcessEventQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.ProcessEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*)>(&::UnityEngine::UIElements::EventDispatcher::ProcessEvent)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xb88c748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"ProcessEvent", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::ClickDetector*& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_ClickDetector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickDetector;
}
constexpr ::UnityEngine::UIElements::ClickDetector* const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_ClickDetector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickDetector;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_ClickDetector(::UnityEngine::UIElements::ClickDetector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClickDetector = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_Queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Queue;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>* const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_Queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Queue;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_Queue(::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Queue = value;
}
constexpr ::UnityEngine::UIElements::PointerDispatchState*& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get__pointerState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerState_k__BackingField;
}
constexpr ::UnityEngine::UIElements::PointerDispatchState* const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get__pointerState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerState_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set__pointerState_k__BackingField(::UnityEngine::UIElements::PointerDispatchState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerState_k__BackingField = value;
}
constexpr uint32_t& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_GateCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GateCount;
}
constexpr uint32_t const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_GateCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GateCount;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_GateCount(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GateCount = value;
}
constexpr uint32_t& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_GateDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GateDepth;
}
constexpr uint32_t const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_GateDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GateDepth;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_GateDepth(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GateDepth = value;
}
constexpr int32_t& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_DispatchStackFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DispatchStackFrame;
}
constexpr int32_t const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_DispatchStackFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DispatchStackFrame;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_DispatchStackFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DispatchStackFrame = value;
}
constexpr ::UnityEngine::UIElements::EventBase*& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_CurrentEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentEvent;
}
constexpr ::UnityEngine::UIElements::EventBase* const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_CurrentEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentEvent;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_CurrentEvent(::UnityEngine::UIElements::EventBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentEvent = value;
}
constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::EventDispatcher_DispatchContext>*& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_DispatchContexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DispatchContexts;
}
constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::EventDispatcher_DispatchContext>* const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_DispatchContexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DispatchContexts;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_DispatchContexts(::System::Collections::Generic::Stack_1<::GlobalNamespace::EventDispatcher_DispatchContext>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DispatchContexts = value;
}
constexpr bool& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_Immediate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Immediate;
}
constexpr bool const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_Immediate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Immediate;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_Immediate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Immediate = value;
}
constexpr bool& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get__processingEvents_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processingEvents_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get__processingEvents_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processingEvents_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set__processingEvents_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____processingEvents_k__BackingField = value;
}
inline void UnityEngine::UIElements::EventDispatcher::setStaticF_k_EventQueuePool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*>*, "k_EventQueuePool", ::UnityEngine::UIElements::EventDispatcher*>(std::forward<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*>*>(value));
}
inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*>* UnityEngine::UIElements::EventDispatcher::getStaticF_k_EventQueuePool()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*>*, "k_EventQueuePool", ::UnityEngine::UIElements::EventDispatcher*>();
}
inline ::UnityEngine::UIElements::PointerDispatchState* UnityEngine::UIElements::EventDispatcher::get_pointerState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"get_pointerState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerDispatchState*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::EventDispatcher::CreateDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"CreateDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventDispatcher*>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventDispatcher::get_dispatchImmediately()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"get_dispatchImmediately", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::set_processingEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"set_processingEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventDispatcher::Dispatch(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, ::UnityEngine::UIElements::DispatchMode  dispatchMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"Dispatch", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, panel, dispatchMode);
}
inline bool UnityEngine::UIElements::EventDispatcher::HandleRecursiveState(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"HandleRecursiveState", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::EventDispatcher::CloseGate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"CloseGate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::OpenGate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"OpenGate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::ProcessEventQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"ProcessEventQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::ProcessEvent(::UnityEngine::UIElements::EventBase*  evt, /* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher*>(),
                        {"ProcessEvent", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, panel);
}
/// @brief [Obsolete("Please use EventDispatcher.CreateDefault().")]
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::EventDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventDispatcher*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventDispatcher::EventDispatcher()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventDispatcher___c::*)()>(&::UnityEngine::UIElements::EventDispatcher___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb88d344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher___c.__cctor_b__35_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>* (::UnityEngine::UIElements::EventDispatcher___c::*)()>(&::UnityEngine::UIElements::EventDispatcher___c::__cctor_b__35_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb88d34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher___c*>(),
                        {"<.cctor>b__35_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::EventDispatcher___c::setStaticF___9(::UnityEngine::UIElements::EventDispatcher___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::EventDispatcher___c*, "<>9", ::UnityEngine::UIElements::EventDispatcher___c*>(std::forward<::UnityEngine::UIElements::EventDispatcher___c*>(value));
}
inline ::UnityEngine::UIElements::EventDispatcher___c* UnityEngine::UIElements::EventDispatcher___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventDispatcher___c*, "<>9", ::UnityEngine::UIElements::EventDispatcher___c*>();
}
inline void UnityEngine::UIElements::EventDispatcher___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>* UnityEngine::UIElements::EventDispatcher___c::__cctor_b__35_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventDispatcher___c*>(),
                        {"<.cctor>b__35_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventDispatcher___c* UnityEngine::UIElements::EventDispatcher___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventDispatcher___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventDispatcher___c::EventDispatcher___c()   {
}
