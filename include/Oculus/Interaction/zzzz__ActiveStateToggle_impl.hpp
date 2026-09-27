#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateToggle.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_impl.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateToggle_StatePrecedence_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateToggle_def.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateToggle_StatePrecedence_def.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateToggle_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateToggle.get_Precedence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ActiveStateToggle_StatePrecedence (::Oculus::Interaction::ActiveStateToggle::*)()>(&::Oculus::Interaction::ActiveStateToggle::get_Precedence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40a4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"get_Precedence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateToggle.set_Precedence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateToggle::*)(::GlobalNamespace::ActiveStateToggle_StatePrecedence)>(&::Oculus::Interaction::ActiveStateToggle::set_Precedence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40a4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"set_Precedence", {}, {::i2c::type_of<::GlobalNamespace::ActiveStateToggle_StatePrecedence>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateToggle.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateToggle::*)()>(&::Oculus::Interaction::ActiveStateToggle::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa40a4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateToggle.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateToggle::*)()>(&::Oculus::Interaction::ActiveStateToggle::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40a594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateToggle.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::ActiveStateToggle::*)()>(&::Oculus::Interaction::ActiveStateToggle::get_Active)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa40a598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateToggle.InjectAllActiveStateToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateToggle::*)(::Oculus::Interaction::IActiveState*, ::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateToggle::InjectAllActiveStateToggle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa40a7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"InjectAllActiveStateToggle", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateToggle.InjectOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateToggle::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateToggle::InjectOn)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa40a7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"InjectOn", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateToggle.InjectOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateToggle::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateToggle::InjectOff)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa40a8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"InjectOff", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateToggle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateToggle::*)()>(&::Oculus::Interaction::ActiveStateToggle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get__on()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____on;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get__on() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____on;
}
constexpr void Oculus::Interaction::ActiveStateToggle::__cordl_internal_set__on(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____on = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get_On()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___On;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get_On() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___On;
}
constexpr void Oculus::Interaction::ActiveStateToggle::__cordl_internal_set_On(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___On = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get__off()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____off;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get__off() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____off;
}
constexpr void Oculus::Interaction::ActiveStateToggle::__cordl_internal_set__off(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____off = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get_Off()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Off;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get_Off() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Off;
}
constexpr void Oculus::Interaction::ActiveStateToggle::__cordl_internal_set_Off(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Off = value;
}
constexpr ::GlobalNamespace::ActiveStateToggle_StatePrecedence& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get__precedence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____precedence;
}
constexpr ::GlobalNamespace::ActiveStateToggle_StatePrecedence const& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get__precedence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____precedence;
}
constexpr void Oculus::Interaction::ActiveStateToggle::__cordl_internal_set__precedence(::GlobalNamespace::ActiveStateToggle_StatePrecedence  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____precedence = value;
}
constexpr bool& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get__internalActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalActive;
}
constexpr bool const& Oculus::Interaction::ActiveStateToggle::__cordl_internal_get__internalActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalActive;
}
constexpr void Oculus::Interaction::ActiveStateToggle::__cordl_internal_set__internalActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalActive = value;
}
inline ::GlobalNamespace::ActiveStateToggle_StatePrecedence Oculus::Interaction::ActiveStateToggle::get_Precedence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"get_Precedence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ActiveStateToggle_StatePrecedence>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateToggle::set_Precedence(::GlobalNamespace::ActiveStateToggle_StatePrecedence  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"set_Precedence", {}, {::i2c::type_of<::GlobalNamespace::ActiveStateToggle_StatePrecedence>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ActiveStateToggle::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateToggle::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::ActiveStateToggle::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateToggle::InjectAllActiveStateToggle(::Oculus::Interaction::IActiveState*  on, ::Oculus::Interaction::IActiveState*  off)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"InjectAllActiveStateToggle", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on, off);
}
inline void Oculus::Interaction::ActiveStateToggle::InjectOn(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"InjectOn", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateToggle::InjectOff(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {"InjectOff", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateToggle* Oculus::Interaction::ActiveStateToggle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateToggle*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::ActiveStateToggle::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::ActiveStateToggle::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateToggle::ActiveStateToggle()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateToggle_DebugModel.GetChildrenAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* (::Oculus::Interaction::ActiveStateToggle_DebugModel::*)(::Oculus::Interaction::ActiveStateToggle*)>(&::Oculus::Interaction::ActiveStateToggle_DebugModel::GetChildrenAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa40a988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle_DebugModel*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateToggle_DebugModel*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateToggle_DebugModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateToggle_DebugModel::*)()>(&::Oculus::Interaction::ActiveStateToggle_DebugModel::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa40aaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle_DebugModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* Oculus::Interaction::ActiveStateToggle_DebugModel::GetChildrenAsync(::Oculus::Interaction::ActiveStateToggle*  activeState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateToggle_DebugModel*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateToggle_DebugModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateToggle_DebugModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateToggle_DebugModel* Oculus::Interaction::ActiveStateToggle_DebugModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateToggle_DebugModel*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateToggle_DebugModel::ActiveStateToggle_DebugModel()   {
}
