#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TouchModel.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TouchModel_ImplementationData_impl.hpp"
#include "UnityEngine/zzzz__TouchPhase_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TouchModel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TouchModel_ImplementationData_def.hpp"
#include "UnityEngine/zzzz__TouchPhase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.get_pointerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb433e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_pointerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.get_selectPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TouchPhase (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_selectPhase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb433e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_selectPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.set_selectPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)(::UnityEngine::TouchPhase)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::set_selectPhase)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb433e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"set_selectPhase", {}, {::i2c::type_of<::UnityEngine::TouchPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.get_selectDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_selectDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb433e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_selectDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.set_selectDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::set_selectDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb433e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"set_selectDelta", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.get_changedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_changedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb433e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_changedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.set_changedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::set_changedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb433e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"set_changedThisFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb433ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::set_position)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb433eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.get_deltaPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_deltaPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb433ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_deltaPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.set_deltaPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::set_deltaPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb433ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"set_deltaPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb433f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4340cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.OnFrameFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::OnFrameFinished)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb43412c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"OnFrameFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::CopyTo)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb434184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"CopyTo", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::CopyFrom)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb434304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_pointerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_pointerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::TouchPhase UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_selectPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_selectPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchPhase>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::set_selectPhase(::UnityEngine::TouchPhase  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"set_selectPhase", {}, {::i2c::type_of<::UnityEngine::TouchPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_selectDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_selectDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::set_selectDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"set_selectDelta", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_changedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_changedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::set_changedThisFrame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"set_changedThisFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::set_position(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::get_deltaPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"get_deltaPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::set_deltaPosition(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"set_deltaPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::_ctor(int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pointerId);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::OnFrameFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"OnFrameFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::CopyTo(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"CopyTo", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::CopyFrom(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
// Ctor Parameters [CppParam { name: "_pointerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_selectDelta_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_changedThisFrame_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_deltaPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SelectPhase", ty: "::UnityEngine::TouchPhase", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ImplementationData", ty: "::GlobalNamespace::TouchModel_ImplementationData", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::TouchModel(int32_t  _pointerId_k__BackingField, ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  _selectDelta_k__BackingField, bool  _changedThisFrame_k__BackingField, ::UnityEngine::Vector2  _deltaPosition_k__BackingField, ::UnityEngine::TouchPhase  m_SelectPhase, ::UnityEngine::Vector2  m_Position, ::GlobalNamespace::TouchModel_ImplementationData  m_ImplementationData) noexcept  {
this->_pointerId_k__BackingField = _pointerId_k__BackingField;
this->_selectDelta_k__BackingField = _selectDelta_k__BackingField;
this->_changedThisFrame_k__BackingField = _changedThisFrame_k__BackingField;
this->_deltaPosition_k__BackingField = _deltaPosition_k__BackingField;
this->m_SelectPhase = m_SelectPhase;
this->m_Position = m_Position;
this->m_ImplementationData = m_ImplementationData;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel::TouchModel()   {
}
