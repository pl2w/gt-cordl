#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice_DeviceToFree.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_DeviceToFree_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandList_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Page_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UIRenderDevice_DeviceToFree.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIRenderDevice_DeviceToFree::*)()>(&::GlobalNamespace::UIRenderDevice_DeviceToFree::Dispose)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xb7fa218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIRenderDevice_DeviceToFree>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UIRenderDevice_DeviceToFree::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIRenderDevice_DeviceToFree>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "commandLists", ty: "::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UIRenderDevice_DeviceToFree::UIRenderDevice_DeviceToFree(uint32_t  handle, ::UnityEngine::UIElements::UIR::Page*  page, ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>  commandLists) noexcept  {
this->handle = handle;
this->page = page;
this->commandLists = commandLists;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIRenderDevice_DeviceToFree::UIRenderDevice_DeviceToFree()   {
}
