#pragma once
// IWYU pragma private; include "Pathfinding/Util/IMovementPlane.hpp"
#include "Pathfinding/Util/zzzz__IMovementPlane_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::IMovementPlane.ToPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::Util::IMovementPlane::*)(::UnityEngine::Vector3)>(&::Pathfinding::Util::IMovementPlane::ToPlane)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::IMovementPlane*>(),
                    {::i2c::class_of<::Pathfinding::Util::IMovementPlane*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::IMovementPlane.ToPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::Util::IMovementPlane::*)(::UnityEngine::Vector3, ::by_ref<float_t>)>(&::Pathfinding::Util::IMovementPlane::ToPlane)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::IMovementPlane*>(),
                    {::i2c::class_of<::Pathfinding::Util::IMovementPlane*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::IMovementPlane.ToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Util::IMovementPlane::*)(::UnityEngine::Vector2, float_t)>(&::Pathfinding::Util::IMovementPlane::ToWorld)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::IMovementPlane*>(),
                    {::i2c::class_of<::Pathfinding::Util::IMovementPlane*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 Pathfinding::Util::IMovementPlane::ToPlane(::UnityEngine::Vector3  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Util::IMovementPlane*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, p);
}
inline ::UnityEngine::Vector2 Pathfinding::Util::IMovementPlane::ToPlane(::UnityEngine::Vector3  p, ::by_ref<float_t>  elevation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Util::IMovementPlane*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, p, elevation);
}
inline ::UnityEngine::Vector3 Pathfinding::Util::IMovementPlane::ToWorld(::UnityEngine::Vector2  p, float_t  elevation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Util::IMovementPlane*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p, elevation);
}
