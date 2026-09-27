#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformFollowXScene.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TransformFollowXScene_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformFollowXScene.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformFollowXScene::*)()>(&::GlobalNamespace::TransformFollowXScene::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x598fcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollowXScene*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformFollowXScene.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformFollowXScene::*)()>(&::GlobalNamespace::TransformFollowXScene::Start)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x598fd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollowXScene*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformFollowXScene.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformFollowXScene::*)()>(&::GlobalNamespace::TransformFollowXScene::LateUpdate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x598fd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollowXScene*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformFollowXScene._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformFollowXScene::*)()>(&::GlobalNamespace::TransformFollowXScene::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598fe38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollowXScene*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::TransformFollowXScene::__cordl_internal_get_refToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refToFollow;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::TransformFollowXScene::__cordl_internal_get_refToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refToFollow;
}
constexpr void GlobalNamespace::TransformFollowXScene::__cordl_internal_set_refToFollow(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___refToFollow = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransformFollowXScene::__cordl_internal_get_transformToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformToFollow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransformFollowXScene::__cordl_internal_get_transformToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformToFollow;
}
constexpr void GlobalNamespace::TransformFollowXScene::__cordl_internal_set_transformToFollow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformToFollow = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransformFollowXScene::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransformFollowXScene::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GlobalNamespace::TransformFollowXScene::__cordl_internal_set_offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransformFollowXScene::__cordl_internal_get_prevPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransformFollowXScene::__cordl_internal_get_prevPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPos;
}
constexpr void GlobalNamespace::TransformFollowXScene::__cordl_internal_set_prevPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevPos = value;
}
inline void GlobalNamespace::TransformFollowXScene::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollowXScene*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformFollowXScene::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollowXScene*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformFollowXScene::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollowXScene*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformFollowXScene::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFollowXScene*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransformFollowXScene* GlobalNamespace::TransformFollowXScene::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransformFollowXScene*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformFollowXScene::TransformFollowXScene()   {
}
