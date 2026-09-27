#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/Mesh2fDisposer.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukMesh2f_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__Mesh2fDisposer_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukMesh2f_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Mesh2fDisposer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::Mesh2fDisposer::*)(::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f)>(&::Meta::XR::MRUtilityKit::Mesh2fDisposer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f4c14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Mesh2fDisposer>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Mesh2fDisposer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::Mesh2fDisposer::*)()>(&::Meta::XR::MRUtilityKit::Mesh2fDisposer::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f4c158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Mesh2fDisposer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::Mesh2fDisposer::_ctor(::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Mesh2fDisposer>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh);
}
inline void Meta::XR::MRUtilityKit::Mesh2fDisposer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Mesh2fDisposer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::XR::MRUtilityKit::Mesh2fDisposer::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::XR::MRUtilityKit::Mesh2fDisposer::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Mesh", ty: "::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::MRUtilityKit::Mesh2fDisposer::Mesh2fDisposer(::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f  Mesh) noexcept  {
this->Mesh = Mesh;
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::Mesh2fDisposer::Mesh2fDisposer()   {
}
