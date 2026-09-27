#pragma once
// IWYU pragma private; include "UnityEngine/LightProbesQuery_LightProbesQueryDispose.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__LightProbesQuery_LightProbesQueryDispose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose::*)()>(&::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb57b9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightProbesQuery_LightProbesQueryDispose::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_LightProbeContextWrapper", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose::LightProbesQuery_LightProbesQueryDispose(::System::IntPtr  m_LightProbeContextWrapper) noexcept  {
this->m_LightProbeContextWrapper = m_LightProbeContextWrapper;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose::LightProbesQuery_LightProbesQueryDispose()   {
}
