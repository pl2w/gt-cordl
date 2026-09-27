#pragma once
// IWYU pragma private; include "UnityEngine/LightProbes.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightProbes_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallLightProbesUpdatedFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallLightProbesUpdatedFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb580af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallLightProbesUpdatedFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallTetrahedralizationCompletedFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallTetrahedralizationCompletedFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb580b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallTetrahedralizationCompletedFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallNeedsRetetrahedralizationFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallNeedsRetetrahedralizationFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb580bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallNeedsRetetrahedralizationFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::LightProbes::setStaticF_lightProbesUpdated(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "lightProbesUpdated", ::UnityEngine::LightProbes*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::LightProbes::getStaticF_lightProbesUpdated()  {
return ::cordl_internals::getStaticField<::System::Action*, "lightProbesUpdated", ::UnityEngine::LightProbes*>();
}
inline void UnityEngine::LightProbes::setStaticF_tetrahedralizationCompleted(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "tetrahedralizationCompleted", ::UnityEngine::LightProbes*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::LightProbes::getStaticF_tetrahedralizationCompleted()  {
return ::cordl_internals::getStaticField<::System::Action*, "tetrahedralizationCompleted", ::UnityEngine::LightProbes*>();
}
inline void UnityEngine::LightProbes::setStaticF_needsRetetrahedralization(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "needsRetetrahedralization", ::UnityEngine::LightProbes*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::LightProbes::getStaticF_needsRetetrahedralization()  {
return ::cordl_internals::getStaticField<::System::Action*, "needsRetetrahedralization", ::UnityEngine::LightProbes*>();
}
inline void UnityEngine::LightProbes::Internal_CallLightProbesUpdatedFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallLightProbesUpdatedFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::Internal_CallTetrahedralizationCompletedFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallTetrahedralizationCompletedFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::Internal_CallNeedsRetetrahedralizationFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallNeedsRetetrahedralizationFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbes::LightProbes()   {
}
