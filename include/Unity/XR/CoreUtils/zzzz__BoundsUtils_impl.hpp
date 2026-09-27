#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/BoundsUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__BoundsUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsUtils.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::Unity::XR::CoreUtils::BoundsUtils::GetBounds)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0xb3ede08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsUtils*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsUtils.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Transform*>)>(&::Unity::XR::CoreUtils::BoundsUtils::GetBounds)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xb3ee4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsUtils*>(),
                        {"GetBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsUtils.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Transform*)>(&::Unity::XR::CoreUtils::BoundsUtils::GetBounds)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xb3ee16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsUtils*>(),
                        {"GetBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsUtils.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*)>(&::Unity::XR::CoreUtils::BoundsUtils::GetBounds)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xb3ee748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsUtils*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsUtils.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Unity::XR::CoreUtils::BoundsUtils::GetBounds)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb3eeac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsUtils*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::BoundsUtils::setStaticF_k_Renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*, "k_Renderers", ::Unity::XR::CoreUtils::BoundsUtils*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* Unity::XR::CoreUtils::BoundsUtils::getStaticF_k_Renderers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*, "k_Renderers", ::Unity::XR::CoreUtils::BoundsUtils*>();
}
inline void Unity::XR::CoreUtils::BoundsUtils::setStaticF_k_Transforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "k_Transforms", ::Unity::XR::CoreUtils::BoundsUtils*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* Unity::XR::CoreUtils::BoundsUtils::getStaticF_k_Transforms()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "k_Transforms", ::Unity::XR::CoreUtils::BoundsUtils*>();
}
inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsUtils*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, gameObjects);
}
inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::ArrayW<::UnityEngine::Transform*>  transforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsUtils*>(),
                        {"GetBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, transforms);
}
inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsUtils*>(),
                        {"GetBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, transform);
}
inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsUtils*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, renderers);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Collider*>)
inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::System::Collections::Generic::List_1<T>*  colliders)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::BoundsUtils*>(),
                    {"GetBounds", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, colliders);
}
inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoundsUtils*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, points);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::BoundsUtils::BoundsUtils()   {
}
