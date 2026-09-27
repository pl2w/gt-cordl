#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph_CompiledResourceInfo.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_CompiledResourceInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RenderGraph_CompiledResourceInfo.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RenderGraph_CompiledResourceInfo::*)()>(&::GlobalNamespace::RenderGraph_CompiledResourceInfo::Reset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb1b3320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderGraph_CompiledResourceInfo>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RenderGraph_CompiledResourceInfo::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderGraph_CompiledResourceInfo>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "producers", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "consumers", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "imported", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RenderGraph_CompiledResourceInfo::RenderGraph_CompiledResourceInfo(::System::Collections::Generic::List_1<int32_t>*  producers, ::System::Collections::Generic::List_1<int32_t>*  consumers, int32_t  refCount, bool  imported) noexcept  {
this->producers = producers;
this->consumers = consumers;
this->refCount = refCount;
this->imported = imported;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderGraph_CompiledResourceInfo::RenderGraph_CompiledResourceInfo()   {
}
