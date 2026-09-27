#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PositionPredictor.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__PositionPredictor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::PositionPredictor.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::PositionPredictor::*)()>(&::Unity::Cinemachine::PositionPredictor::get_IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb91e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PositionPredictor.get_CurrentPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::PositionPredictor::*)()>(&::Unity::Cinemachine::PositionPredictor::get_CurrentPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaeb91f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"get_CurrentPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PositionPredictor.ApplyTransformDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PositionPredictor::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::PositionPredictor::ApplyTransformDelta)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaeb91fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"ApplyTransformDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PositionPredictor.ApplyRotationDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PositionPredictor::*)(::UnityEngine::Quaternion)>(&::Unity::Cinemachine::PositionPredictor::ApplyRotationDelta)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaeb921c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"ApplyRotationDelta", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PositionPredictor.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PositionPredictor::*)()>(&::Unity::Cinemachine::PositionPredictor::Reset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaeb928c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PositionPredictor.AddPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PositionPredictor::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::PositionPredictor::AddPosition)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xaeb92fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"AddPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PositionPredictor.PredictPositionDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::PositionPredictor::*)(float_t)>(&::Unity::Cinemachine::PositionPredictor::PredictPositionDelta)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaeb93f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"PredictPositionDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Unity::Cinemachine::PositionPredictor::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::PositionPredictor::get_CurrentPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"get_CurrentPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void Unity::Cinemachine::PositionPredictor::ApplyTransformDelta(::UnityEngine::Vector3  positionDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"ApplyTransformDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, positionDelta);
}
inline void Unity::Cinemachine::PositionPredictor::ApplyRotationDelta(::UnityEngine::Quaternion  rotationDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"ApplyRotationDelta", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rotationDelta);
}
inline void Unity::Cinemachine::PositionPredictor::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Cinemachine::PositionPredictor::AddPosition(::UnityEngine::Vector3  pos, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"AddPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::PositionPredictor::PredictPositionDelta(float_t  lookaheadTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PositionPredictor>(),
                        {"PredictPositionDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, lookaheadTime);
}
// Ctor Parameters [CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SmoothDampVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_HavePos", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Smoothing", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::PositionPredictor::PositionPredictor(::UnityEngine::Vector3  m_Velocity, ::UnityEngine::Vector3  m_SmoothDampVelocity, ::UnityEngine::Vector3  m_Pos, bool  m_HavePos, float_t  Smoothing) noexcept  {
this->m_Velocity = m_Velocity;
this->m_SmoothDampVelocity = m_SmoothDampVelocity;
this->m_Pos = m_Pos;
this->m_HavePos = m_HavePos;
this->Smoothing = Smoothing;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PositionPredictor::PositionPredictor()   {
}
