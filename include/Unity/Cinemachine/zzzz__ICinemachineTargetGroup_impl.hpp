#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ICinemachineTargetGroup.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineTargetGroup_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::ICinemachineTargetGroup.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ICinemachineTargetGroup::*)()>(&::Unity::Cinemachine::ICinemachineTargetGroup::get_IsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ICinemachineTargetGroup.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::ICinemachineTargetGroup::*)()>(&::Unity::Cinemachine::ICinemachineTargetGroup::get_Transform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ICinemachineTargetGroup.get_BoundingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Unity::Cinemachine::ICinemachineTargetGroup::*)()>(&::Unity::Cinemachine::ICinemachineTargetGroup::get_BoundingBox)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ICinemachineTargetGroup.get_Sphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundingSphere (::Unity::Cinemachine::ICinemachineTargetGroup::*)()>(&::Unity::Cinemachine::ICinemachineTargetGroup::get_Sphere)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ICinemachineTargetGroup.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ICinemachineTargetGroup::*)()>(&::Unity::Cinemachine::ICinemachineTargetGroup::get_IsEmpty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ICinemachineTargetGroup.GetViewSpaceBoundingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Unity::Cinemachine::ICinemachineTargetGroup::*)(::UnityEngine::Matrix4x4, bool)>(&::Unity::Cinemachine::ICinemachineTargetGroup::GetViewSpaceBoundingBox)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ICinemachineTargetGroup.GetViewSpaceAngularBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ICinemachineTargetGroup::*)(::UnityEngine::Matrix4x4, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::Unity::Cinemachine::ICinemachineTargetGroup::GetViewSpaceAngularBounds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 6}
                ));
    return ___internal_method;
  }
};
inline bool Unity::Cinemachine::ICinemachineTargetGroup::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::ICinemachineTargetGroup::get_Transform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Unity::Cinemachine::ICinemachineTargetGroup::get_BoundingBox()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityEngine::BoundingSphere Unity::Cinemachine::ICinemachineTargetGroup::get_Sphere()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere>(this, ___internal_method);
}
inline bool Unity::Cinemachine::ICinemachineTargetGroup::get_IsEmpty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Unity::Cinemachine::ICinemachineTargetGroup::GetViewSpaceBoundingBox(::UnityEngine::Matrix4x4  observer, bool  includeBehind)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, observer, includeBehind);
}
inline void Unity::Cinemachine::ICinemachineTargetGroup::GetViewSpaceAngularBounds(::UnityEngine::Matrix4x4  observer, ::by_ref<::UnityEngine::Vector2>  minAngles, ::by_ref<::UnityEngine::Vector2>  maxAngles, ::by_ref<::UnityEngine::Vector2>  zRange)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, observer, minAngles, maxAngles, zRange);
}
