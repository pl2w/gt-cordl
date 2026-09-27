#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Processors/CompensateDirectionProcessor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateDirectionProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_CachingPolicy_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::*)(::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::Process)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xaffdd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::*)()>(&::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaffdf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor.get_cachingPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputProcessor_CachingPolicy (::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::*)()>(&::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::get_cachingPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaffdf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::*)()>(&::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaffdf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::Process(::UnityEngine::Vector3  value, ::UnityEngine::InputSystem::InputControl*  control)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::InputProcessor_CachingPolicy UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::get_cachingPolicy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputProcessor_CachingPolicy>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor* UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor::CompensateDirectionProcessor()   {
}
