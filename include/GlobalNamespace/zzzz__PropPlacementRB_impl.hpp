#pragma once
// IWYU pragma private; include "GlobalNamespace/PropPlacementRB.hpp"
#include "UnityEngine/zzzz__MeshCollider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropPlacementRB_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntPropZone_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
#include "GorillaTag/zzzz__GTAssetRef_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropPlacementRB.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropPlacementRB::*)()>(&::GlobalNamespace::PropPlacementRB::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x563faf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropPlacementRB.PlaceProp_NoPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropPlacementRB::*)(::GlobalNamespace::PropHuntPropZone*, ::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GorillaTag::CosmeticSystem::CosmeticSO*)>(&::GlobalNamespace::PropPlacementRB::PlaceProp_NoPool)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x563f7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"PlaceProp_NoPool", {}, {::i2c::type_of<::GlobalNamespace::PropHuntPropZone*>(), ::i2c::type_of<::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropPlacementRB.OnPropLoaded_NoPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropPlacementRB::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(&::GlobalNamespace::PropPlacementRB::OnPropLoaded_NoPool)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x563fb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"OnPropLoaded_NoPool", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropPlacementRB.TryPrepPropTemplate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PropPlacementRB*, ::UnityEngine::GameObject*, ::GorillaTag::CosmeticSystem::CosmeticSO*)>(&::GlobalNamespace::PropPlacementRB::TryPrepPropTemplate)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x563c944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"TryPrepPropTemplate", {}, {::i2c::type_of<::GlobalNamespace::PropPlacementRB*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropPlacementRB.IDelayedExecListener_OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropPlacementRB::*)(int32_t)>(&::GlobalNamespace::PropPlacementRB::IDelayedExecListener_OnDelayedAction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x563fe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropPlacementRB.OnPropFell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropPlacementRB::*)()>(&::GlobalNamespace::PropPlacementRB::OnPropFell)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x563fe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"OnPropFell", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropPlacementRB.DestroyProp_NoPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropPlacementRB::*)()>(&::GlobalNamespace::PropPlacementRB::DestroyProp_NoPool)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x563fd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"DestroyProp_NoPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropPlacementRB._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropPlacementRB::*)()>(&::GlobalNamespace::PropPlacementRB::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x563fed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::PropPlacementRB::__cordl_internal_get_m_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::PropPlacementRB::__cordl_internal_get_m_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rb;
}
constexpr void GlobalNamespace::PropPlacementRB::__cordl_internal_set_m_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_rb = value;
}
constexpr float_t& GlobalNamespace::PropPlacementRB::__cordl_internal_get_m_simDurationBeforeFreeze()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_simDurationBeforeFreeze;
}
constexpr float_t const& GlobalNamespace::PropPlacementRB::__cordl_internal_get_m_simDurationBeforeFreeze() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_simDurationBeforeFreeze;
}
constexpr void GlobalNamespace::PropPlacementRB::__cordl_internal_set_m_simDurationBeforeFreeze(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_simDurationBeforeFreeze = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHuntPropZone>& GlobalNamespace::PropPlacementRB::__cordl_internal_get__parentZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentZone;
}
constexpr ::UnityW<::GlobalNamespace::PropHuntPropZone> const& GlobalNamespace::PropPlacementRB::__cordl_internal_get__parentZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentZone;
}
constexpr void GlobalNamespace::PropPlacementRB::__cordl_internal_set__parentZone(::UnityW<::GlobalNamespace::PropHuntPropZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parentZone = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PropPlacementRB::__cordl_internal_get__placingProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____placingProp;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PropPlacementRB::__cordl_internal_get__placingProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____placingProp;
}
constexpr void GlobalNamespace::PropPlacementRB::__cordl_internal_set__placingProp(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____placingProp = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshCollider>>& GlobalNamespace::PropPlacementRB::__cordl_internal_get__colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshCollider>> const& GlobalNamespace::PropPlacementRB::__cordl_internal_get__colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr void GlobalNamespace::PropPlacementRB::__cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::MeshCollider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliders = value;
}
constexpr bool& GlobalNamespace::PropPlacementRB::__cordl_internal_get__isInstantiatingAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInstantiatingAsync;
}
constexpr bool const& GlobalNamespace::PropPlacementRB::__cordl_internal_get__isInstantiatingAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInstantiatingAsync;
}
constexpr void GlobalNamespace::PropPlacementRB::__cordl_internal_set__isInstantiatingAsync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInstantiatingAsync = value;
}
inline void GlobalNamespace::PropPlacementRB::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropPlacementRB::PlaceProp_NoPool(::GlobalNamespace::PropHuntPropZone*  parentZone, ::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  propRef, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::GorillaTag::CosmeticSystem::CosmeticSO*  debugCosmeticSO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"PlaceProp_NoPool", {}, {::i2c::type_of<::GlobalNamespace::PropHuntPropZone*>(), ::i2c::type_of<::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentZone, propRef, pos, rot, debugCosmeticSO);
}
inline void GlobalNamespace::PropPlacementRB::OnPropLoaded_NoPool(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"OnPropLoaded_NoPool", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool GlobalNamespace::PropPlacementRB::TryPrepPropTemplate(::GlobalNamespace::PropPlacementRB*  rb, ::UnityEngine::GameObject*  rendererGobj, ::GorillaTag::CosmeticSystem::CosmeticSO*  _debugCosmeticSO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"TryPrepPropTemplate", {}, {::i2c::type_of<::GlobalNamespace::PropPlacementRB*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rb, rendererGobj, _debugCosmeticSO);
}
inline void GlobalNamespace::PropPlacementRB::IDelayedExecListener_OnDelayedAction(int32_t  contextId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextId);
}
inline void GlobalNamespace::PropPlacementRB::OnPropFell()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"OnPropFell", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropPlacementRB::DestroyProp_NoPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {"DestroyProp_NoPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropPlacementRB::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropPlacementRB*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropPlacementRB* GlobalNamespace::PropPlacementRB::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropPlacementRB*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr  GlobalNamespace::PropPlacementRB::operator ::GlobalNamespace::IDelayedExecListener*() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* GlobalNamespace::PropPlacementRB::i___GlobalNamespace__IDelayedExecListener() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropPlacementRB::PropPlacementRB()   {
}
