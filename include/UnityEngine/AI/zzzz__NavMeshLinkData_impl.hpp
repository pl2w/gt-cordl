#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshLinkData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshLinkData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkData.set_startPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLinkData::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshLinkData::set_startPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb520320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_startPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkData.set_endPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLinkData::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshLinkData::set_endPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb52032c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_endPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkData.set_costModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLinkData::*)(float_t)>(&::UnityEngine::AI::NavMeshLinkData::set_costModifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb520338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_costModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkData.set_bidirectional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLinkData::*)(bool)>(&::UnityEngine::AI::NavMeshLinkData::set_bidirectional)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb520340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_bidirectional", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkData.set_width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLinkData::*)(float_t)>(&::UnityEngine::AI::NavMeshLinkData::set_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb52034c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_width", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkData.set_area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLinkData::*)(int32_t)>(&::UnityEngine::AI::NavMeshLinkData::set_area)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb520354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshLinkData.set_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshLinkData::*)(int32_t)>(&::UnityEngine::AI::NavMeshLinkData::set_agentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb52035c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMeshLinkData::set_startPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_startPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshLinkData::set_endPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_endPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshLinkData::set_costModifier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_costModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshLinkData::set_bidirectional(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_bidirectional", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshLinkData::set_width(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_width", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshLinkData::set_area(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshLinkData::set_agentTypeID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshLinkData>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_StartPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EndPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CostModifier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Bidirectional", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Width", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Area", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AgentTypeID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::NavMeshLinkData::NavMeshLinkData(::UnityEngine::Vector3  m_StartPosition, ::UnityEngine::Vector3  m_EndPosition, float_t  m_CostModifier, int32_t  m_Bidirectional, float_t  m_Width, int32_t  m_Area, int32_t  m_AgentTypeID) noexcept  {
this->m_StartPosition = m_StartPosition;
this->m_EndPosition = m_EndPosition;
this->m_CostModifier = m_CostModifier;
this->m_Bidirectional = m_Bidirectional;
this->m_Width = m_Width;
this->m_Area = m_Area;
this->m_AgentTypeID = m_AgentTypeID;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshLinkData::NavMeshLinkData()   {
}
