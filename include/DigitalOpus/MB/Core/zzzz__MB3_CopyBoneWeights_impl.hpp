#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_CopyBoneWeights.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_CopyBoneWeights_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_CopyBoneWeights.CopyBoneWeightsFromSeamMeshToOtherMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Mesh*>, ::ArrayW<::ArrayW<::UnityEngine::Transform*>>, ::ArrayW<::UnityEngine::Transform*>, ::ArrayW<::ArrayW<::UnityEngine::Transform*>>)>(&::DigitalOpus::MB::Core::MB3_CopyBoneWeights::CopyBoneWeightsFromSeamMeshToOtherMeshes)> {
  constexpr static std::size_t size = 0x128c;
  constexpr static std::size_t addrs = 0x9d82f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_CopyBoneWeights*>(),
                        {"CopyBoneWeightsFromSeamMeshToOtherMeshes", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Transform*>>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Transform*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_CopyBoneWeights.RemapBoneWeightIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::UnityEngine::BoneWeight>, ::ArrayW<int32_t>, ::ArrayW<::UnityEngine::Transform*>, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, ::ArrayW<::UnityEngine::Transform*>)>(&::DigitalOpus::MB::Core::MB3_CopyBoneWeights::RemapBoneWeightIndexes)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x9d841e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_CopyBoneWeights*>(),
                        {"RemapBoneWeightIndexes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::BoneWeight>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_CopyBoneWeights._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_CopyBoneWeights::*)()>(&::DigitalOpus::MB::Core::MB3_CopyBoneWeights::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d844e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_CopyBoneWeights*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB3_CopyBoneWeights::CopyBoneWeightsFromSeamMeshToOtherMeshes(float_t  radius, ::UnityEngine::Mesh*  seamMesh, ::ArrayW<::UnityEngine::Mesh*>  targetMeshes, ::ArrayW<::ArrayW<::UnityEngine::Transform*>>  newBonesForSMRs, ::ArrayW<::UnityEngine::Transform*>  seamMeshBones, ::ArrayW<::ArrayW<::UnityEngine::Transform*>>  targMeshBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_CopyBoneWeights*>(),
                        {"CopyBoneWeightsFromSeamMeshToOtherMeshes", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Transform*>>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Transform*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, radius, seamMesh, targetMeshes, newBonesForSMRs, seamMeshBones, targMeshBones);
}
inline void DigitalOpus::MB::Core::MB3_CopyBoneWeights::RemapBoneWeightIndexes(::StringW  nm, ::by_ref<::UnityEngine::BoneWeight>  seamMeshBw, ::ArrayW<int32_t>  map_seamMeshIdx2targMeshIdx, ::ArrayW<::UnityEngine::Transform*>  targBones, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  extraBones, ::ArrayW<::UnityEngine::Transform*>  seamBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_CopyBoneWeights*>(),
                        {"RemapBoneWeightIndexes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::BoneWeight>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nm, seamMeshBw, map_seamMeshIdx2targMeshIdx, targBones, extraBones, seamBones);
}
inline void DigitalOpus::MB::Core::MB3_CopyBoneWeights::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_CopyBoneWeights*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_CopyBoneWeights* DigitalOpus::MB::Core::MB3_CopyBoneWeights::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_CopyBoneWeights*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_CopyBoneWeights::MB3_CopyBoneWeights()   {
}
