#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GameObjectUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__GameObjectUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__GameObjectUtils_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils.add_GameObjectInstantiated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*)>(&::Unity::XR::CoreUtils::GameObjectUtils::add_GameObjectInstantiated)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb3f2c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"add_GameObjectInstantiated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils.remove_GameObjectInstantiated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*)>(&::Unity::XR::CoreUtils::GameObjectUtils::remove_GameObjectInstantiated)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb3f2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"remove_GameObjectInstantiated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)()>(&::Unity::XR::CoreUtils::GameObjectUtils::Create)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb3f2e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW)>(&::Unity::XR::CoreUtils::GameObjectUtils::Create)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb3f2f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, bool)>(&::Unity::XR::CoreUtils::GameObjectUtils::Instantiate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb3f2fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::XR::CoreUtils::GameObjectUtils::Instantiate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb3f30c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::XR::CoreUtils::GameObjectUtils::Instantiate)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb3f3174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils.CloneWithHideFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*)>(&::Unity::XR::CoreUtils::GameObjectUtils::CloneWithHideFlags)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb3f32cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"CloneWithHideFlags", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils.CopyHideFlagsRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::Unity::XR::CoreUtils::GameObjectUtils::CopyHideFlagsRecursively)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb3f3388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"CopyHideFlagsRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils.GetChildGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::Unity::XR::CoreUtils::GameObjectUtils::GetChildGameObjects)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb3f34bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"GetChildGameObjects", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils.GetNamedChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::StringW)>(&::Unity::XR::CoreUtils::GameObjectUtils::GetNamedChild)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xb3f35e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"GetNamedChild", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::GameObjectUtils::setStaticF_k_GameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "k_GameObjects", ::Unity::XR::CoreUtils::GameObjectUtils*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* Unity::XR::CoreUtils::GameObjectUtils::getStaticF_k_GameObjects()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "k_GameObjects", ::Unity::XR::CoreUtils::GameObjectUtils*>();
}
inline void Unity::XR::CoreUtils::GameObjectUtils::setStaticF_k_Transforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "k_Transforms", ::Unity::XR::CoreUtils::GameObjectUtils*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* Unity::XR::CoreUtils::GameObjectUtils::getStaticF_k_Transforms()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "k_Transforms", ::Unity::XR::CoreUtils::GameObjectUtils*>();
}
inline void Unity::XR::CoreUtils::GameObjectUtils::setStaticF_GameObjectInstantiated(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*, "GameObjectInstantiated", ::Unity::XR::CoreUtils::GameObjectUtils*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::GameObject>>* Unity::XR::CoreUtils::GameObjectUtils::getStaticF_GameObjectInstantiated()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*, "GameObjectInstantiated", ::Unity::XR::CoreUtils::GameObjectUtils*>();
}
inline void Unity::XR::CoreUtils::GameObjectUtils::add_GameObjectInstantiated(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"add_GameObjectInstantiated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::GameObjectUtils::remove_GameObjectInstantiated(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"remove_GameObjectInstantiated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::XR::CoreUtils::GameObjectUtils::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::XR::CoreUtils::GameObjectUtils::Create(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::XR::CoreUtils::GameObjectUtils::Instantiate(::UnityEngine::GameObject*  original, ::UnityEngine::Transform*  parent, bool  worldPositionStays)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, original, parent, worldPositionStays);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::XR::CoreUtils::GameObjectUtils::Instantiate(::UnityEngine::GameObject*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, original, position, rotation);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::XR::CoreUtils::GameObjectUtils::Instantiate(::UnityEngine::GameObject*  original, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, original, parent, position, rotation);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::XR::CoreUtils::GameObjectUtils::CloneWithHideFlags(::UnityEngine::GameObject*  original, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"CloneWithHideFlags", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, original, parent);
}
inline void Unity::XR::CoreUtils::GameObjectUtils::CopyHideFlagsRecursively(::UnityEngine::GameObject*  copyFrom, ::UnityEngine::GameObject*  copyTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"CopyHideFlagsRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, copyFrom, copyTo);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Unity::XR::CoreUtils::GameObjectUtils::ExhaustiveComponentSearch(::UnityEngine::GameObject*  desiredSource)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                    {"ExhaustiveComponentSearch", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, desiredSource);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Unity::XR::CoreUtils::GameObjectUtils::ExhaustiveTaggedComponentSearch(::UnityEngine::GameObject*  desiredSource, ::StringW  tag)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                    {"ExhaustiveTaggedComponentSearch", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, desiredSource, tag);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Unity::XR::CoreUtils::GameObjectUtils::GetComponentInScene(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                    {"GetComponentInScene", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, scene);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void Unity::XR::CoreUtils::GameObjectUtils::GetComponentsInScene(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::List_1<T>*  components, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                    {"GetComponentsInScene", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, components, includeInactive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Unity::XR::CoreUtils::GameObjectUtils::GetComponentInActiveScene()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                    {"GetComponentInActiveScene", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void Unity::XR::CoreUtils::GameObjectUtils::GetComponentsInActiveScene(::System::Collections::Generic::List_1<T>*  components, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                    {"GetComponentsInActiveScene", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, components, includeInactive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void Unity::XR::CoreUtils::GameObjectUtils::GetComponentsInAllScenes(::System::Collections::Generic::List_1<T>*  components, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                    {"GetComponentsInAllScenes", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, components, includeInactive);
}
inline void Unity::XR::CoreUtils::GameObjectUtils::GetChildGameObjects(::UnityEngine::GameObject*  go, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  childGameObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"GetChildGameObjects", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, childGameObjects);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::XR::CoreUtils::GameObjectUtils::GetNamedChild(::UnityEngine::GameObject*  go, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils*>(),
                        {"GetNamedChild", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, go, name);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GameObjectUtils::GameObjectUtils()   {
}
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0::*)()>(&::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3f37fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0._GetNamedChild_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0::*)(::UnityEngine::Transform*)>(&::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0::_GetNamedChild_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb3f38f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0*>(),
                        {"<GetNamedChild>b__0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
inline void Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0::_GetNamedChild_b__0(::UnityEngine::Transform*  currentTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0*>(),
                        {"<GetNamedChild>b__0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentTransform);
}
inline ::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0* Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GameObjectUtils___c__DisplayClass20_0::GameObjectUtils___c__DisplayClass20_0()   {
}
