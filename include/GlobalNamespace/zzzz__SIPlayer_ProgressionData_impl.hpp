#pragma once
// IWYU pragma private; include "GlobalNamespace/SIPlayer_ProgressionData.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_ProgressionData_def.hpp"
#include "GlobalNamespace/zzzz__SIProgression_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIPlayer_ProgressionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer_ProgressionData::*)(bool)>(&::GlobalNamespace::SIPlayer_ProgressionData::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x59df080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer_ProgressionData>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer_ProgressionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer_ProgressionData::*)(::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<::ArrayW<bool>>, int32_t, int32_t, int32_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::GlobalNamespace::SIPlayer_ProgressionData::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59e0a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer_ProgressionData>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::ArrayW<bool>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer_ProgressionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIPlayer_ProgressionData::*)(::GlobalNamespace::SIProgression*)>(&::GlobalNamespace::SIPlayer_ProgressionData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59e08a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer_ProgressionData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SIProgression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIPlayer_ProgressionData.IsUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIPlayer_ProgressionData::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SIPlayer_ProgressionData::IsUnlocked)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59de19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer_ProgressionData>(),
                        {"IsUnlocked", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SIPlayer_ProgressionData::_ctor(bool  itsNullLol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer_ProgressionData>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, itsNullLol);
}
inline void GlobalNamespace::SIPlayer_ProgressionData::_ctor(::ArrayW<int32_t>  _resourceArray, ::ArrayW<int32_t>  _limitedDepositTimeArray, ::ArrayW<::ArrayW<bool>>  _techTreeData, int32_t  _stashedQuests, int32_t  _stashedBonusPoints, int32_t  _bonusProgress, ::ArrayW<int32_t>  _currentQuestIds, ::ArrayW<int32_t>  _currentQuestProgresses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer_ProgressionData>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::ArrayW<bool>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _resourceArray, _limitedDepositTimeArray, _techTreeData, _stashedQuests, _stashedBonusPoints, _bonusProgress, _currentQuestIds, _currentQuestProgresses);
}
inline void GlobalNamespace::SIPlayer_ProgressionData::_ctor(::GlobalNamespace::SIProgression*  siProgression)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer_ProgressionData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SIProgression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, siProgression);
}
inline bool GlobalNamespace::SIPlayer_ProgressionData::IsUnlocked(::GlobalNamespace::SIUpgradeType  upgradeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIPlayer_ProgressionData>(),
                        {"IsUnlocked", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, upgradeType);
}
// Ctor Parameters [CppParam { name: "resourceArray", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "limitedDepositTimeArray", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "techTreeData", ty: "::ArrayW<::ArrayW<bool>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stashedQuests", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stashedBonusPoints", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bonusProgress", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentQuestIds", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentQuestProgresses", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIPlayer_ProgressionData::SIPlayer_ProgressionData(::ArrayW<int32_t>  resourceArray, ::ArrayW<int32_t>  limitedDepositTimeArray, ::ArrayW<::ArrayW<bool>>  techTreeData, int32_t  stashedQuests, int32_t  stashedBonusPoints, int32_t  bonusProgress, ::ArrayW<int32_t>  currentQuestIds, ::ArrayW<int32_t>  currentQuestProgresses) noexcept  {
this->resourceArray = resourceArray;
this->limitedDepositTimeArray = limitedDepositTimeArray;
this->techTreeData = techTreeData;
this->stashedQuests = stashedQuests;
this->stashedBonusPoints = stashedBonusPoints;
this->bonusProgress = bonusProgress;
this->currentQuestIds = currentQuestIds;
this->currentQuestProgresses = currentQuestProgresses;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIPlayer_ProgressionData::SIPlayer_ProgressionData()   {
}
