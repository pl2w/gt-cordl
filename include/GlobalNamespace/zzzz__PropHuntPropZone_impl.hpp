#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntPropZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropHuntPropZone_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
#include "GlobalNamespace/zzzz__PropPlacementRB_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
#include "GorillaTag/zzzz__GTAssetRef_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHuntPropZone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPropZone::*)()>(&::GlobalNamespace::PropHuntPropZone::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x563ebb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPropZone.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPropZone::*)()>(&::GlobalNamespace::PropHuntPropZone::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x563ec0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPropZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPropZone::*)()>(&::GlobalNamespace::PropHuntPropZone::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x563ec64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPropZone.DestroyDecoys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPropZone::*)()>(&::GlobalNamespace::PropHuntPropZone::DestroyDecoys)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x563ecc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"DestroyDecoys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPropZone.OnRoundStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPropZone::*)()>(&::GlobalNamespace::PropHuntPropZone::OnRoundStart)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x563ee94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"OnRoundStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPropZone.CreateDecoys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPropZone::*)(int32_t)>(&::GlobalNamespace::PropHuntPropZone::CreateDecoys)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x563efa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"CreateDecoys", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPropZone.OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPropZone::*)(int32_t)>(&::GlobalNamespace::PropHuntPropZone::OnDelayedAction)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x563f494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPropZone._GetOrCreatePropPlacementObj_NoPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PropPlacementRB> (::GlobalNamespace::PropHuntPropZone::*)()>(&::GlobalNamespace::PropHuntPropZone::_GetOrCreatePropPlacementObj_NoPool)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x563f5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"_GetOrCreatePropPlacementObj_NoPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPropZone.SpawnProp_NoPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPropZone::*)(::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GorillaTag::CosmeticSystem::CosmeticSO*)>(&::GlobalNamespace::PropHuntPropZone::SpawnProp_NoPool)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x563f754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"SpawnProp_NoPool", {}, {::i2c::type_of<::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPropZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPropZone::*)()>(&::GlobalNamespace::PropHuntPropZone::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x563fa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PropPlacementRB>& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_propPlacementPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propPlacementPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PropPlacementRB> const& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_propPlacementPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propPlacementPrefab;
}
constexpr void GlobalNamespace::PropHuntPropZone::__cordl_internal_set_propPlacementPrefab(::UnityW<::GlobalNamespace::PropPlacementRB>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propPlacementPrefab = value;
}
constexpr int32_t& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_seedOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedOffset;
}
constexpr int32_t const& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_seedOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedOffset;
}
constexpr void GlobalNamespace::PropHuntPropZone::__cordl_internal_set_seedOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedOffset = value;
}
constexpr float_t& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GlobalNamespace::PropHuntPropZone::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr int32_t& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_numProps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numProps;
}
constexpr int32_t const& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_numProps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numProps;
}
constexpr void GlobalNamespace::PropHuntPropZone::__cordl_internal_set_numProps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numProps = value;
}
constexpr float_t& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_m_simDurationBeforeFreeze()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_simDurationBeforeFreeze;
}
constexpr float_t const& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_m_simDurationBeforeFreeze() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_simDurationBeforeFreeze;
}
constexpr void GlobalNamespace::PropHuntPropZone::__cordl_internal_set_m_simDurationBeforeFreeze(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_simDurationBeforeFreeze = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_boxCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boxCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_boxCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boxCollider;
}
constexpr void GlobalNamespace::PropHuntPropZone::__cordl_internal_set_boxCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boxCollider = value;
}
constexpr bool& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_hasBoxCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBoxCollider;
}
constexpr bool const& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_hasBoxCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBoxCollider;
}
constexpr void GlobalNamespace::PropHuntPropZone::__cordl_internal_set_hasBoxCollider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasBoxCollider = value;
}
constexpr int32_t& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_nextUnusedPropPlacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextUnusedPropPlacement;
}
constexpr int32_t const& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_nextUnusedPropPlacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextUnusedPropPlacement;
}
constexpr void GlobalNamespace::PropHuntPropZone::__cordl_internal_set_nextUnusedPropPlacement(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextUnusedPropPlacement = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_propPlacementRBs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propPlacementRBs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropPlacementRB>>* const& GlobalNamespace::PropHuntPropZone::__cordl_internal_get_propPlacementRBs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propPlacementRBs;
}
constexpr void GlobalNamespace::PropHuntPropZone::__cordl_internal_set_propPlacementRBs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propPlacementRBs = value;
}
inline void GlobalNamespace::PropHuntPropZone::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntPropZone::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntPropZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntPropZone::DestroyDecoys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"DestroyDecoys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntPropZone::OnRoundStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"OnRoundStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntPropZone::CreateDecoys(int32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"CreateDecoys", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void GlobalNamespace::PropHuntPropZone::OnDelayedAction(int32_t  contextId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextId);
}
inline ::UnityW<::GlobalNamespace::PropPlacementRB> GlobalNamespace::PropHuntPropZone::_GetOrCreatePropPlacementObj_NoPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"_GetOrCreatePropPlacementObj_NoPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PropPlacementRB>>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntPropZone::SpawnProp_NoPool(::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  item, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::GorillaTag::CosmeticSystem::CosmeticSO*  debugCosmeticSO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {"SpawnProp_NoPool", {}, {::i2c::type_of<::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, pos, rot, debugCosmeticSO);
}
inline void GlobalNamespace::PropHuntPropZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPropZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropHuntPropZone* GlobalNamespace::PropHuntPropZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHuntPropZone*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr  GlobalNamespace::PropHuntPropZone::operator ::GlobalNamespace::IDelayedExecListener*() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* GlobalNamespace::PropHuntPropZone::i___GlobalNamespace__IDelayedExecListener() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntPropZone::PropHuntPropZone()   {
}
