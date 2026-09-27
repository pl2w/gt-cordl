#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderTriggerEnable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderTriggerEnable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderTriggerEnable.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderTriggerEnable::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::BuilderTriggerEnable::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x57e26e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTriggerEnable*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderTriggerEnable.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderTriggerEnable::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::BuilderTriggerEnable::OnTriggerExit)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x57e291c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTriggerEnable*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderTriggerEnable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderTriggerEnable::*)()>(&::GlobalNamespace::BuilderTriggerEnable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e2b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTriggerEnable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderTriggerEnable::__cordl_internal_get_activateOnEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateOnEnter;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderTriggerEnable::__cordl_internal_get_activateOnEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateOnEnter;
}
constexpr void GlobalNamespace::BuilderTriggerEnable::__cordl_internal_set_activateOnEnter(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activateOnEnter = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderTriggerEnable::__cordl_internal_get_deactivateOnEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivateOnEnter;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderTriggerEnable::__cordl_internal_get_deactivateOnEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivateOnEnter;
}
constexpr void GlobalNamespace::BuilderTriggerEnable::__cordl_internal_set_deactivateOnEnter(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deactivateOnEnter = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderTriggerEnable::__cordl_internal_get_activateOnExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateOnExit;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderTriggerEnable::__cordl_internal_get_activateOnExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateOnExit;
}
constexpr void GlobalNamespace::BuilderTriggerEnable::__cordl_internal_set_activateOnExit(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activateOnExit = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderTriggerEnable::__cordl_internal_get_deactivateOnExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivateOnExit;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderTriggerEnable::__cordl_internal_get_deactivateOnExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deactivateOnExit;
}
constexpr void GlobalNamespace::BuilderTriggerEnable::__cordl_internal_set_deactivateOnExit(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deactivateOnExit = value;
}
inline void GlobalNamespace::BuilderTriggerEnable::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTriggerEnable*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::BuilderTriggerEnable::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTriggerEnable*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::BuilderTriggerEnable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTriggerEnable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderTriggerEnable* GlobalNamespace::BuilderTriggerEnable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderTriggerEnable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTriggerEnable::BuilderTriggerEnable()   {
}
