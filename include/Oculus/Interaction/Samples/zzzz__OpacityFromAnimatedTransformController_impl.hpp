#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/OpacityFromAnimatedTransformController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__OpacityFromAnimatedTransformController_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::*)()>(&::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::Start)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa43bb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::*)()>(&::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa43bc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::*)()>(&::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43bcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_get__opacityTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opacityTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_get__opacityTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opacityTransform;
}
constexpr void Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_set__opacityTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____opacityTransform = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_get__materialProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialProperties;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_get__materialProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialProperties;
}
constexpr void Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_set__materialProperties(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialProperties = value;
}
constexpr bool& Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_get__isSkinnedMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSkinnedMeshRenderer;
}
constexpr bool const& Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_get__isSkinnedMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSkinnedMeshRenderer;
}
constexpr void Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::__cordl_internal_set__isSkinnedMeshRenderer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSkinnedMeshRenderer = value;
}
inline void Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController* Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::OpacityFromAnimatedTransformController::OpacityFromAnimatedTransformController()   {
}
