#pragma once
// IWYU pragma private; include "Fusion/NetworkMecanimAnimator_AnimatorData.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_impl.hpp"
#include "Fusion/zzzz__NetworkMecanimAnimator_AnimatorData_def.hpp"
#include "Fusion/zzzz__AnimatorSyncSettings_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkMecanimAnimator_AnimatorData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMecanimAnimator_AnimatorData::*)(::UnityEngine::Animator*, ::Fusion::AnimatorSyncSettings)>(&::GlobalNamespace::NetworkMecanimAnimator_AnimatorData::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5f86388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMecanimAnimator_AnimatorData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::Fusion::AnimatorSyncSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMecanimAnimator_AnimatorData.GetWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::AnimatorSyncSettings, ::ArrayW<::UnityEngine::AnimatorControllerParameter*>, ::ArrayW<int32_t>, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::NetworkMecanimAnimator_AnimatorData::GetWordCount)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5f86578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMecanimAnimator_AnimatorData>(),
                        {"GetWordCount", {}, {::i2c::type_of<::Fusion::AnimatorSyncSettings>(), ::i2c::type_of<::ArrayW<::UnityEngine::AnimatorControllerParameter*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkMecanimAnimator_AnimatorData::_ctor(::UnityEngine::Animator*  animator, ::Fusion::AnimatorSyncSettings  syncSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMecanimAnimator_AnimatorData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::Fusion::AnimatorSyncSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, animator, syncSettings);
}
inline int32_t GlobalNamespace::NetworkMecanimAnimator_AnimatorData::GetWordCount(::Fusion::AnimatorSyncSettings  syncSettings, ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  parameters, ::ArrayW<int32_t>  parameterHashes, int32_t  layerCount, ::by_ref<int32_t>  param32Count, ::by_ref<int32_t>  paramBoolCount, ::by_ref<int32_t>  syncedLayerCount, ::by_ref<int32_t>  wordsUsedForBools)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMecanimAnimator_AnimatorData>(),
                        {"GetWordCount", {}, {::i2c::type_of<::Fusion::AnimatorSyncSettings>(), ::i2c::type_of<::ArrayW<::UnityEngine::AnimatorControllerParameter*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, syncSettings, parameters, parameterHashes, layerCount, param32Count, paramBoolCount, syncedLayerCount, wordsUsedForBools);
}
// Ctor Parameters [CppParam { name: "Param32Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ParamBoolCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Parameters", ty: "::ArrayW<::UnityEngine::AnimatorControllerParameter*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ParameterCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ParameterHashes", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LayerCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SyncedLayerCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ParamBoolsWordCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ParamBoolsPtrOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "WordCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PrevBoolsBitmask", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkMecanimAnimator_AnimatorData::NetworkMecanimAnimator_AnimatorData(int32_t  Param32Count, int32_t  ParamBoolCount, ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  Parameters, int32_t  ParameterCount, ::ArrayW<int32_t>  ParameterHashes, int32_t  LayerCount, int32_t  SyncedLayerCount, int32_t  ParamBoolsWordCount, int32_t  ParamBoolsPtrOffset, int32_t  WordCount, ::ArrayW<int32_t>  PrevBoolsBitmask) noexcept  {
this->Param32Count = Param32Count;
this->ParamBoolCount = ParamBoolCount;
this->Parameters = Parameters;
this->ParameterCount = ParameterCount;
this->ParameterHashes = ParameterHashes;
this->LayerCount = LayerCount;
this->SyncedLayerCount = SyncedLayerCount;
this->ParamBoolsWordCount = ParamBoolsWordCount;
this->ParamBoolsPtrOffset = ParamBoolsPtrOffset;
this->WordCount = WordCount;
this->PrevBoolsBitmask = PrevBoolsBitmask;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkMecanimAnimator_AnimatorData::NetworkMecanimAnimator_AnimatorData()   {
}
