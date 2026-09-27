#pragma once
// IWYU pragma private; include "UnityEngine/AI/OffMeshLinkData.hpp"
#include "UnityEngine/AI/zzzz__OffMeshLinkType_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/AI/zzzz__OffMeshLinkData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::OffMeshLinkData.get_startPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::OffMeshLinkData::*)()>(&::UnityEngine::AI::OffMeshLinkData::get_startPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb51fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::OffMeshLinkData>(),
                        {"get_startPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::OffMeshLinkData.get_endPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::OffMeshLinkData::*)()>(&::UnityEngine::AI::OffMeshLinkData::get_endPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb51fe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::OffMeshLinkData>(),
                        {"get_endPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::AI::OffMeshLinkData::get_startPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::OffMeshLinkData>(),
                        {"get_startPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::AI::OffMeshLinkData::get_endPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::OffMeshLinkData>(),
                        {"get_endPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Valid", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Activated", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LinkType", ty: "::UnityEngine::AI::OffMeshLinkType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::OffMeshLinkData::OffMeshLinkData(int32_t  m_Valid, int32_t  m_Activated, int32_t  m_InstanceID, ::UnityEngine::AI::OffMeshLinkType  m_LinkType, ::UnityEngine::Vector3  m_StartPos, ::UnityEngine::Vector3  m_EndPos) noexcept  {
this->m_Valid = m_Valid;
this->m_Activated = m_Activated;
this->m_InstanceID = m_InstanceID;
this->m_LinkType = m_LinkType;
this->m_StartPos = m_StartPos;
this->m_EndPos = m_EndPos;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::OffMeshLinkData::OffMeshLinkData()   {
}
