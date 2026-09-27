#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRGameObjectExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRGameObjectExtensions_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRGameObjectExtensions.GetToolType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRTool_GRToolType (*)(::UnityEngine::GameObject*)>(&::GorillaTagScripts::GhostReactor::GRGameObjectExtensions::GetToolType)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5c199b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRGameObjectExtensions*>(),
                        {"GetToolType", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::GRTool_GRToolType GorillaTagScripts::GhostReactor::GRGameObjectExtensions::GetToolType(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRGameObjectExtensions*>(),
                        {"GetToolType", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRTool_GRToolType>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::GRGameObjectExtensions::GRGameObjectExtensions()   {
}
