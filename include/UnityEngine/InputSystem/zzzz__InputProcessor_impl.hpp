#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_CachingPolicy_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor.ProcessAsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputProcessor::*)(::System::Object*, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputProcessor::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputProcessor::*)(void*, int32_t, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputProcessor::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor.GetValueTypeFromType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::UnityEngine::InputSystem::InputProcessor::GetValueTypeFromType)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xaf5a534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(),
                        {"GetValueTypeFromType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor.get_cachingPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputProcessor_CachingPolicy (::UnityEngine::InputSystem::InputProcessor::*)()>(&::UnityEngine::InputSystem::InputProcessor::get_cachingPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf5a618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputProcessor::*)()>(&::UnityEngine::InputSystem::InputProcessor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf5a620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputProcessor::setStaticF_s_Processors(::UnityEngine::InputSystem::Utilities::TypeTable  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Processors", ::UnityEngine::InputSystem::InputProcessor*>(std::forward<::UnityEngine::InputSystem::Utilities::TypeTable>(value));
}
inline ::UnityEngine::InputSystem::Utilities::TypeTable UnityEngine::InputSystem::InputProcessor::getStaticF_s_Processors()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::TypeTable, "s_Processors", ::UnityEngine::InputSystem::InputProcessor*>();
}
inline ::System::Object* UnityEngine::InputSystem::InputProcessor::ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, control);
}
inline void UnityEngine::InputSystem::InputProcessor::Process(void*  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferSize, control);
}
inline ::System::Type* UnityEngine::InputSystem::InputProcessor::GetValueTypeFromType(::System::Type*  processorType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(),
                        {"GetValueTypeFromType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, processorType);
}
inline ::GlobalNamespace::InputProcessor_CachingPolicy UnityEngine::InputSystem::InputProcessor::get_cachingPolicy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputProcessor_CachingPolicy>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputProcessor* UnityEngine::InputSystem::InputProcessor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputProcessor::InputProcessor()   {
}
