#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomCarveableObject.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "UnityEngine/zzzz__BoundsInt_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GlobalNamespace/zzzz__RandomCarveableObject_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__RandomCarveableObject__SpawnCarveable_d__30_def.hpp"
#include "GlobalNamespace/zzzz__RigEventVolume_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.get_HasAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::get_HasAuthority)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d1736c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::Start)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5d173bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::OnDestroy)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d1757c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::Init)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d17524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.ClearWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::ClearWorld)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d177b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"ClearWorld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.FillBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::FillBounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1785c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"FillBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.SetBoundsDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)(uint8_t)>(&::GlobalNamespace::RandomCarveableObject::SetBoundsDensity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d17864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"SetBoundsDensity", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.SetCarveable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)(int32_t)>(&::GlobalNamespace::RandomCarveableObject::SetCarveable)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5d178e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"SetCarveable", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.OnPlayerCountChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::OnPlayerCountChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d174f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"OnPlayerCountChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.SetCanRequestNewCarveable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)(bool)>(&::GlobalNamespace::RandomCarveableObject::SetCanRequestNewCarveable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d17ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"SetCanRequestNewCarveable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.RequestSpawnRandomCarveable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::RequestSpawnRandomCarveable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5d17b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"RequestSpawnRandomCarveable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.IsValidAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RandomCarveableObject::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RandomCarveableObject::IsValidAuthorityRPC)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d17c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.RPC_SpawnRandomCarveable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RandomCarveableObject::RPC_SpawnRandomCarveable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d17cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"RPC_SpawnRandomCarveable", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.SpawnRandomCarveable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::SpawnRandomCarveable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d176a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"SpawnRandomCarveable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.SpawnCarveable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)(int32_t)>(&::GlobalNamespace::RandomCarveableObject::SpawnCarveable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d17700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"SpawnCarveable", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.IncrementVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::IncrementVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d17d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"IncrementVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.IsValidPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RandomCarveableObject::*)(int32_t)>(&::GlobalNamespace::RandomCarveableObject::IsValidPrefab)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d176d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"IsValidPrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::WriteDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d17da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::ReadDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d17dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RandomCarveableObject::WriteDataPUN)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d17db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RandomCarveableObject::ReadDataPUN)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d17e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.OnStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)(int32_t, int32_t)>(&::GlobalNamespace::RandomCarveableObject::OnStateChange)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d17f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"OnStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d17f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject._SpawnCarveable_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::_SpawnCarveable_b__30_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d17fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"<SpawnCarveable>b__30_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject._SpawnCarveable_b__30_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::_SpawnCarveable_b__30_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d17fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"<SpawnCarveable>b__30_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)(bool)>(&::GlobalNamespace::RandomCarveableObject::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d18014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject::*)()>(&::GlobalNamespace::RandomCarveableObject::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1801c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_spawnPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_spawnPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoint;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set_spawnPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPoint = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_prefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabs;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_prefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabs;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set_prefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabs = value;
}
constexpr uint8_t& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_materialId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialId;
}
constexpr uint8_t const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_materialId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialId;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set_materialId(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialId = value;
}
constexpr ::UnityW<::Voxels::VoxelWorld>& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_world()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___world;
}
constexpr ::UnityW<::Voxels::VoxelWorld> const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_world() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___world;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set_world(::UnityW<::Voxels::VoxelWorld>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___world = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_spawnFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_spawnFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnFX;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set_spawnFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnFX = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_spamCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spamCheck;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_spamCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spamCheck;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set_spamCheck(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spamCheck = value;
}
constexpr ::UnityW<::GlobalNamespace::RigEventVolume>& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_proximityTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityTrigger;
}
constexpr ::UnityW<::GlobalNamespace::RigEventVolume> const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_proximityTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityTrigger;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set_proximityTrigger(::UnityW<::GlobalNamespace::RigEventVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityTrigger = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set_button(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
constexpr int32_t& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__carveableIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____carveableIndex;
}
constexpr int32_t const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__carveableIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____carveableIndex;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set__carveableIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____carveableIndex = value;
}
constexpr int32_t& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr int32_t const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set__version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__carveable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____carveable;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__carveable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____carveable;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set__carveable(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____carveable = value;
}
constexpr ::ArrayW<::Unity::Mathematics::int3>& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__voxels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voxels;
}
constexpr ::ArrayW<::Unity::Mathematics::int3> const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__voxels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voxels;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set__voxels(::ArrayW<::Unity::Mathematics::int3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voxels = value;
}
constexpr ::UnityEngine::BoundsInt& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__voxelBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voxelBounds;
}
constexpr ::UnityEngine::BoundsInt const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__voxelBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voxelBounds;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set__voxelBounds(::UnityEngine::BoundsInt  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voxelBounds = value;
}
constexpr bool& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__buttonConfigured()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonConfigured;
}
constexpr bool const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__buttonConfigured() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonConfigured;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set__buttonConfigured(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonConfigured = value;
}
constexpr bool& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__canRequestNewCarveable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canRequestNewCarveable;
}
constexpr bool const& GlobalNamespace::RandomCarveableObject::__cordl_internal_get__canRequestNewCarveable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canRequestNewCarveable;
}
constexpr void GlobalNamespace::RandomCarveableObject::__cordl_internal_set__canRequestNewCarveable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canRequestNewCarveable = value;
}
inline bool GlobalNamespace::RandomCarveableObject::get_HasAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject::ClearWorld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"ClearWorld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject::FillBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"FillBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject::SetBoundsDensity(uint8_t  density)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"SetBoundsDensity", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, density);
}
inline void GlobalNamespace::RandomCarveableObject::SetCarveable(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"SetCarveable", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::RandomCarveableObject::OnPlayerCountChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"OnPlayerCountChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject::SetCanRequestNewCarveable(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"SetCanRequestNewCarveable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::RandomCarveableObject::RequestSpawnRandomCarveable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"RequestSpawnRandomCarveable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RandomCarveableObject::IsValidAuthorityRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"IsValidAuthorityRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info);
}
inline void GlobalNamespace::RandomCarveableObject::RPC_SpawnRandomCarveable(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"RPC_SpawnRandomCarveable", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::RandomCarveableObject::SpawnRandomCarveable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"SpawnRandomCarveable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject::SpawnCarveable(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"SpawnCarveable", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::RandomCarveableObject::IncrementVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"IncrementVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RandomCarveableObject::IsValidPrefab(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"IsValidPrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void GlobalNamespace::RandomCarveableObject::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::RandomCarveableObject::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::RandomCarveableObject::OnStateChange(int32_t  newIndex, int32_t  newVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"OnStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIndex, newVersion);
}
inline void GlobalNamespace::RandomCarveableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RandomCarveableObject::_SpawnCarveable_b__30_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"<SpawnCarveable>b__30_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::RandomCarveableObject::_SpawnCarveable_b__30_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(),
                        {"<SpawnCarveable>b__30_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::RandomCarveableObject::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomCarveableObject*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomCarveableObject* GlobalNamespace::RandomCarveableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomCarveableObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomCarveableObject::RandomCarveableObject()   {
}
