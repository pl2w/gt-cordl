#pragma once
// IWYU pragma private; include "Pooling/Pool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pooling/zzzz__Pool_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pooling::Pool.OnSceneManagerSceneUnload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::Pooling::Pool::OnSceneManagerSceneUnload)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b6f924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"OnSceneManagerSceneUnload", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.OnSceneChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Pooling::Pool::OnSceneChange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b6f970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"OnSceneChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.CreatePool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>* (*)(::UnityEngine::GameObject*, bool, int32_t, int32_t)>(&::Pooling::Pool::CreatePool)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5b6fb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"CreatePool", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.GetOrCreatePool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>* (*)(::UnityEngine::GameObject*)>(&::Pooling::Pool::GetOrCreatePool)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b6fd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetOrCreatePool", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.GetPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>* (*)(::UnityEngine::GameObject*)>(&::Pooling::Pool::GetPool)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b6fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetPool", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.ChildToPoolRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::Pooling::Pool::ChildToPoolRoot)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b6fee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"ChildToPoolRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*)>(&::Pooling::Pool::CreateInstance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b6ff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*)>(&::Pooling::Pool::Get)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b70060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*)>(&::Pooling::Pool::Get)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b702d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Pooling::Pool::Get)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5b70160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(&::Pooling::Pool::Get)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5b703a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.GetUninstantiated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*)>(&::Pooling::Pool::GetUninstantiated)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b70550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetUninstantiated", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.GetUninstantiated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Pooling::Pool::GetUninstantiated)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b70650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetUninstantiated", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.GetUninstantiated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*)>(&::Pooling::Pool::GetUninstantiated)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b707a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetUninstantiated", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.GetUninstantiated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(&::Pooling::Pool::GetUninstantiated)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5b70878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetUninstantiated", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::Pooling::Pool::Release)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5b70a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.DestroyPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Pooling::Pool::DestroyPool)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5b6fa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"DestroyPool", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.OnGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Pooling::Pool::OnGet)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b70b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"OnGet", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Pooling::Pool::OnRelease)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b70b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"OnRelease", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::Pool.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Pooling::Pool::OnDestroy)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b70c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"OnDestroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pooling::Pool::setStaticF_poolDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>*>*, "poolDict", ::Pooling::Pool*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>*>* Pooling::Pool::getStaticF_poolDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>*>*, "poolDict", ::Pooling::Pool*>();
}
inline void Pooling::Pool::OnSceneManagerSceneUnload(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"OnSceneManagerSceneUnload", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
inline void Pooling::Pool::OnSceneChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"OnSceneChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>* Pooling::Pool::CreatePool(::UnityEngine::GameObject*  prefab, bool  collectionChecks, int32_t  defaultCapacity, int32_t  maxPoolSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"CreatePool", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, prefab, collectionChecks, defaultCapacity, maxPoolSize);
}
inline ::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>* Pooling::Pool::GetOrCreatePool(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetOrCreatePool", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, prefab);
}
inline ::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>* Pooling::Pool::GetPool(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetPool", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, prefab);
}
inline void Pooling::Pool::ChildToPoolRoot(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"ChildToPoolRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform);
}
inline ::UnityW<::UnityEngine::GameObject> Pooling::Pool::CreateInstance(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefab);
}
inline ::UnityW<::UnityEngine::GameObject> Pooling::Pool::Get(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefab);
}
inline ::UnityW<::UnityEngine::GameObject> Pooling::Pool::Get(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefab, parent);
}
inline ::UnityW<::UnityEngine::GameObject> Pooling::Pool::Get(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefab, position, rotation);
}
inline ::UnityW<::UnityEngine::GameObject> Pooling::Pool::Get(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefab, position, rotation, parent);
}
inline ::UnityW<::UnityEngine::GameObject> Pooling::Pool::GetUninstantiated(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetUninstantiated", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefab);
}
inline ::UnityW<::UnityEngine::GameObject> Pooling::Pool::GetUninstantiated(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetUninstantiated", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefab, position, rotation);
}
inline ::UnityW<::UnityEngine::GameObject> Pooling::Pool::GetUninstantiated(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetUninstantiated", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefab, parent);
}
inline ::UnityW<::UnityEngine::GameObject> Pooling::Pool::GetUninstantiated(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"GetUninstantiated", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefab, position, rotation, parent);
}
inline void Pooling::Pool::Release(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab, instance);
}
inline void Pooling::Pool::DestroyPool(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"DestroyPool", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab);
}
inline void Pooling::Pool::OnGet(::UnityEngine::GameObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"OnGet", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance);
}
inline void Pooling::Pool::OnRelease(::UnityEngine::GameObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"OnRelease", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance);
}
inline void Pooling::Pool::OnDestroy(::UnityEngine::GameObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool*>(),
                        {"OnDestroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance);
}
// Ctor Parameters []
constexpr ::Pooling::Pool::Pool()   {
}
constexpr ::UnityW<::UnityEngine::Transform>  Pooling::Pool::PoolRoot{{}};
