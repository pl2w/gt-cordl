#pragma once
// IWYU pragma private; include "BuildSafe/SceneView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BuildSafe/zzzz__SceneView_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::BuildSafe::SceneView.add_duringSceneGui
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::BuildSafe::SceneView::add_duringSceneGui)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4f42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneView*>(),
                        {"add_duringSceneGui", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneView.remove_duringSceneGui
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::BuildSafe::SceneView::remove_duringSceneGui)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4f430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneView*>(),
                        {"remove_duringSceneGui", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneView.add_duringSceneGuiTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::BuildSafe::SceneView::add_duringSceneGuiTick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4f434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneView*>(),
                        {"add_duringSceneGuiTick", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneView.remove_duringSceneGuiTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::BuildSafe::SceneView::remove_duringSceneGuiTick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4f438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneView*>(),
                        {"remove_duringSceneGuiTick", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void BuildSafe::SceneView::add_duringSceneGui(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneView*>(),
                        {"add_duringSceneGui", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void BuildSafe::SceneView::remove_duringSceneGui(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneView*>(),
                        {"remove_duringSceneGui", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void BuildSafe::SceneView::add_duringSceneGuiTick(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneView*>(),
                        {"add_duringSceneGuiTick", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void BuildSafe::SceneView::remove_duringSceneGuiTick(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneView*>(),
                        {"remove_duringSceneGuiTick", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::BuildSafe::SceneView::SceneView()   {
}
