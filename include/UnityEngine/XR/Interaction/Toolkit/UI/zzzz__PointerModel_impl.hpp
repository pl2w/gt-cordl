#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/PointerModel.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseButtonModel_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__PointerModel_InternalData_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseButtonModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__PointerModel_InternalData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.get_pointerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb432614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_pointerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.get_changedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_changedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43261c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_changedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.set_changedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_changedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb432624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_changedThisFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.get_displayIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_displayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43262c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_displayIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.set_displayIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_displayIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb432634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_displayIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb432650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_position)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb432658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.get_deltaPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_deltaPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43269c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_deltaPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.set_deltaPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_deltaPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4326a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_deltaPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.get_scrollDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_scrollDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4326ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_scrollDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.set_scrollDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_scrollDelta)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb4326b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_scrollDelta", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.get_leftButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_leftButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4326ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_leftButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.set_leftButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_leftButton)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb4326fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_leftButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.set_leftButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_leftButtonPressed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb432738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_leftButtonPressed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.get_rightButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_rightButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb432788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_rightButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.set_rightButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_rightButton)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb432798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_rightButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.set_rightButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_rightButtonPressed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb4327d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_rightButtonPressed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.get_middleButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_middleButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb432824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_middleButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.set_middleButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_middleButton)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb432834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_middleButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.set_middleButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_middleButtonPressed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb432870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_middleButtonPressed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb4328c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.OnFrameFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::OnFrameFinished)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb432a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"OnFrameFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::CopyTo)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb432ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"CopyTo", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::CopyFrom)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb432b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_pointerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_pointerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_changedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_changedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_changedThisFrame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_changedThisFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_displayIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_displayIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_displayIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_displayIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_position(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_deltaPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_deltaPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_deltaPosition(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_deltaPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_scrollDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_scrollDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_scrollDelta(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_scrollDelta", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_leftButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_leftButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_leftButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_leftButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_leftButtonPressed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_leftButtonPressed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_rightButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_rightButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_rightButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_rightButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_rightButtonPressed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_rightButtonPressed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::get_middleButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"get_middleButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_middleButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_middleButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::set_middleButtonPressed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"set_middleButtonPressed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::_ctor(int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pointerId);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::OnFrameFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"OnFrameFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::CopyTo(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"CopyTo", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::CopyFrom(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>(),
                        {"CopyFrom", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventData);
}
// Ctor Parameters [CppParam { name: "_pointerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_changedThisFrame_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DisplayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_deltaPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LeftButton", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RightButton", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MiddleButton", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InternalData", ty: "::GlobalNamespace::PointerModel_InternalData", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::PointerModel(int32_t  _pointerId_k__BackingField, bool  _changedThisFrame_k__BackingField, int32_t  m_DisplayIndex, ::UnityEngine::Vector2  m_Position, ::UnityEngine::Vector2  _deltaPosition_k__BackingField, ::UnityEngine::Vector2  m_ScrollDelta, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  m_LeftButton, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  m_RightButton, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel  m_MiddleButton, ::GlobalNamespace::PointerModel_InternalData  m_InternalData) noexcept  {
this->_pointerId_k__BackingField = _pointerId_k__BackingField;
this->_changedThisFrame_k__BackingField = _changedThisFrame_k__BackingField;
this->m_DisplayIndex = m_DisplayIndex;
this->m_Position = m_Position;
this->_deltaPosition_k__BackingField = _deltaPosition_k__BackingField;
this->m_ScrollDelta = m_ScrollDelta;
this->m_LeftButton = m_LeftButton;
this->m_RightButton = m_RightButton;
this->m_MiddleButton = m_MiddleButton;
this->m_InternalData = m_InternalData;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel::PointerModel()   {
}
