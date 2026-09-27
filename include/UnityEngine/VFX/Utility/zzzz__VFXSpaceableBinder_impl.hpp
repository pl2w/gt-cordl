#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXSpaceableBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXSpaceableBinder_BinderSpace_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXSpaceableBinder_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXSpaceableBinder_BinderSpace_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpace_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXSpaceableBinder.GetTargetSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXSpace (::UnityEngine::VFX::Utility::VFXSpaceableBinder::*)(::UnityEngine::VFX::VisualEffect*, ::UnityEngine::VFX::Utility::ExposedProperty*)>(&::UnityEngine::VFX::Utility::VFXSpaceableBinder::GetTargetSpace)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb3eb578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {"GetTargetSpace", {}, {::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::Utility::ExposedProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXSpaceableBinder.ApplySpacePositionNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXSpaceableBinder::*)(::UnityEngine::VFX::VisualEffect*, ::UnityEngine::VFX::Utility::ExposedProperty*, ::UnityEngine::Transform*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::VFX::Utility::VFXSpaceableBinder::ApplySpacePositionNormal)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb3ea4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {"ApplySpacePositionNormal", {}, {::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::Utility::ExposedProperty*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXSpaceableBinder.ApplySpaceTS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXSpaceableBinder::*)(::UnityEngine::VFX::VisualEffect*, ::UnityEngine::VFX::Utility::ExposedProperty*, ::UnityEngine::Transform*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::VFX::Utility::VFXSpaceableBinder::ApplySpaceTS)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb3eb5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {"ApplySpaceTS", {}, {::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::Utility::ExposedProperty*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXSpaceableBinder.ApplySpaceTRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXSpaceableBinder::*)(::UnityEngine::VFX::VisualEffect*, ::UnityEngine::VFX::Utility::ExposedProperty*, ::UnityEngine::Transform*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::VFX::Utility::VFXSpaceableBinder::ApplySpaceTRS)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb3eb708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {"ApplySpaceTRS", {}, {::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::Utility::ExposedProperty*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXSpaceableBinder.ApplySpacePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::VFX::Utility::VFXSpaceableBinder::*)(::UnityEngine::VFX::VisualEffect*, ::UnityEngine::VFX::Utility::ExposedProperty*, ::UnityEngine::Vector3)>(&::UnityEngine::VFX::Utility::VFXSpaceableBinder::ApplySpacePosition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb3ea8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {"ApplySpacePosition", {}, {::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::Utility::ExposedProperty*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXSpaceableBinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXSpaceableBinder::*)()>(&::UnityEngine::VFX::Utility::VFXSpaceableBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3ea750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VFXSpaceableBinder_BinderSpace& UnityEngine::VFX::Utility::VFXSpaceableBinder::__cordl_internal_get_Space()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Space;
}
constexpr ::GlobalNamespace::VFXSpaceableBinder_BinderSpace const& UnityEngine::VFX::Utility::VFXSpaceableBinder::__cordl_internal_get_Space() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Space;
}
constexpr void UnityEngine::VFX::Utility::VFXSpaceableBinder::__cordl_internal_set_Space(::GlobalNamespace::VFXSpaceableBinder_BinderSpace  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Space = value;
}
inline ::UnityEngine::VFX::VFXSpace UnityEngine::VFX::Utility::VFXSpaceableBinder::GetTargetSpace(::UnityEngine::VFX::VisualEffect*  component, ::UnityEngine::VFX::Utility::ExposedProperty*  targetProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {"GetTargetSpace", {}, {::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::Utility::ExposedProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXSpace>(this, ___internal_method, component, targetProperty);
}
inline void UnityEngine::VFX::Utility::VFXSpaceableBinder::ApplySpacePositionNormal(::UnityEngine::VFX::VisualEffect*  component, ::UnityEngine::VFX::Utility::ExposedProperty*  targetProperty, ::UnityEngine::Transform*  sourceTransform, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {"ApplySpacePositionNormal", {}, {::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::Utility::ExposedProperty*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, targetProperty, sourceTransform, position, normal);
}
inline void UnityEngine::VFX::Utility::VFXSpaceableBinder::ApplySpaceTS(::UnityEngine::VFX::VisualEffect*  component, ::UnityEngine::VFX::Utility::ExposedProperty*  targetProperty, ::UnityEngine::Transform*  sourceTransform, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {"ApplySpaceTS", {}, {::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::Utility::ExposedProperty*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, targetProperty, sourceTransform, position, scale);
}
inline void UnityEngine::VFX::Utility::VFXSpaceableBinder::ApplySpaceTRS(::UnityEngine::VFX::VisualEffect*  component, ::UnityEngine::VFX::Utility::ExposedProperty*  targetProperty, ::UnityEngine::Transform*  sourceTransform, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  eulerAngles, ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {"ApplySpaceTRS", {}, {::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::Utility::ExposedProperty*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, targetProperty, sourceTransform, position, eulerAngles, scale);
}
inline ::UnityEngine::Vector3 UnityEngine::VFX::Utility::VFXSpaceableBinder::ApplySpacePosition(::UnityEngine::VFX::VisualEffect*  component, ::UnityEngine::VFX::Utility::ExposedProperty*  targetProperty, ::UnityEngine::Vector3  sourceWorldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {"ApplySpacePosition", {}, {::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::Utility::ExposedProperty*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, component, targetProperty, sourceWorldPosition);
}
inline void UnityEngine::VFX::Utility::VFXSpaceableBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXSpaceableBinder* UnityEngine::VFX::Utility::VFXSpaceableBinder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXSpaceableBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXSpaceableBinder::VFXSpaceableBinder()   {
}
