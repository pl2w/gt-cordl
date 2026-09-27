#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/IAdvancedLineRenderable.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__IAdvancedLineRenderable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__ILineRenderable_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable.GetLinePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>, ::by_ref<int32_t>, ::System::Nullable_1<::UnityEngine::Ray>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable::GetLinePoints)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable.GetLineOriginAndDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable::GetLineOriginAndDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable::GetLinePoints(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  linePoints, ::by_ref<int32_t>  numPoints, ::System::Nullable_1<::UnityEngine::Ray>  rayOriginOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, linePoints, numPoints, rayOriginOverride);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable::GetLineOriginAndDirection(::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, direction);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable::i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__ILineRenderable() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*>(static_cast<void*>(this));
}
