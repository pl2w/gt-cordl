#pragma once
// IWYU pragma private; include "Unity/Cinemachine/HeadingTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__HeadingTracker_Item_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__HeadingTracker_def.hpp"
#include "Unity/Cinemachine/zzzz__HeadingTracker_Item_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::HeadingTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::HeadingTracker::*)(int32_t)>(&::Unity::Cinemachine::HeadingTracker::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xaed42d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::HeadingTracker.get_FilterSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::HeadingTracker::*)()>(&::Unity::Cinemachine::HeadingTracker::get_FilterSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaed4424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"get_FilterSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::HeadingTracker.ClearHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::HeadingTracker::*)()>(&::Unity::Cinemachine::HeadingTracker::ClearHistory)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaed43c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"ClearHistory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::HeadingTracker.Decay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Unity::Cinemachine::HeadingTracker::Decay)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaed443c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"Decay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::HeadingTracker.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::HeadingTracker::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::HeadingTracker::Add)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xaed4494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::HeadingTracker.PopBottom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::HeadingTracker::*)()>(&::Unity::Cinemachine::HeadingTracker::PopBottom)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xaed46a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"PopBottom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::HeadingTracker.DecayHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::HeadingTracker::*)()>(&::Unity::Cinemachine::HeadingTracker::DecayHistory)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xaed47ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"DecayHistory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::HeadingTracker.GetReliableHeading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::HeadingTracker::*)()>(&::Unity::Cinemachine::HeadingTracker::GetReliableHeading)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xaed48dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"GetReliableHeading", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::HeadingTracker_Item>& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mHistory;
}
constexpr ::ArrayW<::GlobalNamespace::HeadingTracker_Item> const& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mHistory;
}
constexpr void Unity::Cinemachine::HeadingTracker::__cordl_internal_set_mHistory(::ArrayW<::GlobalNamespace::HeadingTracker_Item>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mHistory = value;
}
constexpr int32_t& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mTop;
}
constexpr int32_t const& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mTop;
}
constexpr void Unity::Cinemachine::HeadingTracker::__cordl_internal_set_mTop(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mTop = value;
}
constexpr int32_t& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mBottom;
}
constexpr int32_t const& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mBottom;
}
constexpr void Unity::Cinemachine::HeadingTracker::__cordl_internal_set_mBottom(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mBottom = value;
}
constexpr int32_t& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCount;
}
constexpr int32_t const& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCount;
}
constexpr void Unity::Cinemachine::HeadingTracker::__cordl_internal_set_mCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mCount = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mHeadingSum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mHeadingSum;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mHeadingSum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mHeadingSum;
}
constexpr void Unity::Cinemachine::HeadingTracker::__cordl_internal_set_mHeadingSum(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mHeadingSum = value;
}
constexpr float_t& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mWeightSum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mWeightSum;
}
constexpr float_t const& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mWeightSum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mWeightSum;
}
constexpr void Unity::Cinemachine::HeadingTracker::__cordl_internal_set_mWeightSum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mWeightSum = value;
}
constexpr float_t& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mWeightTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mWeightTime;
}
constexpr float_t const& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mWeightTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mWeightTime;
}
constexpr void Unity::Cinemachine::HeadingTracker::__cordl_internal_set_mWeightTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mWeightTime = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mLastGoodHeading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mLastGoodHeading;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::HeadingTracker::__cordl_internal_get_mLastGoodHeading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mLastGoodHeading;
}
constexpr void Unity::Cinemachine::HeadingTracker::__cordl_internal_set_mLastGoodHeading(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mLastGoodHeading = value;
}
inline void Unity::Cinemachine::HeadingTracker::setStaticF_mDecayExponent(float_t  value)  {
::cordl_internals::setStaticField<float_t, "mDecayExponent", ::Unity::Cinemachine::HeadingTracker*>(std::forward<float_t>(value));
}
inline float_t Unity::Cinemachine::HeadingTracker::getStaticF_mDecayExponent()  {
return ::cordl_internals::getStaticField<float_t, "mDecayExponent", ::Unity::Cinemachine::HeadingTracker*>();
}
inline void Unity::Cinemachine::HeadingTracker::_ctor(int32_t  filterSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filterSize);
}
inline int32_t Unity::Cinemachine::HeadingTracker::get_FilterSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"get_FilterSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::HeadingTracker::ClearHistory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"ClearHistory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::HeadingTracker::Decay(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"Decay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, time);
}
inline void Unity::Cinemachine::HeadingTracker::Add(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void Unity::Cinemachine::HeadingTracker::PopBottom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"PopBottom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::HeadingTracker::DecayHistory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"DecayHistory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::HeadingTracker::GetReliableHeading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HeadingTracker*>(),
                        {"GetReliableHeading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::Unity::Cinemachine::HeadingTracker* Unity::Cinemachine::HeadingTracker::New_ctor(int32_t  filterSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::HeadingTracker*>(filterSize));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::HeadingTracker::HeadingTracker()   {
}
