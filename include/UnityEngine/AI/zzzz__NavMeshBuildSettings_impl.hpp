#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshBuildSettings.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildDebugSettings_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSettings_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.get_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshBuildSettings::*)()>(&::UnityEngine::AI::NavMeshBuildSettings::get_agentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51df58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"get_agentTypeID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.set_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSettings::*)(int32_t)>(&::UnityEngine::AI::NavMeshBuildSettings::set_agentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5220a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.get_agentRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AI::NavMeshBuildSettings::*)()>(&::UnityEngine::AI::NavMeshBuildSettings::get_agentRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5220a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"get_agentRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.set_agentRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSettings::*)(float_t)>(&::UnityEngine::AI::NavMeshBuildSettings::set_agentRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5220b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_agentRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.set_agentHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSettings::*)(float_t)>(&::UnityEngine::AI::NavMeshBuildSettings::set_agentHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5220b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_agentHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.set_agentSlope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSettings::*)(float_t)>(&::UnityEngine::AI::NavMeshBuildSettings::set_agentSlope)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5220c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_agentSlope", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.set_agentClimb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSettings::*)(float_t)>(&::UnityEngine::AI::NavMeshBuildSettings::set_agentClimb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5220c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_agentClimb", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.set_minRegionArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSettings::*)(float_t)>(&::UnityEngine::AI::NavMeshBuildSettings::set_minRegionArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5220d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_minRegionArea", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.set_overrideVoxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSettings::*)(bool)>(&::UnityEngine::AI::NavMeshBuildSettings::set_overrideVoxelSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5220d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_overrideVoxelSize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.set_voxelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSettings::*)(float_t)>(&::UnityEngine::AI::NavMeshBuildSettings::set_voxelSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5220e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_voxelSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.set_overrideTileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSettings::*)(bool)>(&::UnityEngine::AI::NavMeshBuildSettings::set_overrideTileSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5220ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_overrideTileSize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.set_tileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSettings::*)(int32_t)>(&::UnityEngine::AI::NavMeshBuildSettings::set_tileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5220f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_tileSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.set_buildHeightMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildSettings::*)(bool)>(&::UnityEngine::AI::NavMeshBuildSettings::set_buildHeightMesh)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb522100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_buildHeightMesh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.ValidationReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::AI::NavMeshBuildSettings::*)(::UnityEngine::Bounds)>(&::UnityEngine::AI::NavMeshBuildSettings::ValidationReport)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb52210c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"ValidationReport", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.InternalValidationReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::UnityEngine::AI::NavMeshBuildSettings, ::UnityEngine::Bounds)>(&::UnityEngine::AI::NavMeshBuildSettings::InternalValidationReport)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb52216c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"InternalValidationReport", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildSettings.InternalValidationReport_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::by_ref<::UnityEngine::AI::NavMeshBuildSettings>, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::AI::NavMeshBuildSettings::InternalValidationReport_Injected)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xb5221b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"InternalValidationReport_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::AI::NavMeshBuildSettings::get_agentTypeID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"get_agentTypeID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshBuildSettings::set_agentTypeID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::AI::NavMeshBuildSettings::get_agentRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"get_agentRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshBuildSettings::set_agentRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_agentRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildSettings::set_agentHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_agentHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildSettings::set_agentSlope(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_agentSlope", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildSettings::set_agentClimb(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_agentClimb", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildSettings::set_minRegionArea(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_minRegionArea", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildSettings::set_overrideVoxelSize(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_overrideVoxelSize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildSettings::set_voxelSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_voxelSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildSettings::set_overrideTileSize(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_overrideTileSize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildSettings::set_tileSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_tileSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildSettings::set_buildHeightMesh(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"set_buildHeightMesh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::StringW> UnityEngine::AI::NavMeshBuildSettings::ValidationReport(::UnityEngine::Bounds  buildBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"ValidationReport", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(*this, ___internal_method, buildBounds);
}
inline ::ArrayW<::StringW> UnityEngine::AI::NavMeshBuildSettings::InternalValidationReport(::UnityEngine::AI::NavMeshBuildSettings  buildSettings, ::UnityEngine::Bounds  buildBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"InternalValidationReport", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, buildSettings, buildBounds);
}
inline ::ArrayW<::StringW> UnityEngine::AI::NavMeshBuildSettings::InternalValidationReport_Injected(::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  buildSettings, ::by_ref<::UnityEngine::Bounds>  buildBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildSettings>(),
                        {"InternalValidationReport_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, buildSettings, buildBounds);
}
// Ctor Parameters [CppParam { name: "m_AgentTypeID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AgentRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AgentHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AgentSlope", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AgentClimb", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LedgeDropHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxJumpAcrossDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MinRegionArea", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OverrideVoxelSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_VoxelSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OverrideTileSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TileSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BuildHeightMesh", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaxJobWorkers", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PreserveTilesOutsideBounds", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Debug", ty: "::UnityEngine::AI::NavMeshBuildDebugSettings", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::NavMeshBuildSettings::NavMeshBuildSettings(int32_t  m_AgentTypeID, float_t  m_AgentRadius, float_t  m_AgentHeight, float_t  m_AgentSlope, float_t  m_AgentClimb, float_t  m_LedgeDropHeight, float_t  m_MaxJumpAcrossDistance, float_t  m_MinRegionArea, int32_t  m_OverrideVoxelSize, float_t  m_VoxelSize, int32_t  m_OverrideTileSize, int32_t  m_TileSize, int32_t  m_BuildHeightMesh, uint32_t  m_MaxJobWorkers, int32_t  m_PreserveTilesOutsideBounds, ::UnityEngine::AI::NavMeshBuildDebugSettings  m_Debug) noexcept  {
this->m_AgentTypeID = m_AgentTypeID;
this->m_AgentRadius = m_AgentRadius;
this->m_AgentHeight = m_AgentHeight;
this->m_AgentSlope = m_AgentSlope;
this->m_AgentClimb = m_AgentClimb;
this->m_LedgeDropHeight = m_LedgeDropHeight;
this->m_MaxJumpAcrossDistance = m_MaxJumpAcrossDistance;
this->m_MinRegionArea = m_MinRegionArea;
this->m_OverrideVoxelSize = m_OverrideVoxelSize;
this->m_VoxelSize = m_VoxelSize;
this->m_OverrideTileSize = m_OverrideTileSize;
this->m_TileSize = m_TileSize;
this->m_BuildHeightMesh = m_BuildHeightMesh;
this->m_MaxJobWorkers = m_MaxJobWorkers;
this->m_PreserveTilesOutsideBounds = m_PreserveTilesOutsideBounds;
this->m_Debug = m_Debug;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshBuildSettings::NavMeshBuildSettings()   {
}
