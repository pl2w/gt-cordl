#pragma once
// IWYU pragma private; include "BuildSafe/EditorGUIUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BuildSafe/zzzz__EditorGUIUtility_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BuildSafe::EditorGUIUtility.PingObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::BuildSafe::EditorGUIUtility::PingObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorGUIUtility*>(),
                        {"PingObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void BuildSafe::EditorGUIUtility::PingObject(::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorGUIUtility*>(),
                        {"PingObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::BuildSafe::EditorGUIUtility::EditorGUIUtility()   {
}
