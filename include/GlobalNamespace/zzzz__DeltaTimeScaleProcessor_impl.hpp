#pragma once
// IWYU pragma private; include "GlobalNamespace/DeltaTimeScaleProcessor.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__DeltaTimeScaleProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeltaTimeScaleProcessor.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::DeltaTimeScaleProcessor::*)(::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*)>(&::GlobalNamespace::DeltaTimeScaleProcessor::Process)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xae85650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DeltaTimeScaleProcessor*>(),
                    {::i2c::class_of<::GlobalNamespace::DeltaTimeScaleProcessor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeltaTimeScaleProcessor.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::DeltaTimeScaleProcessor::Initialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae85680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeltaTimeScaleProcessor*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeltaTimeScaleProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeltaTimeScaleProcessor::*)()>(&::GlobalNamespace::DeltaTimeScaleProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae856e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeltaTimeScaleProcessor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 GlobalNamespace::DeltaTimeScaleProcessor::Process(::UnityEngine::Vector2  value, ::UnityEngine::InputSystem::InputControl*  control)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DeltaTimeScaleProcessor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, value, control);
}
inline void GlobalNamespace::DeltaTimeScaleProcessor::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeltaTimeScaleProcessor*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::DeltaTimeScaleProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeltaTimeScaleProcessor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DeltaTimeScaleProcessor* GlobalNamespace::DeltaTimeScaleProcessor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeltaTimeScaleProcessor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeltaTimeScaleProcessor::DeltaTimeScaleProcessor()   {
}
