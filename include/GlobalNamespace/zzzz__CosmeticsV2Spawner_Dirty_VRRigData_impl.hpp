#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsV2Spawner_Dirty_VRRigData.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsV2Spawner_Dirty_VRRigData_def.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData::*)(::GlobalNamespace::VRRig*, ::ArrayW<::UnityEngine::Transform*>)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData::_ctor)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x566858c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData::_ctor(::GlobalNamespace::VRRig*  vrRig, ::ArrayW<::UnityEngine::Transform*>  boneXforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vrRig, boneXforms);
}
// Ctor Parameters [CppParam { name: "vrRig", ty: "::UnityW<::GlobalNamespace::VRRig>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boneXforms", ty: "::ArrayW<::UnityW<::UnityEngine::Transform>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bdPositionsComp", ty: "::UnityW<::GlobalNamespace::BodyDockPositions>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vrRig_cosmetics", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vrRig_override", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentOfDeactivatedHoldables", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bdPositions_allObjects_length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bdPositions_leftHandThrowables", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bdPositions_rightHandThrowables", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData::CosmeticsV2Spawner_Dirty_VRRigData(::UnityW<::GlobalNamespace::VRRig>  vrRig, ::ArrayW<::UnityW<::UnityEngine::Transform>>  boneXforms, ::UnityW<::GlobalNamespace::BodyDockPositions>  bdPositionsComp, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  vrRig_cosmetics, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  vrRig_override, ::UnityW<::UnityEngine::Transform>  parentOfDeactivatedHoldables, int32_t  bdPositions_allObjects_length, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  bdPositions_leftHandThrowables, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  bdPositions_rightHandThrowables) noexcept  {
this->vrRig = vrRig;
this->boneXforms = boneXforms;
this->bdPositionsComp = bdPositionsComp;
this->vrRig_cosmetics = vrRig_cosmetics;
this->vrRig_override = vrRig_override;
this->parentOfDeactivatedHoldables = parentOfDeactivatedHoldables;
this->bdPositions_allObjects_length = bdPositions_allObjects_length;
this->bdPositions_leftHandThrowables = bdPositions_leftHandThrowables;
this->bdPositions_rightHandThrowables = bdPositions_rightHandThrowables;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData::CosmeticsV2Spawner_Dirty_VRRigData()   {
}
