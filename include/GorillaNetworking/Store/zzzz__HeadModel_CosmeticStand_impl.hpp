#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/HeadModel_CosmeticStand.hpp"
#include "GlobalNamespace/zzzz__HeadModel_impl.hpp"
#include "GorillaNetworking/Store/zzzz__HeadModel_CosmeticStand_BustType_impl.hpp"
#include "GorillaNetworking/Store/zzzz__HeadModel_CosmeticStand_def.hpp"
#include "GlobalNamespace/zzzz__HeadModel__CosmeticPartLoadInfo_def.hpp"
#include "GorillaNetworking/Store/zzzz__HeadModel_CosmeticStand_BustType_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticInfoV2_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
#include "GorillaTag/zzzz__GTAssetRef_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.get_mountID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)()>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::get_mountID)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cad628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"get_mountID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.LoadCosmeticParts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::GorillaTag::CosmeticSystem::CosmeticSO*, bool)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::LoadCosmeticParts)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5cabc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"LoadCosmeticParts", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.ResetMannequinSkin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)()>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::ResetMannequinSkin)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x5cada40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"ResetMannequinSkin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.HandleLoadCosmeticParts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::GorillaTag::CosmeticSystem::CosmeticSO*, bool)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::HandleLoadCosmeticParts)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5cad6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"HandleLoadCosmeticParts", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.LoadCosmeticPartsV2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::StringW, bool)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::LoadCosmeticPartsV2)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5cab928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"LoadCosmeticPartsV2", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.HandleLoadingAllPieces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::StringW, bool, ::GorillaTag::CosmeticSystem::CosmeticInfoV2)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::HandleLoadingAllPieces)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x5cae388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"HandleLoadingAllPieces", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticInfoV2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand._HandleLoadCosmeticPartsV2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::_HandleLoadCosmeticPartsV2)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x5caed8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"_HandleLoadCosmeticPartsV2", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.HandleLoadingFur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::StringW, bool, ::GorillaTag::CosmeticSystem::CosmeticInfoV2)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::HandleLoadingFur)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5cae928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"HandleLoadingFur", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticInfoV2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand._HandleLoadCosmeticPartsV2Fur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::_HandleLoadCosmeticPartsV2Fur)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5caf54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"_HandleLoadCosmeticPartsV2Fur", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.SetStandType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::GlobalNamespace::HeadModel_CosmeticStand_BustType)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::SetStandType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5caf890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"SetStandType", {}, {::i2c::type_of<::GlobalNamespace::HeadModel_CosmeticStand_BustType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.PositionWardRobeItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::UnityEngine::GameObject*, ::GlobalNamespace::HeadModel__CosmeticPartLoadInfo)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::PositionWardRobeItems)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5cadfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"PositionWardRobeItems", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.PositionWardRobeItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::PositionWardRobeItems)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5caf2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"PositionWardRobeItems", {}, {::i2c::type_of<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.PositionWithWardRobeOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::PositionWithWardRobeOffsets)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5cae278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"PositionWithWardRobeOffsets", {}, {::i2c::type_of<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.ClearManuallySpawnedCosmeticParts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)()>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::ClearManuallySpawnedCosmeticParts)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5cabd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"ClearManuallySpawnedCosmeticParts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.ClearCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)()>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::ClearCosmetics)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5cabec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"ClearCosmetics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.LoadAndInstantiatePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*, ::UnityEngine::Transform*)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::LoadAndInstantiatePrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cadfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"LoadAndInstantiatePrefab", {}, {::i2c::type_of<::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand.UpdateCosmeticsMountPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)(::GorillaTag::CosmeticSystem::CosmeticSO*)>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::UpdateCosmeticsMountPositions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5caccf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"UpdateCosmeticsMountPositions", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::HeadModel_CosmeticStand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::HeadModel_CosmeticStand::*)()>(&::GorillaNetworking::Store::HeadModel_CosmeticStand::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5caf898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HeadModel_CosmeticStand_BustType& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get_bustType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bustType;
}
constexpr ::GlobalNamespace::HeadModel_CosmeticStand_BustType const& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get_bustType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bustType;
}
constexpr void GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_set_bustType(::GlobalNamespace::HeadModel_CosmeticStand_BustType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bustType = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get__manuallySpawnedCosmeticParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manuallySpawnedCosmeticParts;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get__manuallySpawnedCosmeticParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manuallySpawnedCosmeticParts;
}
constexpr void GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_set__manuallySpawnedCosmeticParts(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manuallySpawnedCosmeticParts = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get_mannequin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mannequin;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get_mannequin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mannequin;
}
constexpr void GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_set_mannequin(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mannequin = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get_defaultMannequinFace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMannequinFace;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get_defaultMannequinFace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMannequinFace;
}
constexpr void GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_set_defaultMannequinFace(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMannequinFace = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get_defaultMannequinChest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMannequinChest;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get_defaultMannequinChest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMannequinChest;
}
constexpr void GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_set_defaultMannequinChest(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMannequinChest = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get_defaultMannequinBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMannequinBody;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get_defaultMannequinBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMannequinBody;
}
constexpr void GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_set_defaultMannequinBody(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMannequinBody = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get__loadOp_to_partInfoIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadOp_to_partInfoIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>* const& GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_get__loadOp_to_partInfoIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadOp_to_partInfoIndex;
}
constexpr void GorillaNetworking::Store::HeadModel_CosmeticStand::__cordl_internal_set__loadOp_to_partInfoIndex(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadOp_to_partInfoIndex = value;
}
inline ::StringW GorillaNetworking::Store::HeadModel_CosmeticStand::get_mountID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"get_mountID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::LoadCosmeticParts(::GorillaTag::CosmeticSystem::CosmeticSO*  cosmeticInfo, bool  forRightSide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"LoadCosmeticParts", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticInfo, forRightSide);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::ResetMannequinSkin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"ResetMannequinSkin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::HandleLoadCosmeticParts(::GorillaTag::CosmeticSystem::CosmeticSO*  cosmeticInfo, bool  forRightSide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"HandleLoadCosmeticParts", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticInfo, forRightSide);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::LoadCosmeticPartsV2(::StringW  playFabId, bool  forRightSide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"LoadCosmeticPartsV2", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playFabId, forRightSide);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::HandleLoadingAllPieces(::StringW  playFabId, bool  forRightSide, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  cosmeticInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"HandleLoadingAllPieces", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticInfoV2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playFabId, forRightSide, cosmeticInfo);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::_HandleLoadCosmeticPartsV2(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"_HandleLoadCosmeticPartsV2", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadOp);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::HandleLoadingFur(::StringW  playFabId, bool  forRightSide, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  cosmeticInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"HandleLoadingFur", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticInfoV2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playFabId, forRightSide, cosmeticInfo);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::_HandleLoadCosmeticPartsV2Fur(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"_HandleLoadCosmeticPartsV2Fur", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadOp);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::SetStandType(::GlobalNamespace::HeadModel_CosmeticStand_BustType  newBustType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"SetStandType", {}, {::i2c::type_of<::GlobalNamespace::HeadModel_CosmeticStand_BustType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBustType);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::PositionWardRobeItems(::UnityEngine::GameObject*  instantiateEdObject, ::GlobalNamespace::HeadModel__CosmeticPartLoadInfo  partLoadInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"PositionWardRobeItems", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instantiateEdObject, partLoadInfo);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::PositionWardRobeItems(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo  partLoadInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"PositionWardRobeItems", {}, {::i2c::type_of<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partLoadInfo);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::PositionWithWardRobeOffsets(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo  partLoadInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"PositionWithWardRobeOffsets", {}, {::i2c::type_of<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partLoadInfo);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::ClearManuallySpawnedCosmeticParts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"ClearManuallySpawnedCosmeticParts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::ClearCosmetics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"ClearCosmetics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GorillaNetworking::Store::HeadModel_CosmeticStand::LoadAndInstantiatePrefab(::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  prefabAssetRef, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"LoadAndInstantiatePrefab", {}, {::i2c::type_of<::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefabAssetRef, parent);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::UpdateCosmeticsMountPositions(::GorillaTag::CosmeticSystem::CosmeticSO*  findCosmeticInAllCosmeticsArraySO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {"UpdateCosmeticsMountPositions", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, findCosmeticInAllCosmeticsArraySO);
}
inline void GorillaNetworking::Store::HeadModel_CosmeticStand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::HeadModel_CosmeticStand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::HeadModel_CosmeticStand* GorillaNetworking::Store::HeadModel_CosmeticStand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::HeadModel_CosmeticStand*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::HeadModel_CosmeticStand::HeadModel_CosmeticStand()   {
}
