#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateTracker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateTracker_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateTracker.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateTracker::*)()>(&::Oculus::Interaction::ActiveStateTracker::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa40aaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateTracker.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateTracker::*)()>(&::Oculus::Interaction::ActiveStateTracker::Start)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa40ab58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateTracker.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateTracker::*)()>(&::Oculus::Interaction::ActiveStateTracker::Update)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa40ad74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateTracker.SetDependentsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateTracker::*)(bool)>(&::Oculus::Interaction::ActiveStateTracker::SetDependentsActive)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa40ac74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"SetDependentsActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateTracker.InjectAllActiveStateTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateTracker::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateTracker::InjectAllActiveStateTracker)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40ae3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"InjectAllActiveStateTracker", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateTracker.InjectActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateTracker::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateTracker::InjectActiveState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa40ae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateTracker.InjectOptionalIncludeChildrenAsDependents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateTracker::*)(bool)>(&::Oculus::Interaction::ActiveStateTracker::InjectOptionalIncludeChildrenAsDependents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"InjectOptionalIncludeChildrenAsDependents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateTracker.InjectOptionalGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateTracker::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::Oculus::Interaction::ActiveStateTracker::InjectOptionalGameObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"InjectOptionalGameObjects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateTracker.InjectOptionalMonoBehaviours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateTracker::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*)>(&::Oculus::Interaction::ActiveStateTracker::InjectOptionalMonoBehaviours)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"InjectOptionalMonoBehaviours", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateTracker::*)()>(&::Oculus::Interaction::ActiveStateTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::ActiveStateTracker::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get_ActiveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get_ActiveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr void Oculus::Interaction::ActiveStateTracker::__cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveState = value;
}
constexpr bool& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get__includeChildrenAsDependents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____includeChildrenAsDependents;
}
constexpr bool const& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get__includeChildrenAsDependents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____includeChildrenAsDependents;
}
constexpr void Oculus::Interaction::ActiveStateTracker::__cordl_internal_set__includeChildrenAsDependents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____includeChildrenAsDependents = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get__gameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get__gameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameObjects;
}
constexpr void Oculus::Interaction::ActiveStateTracker::__cordl_internal_set__gameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get__monoBehaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monoBehaviours;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get__monoBehaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monoBehaviours;
}
constexpr void Oculus::Interaction::ActiveStateTracker::__cordl_internal_set__monoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____monoBehaviours = value;
}
constexpr bool& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get__active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr bool const& Oculus::Interaction::ActiveStateTracker::__cordl_internal_get__active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr void Oculus::Interaction::ActiveStateTracker::__cordl_internal_set__active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____active = value;
}
inline void Oculus::Interaction::ActiveStateTracker::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateTracker::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateTracker::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateTracker::SetDependentsActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"SetDependentsActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void Oculus::Interaction::ActiveStateTracker::InjectAllActiveStateTracker(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"InjectAllActiveStateTracker", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateTracker::InjectActiveState(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateTracker::InjectOptionalIncludeChildrenAsDependents(bool  includeChildrenAsDependents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"InjectOptionalIncludeChildrenAsDependents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, includeChildrenAsDependents);
}
inline void Oculus::Interaction::ActiveStateTracker::InjectOptionalGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"InjectOptionalGameObjects", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObjects);
}
inline void Oculus::Interaction::ActiveStateTracker::InjectOptionalMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  monoBehaviours)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {"InjectOptionalMonoBehaviours", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, monoBehaviours);
}
inline void Oculus::Interaction::ActiveStateTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateTracker* Oculus::Interaction::ActiveStateTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateTracker*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateTracker::ActiveStateTracker()   {
}
