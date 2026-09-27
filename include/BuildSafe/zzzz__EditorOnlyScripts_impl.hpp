#pragma once
// IWYU pragma private; include "BuildSafe/EditorOnlyScripts.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BuildSafe/zzzz__EditorOnlyScripts_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::BuildSafe::EditorOnlyScripts.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::GameObject*>, bool)>(&::BuildSafe::EditorOnlyScripts::Cleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorOnlyScripts*>(),
                        {"Cleanup", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void BuildSafe::EditorOnlyScripts::Cleanup(::ArrayW<::UnityEngine::GameObject*>  rootObjects, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorOnlyScripts*>(),
                        {"Cleanup", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rootObjects, force);
}
// Ctor Parameters []
constexpr ::BuildSafe::EditorOnlyScripts::EditorOnlyScripts()   {
}
