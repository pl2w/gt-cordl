#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/MouseButtonModel.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseButtonModel_ImplementationData_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseButtonModel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseButtonModel_ImplementationData_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel.get_isDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::get_isDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43236c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"get_isDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel.set_isDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::set_isDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb432374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"set_isDown", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel.get_lastFrameDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState (::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::get_lastFrameDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4323a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"get_lastFrameDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel.set_lastFrameDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState)>(&::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::set_lastFrameDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4323ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"set_lastFrameDelta", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4323b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel.OnFrameFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::OnFrameFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb432468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"OnFrameFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::CopyTo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb432470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"CopyTo", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::CopyFrom)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb4324f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::get_isDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"get_isDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::set_isDown(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"set_isDown", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::get_lastFrameDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"get_lastFrameDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::set_lastFrameDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"set_lastFrameDelta", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::OnFrameFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"OnFrameFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::CopyTo(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"CopyTo", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::CopyFrom(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
// Ctor Parameters [CppParam { name: "_lastFrameDelta_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IsDown", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ImplementationData", ty: "::GlobalNamespace::MouseButtonModel_ImplementationData", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::MouseButtonModel(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _lastFrameDelta_k__BackingField, bool  m_IsDown, ::GlobalNamespace::MouseButtonModel_ImplementationData  m_ImplementationData) noexcept  {
this->_lastFrameDelta_k__BackingField = _lastFrameDelta_k__BackingField;
this->m_IsDown = m_IsDown;
this->m_ImplementationData = m_ImplementationData;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel::MouseButtonModel()   {
}
