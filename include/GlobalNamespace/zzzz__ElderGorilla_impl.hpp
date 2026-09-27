#pragma once
// IWYU pragma private; include "GlobalNamespace/ElderGorilla.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ElderGorilla_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ElderGorilla.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElderGorilla::*)()>(&::GlobalNamespace::ElderGorilla::Update)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5802edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElderGorilla*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElderGorilla.CheckHandDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElderGorilla::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::ElderGorilla::CheckHandDistance)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58031bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElderGorilla*>(),
                        {"CheckHandDistance", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElderGorilla.CheckHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElderGorilla::*)()>(&::GlobalNamespace::ElderGorilla::CheckHeight)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58032b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElderGorilla*>(),
                        {"CheckHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElderGorilla.CheckMicVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElderGorilla::*)()>(&::GlobalNamespace::ElderGorilla::CheckMicVolume)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5803334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElderGorilla*>(),
                        {"CheckMicVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElderGorilla._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElderGorilla::*)()>(&::GlobalNamespace::ElderGorilla::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5803448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElderGorilla*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ElderGorilla::__cordl_internal_get_tHMD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tHMD;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ElderGorilla::__cordl_internal_get_tHMD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tHMD;
}
constexpr void GlobalNamespace::ElderGorilla::__cordl_internal_set_tHMD(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tHMD = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ElderGorilla::__cordl_internal_get_tLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tLeftHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ElderGorilla::__cordl_internal_get_tLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tLeftHand;
}
constexpr void GlobalNamespace::ElderGorilla::__cordl_internal_set_tLeftHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tLeftHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ElderGorilla::__cordl_internal_get_tRightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tRightHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ElderGorilla::__cordl_internal_get_tRightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tRightHand;
}
constexpr void GlobalNamespace::ElderGorilla::__cordl_internal_set_tRightHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tRightHand = value;
}
constexpr int32_t& GlobalNamespace::ElderGorilla::__cordl_internal_get_countValidArmDists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countValidArmDists;
}
constexpr int32_t const& GlobalNamespace::ElderGorilla::__cordl_internal_get_countValidArmDists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countValidArmDists;
}
constexpr void GlobalNamespace::ElderGorilla::__cordl_internal_set_countValidArmDists(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countValidArmDists = value;
}
constexpr float_t& GlobalNamespace::ElderGorilla::__cordl_internal_get_timeLastValidArmDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastValidArmDist;
}
constexpr float_t const& GlobalNamespace::ElderGorilla::__cordl_internal_get_timeLastValidArmDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastValidArmDist;
}
constexpr void GlobalNamespace::ElderGorilla::__cordl_internal_set_timeLastValidArmDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastValidArmDist = value;
}
constexpr bool& GlobalNamespace::ElderGorilla::__cordl_internal_get_trackingHeadHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackingHeadHeight;
}
constexpr bool const& GlobalNamespace::ElderGorilla::__cordl_internal_get_trackingHeadHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackingHeadHeight;
}
constexpr void GlobalNamespace::ElderGorilla::__cordl_internal_set_trackingHeadHeight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackingHeadHeight = value;
}
constexpr float_t& GlobalNamespace::ElderGorilla::__cordl_internal_get_trackedHeadHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedHeadHeight;
}
constexpr float_t const& GlobalNamespace::ElderGorilla::__cordl_internal_get_trackedHeadHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedHeadHeight;
}
constexpr void GlobalNamespace::ElderGorilla::__cordl_internal_set_trackedHeadHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedHeadHeight = value;
}
constexpr float_t& GlobalNamespace::ElderGorilla::__cordl_internal_get_timerTrackedHeadHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerTrackedHeadHeight;
}
constexpr float_t const& GlobalNamespace::ElderGorilla::__cordl_internal_get_timerTrackedHeadHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerTrackedHeadHeight;
}
constexpr void GlobalNamespace::ElderGorilla::__cordl_internal_set_timerTrackedHeadHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timerTrackedHeadHeight = value;
}
constexpr float_t& GlobalNamespace::ElderGorilla::__cordl_internal_get_savedHeadHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedHeadHeight;
}
constexpr float_t const& GlobalNamespace::ElderGorilla::__cordl_internal_get_savedHeadHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedHeadHeight;
}
constexpr void GlobalNamespace::ElderGorilla::__cordl_internal_set_savedHeadHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedHeadHeight = value;
}
inline void GlobalNamespace::ElderGorilla::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElderGorilla*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ElderGorilla::CheckHandDistance(::UnityEngine::Transform*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElderGorilla*>(),
                        {"CheckHandDistance", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void GlobalNamespace::ElderGorilla::CheckHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElderGorilla*>(),
                        {"CheckHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ElderGorilla::CheckMicVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElderGorilla*>(),
                        {"CheckMicVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ElderGorilla::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElderGorilla*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ElderGorilla* GlobalNamespace::ElderGorilla::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ElderGorilla*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ElderGorilla::ElderGorilla()   {
}
