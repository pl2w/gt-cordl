#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMoleLevelSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GorillaTagScripts/zzzz__WhackAMoleLevelSO_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::WhackAMoleLevelSO.GetMinScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::WhackAMoleLevelSO::*)(bool)>(&::GorillaTagScripts::WhackAMoleLevelSO::GetMinScore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b7e008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMoleLevelSO*>(),
                        {"GetMinScore", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMoleLevelSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMoleLevelSO::*)()>(&::GorillaTagScripts::WhackAMoleLevelSO::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b80960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMoleLevelSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_levelNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelNumber;
}
constexpr int32_t const& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_levelNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelNumber;
}
constexpr void GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_set_levelNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelNumber = value;
}
constexpr float_t& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_levelDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelDuration;
}
constexpr float_t const& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_levelDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelDuration;
}
constexpr void GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_set_levelDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelDuration = value;
}
constexpr float_t& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_showMoleDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMoleDuration;
}
constexpr float_t const& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_showMoleDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMoleDuration;
}
constexpr void GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_set_showMoleDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showMoleDuration = value;
}
constexpr float_t& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_pickNextMoleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickNextMoleTime;
}
constexpr float_t const& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_pickNextMoleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickNextMoleTime;
}
constexpr void GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_set_pickNextMoleTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickNextMoleTime = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_minScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScore;
}
constexpr int32_t const& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_minScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScore;
}
constexpr void GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_set_minScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minScore = value;
}
constexpr ::UnityEngine::Vector2& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_hazardMoleChance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hazardMoleChance;
}
constexpr ::UnityEngine::Vector2 const& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_hazardMoleChance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hazardMoleChance;
}
constexpr void GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_set_hazardMoleChance(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hazardMoleChance = value;
}
constexpr ::UnityEngine::Vector2& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_minimumMoleCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumMoleCount;
}
constexpr ::UnityEngine::Vector2 const& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_minimumMoleCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumMoleCount;
}
constexpr void GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_set_minimumMoleCount(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumMoleCount = value;
}
constexpr ::UnityEngine::Vector2& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_maximumMoleCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumMoleCount;
}
constexpr ::UnityEngine::Vector2 const& GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_get_maximumMoleCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumMoleCount;
}
constexpr void GorillaTagScripts::WhackAMoleLevelSO::__cordl_internal_set_maximumMoleCount(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumMoleCount = value;
}
inline int32_t GorillaTagScripts::WhackAMoleLevelSO::GetMinScore(bool  isCoop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMoleLevelSO*>(),
                        {"GetMinScore", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, isCoop);
}
inline void GorillaTagScripts::WhackAMoleLevelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMoleLevelSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::WhackAMoleLevelSO* GorillaTagScripts::WhackAMoleLevelSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::WhackAMoleLevelSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::WhackAMoleLevelSO::WhackAMoleLevelSO()   {
}
