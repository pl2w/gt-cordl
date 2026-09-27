#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsV2Spawner_Dirty_LoadOpInfo.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAttachInfo_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticInfoV2_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticPart_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsV2Spawner_Dirty_LoadOpInfo_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAttachInfo_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticInfoV2_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticPart_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo::*)(::GorillaTag::CosmeticSystem::CosmeticAttachInfo, ::GorillaTag::CosmeticSystem::CosmeticPart, int32_t, ::GorillaTag::CosmeticSystem::CosmeticInfoV2, int32_t)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5669398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticPart>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticInfoV2>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo::_ctor(::GorillaTag::CosmeticSystem::CosmeticAttachInfo  attachInfo, ::GorillaTag::CosmeticSystem::CosmeticPart  part, int32_t  partIndex, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  cosmeticInfoV2, int32_t  vrRigIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticPart>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticInfoV2>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, attachInfo, part, partIndex, cosmeticInfoV2, vrRigIndex);
}
// Ctor Parameters [CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "loadOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resultGObj", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachInfo", ty: "::GorillaTag::CosmeticSystem::CosmeticAttachInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "part", ty: "::GorillaTag::CosmeticSystem::CosmeticPart", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "partIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cosmeticInfoV2", ty: "::GorillaTag::CosmeticSystem::CosmeticInfoV2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vrRigIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo::CosmeticsV2Spawner_Dirty_LoadOpInfo(bool  isStarted, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp, ::UnityW<::UnityEngine::GameObject>  resultGObj, ::GorillaTag::CosmeticSystem::CosmeticAttachInfo  attachInfo, ::GorillaTag::CosmeticSystem::CosmeticPart  part, int32_t  partIndex, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  cosmeticInfoV2, int32_t  vrRigIndex) noexcept  {
this->isStarted = isStarted;
this->loadOp = loadOp;
this->resultGObj = resultGObj;
this->attachInfo = attachInfo;
this->part = part;
this->partIndex = partIndex;
this->cosmeticInfoV2 = cosmeticInfoV2;
this->vrRigIndex = vrRigIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo::CosmeticsV2Spawner_Dirty_LoadOpInfo()   {
}
