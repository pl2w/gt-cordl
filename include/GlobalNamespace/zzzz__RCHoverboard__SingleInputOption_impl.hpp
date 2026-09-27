#pragma once
// IWYU pragma private; include "GlobalNamespace/RCHoverboard__SingleInputOption.hpp"
#include "GlobalNamespace/zzzz__GTOption_1_impl.hpp"
#include "GlobalNamespace/zzzz__RCHoverboard__EInputSource_impl.hpp"
#include "GlobalNamespace/zzzz__StringEnum_1_impl.hpp"
#include "GlobalNamespace/zzzz__RCHoverboard__SingleInputOption_def.hpp"
#include "GlobalNamespace/zzzz__RCHoverboard__EInputSource_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCRemoteHoldable_RCInput_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard__SingleInputOption._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard__SingleInputOption::*)(::GlobalNamespace::RCHoverboard__EInputSource, ::UnityEngine::AnimationCurve*)>(&::GlobalNamespace::RCHoverboard__SingleInputOption::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5617dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard__SingleInputOption>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::RCHoverboard__EInputSource>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard__SingleInputOption.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RCHoverboard__SingleInputOption::*)(::GlobalNamespace::RCRemoteHoldable_RCInput)>(&::GlobalNamespace::RCHoverboard__SingleInputOption::Get)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5617198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard__SingleInputOption>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::RCRemoteHoldable_RCInput>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RCHoverboard__SingleInputOption::_ctor(::GlobalNamespace::RCHoverboard__EInputSource  source, ::UnityEngine::AnimationCurve*  remapCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard__SingleInputOption>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::RCHoverboard__EInputSource>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, remapCurve);
}
inline float_t GlobalNamespace::RCHoverboard__SingleInputOption::Get(::GlobalNamespace::RCRemoteHoldable_RCInput  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard__SingleInputOption>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::RCRemoteHoldable_RCInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, input);
}
// Ctor Parameters [CppParam { name: "source", ty: "::GlobalNamespace::GTOption_1<::GlobalNamespace::StringEnum_1<::GlobalNamespace::RCHoverboard__EInputSource>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "remapCurve", ty: "::GlobalNamespace::GTOption_1<::UnityEngine::AnimationCurve*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption::RCHoverboard__SingleInputOption(::GlobalNamespace::GTOption_1<::GlobalNamespace::StringEnum_1<::GlobalNamespace::RCHoverboard__EInputSource>>  source, ::GlobalNamespace::GTOption_1<::UnityEngine::AnimationCurve*>  remapCurve) noexcept  {
this->source = source;
this->remapCurve = remapCurve;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption::RCHoverboard__SingleInputOption()   {
}
