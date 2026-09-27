#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/TouchscreenHoverFilter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__TouchscreenHoverFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRHoverFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRHoverInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter.get_screenTouchCountInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* (::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::get_screenTouchCountInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a51f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"get_screenTouchCountInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter.set_screenTouchCountInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::set_screenTouchCountInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4a51f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"set_screenTouchCountInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter.get_canProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::get_canProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a5254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"get_canProcess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4a525c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4a5274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::Process)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4a528c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"Process", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4a5368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*& UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::__cordl_internal_get_m_ScreenTouchCountInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenTouchCountInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::__cordl_internal_get_m_ScreenTouchCountInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenTouchCountInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::__cordl_internal_set_m_ScreenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenTouchCountInput = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::get_screenTouchCountInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"get_screenTouchCountInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::set_screenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"set_screenTouchCountInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::get_canProcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"get_canProcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {"Process", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter* UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter"
constexpr  UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter* UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRHoverFilter() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter::TouchscreenHoverFilter()   {
}
