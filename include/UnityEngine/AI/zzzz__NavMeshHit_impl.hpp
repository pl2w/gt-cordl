#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshHit.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshHit.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshHit::*)()>(&::UnityEngine::AI::NavMeshHit::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb51fe68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshHit>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshHit.get_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AI::NavMeshHit::*)()>(&::UnityEngine::AI::NavMeshHit::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51fe74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshHit>(),
                        {"get_distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshHit::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshHit>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline float_t UnityEngine::AI::NavMeshHit::get_distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshHit>(),
                        {"get_distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Hit", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::NavMeshHit::NavMeshHit(::UnityEngine::Vector3  m_Position, ::UnityEngine::Vector3  m_Normal, float_t  m_Distance, int32_t  m_Mask, int32_t  m_Hit) noexcept  {
this->m_Position = m_Position;
this->m_Normal = m_Normal;
this->m_Distance = m_Distance;
this->m_Mask = m_Mask;
this->m_Hit = m_Hit;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshHit::NavMeshHit()   {
}
