#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/SequenceActiveState.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__SequenceActiveState_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__SequenceActiveState_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__Sequence_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::SequenceActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::SequenceActiveState::*)()>(&::Oculus::Interaction::PoseDetection::SequenceActiveState::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4a4a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::SequenceActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::SequenceActiveState::*)()>(&::Oculus::Interaction::PoseDetection::SequenceActiveState::get_Active)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4a4a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::SequenceActiveState.InjectAllSequenceActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::SequenceActiveState::*)(::Oculus::Interaction::PoseDetection::Sequence*, bool, bool)>(&::Oculus::Interaction::PoseDetection::SequenceActiveState::InjectAllSequenceActiveState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa4a4a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {"InjectAllSequenceActiveState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::Sequence*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::SequenceActiveState.InjectSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::SequenceActiveState::*)(::Oculus::Interaction::PoseDetection::Sequence*)>(&::Oculus::Interaction::PoseDetection::SequenceActiveState::InjectSequence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {"InjectSequence", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::Sequence*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::SequenceActiveState.InjectActivateIfStepsStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::SequenceActiveState::*)(bool)>(&::Oculus::Interaction::PoseDetection::SequenceActiveState::InjectActivateIfStepsStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {"InjectActivateIfStepsStarted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::SequenceActiveState.InjectActivateIfStepsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::SequenceActiveState::*)(bool)>(&::Oculus::Interaction::PoseDetection::SequenceActiveState::InjectActivateIfStepsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {"InjectActivateIfStepsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::SequenceActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::SequenceActiveState::*)()>(&::Oculus::Interaction::PoseDetection::SequenceActiveState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4a4ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Sequence>& Oculus::Interaction::PoseDetection::SequenceActiveState::__cordl_internal_get__sequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sequence;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Sequence> const& Oculus::Interaction::PoseDetection::SequenceActiveState::__cordl_internal_get__sequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sequence;
}
constexpr void Oculus::Interaction::PoseDetection::SequenceActiveState::__cordl_internal_set__sequence(::UnityW<::Oculus::Interaction::PoseDetection::Sequence>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sequence = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::SequenceActiveState::__cordl_internal_get__activateIfStepsStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateIfStepsStarted;
}
constexpr bool const& Oculus::Interaction::PoseDetection::SequenceActiveState::__cordl_internal_get__activateIfStepsStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateIfStepsStarted;
}
constexpr void Oculus::Interaction::PoseDetection::SequenceActiveState::__cordl_internal_set__activateIfStepsStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateIfStepsStarted = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::SequenceActiveState::__cordl_internal_get__activateIfStepsComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateIfStepsComplete;
}
constexpr bool const& Oculus::Interaction::PoseDetection::SequenceActiveState::__cordl_internal_get__activateIfStepsComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateIfStepsComplete;
}
constexpr void Oculus::Interaction::PoseDetection::SequenceActiveState::__cordl_internal_set__activateIfStepsComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateIfStepsComplete = value;
}
inline void Oculus::Interaction::PoseDetection::SequenceActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::SequenceActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::SequenceActiveState::InjectAllSequenceActiveState(::Oculus::Interaction::PoseDetection::Sequence*  sequence, bool  activateIfStepsStarted, bool  activateIfStepsComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {"InjectAllSequenceActiveState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::Sequence*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sequence, activateIfStepsStarted, activateIfStepsComplete);
}
inline void Oculus::Interaction::PoseDetection::SequenceActiveState::InjectSequence(::Oculus::Interaction::PoseDetection::Sequence*  sequence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {"InjectSequence", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::Sequence*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sequence);
}
inline void Oculus::Interaction::PoseDetection::SequenceActiveState::InjectActivateIfStepsStarted(bool  activateIfStepsStarted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {"InjectActivateIfStepsStarted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activateIfStepsStarted);
}
inline void Oculus::Interaction::PoseDetection::SequenceActiveState::InjectActivateIfStepsComplete(bool  activateIfStepsComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {"InjectActivateIfStepsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activateIfStepsComplete);
}
inline void Oculus::Interaction::PoseDetection::SequenceActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::SequenceActiveState* Oculus::Interaction::PoseDetection::SequenceActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::SequenceActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::PoseDetection::SequenceActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::SequenceActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::SequenceActiveState::SequenceActiveState()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel.GetChildrenAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* (::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel::*)(::Oculus::Interaction::PoseDetection::SequenceActiveState*)>(&::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel::GetChildrenAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4a4ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel::*)()>(&::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4a4bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel::GetChildrenAsync(::Oculus::Interaction::PoseDetection::SequenceActiveState*  activeState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel* Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::SequenceActiveState_DebugModel::SequenceActiveState_DebugModel()   {
}
