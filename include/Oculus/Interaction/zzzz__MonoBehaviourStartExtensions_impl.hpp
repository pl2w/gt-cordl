#pragma once
// IWYU pragma private; include "Oculus/Interaction/MonoBehaviourStartExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__MonoBehaviourStartExtensions_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::MonoBehaviourStartExtensions.BeginStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MonoBehaviour*, ::by_ref<bool>, ::System::Action*)>(&::Oculus::Interaction::MonoBehaviourStartExtensions::BeginStart)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa400e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourStartExtensions*>(),
                        {"BeginStart", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MonoBehaviourStartExtensions.EndStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MonoBehaviour*, ::by_ref<bool>)>(&::Oculus::Interaction::MonoBehaviourStartExtensions::EndStart)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa400f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourStartExtensions*>(),
                        {"EndStart", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::MonoBehaviourStartExtensions::BeginStart(::UnityEngine::MonoBehaviour*  monoBehaviour, ::by_ref<bool>  started, ::System::Action*  baseStart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourStartExtensions*>(),
                        {"BeginStart", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, monoBehaviour, started, baseStart);
}
inline void Oculus::Interaction::MonoBehaviourStartExtensions::EndStart(::UnityEngine::MonoBehaviour*  monoBehaviour, ::by_ref<bool>  started)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourStartExtensions*>(),
                        {"EndStart", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, monoBehaviour, started);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::MonoBehaviourStartExtensions::MonoBehaviourStartExtensions()   {
}
