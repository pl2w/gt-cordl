#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionEventDebugArray_Info.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventDebugArray_Info_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstanceOcclusionEventDebugArray_Info.HasVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InstanceOcclusionEventDebugArray_Info::*)()>(&::GlobalNamespace::InstanceOcclusionEventDebugArray_Info::HasVersion)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb1f2f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceOcclusionEventDebugArray_Info>(),
                        {"HasVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::InstanceOcclusionEventDebugArray_Info::HasVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceOcclusionEventDebugArray_Info>(),
                        {"HasVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "eventType", ty: "::UnityEngine::Rendering::InstanceOcclusionEventType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "occluderVersion", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subviewMask", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "occlusionTest", ty: "::UnityEngine::Rendering::OcclusionTest", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceOcclusionEventDebugArray_Info::InstanceOcclusionEventDebugArray_Info(int32_t  viewInstanceID, ::UnityEngine::Rendering::InstanceOcclusionEventType  eventType, int32_t  occluderVersion, int32_t  subviewMask, ::UnityEngine::Rendering::OcclusionTest  occlusionTest) noexcept  {
this->viewInstanceID = viewInstanceID;
this->eventType = eventType;
this->occluderVersion = occluderVersion;
this->subviewMask = subviewMask;
this->occlusionTest = occlusionTest;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceOcclusionEventDebugArray_Info::InstanceOcclusionEventDebugArray_Info()   {
}
