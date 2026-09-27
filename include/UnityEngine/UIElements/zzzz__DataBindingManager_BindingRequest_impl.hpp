#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingManager_BindingRequest.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_BindingRequest_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_BindingRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataBindingManager_BindingRequest::*)(::by_ref<::UnityEngine::UIElements::BindingId>, ::UnityEngine::UIElements::Binding*, bool)>(&::GlobalNamespace::DataBindingManager_BindingRequest::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb728198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingRequest>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(), ::i2c::type_of<::UnityEngine::UIElements::Binding*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_BindingRequest.CancelRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DataBindingManager_BindingRequest (::GlobalNamespace::DataBindingManager_BindingRequest::*)()>(&::GlobalNamespace::DataBindingManager_BindingRequest::CancelRequest)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb728114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingRequest>(),
                        {"CancelRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DataBindingManager_BindingRequest::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingId>  bindingId, ::UnityEngine::UIElements::Binding*  binding, bool  shouldProcess)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingRequest>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(), ::i2c::type_of<::UnityEngine::UIElements::Binding*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bindingId, binding, shouldProcess);
}
inline ::GlobalNamespace::DataBindingManager_BindingRequest GlobalNamespace::DataBindingManager_BindingRequest::CancelRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingRequest>(),
                        {"CancelRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DataBindingManager_BindingRequest>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "bindingId", ty: "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "binding", ty: "::UnityEngine::UIElements::Binding*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shouldProcess", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DataBindingManager_BindingRequest::DataBindingManager_BindingRequest(::UnityEngine::UIElements::BindingId  bindingId, ::UnityEngine::UIElements::Binding*  binding, bool  shouldProcess) noexcept  {
this->bindingId = bindingId;
this->binding = binding;
this->shouldProcess = shouldProcess;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DataBindingManager_BindingRequest::DataBindingManager_BindingRequest()   {
}
