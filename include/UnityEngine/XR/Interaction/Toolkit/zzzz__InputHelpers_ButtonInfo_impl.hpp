#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InputHelpers_ButtonInfo.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_ButtonReadType_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_ButtonInfo_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_ButtonReadType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputHelpers_ButtonInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputHelpers_ButtonInfo::*)(::StringW, ::GlobalNamespace::InputHelpers_ButtonReadType)>(&::GlobalNamespace::InputHelpers_ButtonInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb41c170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputHelpers_ButtonInfo>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::InputHelpers_ButtonReadType>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InputHelpers_ButtonInfo::_ctor(::StringW  name, ::GlobalNamespace::InputHelpers_ButtonReadType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputHelpers_ButtonInfo>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::InputHelpers_ButtonReadType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, type);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::InputHelpers_ButtonReadType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputHelpers_ButtonInfo::InputHelpers_ButtonInfo(::StringW  name, ::GlobalNamespace::InputHelpers_ButtonReadType  type) noexcept  {
this->name = name;
this->type = type;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputHelpers_ButtonInfo::InputHelpers_ButtonInfo()   {
}
