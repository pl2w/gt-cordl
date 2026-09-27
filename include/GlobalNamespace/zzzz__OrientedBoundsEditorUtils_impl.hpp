#pragma once
// IWYU pragma private; include "GlobalNamespace/OrientedBoundsEditorUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OrientedBoundsEditorUtils_def.hpp"
#include "GlobalNamespace/zzzz__OrientedBounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OrientedBoundsEditorUtils.ComputeBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OrientedBounds (*)(::ArrayW<::UnityEngine::Vector3>)>(&::GlobalNamespace::OrientedBoundsEditorUtils::ComputeBounds)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a1f564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrientedBoundsEditorUtils*>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OrientedBounds GlobalNamespace::OrientedBoundsEditorUtils::ComputeBounds(::ArrayW<::UnityEngine::Vector3>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrientedBoundsEditorUtils*>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OrientedBounds>(nullptr, ___internal_method, points);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OrientedBoundsEditorUtils::OrientedBoundsEditorUtils()   {
}
