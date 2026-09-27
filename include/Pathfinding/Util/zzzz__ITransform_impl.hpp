#pragma once
// IWYU pragma private; include "Pathfinding/Util/ITransform.hpp"
#include "Pathfinding/Util/zzzz__ITransform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::ITransform.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Util::ITransform::*)(::UnityEngine::Vector3)>(&::Pathfinding::Util::ITransform::Transform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::ITransform*>(),
                    {::i2c::class_of<::Pathfinding::Util::ITransform*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::ITransform.InverseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Util::ITransform::*)(::UnityEngine::Vector3)>(&::Pathfinding::Util::ITransform::InverseTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Util::ITransform*>(),
                    {::i2c::class_of<::Pathfinding::Util::ITransform*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Pathfinding::Util::ITransform::Transform(::UnityEngine::Vector3  position)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Util::ITransform*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 Pathfinding::Util::ITransform::InverseTransform(::UnityEngine::Vector3  position)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Util::ITransform*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
