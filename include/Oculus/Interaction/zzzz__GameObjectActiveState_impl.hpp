#pragma once
// IWYU pragma private; include "Oculus/Interaction/GameObjectActiveState.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__GameObjectActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GameObjectActiveState.get_SourceActiveSelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GameObjectActiveState::*)()>(&::Oculus::Interaction::GameObjectActiveState::get_SourceActiveSelf)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa413678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {"get_SourceActiveSelf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GameObjectActiveState.set_SourceActiveSelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GameObjectActiveState::*)(bool)>(&::Oculus::Interaction::GameObjectActiveState::set_SourceActiveSelf)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa413680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {"set_SourceActiveSelf", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GameObjectActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GameObjectActiveState::*)()>(&::Oculus::Interaction::GameObjectActiveState::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa413688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GameObjectActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GameObjectActiveState::*)()>(&::Oculus::Interaction::GameObjectActiveState::get_Active)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa41368c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GameObjectActiveState.InjectAllGameObjectActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GameObjectActiveState::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::GameObjectActiveState::InjectAllGameObjectActiveState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4136c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {"InjectAllGameObjectActiveState", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GameObjectActiveState.InjectSourceGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GameObjectActiveState::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::GameObjectActiveState::InjectSourceGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4136c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {"InjectSourceGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GameObjectActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GameObjectActiveState::*)()>(&::Oculus::Interaction::GameObjectActiveState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4136d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::GameObjectActiveState::__cordl_internal_get__sourceGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::GameObjectActiveState::__cordl_internal_get__sourceGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceGameObject;
}
constexpr void Oculus::Interaction::GameObjectActiveState::__cordl_internal_set__sourceGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceGameObject = value;
}
constexpr bool& Oculus::Interaction::GameObjectActiveState::__cordl_internal_get__sourceActiveSelf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceActiveSelf;
}
constexpr bool const& Oculus::Interaction::GameObjectActiveState::__cordl_internal_get__sourceActiveSelf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceActiveSelf;
}
constexpr void Oculus::Interaction::GameObjectActiveState::__cordl_internal_set__sourceActiveSelf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceActiveSelf = value;
}
inline bool Oculus::Interaction::GameObjectActiveState::get_SourceActiveSelf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {"get_SourceActiveSelf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::GameObjectActiveState::set_SourceActiveSelf(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {"set_SourceActiveSelf", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::GameObjectActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::GameObjectActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::GameObjectActiveState::InjectAllGameObjectActiveState(::UnityEngine::GameObject*  sourceGameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {"InjectAllGameObjectActiveState", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceGameObject);
}
inline void Oculus::Interaction::GameObjectActiveState::InjectSourceGameObject(::UnityEngine::GameObject*  sourceGameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {"InjectSourceGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceGameObject);
}
inline void Oculus::Interaction::GameObjectActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GameObjectActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GameObjectActiveState* Oculus::Interaction::GameObjectActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GameObjectActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::GameObjectActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::GameObjectActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GameObjectActiveState::GameObjectActiveState()   {
}
