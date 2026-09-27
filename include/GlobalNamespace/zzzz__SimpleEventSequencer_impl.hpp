#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleEventSequencer.hpp"
#include "GlobalNamespace/zzzz__SimpleEventSequencer_OnCompleteAction_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleEventSequencer_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__ServerTimeSyncRule_def.hpp"
#include "GlobalNamespace/zzzz__SimpleEventSequencer_OnCompleteAction_def.hpp"
#include "GlobalNamespace/zzzz__SimpleEventSequencer__StartSequenceDelayed_d__11_def.hpp"
#include "GlobalNamespace/zzzz__SimpleEventSequencer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.StartSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)()>(&::GlobalNamespace::SimpleEventSequencer::StartSequence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1f4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"StartSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.StartSequenceDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)(float_t)>(&::GlobalNamespace::SimpleEventSequencer::StartSequenceDelayed)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b1f4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"StartSequenceDelayed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.startSequenceImmediate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)()>(&::GlobalNamespace::SimpleEventSequencer::startSequenceImmediate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b1f588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"startSequenceImmediate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.startSequenceFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)(int32_t)>(&::GlobalNamespace::SimpleEventSequencer::startSequenceFrom)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b1f5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"startSequenceFrom", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)(int32_t)>(&::GlobalNamespace::SimpleEventSequencer::stop)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b1f5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"stop", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)()>(&::GlobalNamespace::SimpleEventSequencer::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b1f5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)()>(&::GlobalNamespace::SimpleEventSequencer::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b1f6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)()>(&::GlobalNamespace::SimpleEventSequencer::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b1f72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.IGorillaSliceableSimple_SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)()>(&::GlobalNamespace::SimpleEventSequencer::IGorillaSliceableSimple_SliceUpdate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5b1f738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.onValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)()>(&::GlobalNamespace::SimpleEventSequencer::onValueChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b1f898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"onValueChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.SetOnCompleteActionDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)()>(&::GlobalNamespace::SimpleEventSequencer::SetOnCompleteActionDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b1fa2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"SetOnCompleteActionDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.SetOnCompleteActionRepeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)()>(&::GlobalNamespace::SimpleEventSequencer::SetOnCompleteActionRepeat)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b1fa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"SetOnCompleteActionRepeat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.ClearOnCompleteAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)()>(&::GlobalNamespace::SimpleEventSequencer::ClearOnCompleteAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1fa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"ClearOnCompleteAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.TempAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)(::StringW)>(&::GlobalNamespace::SimpleEventSequencer::TempAudio)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b1fa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"TempAudio", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.TempVFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)(::StringW)>(&::GlobalNamespace::SimpleEventSequencer::TempVFX)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b1fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"TempVFX", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.Temp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)(::StringW)>(&::GlobalNamespace::SimpleEventSequencer::Temp)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b1fbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"Temp", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer.DebugLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)(::StringW)>(&::GlobalNamespace::SimpleEventSequencer::DebugLog)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b1fc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"DebugLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer::*)()>(&::GlobalNamespace::SimpleEventSequencer::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b1fd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*> const& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void GlobalNamespace::SimpleEventSequencer::__cordl_internal_set_nodes(::ArrayW<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr bool& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_startOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startOnEnable;
}
constexpr bool const& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_startOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startOnEnable;
}
constexpr void GlobalNamespace::SimpleEventSequencer::__cordl_internal_set_startOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startOnEnable = value;
}
constexpr ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction const& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void GlobalNamespace::SimpleEventSequencer::__cordl_internal_set_onComplete(::GlobalNamespace::SimpleEventSequencer_OnCompleteAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onComplete = value;
}
constexpr ::UnityW<::GlobalNamespace::ServerTimeSyncRule>& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_serverTimeSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverTimeSync;
}
constexpr ::UnityW<::GlobalNamespace::ServerTimeSyncRule> const& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_serverTimeSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverTimeSync;
}
constexpr void GlobalNamespace::SimpleEventSequencer::__cordl_internal_set_serverTimeSync(::UnityW<::GlobalNamespace::ServerTimeSyncRule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverTimeSync = value;
}
constexpr float_t& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr float_t const& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void GlobalNamespace::SimpleEventSequencer::__cordl_internal_set_startTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr int32_t& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_idx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idx;
}
constexpr int32_t const& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_idx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idx;
}
constexpr void GlobalNamespace::SimpleEventSequencer::__cordl_internal_set_idx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idx = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>*& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_enabledNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledNodes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>* const& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_enabledNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledNodes;
}
constexpr void GlobalNamespace::SimpleEventSequencer::__cordl_internal_set_enabledNodes(::System::Collections::Generic::List_1<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabledNodes = value;
}
constexpr ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_activeNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeNode;
}
constexpr ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode* const& GlobalNamespace::SimpleEventSequencer::__cordl_internal_get_activeNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeNode;
}
constexpr void GlobalNamespace::SimpleEventSequencer::__cordl_internal_set_activeNode(::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeNode = value;
}
inline void GlobalNamespace::SimpleEventSequencer::StartSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"StartSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer::StartSequenceDelayed(float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"StartSequenceDelayed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay);
}
inline void GlobalNamespace::SimpleEventSequencer::startSequenceImmediate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"startSequenceImmediate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer::startSequenceFrom(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"startSequenceFrom", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void GlobalNamespace::SimpleEventSequencer::stop(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"stop", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void GlobalNamespace::SimpleEventSequencer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer::IGorillaSliceableSimple_SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer::onValueChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"onValueChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer::SetOnCompleteActionDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"SetOnCompleteActionDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer::SetOnCompleteActionRepeat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"SetOnCompleteActionRepeat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer::ClearOnCompleteAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"ClearOnCompleteAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer::TempAudio(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"TempAudio", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::SimpleEventSequencer::TempVFX(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"TempVFX", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::SimpleEventSequencer::Temp(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"Temp", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::SimpleEventSequencer::DebugLog(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {"DebugLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::SimpleEventSequencer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleEventSequencer* GlobalNamespace::SimpleEventSequencer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleEventSequencer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::SimpleEventSequencer::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::SimpleEventSequencer::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleEventSequencer::SimpleEventSequencer()   {
}
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode.get_nameTrim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::*)()>(&::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_nameTrim)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b1fdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_nameTrim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode.get_notesTrim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::*)()>(&::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_notesTrim)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b1fe74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_notesTrim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::*)()>(&::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_Time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1fef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_Time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode.get_UnityEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::*)()>(&::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_UnityEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1fef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_UnityEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::*)()>(&::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode.set_TotalTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::*)(float_t)>(&::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::set_TotalTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"set_TotalTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::*)()>(&::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode.onValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::*)()>(&::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::onValueChanged)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5b1f910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"onValueChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::*)()>(&::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b1ff18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr bool const& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr void GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_set_enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabled = value;
}
constexpr float_t& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr float_t const& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr void GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_set_time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___time = value;
}
constexpr ::StringW& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_unityEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_unityEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr void GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityEvent = value;
}
constexpr ::StringW& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_notes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notes;
}
constexpr ::StringW const& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_notes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notes;
}
constexpr void GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_set_notes(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notes = value;
}
constexpr ::StringW& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_fancyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fancyName;
}
constexpr ::StringW const& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_fancyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fancyName;
}
constexpr void GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_set_fancyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fancyName = value;
}
constexpr float_t& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_totalTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalTime;
}
constexpr float_t const& GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_get_totalTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalTime;
}
constexpr void GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::__cordl_internal_set_totalTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalTime = value;
}
inline ::StringW GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_nameTrim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_nameTrim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_notesTrim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_notesTrim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_Time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_Time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_UnityEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_UnityEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::set_TotalTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"set_TotalTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::onValueChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {"onValueChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode* GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleEventSequencer_SimpleEventSequencerNode::SimpleEventSequencer_SimpleEventSequencerNode()   {
}
