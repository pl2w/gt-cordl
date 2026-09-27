#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTrackedDolly_AutoDolly.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTrackedDolly_AutoDolly_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineTrackedDolly_AutoDolly._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineTrackedDolly_AutoDolly::*)(bool, float_t, int32_t, int32_t)>(&::GlobalNamespace::CinemachineTrackedDolly_AutoDolly::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaedb194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineTrackedDolly_AutoDolly>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CinemachineTrackedDolly_AutoDolly::_ctor(bool  enabled, float_t  positionOffset, int32_t  searchRadius, int32_t  stepsPerSegment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineTrackedDolly_AutoDolly>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enabled, positionOffset, searchRadius, stepsPerSegment);
}
// Ctor Parameters [CppParam { name: "m_Enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PositionOffset", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SearchRadius", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SearchResolution", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineTrackedDolly_AutoDolly::CinemachineTrackedDolly_AutoDolly(bool  m_Enabled, float_t  m_PositionOffset, int32_t  m_SearchRadius, int32_t  m_SearchResolution) noexcept  {
this->m_Enabled = m_Enabled;
this->m_PositionOffset = m_PositionOffset;
this->m_SearchRadius = m_SearchRadius;
this->m_SearchResolution = m_SearchResolution;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineTrackedDolly_AutoDolly::CinemachineTrackedDolly_AutoDolly()   {
}
