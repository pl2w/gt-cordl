#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineExternalImpulseListener.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseListener_ImpulseReaction_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExternalImpulseListener_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalImpulseListener.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExternalImpulseListener::*)()>(&::Unity::Cinemachine::CinemachineExternalImpulseListener::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaee582c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalImpulseListener*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalImpulseListener.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExternalImpulseListener::*)()>(&::Unity::Cinemachine::CinemachineExternalImpulseListener::OnEnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaee586c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalImpulseListener*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalImpulseListener.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExternalImpulseListener::*)()>(&::Unity::Cinemachine::CinemachineExternalImpulseListener::Update)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xaee58fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalImpulseListener*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalImpulseListener.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExternalImpulseListener::*)()>(&::Unity::Cinemachine::CinemachineExternalImpulseListener::LateUpdate)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xaee5a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalImpulseListener*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalImpulseListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExternalImpulseListener::*)()>(&::Unity::Cinemachine::CinemachineExternalImpulseListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee5d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalImpulseListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_m_ImpulsePosLastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImpulsePosLastFrame;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_m_ImpulsePosLastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImpulsePosLastFrame;
}
constexpr void Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_set_m_ImpulsePosLastFrame(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ImpulsePosLastFrame = value;
}
constexpr ::UnityEngine::Quaternion& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_m_ImpulseRotLastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImpulseRotLastFrame;
}
constexpr ::UnityEngine::Quaternion const& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_m_ImpulseRotLastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImpulseRotLastFrame;
}
constexpr void Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_set_m_ImpulseRotLastFrame(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ImpulseRotLastFrame = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_ChannelMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelMask;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_ChannelMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelMask;
}
constexpr void Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_set_ChannelMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChannelMask = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_Gain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Gain;
}
constexpr float_t const& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_Gain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Gain;
}
constexpr void Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_set_Gain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Gain = value;
}
constexpr bool& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_Use2DDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Use2DDistance;
}
constexpr bool const& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_Use2DDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Use2DDistance;
}
constexpr void Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_set_Use2DDistance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Use2DDistance = value;
}
constexpr bool& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_UseLocalSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseLocalSpace;
}
constexpr bool const& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_UseLocalSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseLocalSpace;
}
constexpr void Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_set_UseLocalSpace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseLocalSpace = value;
}
constexpr ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_ReactionSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactionSettings;
}
constexpr ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction const& Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_get_ReactionSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactionSettings;
}
constexpr void Unity::Cinemachine::CinemachineExternalImpulseListener::__cordl_internal_set_ReactionSettings(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReactionSettings = value;
}
inline void Unity::Cinemachine::CinemachineExternalImpulseListener::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalImpulseListener*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineExternalImpulseListener::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalImpulseListener*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineExternalImpulseListener::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalImpulseListener*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineExternalImpulseListener::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalImpulseListener*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineExternalImpulseListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalImpulseListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineExternalImpulseListener* Unity::Cinemachine::CinemachineExternalImpulseListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineExternalImpulseListener*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineExternalImpulseListener::CinemachineExternalImpulseListener()   {
}
