#pragma once
// IWYU pragma private; include "BuildSafe/SceneBakeExampleTask.hpp"
#include "BuildSafe/zzzz__SceneBakeTask_impl.hpp"
#include "BuildSafe/zzzz__SceneBakeExampleTask_def.hpp"
#include "BuildSafe/zzzz__SceneBakeMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::BuildSafe::SceneBakeExampleTask.OnSceneBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SceneBakeExampleTask::*)(::UnityEngine::SceneManagement::Scene, ::BuildSafe::SceneBakeMode)>(&::BuildSafe::SceneBakeExampleTask::OnSceneBake)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c4f24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::SceneBakeExampleTask*>(),
                    {::i2c::class_of<::BuildSafe::SceneBakeExampleTask*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneBakeExampleTask.DuplicateAndRecolor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::BuildSafe::SceneBakeExampleTask::DuplicateAndRecolor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c4f280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeExampleTask*>(),
                        {"DuplicateAndRecolor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneBakeExampleTask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SceneBakeExampleTask::*)()>(&::BuildSafe::SceneBakeExampleTask::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c4f3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeExampleTask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void BuildSafe::SceneBakeExampleTask::OnSceneBake(::UnityEngine::SceneManagement::Scene  scene, ::BuildSafe::SceneBakeMode  mode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BuildSafe::SceneBakeExampleTask*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, mode);
}
inline void BuildSafe::SceneBakeExampleTask::DuplicateAndRecolor(::UnityEngine::GameObject*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeExampleTask*>(),
                        {"DuplicateAndRecolor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
inline void BuildSafe::SceneBakeExampleTask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeExampleTask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BuildSafe::SceneBakeExampleTask* BuildSafe::SceneBakeExampleTask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BuildSafe::SceneBakeExampleTask*>());
}
// Ctor Parameters []
constexpr ::BuildSafe::SceneBakeExampleTask::SceneBakeExampleTask()   {
}
