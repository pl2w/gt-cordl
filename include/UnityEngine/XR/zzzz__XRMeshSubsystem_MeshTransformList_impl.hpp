#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRMeshSubsystem_MeshTransformList.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystem_MeshTransformList_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRMeshSubsystem_MeshTransformList.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRMeshSubsystem_MeshTransformList::*)()>(&::GlobalNamespace::XRMeshSubsystem_MeshTransformList::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb938d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRMeshSubsystem_MeshTransformList>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRMeshSubsystem_MeshTransformList.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::GlobalNamespace::XRMeshSubsystem_MeshTransformList::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb938d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRMeshSubsystem_MeshTransformList>(),
                        {"Dispose", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XRMeshSubsystem_MeshTransformList::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRMeshSubsystem_MeshTransformList>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::XRMeshSubsystem_MeshTransformList::Dispose(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRMeshSubsystem_MeshTransformList>(),
                        {"Dispose", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::XRMeshSubsystem_MeshTransformList::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::XRMeshSubsystem_MeshTransformList::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Self", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRMeshSubsystem_MeshTransformList::XRMeshSubsystem_MeshTransformList(::System::IntPtr  m_Self) noexcept  {
this->m_Self = m_Self;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRMeshSubsystem_MeshTransformList::XRMeshSubsystem_MeshTransformList()   {
}
