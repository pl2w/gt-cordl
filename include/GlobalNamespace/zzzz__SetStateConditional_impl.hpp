#pragma once
// IWYU pragma private; include "GlobalNamespace/SetStateConditional.hpp"
#include "GlobalNamespace/zzzz__AnimStateHash_impl.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "UnityEngine/zzzz__StateMachineBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetStateConditional_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetStateConditional.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetStateConditional::*)()>(&::GlobalNamespace::SetStateConditional::OnValidate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x579f59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetStateConditional*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetStateConditional.OnStateEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetStateConditional::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::SetStateConditional::OnStateEnter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x579f5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SetStateConditional*>(),
                    {::i2c::class_of<::GlobalNamespace::SetStateConditional*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetStateConditional.OnStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetStateConditional::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::SetStateConditional::OnStateUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x579f648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SetStateConditional*>(),
                    {::i2c::class_of<::GlobalNamespace::SetStateConditional*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetStateConditional.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetStateConditional::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::SetStateConditional::Setup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x579f6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SetStateConditional*>(),
                    {::i2c::class_of<::GlobalNamespace::SetStateConditional*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetStateConditional.CanSetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SetStateConditional::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::SetStateConditional::CanSetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579f6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SetStateConditional*>(),
                    {::i2c::class_of<::GlobalNamespace::SetStateConditional*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetStateConditional._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetStateConditional::*)()>(&::GlobalNamespace::SetStateConditional::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x579f6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetStateConditional*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::SetStateConditional::__cordl_internal_get_parentAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentAnimator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::SetStateConditional::__cordl_internal_get_parentAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentAnimator;
}
constexpr void GlobalNamespace::SetStateConditional::__cordl_internal_set_parentAnimator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentAnimator = value;
}
constexpr ::StringW& GlobalNamespace::SetStateConditional::__cordl_internal_get_setToState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setToState;
}
constexpr ::StringW const& GlobalNamespace::SetStateConditional::__cordl_internal_get_setToState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setToState;
}
constexpr void GlobalNamespace::SetStateConditional::__cordl_internal_set_setToState(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setToState = value;
}
constexpr ::GlobalNamespace::AnimStateHash& GlobalNamespace::SetStateConditional::__cordl_internal_get__setToID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setToID;
}
constexpr ::GlobalNamespace::AnimStateHash const& GlobalNamespace::SetStateConditional::__cordl_internal_get__setToID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setToID;
}
constexpr void GlobalNamespace::SetStateConditional::__cordl_internal_set__setToID(::GlobalNamespace::AnimStateHash  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setToID = value;
}
constexpr float_t& GlobalNamespace::SetStateConditional::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& GlobalNamespace::SetStateConditional::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GlobalNamespace::SetStateConditional::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::SetStateConditional::__cordl_internal_get__sinceEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceEnter;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::SetStateConditional::__cordl_internal_get__sinceEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceEnter;
}
constexpr void GlobalNamespace::SetStateConditional::__cordl_internal_set__sinceEnter(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sinceEnter = value;
}
constexpr bool& GlobalNamespace::SetStateConditional::__cordl_internal_get__didSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____didSetup;
}
constexpr bool const& GlobalNamespace::SetStateConditional::__cordl_internal_get__didSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____didSetup;
}
constexpr void GlobalNamespace::SetStateConditional::__cordl_internal_set__didSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____didSetup = value;
}
inline void GlobalNamespace::SetStateConditional::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetStateConditional*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetStateConditional::OnStateEnter(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SetStateConditional*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline void GlobalNamespace::SetStateConditional::OnStateUpdate(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SetStateConditional*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline void GlobalNamespace::SetStateConditional::Setup(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SetStateConditional*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline bool GlobalNamespace::SetStateConditional::CanSetState(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SetStateConditional*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline void GlobalNamespace::SetStateConditional::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetStateConditional*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetStateConditional* GlobalNamespace::SetStateConditional::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetStateConditional*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetStateConditional::SetStateConditional()   {
}
