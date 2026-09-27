#pragma once
// IWYU pragma private; include "GlobalNamespace/GTContactManager.hpp"
#include "GlobalNamespace/zzzz__GTContactPoint_impl.hpp"
#include "GlobalNamespace/zzzz__SRand_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GTContactManager_def.hpp"
#include "GlobalNamespace/zzzz__GTContactPoint_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTContactManager.InitializeOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTContactManager::InitializeOnLoad)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56746d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTContactManager.InitContactPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::GTContactPoint*> (*)(int32_t)>(&::GlobalNamespace::GTContactManager::InitContactPoints)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x56746d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {"InitContactPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTContactManager.RaiseContact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GTContactManager::RaiseContact)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x56747e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {"RaiseContact", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTContactManager.ProcessContacts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTContactManager::ProcessContacts)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5674964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {"ProcessContacts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTContactManager.Transfer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::GTContactManager::Transfer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5674a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {"Transfer", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTContactManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTContactManager::*)()>(&::GlobalNamespace::GTContactManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5674ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTContactManager::setStaticF_ShaderData(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "ShaderData", ::GlobalNamespace::GTContactManager*>(std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> GlobalNamespace::GTContactManager::getStaticF_ShaderData()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "ShaderData", ::GlobalNamespace::GTContactManager*>();
}
inline void GlobalNamespace::GTContactManager::setStaticF__gContactPoints(::ArrayW<::GlobalNamespace::GTContactPoint*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::GTContactPoint*>, "_gContactPoints", ::GlobalNamespace::GTContactManager*>(std::forward<::ArrayW<::GlobalNamespace::GTContactPoint*>>(value));
}
inline ::ArrayW<::GlobalNamespace::GTContactPoint*> GlobalNamespace::GTContactManager::getStaticF__gContactPoints()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::GTContactPoint*>, "_gContactPoints", ::GlobalNamespace::GTContactManager*>();
}
inline void GlobalNamespace::GTContactManager::setStaticF_gNextFree(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "gNextFree", ::GlobalNamespace::GTContactManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GTContactManager::getStaticF_gNextFree()  {
return ::cordl_internals::getStaticField<int32_t, "gNextFree", ::GlobalNamespace::GTContactManager*>();
}
inline void GlobalNamespace::GTContactManager::setStaticF_gRND(::GlobalNamespace::SRand  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SRand, "gRND", ::GlobalNamespace::GTContactManager*>(std::forward<::GlobalNamespace::SRand>(value));
}
inline ::GlobalNamespace::SRand GlobalNamespace::GTContactManager::getStaticF_gRND()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SRand, "gRND", ::GlobalNamespace::GTContactManager*>();
}
inline void GlobalNamespace::GTContactManager::InitializeOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::GTContactPoint*> GlobalNamespace::GTContactManager::InitContactPoints(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {"InitContactPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::GTContactPoint*>>(nullptr, ___internal_method, count);
}
inline void GlobalNamespace::GTContactManager::RaiseContact(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {"RaiseContact", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, point, normal);
}
inline void GlobalNamespace::GTContactManager::ProcessContacts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {"ProcessContacts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTContactManager::Transfer(::by_ref<::UnityEngine::Matrix4x4>  from, ::by_ref<::UnityEngine::Matrix4x4>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {"Transfer", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void GlobalNamespace::GTContactManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTContactManager* GlobalNamespace::GTContactManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTContactManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTContactManager::GTContactManager()   {
}
