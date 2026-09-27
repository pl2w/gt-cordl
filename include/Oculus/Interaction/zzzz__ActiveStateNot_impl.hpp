#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateNot.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateNot_def.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateNot_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateNot.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateNot::*)()>(&::Oculus::Interaction::ActiveStateNot::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa409ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateNot.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateNot::*)()>(&::Oculus::Interaction::ActiveStateNot::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa409b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateNot.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::ActiveStateNot::*)()>(&::Oculus::Interaction::ActiveStateNot::get_Active)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa409b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateNot.InjectAllActiveStateNot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateNot::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateNot::InjectAllActiveStateNot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa409bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(),
                        {"InjectAllActiveStateNot", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateNot.InjectActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateNot::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateNot::InjectActiveState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa409bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateNot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateNot::*)()>(&::Oculus::Interaction::ActiveStateNot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa409ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::ActiveStateNot::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::ActiveStateNot::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::ActiveStateNot::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::ActiveStateNot::__cordl_internal_get_ActiveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::ActiveStateNot::__cordl_internal_get_ActiveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr void Oculus::Interaction::ActiveStateNot::__cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveState = value;
}
inline void Oculus::Interaction::ActiveStateNot::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateNot::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::ActiveStateNot::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateNot::InjectAllActiveStateNot(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(),
                        {"InjectAllActiveStateNot", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateNot::InjectActiveState(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateNot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateNot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateNot* Oculus::Interaction::ActiveStateNot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateNot*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::ActiveStateNot::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::ActiveStateNot::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateNot::ActiveStateNot()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateNot_DebugModel.GetChildrenAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* (::Oculus::Interaction::ActiveStateNot_DebugModel::*)(::Oculus::Interaction::ActiveStateNot*)>(&::Oculus::Interaction::ActiveStateNot_DebugModel::GetChildrenAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa409cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateNot_DebugModel*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateNot_DebugModel*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateNot_DebugModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateNot_DebugModel::*)()>(&::Oculus::Interaction::ActiveStateNot_DebugModel::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa409d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateNot_DebugModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* Oculus::Interaction::ActiveStateNot_DebugModel::GetChildrenAsync(::Oculus::Interaction::ActiveStateNot*  activeState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateNot_DebugModel*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateNot_DebugModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateNot_DebugModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateNot_DebugModel* Oculus::Interaction::ActiveStateNot_DebugModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateNot_DebugModel*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateNot_DebugModel::ActiveStateNot_DebugModel()   {
}
