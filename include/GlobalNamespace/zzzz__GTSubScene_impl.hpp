#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSubScene.hpp"
#include "GlobalNamespace/zzzz__GTScene_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GTSubScene_def.hpp"
#include "GlobalNamespace/zzzz__GTScene_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTSubScene.SwitchToScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSubScene::*)(int32_t)>(&::GlobalNamespace::GTSubScene::SwitchToScene)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b20de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSubScene*>(),
                        {"SwitchToScene", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSubScene.SwitchToScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSubScene::*)(::GlobalNamespace::GTScene*)>(&::GlobalNamespace::GTSubScene::SwitchToScene)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b20e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSubScene*>(),
                        {"SwitchToScene", {}, {::i2c::type_of<::GlobalNamespace::GTScene*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSubScene.LoadAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSubScene::*)()>(&::GlobalNamespace::GTSubScene::LoadAll)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b20e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSubScene*>(),
                        {"LoadAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSubScene.UnloadAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSubScene::*)()>(&::GlobalNamespace::GTSubScene::UnloadAll)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b20ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSubScene*>(),
                        {"UnloadAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSubScene._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTSubScene::*)()>(&::GlobalNamespace::GTSubScene::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b20f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSubScene*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::GTScene*>& GlobalNamespace::GTSubScene::__cordl_internal_get_scenes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenes;
}
constexpr ::ArrayW<::GlobalNamespace::GTScene*> const& GlobalNamespace::GTSubScene::__cordl_internal_get_scenes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenes;
}
constexpr void GlobalNamespace::GTSubScene::__cordl_internal_set_scenes(::ArrayW<::GlobalNamespace::GTScene*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenes = value;
}
inline void GlobalNamespace::GTSubScene::SwitchToScene(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSubScene*>(),
                        {"SwitchToScene", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::GTSubScene::SwitchToScene(::GlobalNamespace::GTScene*  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSubScene*>(),
                        {"SwitchToScene", {}, {::i2c::type_of<::GlobalNamespace::GTScene*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene);
}
inline void GlobalNamespace::GTSubScene::LoadAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSubScene*>(),
                        {"LoadAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTSubScene::UnloadAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSubScene*>(),
                        {"UnloadAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTSubScene::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSubScene*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTSubScene* GlobalNamespace::GTSubScene::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTSubScene*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTSubScene::GTSubScene()   {
}
