#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils_CustomLine.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_CustomLine_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LagCompensationUtils_CustomLine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LagCompensationUtils_CustomLine::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::LagCompensationUtils_CustomLine::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6017088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_CustomLine>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LagCompensationUtils_CustomLine::_ctor(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_CustomLine>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, start, end);
}
// Ctor Parameters [CppParam { name: "Start", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "End", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LagCompensationUtils_CustomLine::LagCompensationUtils_CustomLine(::UnityEngine::Vector3  Start, ::UnityEngine::Vector3  End) noexcept  {
this->Start = Start;
this->End = End;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LagCompensationUtils_CustomLine::LagCompensationUtils_CustomLine()   {
}
