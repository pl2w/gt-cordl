#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_InsightPassthroughStyle2.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Colorf_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_InsightPassthroughColorMapType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_InsightPassthroughStyleFlags_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_InsightPassthroughStyle2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_InsightPassthroughStyle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2::*)(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle>)>(&::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2::CopyTo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa60f714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>(),
                        {"CopyTo", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPlugin_InsightPassthroughStyle2::CopyTo(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>(),
                        {"CopyTo", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target);
}
// Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureOpacityFactor", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EdgeColor", ty: "::GlobalNamespace::OVRPlugin_Colorf", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureColorMapType", ty: "::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureColorMapDataSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TextureColorMapData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LutSource", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LutTarget", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LutWeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2::OVRPlugin_InsightPassthroughStyle2(::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags  Flags, float_t  TextureOpacityFactor, ::GlobalNamespace::OVRPlugin_Colorf  EdgeColor, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType  TextureColorMapType, uint32_t  TextureColorMapDataSize, ::System::IntPtr  TextureColorMapData, uint64_t  LutSource, uint64_t  LutTarget, float_t  LutWeight) noexcept  {
this->Flags = Flags;
this->TextureOpacityFactor = TextureOpacityFactor;
this->EdgeColor = EdgeColor;
this->TextureColorMapType = TextureColorMapType;
this->TextureColorMapDataSize = TextureColorMapDataSize;
this->TextureColorMapData = TextureColorMapData;
this->LutSource = LutSource;
this->LutTarget = LutTarget;
this->LutWeight = LutWeight;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2::OVRPlugin_InsightPassthroughStyle2()   {
}
