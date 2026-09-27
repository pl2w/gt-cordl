#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandMirroring_HandsSpace.hpp"
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandSpace_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandsSpace_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandSpace_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandMirroring_HandsSpace.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HandMirroring_HandSpace (::GlobalNamespace::HandMirroring_HandsSpace::*)(::Oculus::Interaction::Input::Handedness)>(&::GlobalNamespace::HandMirroring_HandsSpace::get_Item)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa50f994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandMirroring_HandsSpace>(),
                        {"get_Item", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandMirroring_HandsSpace._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandMirroring_HandsSpace::*)(::GlobalNamespace::HandMirroring_HandSpace, ::GlobalNamespace::HandMirroring_HandSpace)>(&::GlobalNamespace::HandMirroring_HandsSpace::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa50f9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandMirroring_HandsSpace>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HandMirroring_HandSpace>(), ::i2c::type_of<::GlobalNamespace::HandMirroring_HandSpace>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::HandMirroring_HandSpace GlobalNamespace::HandMirroring_HandsSpace::get_Item(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandMirroring_HandsSpace>(),
                        {"get_Item", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HandMirroring_HandSpace>(*this, ___internal_method, handedness);
}
inline void GlobalNamespace::HandMirroring_HandsSpace::_ctor(::GlobalNamespace::HandMirroring_HandSpace  leftHand, ::GlobalNamespace::HandMirroring_HandSpace  rightHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandMirroring_HandsSpace>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HandMirroring_HandSpace>(), ::i2c::type_of<::GlobalNamespace::HandMirroring_HandSpace>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, leftHand, rightHand);
}
// Ctor Parameters [CppParam { name: "_leftHand", ty: "::GlobalNamespace::HandMirroring_HandSpace", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rightHand", ty: "::GlobalNamespace::HandMirroring_HandSpace", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandMirroring_HandsSpace::HandMirroring_HandsSpace(::GlobalNamespace::HandMirroring_HandSpace  _leftHand, ::GlobalNamespace::HandMirroring_HandSpace  _rightHand) noexcept  {
this->_leftHand = _leftHand;
this->_rightHand = _rightHand;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandMirroring_HandsSpace::HandMirroring_HandsSpace()   {
}
