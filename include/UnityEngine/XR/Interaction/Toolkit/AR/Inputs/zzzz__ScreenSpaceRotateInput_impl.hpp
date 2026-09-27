#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/Inputs/ScreenSpaceRotateInput.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AR/Inputs/zzzz__ScreenSpaceRotateInput_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.get_rayInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::get_rayInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d033c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"get_rayInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.set_rayInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::set_rayInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d0344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"set_rayInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.get_twistDeltaRotationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::get_twistDeltaRotationInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d034c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"get_twistDeltaRotationInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.set_twistDeltaRotationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::set_twistDeltaRotationInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4d0354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"set_twistDeltaRotationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.get_dragDeltaInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::get_dragDeltaInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d03b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"get_dragDeltaInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.set_dragDeltaInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::set_dragDeltaInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4d03b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"set_dragDeltaInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.get_screenTouchCountInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::get_screenTouchCountInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d0414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"get_screenTouchCountInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.set_screenTouchCountInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::set_screenTouchCountInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4d041c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"set_screenTouchCountInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4d0478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::Awake)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb4d047c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4d0524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::OnDisable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4d0558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::ReadValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4d058c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"ReadValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput.TryReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)(::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::TryReadValue)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xb4d05a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"TryReadValue", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb4d082c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_get_m_RayInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayInteractor;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_get_m_RayInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_set_m_RayInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RayInteractor = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_get_m_TwistDeltaRotationInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TwistDeltaRotationInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_get_m_TwistDeltaRotationInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TwistDeltaRotationInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_set_m_TwistDeltaRotationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TwistDeltaRotationInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_get_m_DragDeltaInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragDeltaInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_get_m_DragDeltaInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragDeltaInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_set_m_DragDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DragDeltaInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_get_m_ScreenTouchCountInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenTouchCountInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_get_m_ScreenTouchCountInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenTouchCountInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::__cordl_internal_set_m_ScreenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenTouchCountInput = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::get_rayInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"get_rayInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::set_rayInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"set_rayInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::get_twistDeltaRotationInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"get_twistDeltaRotationInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::set_twistDeltaRotationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"set_twistDeltaRotationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::get_dragDeltaInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"get_dragDeltaInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::set_dragDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"set_dragDeltaInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::get_screenTouchCountInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"get_screenTouchCountInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::set_screenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"set_screenTouchCountInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::ReadValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"ReadValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::TryReadValue(::by_ref<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {"TryReadValue", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>"
constexpr  UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1___UnityEngine__Vector2_() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr  UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput::ScreenSpaceRotateInput()   {
}
