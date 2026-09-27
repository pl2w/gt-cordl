#pragma once
// IWYU pragma private; include "GlobalNamespace/TimedUnityEventDispatcher.hpp"
#include "GlobalNamespace/zzzz__TimedUnityEventDispatcher_ReadyState_impl.hpp"
#include "GlobalNamespace/zzzz__TimedUnityEventDispatcher_TimedUnityEventDispatcherMode_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimedUnityEventDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__TimedUnityEventDispatcher_ReadyState_def.hpp"
#include "GlobalNamespace/zzzz__TimedUnityEventDispatcher_TimedUnityEventDispatcherMode_def.hpp"
#include "GlobalNamespace/zzzz__TimedUnityEventDispatcher__Initialize_d__10_def.hpp"
#include "GlobalNamespace/zzzz__TimedUnityEventDispatcher_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher::*)()>(&::GlobalNamespace::TimedUnityEventDispatcher::Initialize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b34ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher.onDateRetrieved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher::*)(::StringW)>(&::GlobalNamespace::TimedUnityEventDispatcher::onDateRetrieved)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5b34d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"onDateRetrieved", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher.StartNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher::*)(float_t)>(&::GlobalNamespace::TimedUnityEventDispatcher::StartNow)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b35090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"StartNow", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher.setStartDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher::*)(::System::DateTime)>(&::GlobalNamespace::TimedUnityEventDispatcher::setStartDate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b34f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"setStartDate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher.onTDError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::TimedUnityEventDispatcher::onTDError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b35158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher::*)()>(&::GlobalNamespace::TimedUnityEventDispatcher::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b351f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher::*)()>(&::GlobalNamespace::TimedUnityEventDispatcher::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b35214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher.IGorillaSliceableSimple_SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher::*)()>(&::GlobalNamespace::TimedUnityEventDispatcher::IGorillaSliceableSimple_SliceUpdate)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5b35220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher::*)()>(&::GlobalNamespace::TimedUnityEventDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b35710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode const& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_set_mode(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::StringW& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_dateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTime;
}
constexpr ::StringW const& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_dateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTime;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_set_dateTime(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dateTime = value;
}
constexpr ::StringW& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_titleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr ::StringW const& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_titleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_set_titleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleDataKey = value;
}
constexpr ::ArrayW<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*> const& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_set_nodes(::ArrayW<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_readyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyState;
}
constexpr ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState const& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_readyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyState;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_set_readyState(::GlobalNamespace::TimedUnityEventDispatcher_ReadyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyState = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>*& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_nodeList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>* const& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_nodeList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeList;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_set_nodeList(::System::Collections::Generic::List_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeList = value;
}
constexpr int32_t& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_activeNodeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeNodeIndex;
}
constexpr int32_t const& GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_get_activeNodeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeNodeIndex;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher::__cordl_internal_set_activeNodeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeNodeIndex = value;
}
inline void GlobalNamespace::TimedUnityEventDispatcher::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimedUnityEventDispatcher::onDateRetrieved(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"onDateRetrieved", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void GlobalNamespace::TimedUnityEventDispatcher::StartNow(float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"StartNow", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay);
}
inline void GlobalNamespace::TimedUnityEventDispatcher::setStartDate(::System::DateTime  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"setStartDate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline void GlobalNamespace::TimedUnityEventDispatcher::onTDError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::TimedUnityEventDispatcher::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimedUnityEventDispatcher::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimedUnityEventDispatcher::IGorillaSliceableSimple_SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimedUnityEventDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TimedUnityEventDispatcher* GlobalNamespace::TimedUnityEventDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TimedUnityEventDispatcher*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::TimedUnityEventDispatcher::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::TimedUnityEventDispatcher::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimedUnityEventDispatcher::TimedUnityEventDispatcher()   {
}
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.get_SubphaseOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)()>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::get_SubphaseOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b35798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"get_SubphaseOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.get_ActivationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)()>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::get_ActivationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b357a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"get_ActivationTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.set_ActivationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)(::System::DateTime)>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::set_ActivationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b357a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"set_ActivationTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.get_ActivationDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)()>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::get_ActivationDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b357b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"get_ActivationDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.set_ActivationDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)(::System::TimeSpan)>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::set_ActivationDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b357b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"set_ActivationDelay", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)(::System::DateTime)>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::Initialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b350dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)()>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::Initialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b357c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)(::System::DateTime)>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::Activate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b355e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"Activate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)()>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::Activate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b35708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"Activate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)(float_t)>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::Activate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b35808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"Activate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.ActivatePersistent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)(float_t)>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::ActivatePersistent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b3569c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"ActivatePersistent", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode.System_IComparable_TimedUnityEventDispatcher_TimedUnityEventDispatcherNode__CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*)>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::System_IComparable_TimedUnityEventDispatcher_TimedUnityEventDispatcherNode__CompareTo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b35890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"System.IComparable<TimedUnityEventDispatcher.TimedUnityEventDispatcherNode>.CompareTo", {}, {::i2c::type_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::*)()>(&::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b35904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_subphase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subphase;
}
constexpr int32_t const& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_subphase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subphase;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_set_subphase(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subphase = value;
}
constexpr bool& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_afterEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterEvent;
}
constexpr bool const& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_afterEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterEvent;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_set_afterEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___afterEvent = value;
}
constexpr int32_t& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_hrs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hrs;
}
constexpr int32_t const& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_hrs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hrs;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_set_hrs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hrs = value;
}
constexpr int32_t& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr int32_t const& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_set_min(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr int32_t& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_sec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sec;
}
constexpr int32_t const& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_sec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sec;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_set_sec(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sec = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_set_payload(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___payload = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_persistantPayload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistantPayload;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get_persistantPayload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistantPayload;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_set_persistantPayload(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___persistantPayload = value;
}
constexpr ::System::DateTime& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get__ActivationTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActivationTime_k__BackingField;
}
constexpr ::System::DateTime const& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get__ActivationTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActivationTime_k__BackingField;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_set__ActivationTime_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActivationTime_k__BackingField = value;
}
constexpr ::System::TimeSpan& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get__ActivationDelay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActivationDelay_k__BackingField;
}
constexpr ::System::TimeSpan const& GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_get__ActivationDelay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActivationDelay_k__BackingField;
}
constexpr void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::__cordl_internal_set__ActivationDelay_k__BackingField(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActivationDelay_k__BackingField = value;
}
inline int32_t GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::get_SubphaseOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"get_SubphaseOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::DateTime GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::get_ActivationTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"get_ActivationTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::set_ActivationTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"set_ActivationTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::TimeSpan GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::get_ActivationDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"get_ActivationDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::set_ActivationDelay(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"set_ActivationDelay", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::Initialize(::System::DateTime  refTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, refTime);
}
inline void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::Activate(::System::DateTime  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"Activate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, now);
}
inline void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::Activate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"Activate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::Activate(float_t  late)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"Activate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, late);
}
inline void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::ActivatePersistent(float_t  late)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"ActivatePersistent", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, late);
}
inline int32_t GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::System_IComparable_TimedUnityEventDispatcher_TimedUnityEventDispatcherNode__CompareTo(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {"System.IComparable<TimedUnityEventDispatcher.TimedUnityEventDispatcherNode>.CompareTo", {}, {::i2c::type_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline void GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode* GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>());
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>"
constexpr  GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::operator ::System::IComparable_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>*() noexcept {
return static_cast<::System::IComparable_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>"
constexpr ::System::IComparable_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>* GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::i___System__IComparable_1___GlobalNamespace__TimedUnityEventDispatcher_TimedUnityEventDispatcherNode__() noexcept {
return static_cast<::System::IComparable_1<::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode::TimedUnityEventDispatcher_TimedUnityEventDispatcherNode()   {
}
