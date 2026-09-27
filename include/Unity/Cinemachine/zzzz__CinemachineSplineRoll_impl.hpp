#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineRoll.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_LerpRollDataWithEasing_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_LerpRollData_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_RollCache_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_RollData_def.hpp"
#include "UnityEngine/Splines/zzzz__IInterpolator_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineData_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineRoll.GetInterpolator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>* (::Unity::Cinemachine::CinemachineSplineRoll::*)()>(&::Unity::Cinemachine::CinemachineSplineRoll::GetInterpolator)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xae98590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"GetInterpolator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineRoll.PerformLegacyUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineRoll::*)(int32_t)>(&::Unity::Cinemachine::CinemachineSplineRoll::PerformLegacyUpgrade)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xae98608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"PerformLegacyUpgrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineRoll.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineRoll::*)()>(&::Unity::Cinemachine::CinemachineSplineRoll::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae98700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineRoll.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineRoll::*)()>(&::Unity::Cinemachine::CinemachineSplineRoll::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae98758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineRoll.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineRoll::*)()>(&::Unity::Cinemachine::CinemachineSplineRoll::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae9875c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineRoll.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineRoll::*)()>(&::Unity::Cinemachine::CinemachineSplineRoll::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae98760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineRoll._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineRoll::*)()>(&::Unity::Cinemachine::CinemachineSplineRoll::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae9879c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Unity::Cinemachine::CinemachineSplineRoll::__cordl_internal_get_Easing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Easing;
}
constexpr bool const& Unity::Cinemachine::CinemachineSplineRoll::__cordl_internal_get_Easing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Easing;
}
constexpr void Unity::Cinemachine::CinemachineSplineRoll::__cordl_internal_set_Easing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Easing = value;
}
constexpr ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineRoll_RollData>*& Unity::Cinemachine::CinemachineSplineRoll::__cordl_internal_get_Roll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Roll;
}
constexpr ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineRoll_RollData>* const& Unity::Cinemachine::CinemachineSplineRoll::__cordl_internal_get_Roll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Roll;
}
constexpr void Unity::Cinemachine::CinemachineSplineRoll::__cordl_internal_set_Roll(::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineRoll_RollData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Roll = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineSplineRoll::__cordl_internal_get_m_StreamingVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StreamingVersion;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineSplineRoll::__cordl_internal_get_m_StreamingVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StreamingVersion;
}
constexpr void Unity::Cinemachine::CinemachineSplineRoll::__cordl_internal_set_m_StreamingVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StreamingVersion = value;
}
inline ::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>* Unity::Cinemachine::CinemachineSplineRoll::GetInterpolator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"GetInterpolator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineRoll::PerformLegacyUpgrade(int32_t  streamedVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"PerformLegacyUpgrade", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streamedVersion);
}
inline void Unity::Cinemachine::CinemachineSplineRoll::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineRoll::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineRoll::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineRoll::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineRoll::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineRoll*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineSplineRoll* Unity::Cinemachine::CinemachineSplineRoll::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineSplineRoll*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  Unity::Cinemachine::CinemachineSplineRoll::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* Unity::Cinemachine::CinemachineSplineRoll::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineSplineRoll::CinemachineSplineRoll()   {
}
