#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorActiveState.hpp"
#include "Oculus/Interaction/zzzz__InteractorActiveState_InteractorProperty_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractorActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorActiveState_InteractorProperty_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::InteractorActiveState.get_Property
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InteractorActiveState_InteractorProperty (::Oculus::Interaction::InteractorActiveState::*)()>(&::Oculus::Interaction::InteractorActiveState::get_Property)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa419134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {"get_Property", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorActiveState.set_Property
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorActiveState::*)(::GlobalNamespace::InteractorActiveState_InteractorProperty)>(&::Oculus::Interaction::InteractorActiveState::set_Property)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41913c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {"set_Property", {}, {::i2c::type_of<::GlobalNamespace::InteractorActiveState_InteractorProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorActiveState::*)()>(&::Oculus::Interaction::InteractorActiveState::get_Active)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0xa419144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorActiveState::*)()>(&::Oculus::Interaction::InteractorActiveState::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4194f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorActiveState::*)()>(&::Oculus::Interaction::InteractorActiveState::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa419558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorActiveState.InjectAllInteractorActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorActiveState::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::InteractorActiveState::InjectAllInteractorActiveState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa41955c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {"InjectAllInteractorActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorActiveState.InjectInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorActiveState::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::InteractorActiveState::InjectInteractor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa419560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorActiveState::*)()>(&::Oculus::Interaction::InteractorActiveState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa419630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::InteractorActiveState::__cordl_internal_get__interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::InteractorActiveState::__cordl_internal_get__interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr void Oculus::Interaction::InteractorActiveState::__cordl_internal_set__interactor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactor = value;
}
constexpr ::Oculus::Interaction::IInteractor*& Oculus::Interaction::InteractorActiveState::__cordl_internal_get_Interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactor;
}
constexpr ::Oculus::Interaction::IInteractor* const& Oculus::Interaction::InteractorActiveState::__cordl_internal_get_Interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactor;
}
constexpr void Oculus::Interaction::InteractorActiveState::__cordl_internal_set_Interactor(::Oculus::Interaction::IInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Interactor = value;
}
constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty& Oculus::Interaction::InteractorActiveState::__cordl_internal_get__property()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____property;
}
constexpr ::GlobalNamespace::InteractorActiveState_InteractorProperty const& Oculus::Interaction::InteractorActiveState::__cordl_internal_get__property() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____property;
}
constexpr void Oculus::Interaction::InteractorActiveState::__cordl_internal_set__property(::GlobalNamespace::InteractorActiveState_InteractorProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____property = value;
}
inline ::GlobalNamespace::InteractorActiveState_InteractorProperty Oculus::Interaction::InteractorActiveState::get_Property()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {"get_Property", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InteractorActiveState_InteractorProperty>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorActiveState::set_Property(::GlobalNamespace::InteractorActiveState_InteractorProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {"set_Property", {}, {::i2c::type_of<::GlobalNamespace::InteractorActiveState_InteractorProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::InteractorActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorActiveState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorActiveState::InjectAllInteractorActiveState(::Oculus::Interaction::IInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {"InjectAllInteractorActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::InteractorActiveState::InjectInteractor(::Oculus::Interaction::IInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::InteractorActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::InteractorActiveState* Oculus::Interaction::InteractorActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractorActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::InteractorActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::InteractorActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractorActiveState::InteractorActiveState()   {
}
