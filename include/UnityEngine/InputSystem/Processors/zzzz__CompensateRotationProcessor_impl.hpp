#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/CompensateRotationProcessor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateRotationProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_CachingPolicy_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::CompensateRotationProcessor.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::InputSystem::Processors::CompensateRotationProcessor::*)(::UnityEngine::Quaternion, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::CompensateRotationProcessor::Process)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xaffdfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::CompensateRotationProcessor.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::CompensateRotationProcessor::*)()>(&::UnityEngine::InputSystem::Processors::CompensateRotationProcessor::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaffe1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::CompensateRotationProcessor.get_cachingPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputProcessor_CachingPolicy (::UnityEngine::InputSystem::Processors::CompensateRotationProcessor::*)()>(&::UnityEngine::InputSystem::Processors::CompensateRotationProcessor::get_cachingPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffe22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::CompensateRotationProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Processors::CompensateRotationProcessor::*)()>(&::UnityEngine::InputSystem::Processors::CompensateRotationProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaffe234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Quaternion UnityEngine::InputSystem::Processors::CompensateRotationProcessor::Process(::UnityEngine::Quaternion  value, ::UnityEngine::InputSystem::InputControl*  control)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::CompensateRotationProcessor::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::InputProcessor_CachingPolicy UnityEngine::InputSystem::Processors::CompensateRotationProcessor::get_cachingPolicy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputProcessor_CachingPolicy>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Processors::CompensateRotationProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::CompensateRotationProcessor* UnityEngine::InputSystem::Processors::CompensateRotationProcessor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::CompensateRotationProcessor::CompensateRotationProcessor()   {
}
