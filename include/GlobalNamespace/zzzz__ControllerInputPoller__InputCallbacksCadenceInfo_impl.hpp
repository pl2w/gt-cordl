#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerInputPoller__InputCallbacksCadenceInfo.hpp"
#include "GlobalNamespace/zzzz__ControllerInputPoller__InputCallbacksCadenceInfo_def.hpp"
#include "GlobalNamespace/zzzz__ControllerInputPoller__InputCallback_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo::*)(int32_t)>(&::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57e783c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo::_ctor(int32_t  initialCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialCapacity);
}
// Ctor Parameters [CppParam { name: "list", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ControllerInputPoller__InputCallback>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo::ControllerInputPoller__InputCallbacksCadenceInfo(::System::Collections::Generic::List_1<::GlobalNamespace::ControllerInputPoller__InputCallback>*  list) noexcept  {
this->list = list;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo::ControllerInputPoller__InputCallbacksCadenceInfo()   {
}
