#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelGeneratorV2_TreeLevelConfig.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGeneratorV2_TreeLevelConfig_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSectionConnector_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSection_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig.ValidateDatetime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig::*)(::StringW)>(&::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig::ValidateDatetime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58483f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>(),
                        {"ValidateDatetime", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig::ValidateDatetime(/* [CanBeNull] */ ::StringW  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>(),
                        {"ValidateDatetime", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, timestamp);
}
// Ctor Parameters [CppParam { name: "EnableAfterDatetime", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DisableAfterDatetime", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minHubs", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxHubs", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minCaps", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxCaps", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sectionSpawnConfigs", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endCapSpawnConfigs", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hubs", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endCaps", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "blockers", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "connectors", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig::GhostReactorLevelGeneratorV2_TreeLevelConfig(::StringW  EnableAfterDatetime, ::StringW  DisableAfterDatetime, int32_t  minHubs, int32_t  maxHubs, int32_t  minCaps, int32_t  maxCaps, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  sectionSpawnConfigs, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  endCapSpawnConfigs, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*  hubs, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*  endCaps, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*  blockers, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>>*  connectors) noexcept  {
this->EnableAfterDatetime = EnableAfterDatetime;
this->DisableAfterDatetime = DisableAfterDatetime;
this->minHubs = minHubs;
this->maxHubs = maxHubs;
this->minCaps = minCaps;
this->maxCaps = maxCaps;
this->sectionSpawnConfigs = sectionSpawnConfigs;
this->endCapSpawnConfigs = endCapSpawnConfigs;
this->hubs = hubs;
this->endCaps = endCaps;
this->blockers = blockers;
this->connectors = connectors;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig::GhostReactorLevelGeneratorV2_TreeLevelConfig()   {
}
