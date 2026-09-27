#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandFingerMaskGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__HandFingerMaskGenerator_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/zzzz__HandVisual_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandFingerMaskGenerator.HandednessMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::HandFingerMaskGenerator::HandednessMultiplier)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4041a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"HandednessMultiplier", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandFingerMaskGenerator.GenerateModelUV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector2>* (*)(::Oculus::Interaction::Input::Handedness, ::UnityEngine::Mesh*, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::Oculus::Interaction::HandFingerMaskGenerator::GenerateModelUV)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xa4041b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"GenerateModelUV", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandFingerMaskGenerator.GetPositionOnRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::Oculus::Interaction::HandVisual*, ::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Vector2, float_t)>(&::Oculus::Interaction::HandFingerMaskGenerator::GetPositionOnRegion)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa404578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"GetPositionOnRegion", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandFingerMaskGenerator.GenerateFingerLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (*)(::Oculus::Interaction::HandVisual*, ::UnityEngine::Vector2, float_t, ::ArrayW<float_t>)>(&::Oculus::Interaction::HandFingerMaskGenerator::GenerateFingerLines)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa404754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"GenerateFingerLines", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandFingerMaskGenerator.GenerateLineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::Oculus::Interaction::HandVisual*, ::Oculus::Interaction::Input::HandJointId, ::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Vector2, float_t, float_t)>(&::Oculus::Interaction::HandFingerMaskGenerator::GenerateLineData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa4049a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"GenerateLineData", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandFingerMaskGenerator.SetGlowModelUV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SkinnedMeshRenderer*, ::Oculus::Interaction::Input::Handedness, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::Oculus::Interaction::HandFingerMaskGenerator::SetGlowModelUV)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa404a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"SetGlowModelUV", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandFingerMaskGenerator.SetFingerMaskUniforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::HandVisual*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Oculus::Interaction::HandFingerMaskGenerator::SetFingerMaskUniforms)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xa404b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"SetFingerMaskUniforms", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandFingerMaskGenerator.GenerateFingerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SkinnedMeshRenderer*, ::Oculus::Interaction::HandVisual*, ::UnityEngine::MaterialPropertyBlock*)>(&::Oculus::Interaction::HandFingerMaskGenerator::GenerateFingerMask)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa404d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"GenerateFingerMask", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandFingerMaskGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandFingerMaskGenerator::*)()>(&::Oculus::Interaction::HandFingerMaskGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa404eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::HandFingerMaskGenerator::setStaticF__fingerLinesID(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_fingerLinesID", ::Oculus::Interaction::HandFingerMaskGenerator*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Oculus::Interaction::HandFingerMaskGenerator::getStaticF__fingerLinesID()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_fingerLinesID", ::Oculus::Interaction::HandFingerMaskGenerator*>();
}
inline void Oculus::Interaction::HandFingerMaskGenerator::setStaticF__palmFingerLinesID(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_palmFingerLinesID", ::Oculus::Interaction::HandFingerMaskGenerator*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Oculus::Interaction::HandFingerMaskGenerator::getStaticF__palmFingerLinesID()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_palmFingerLinesID", ::Oculus::Interaction::HandFingerMaskGenerator*>();
}
inline float_t Oculus::Interaction::HandFingerMaskGenerator::HandednessMultiplier(::Oculus::Interaction::Input::Handedness  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"HandednessMultiplier", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, hand);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Oculus::Interaction::HandFingerMaskGenerator::GenerateModelUV(::Oculus::Interaction::Input::Handedness  handedness, ::UnityEngine::Mesh*  sharedHandMesh, ::by_ref<::UnityEngine::Vector2>  minPosition, ::by_ref<::UnityEngine::Vector2>  maxPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"GenerateModelUV", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method, handedness, sharedHandMesh, minPosition, maxPosition);
}
inline ::UnityEngine::Vector2 Oculus::Interaction::HandFingerMaskGenerator::GetPositionOnRegion(::Oculus::Interaction::HandVisual*  handVisual, ::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Vector2  minRegion, float_t  sideLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"GetPositionOnRegion", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, handVisual, jointId, minRegion, sideLength);
}
inline ::ArrayW<::UnityEngine::Vector4> Oculus::Interaction::HandFingerMaskGenerator::GenerateFingerLines(::Oculus::Interaction::HandVisual*  handVisual, ::UnityEngine::Vector2  minPosition, float_t  maxLength, ::ArrayW<float_t>  lineScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"GenerateFingerLines", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(nullptr, ___internal_method, handVisual, minPosition, maxLength, lineScale);
}
inline ::UnityEngine::Vector4 Oculus::Interaction::HandFingerMaskGenerator::GenerateLineData(::Oculus::Interaction::HandVisual*  handVisual, ::Oculus::Interaction::Input::HandJointId  jointIdStart, ::Oculus::Interaction::Input::HandJointId  jointIdEnd, ::UnityEngine::Vector2  minRegion, float_t  sideLength, float_t  lineScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"GenerateLineData", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, handVisual, jointIdStart, jointIdEnd, minRegion, sideLength, lineScale);
}
inline void Oculus::Interaction::HandFingerMaskGenerator::SetGlowModelUV(::UnityEngine::SkinnedMeshRenderer*  handRenderer, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::UnityEngine::Vector2>  minPosition, ::by_ref<::UnityEngine::Vector2>  maxPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"SetGlowModelUV", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handRenderer, handedness, minPosition, maxPosition);
}
inline void Oculus::Interaction::HandFingerMaskGenerator::SetFingerMaskUniforms(::Oculus::Interaction::HandVisual*  handVisual, ::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, ::UnityEngine::Vector2  minPosition, ::UnityEngine::Vector2  maxPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"SetFingerMaskUniforms", {}, {::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handVisual, materialPropertyBlock, minPosition, maxPosition);
}
inline void Oculus::Interaction::HandFingerMaskGenerator::GenerateFingerMask(::UnityEngine::SkinnedMeshRenderer*  handRenderer, ::Oculus::Interaction::HandVisual*  handVisual, ::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {"GenerateFingerMask", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::Oculus::Interaction::HandVisual*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handRenderer, handVisual, materialPropertyBlock);
}
inline void Oculus::Interaction::HandFingerMaskGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandFingerMaskGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandFingerMaskGenerator* Oculus::Interaction::HandFingerMaskGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandFingerMaskGenerator*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandFingerMaskGenerator::HandFingerMaskGenerator()   {
}
