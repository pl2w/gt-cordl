#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ProBuilderMesh_NonVersionedEditScope.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_NonVersionedEditScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope::*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb0a5abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope::*)()>(&::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb0ab52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProBuilderMesh_NonVersionedEditScope::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh);
}
inline void GlobalNamespace::ProBuilderMesh_NonVersionedEditScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProBuilderMesh_NonVersionedEditScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProBuilderMesh_NonVersionedEditScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Mesh", ty: "::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_VersionIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope::ProBuilderMesh_NonVersionedEditScope(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>  m_Mesh, uint16_t  m_VersionIndex) noexcept  {
this->m_Mesh = m_Mesh;
this->m_VersionIndex = m_VersionIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope::ProBuilderMesh_NonVersionedEditScope()   {
}
