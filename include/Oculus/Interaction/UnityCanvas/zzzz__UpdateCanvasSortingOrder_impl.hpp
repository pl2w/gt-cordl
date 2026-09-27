#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/UpdateCanvasSortingOrder.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__UpdateCanvasSortingOrder_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder.SetCanvasSortingOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::*)(int32_t)>(&::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::SetCanvasSortingOrder)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4927d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder*>(),
                        {"SetCanvasSortingOrder", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::*)()>(&::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4928a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::SetCanvasSortingOrder(int32_t  sortingOrder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder*>(),
                        {"SetCanvasSortingOrder", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sortingOrder);
}
inline void Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder* Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::UpdateCanvasSortingOrder()   {
}
