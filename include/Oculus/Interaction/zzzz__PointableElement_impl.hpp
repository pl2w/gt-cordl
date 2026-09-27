#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__PointableElement_def.hpp"
#include "Oculus/Interaction/zzzz__IPointableElement_def.hpp"
#include "Oculus/Interaction/zzzz__IPointable_def.hpp"
#include "Oculus/Interaction/zzzz__PointableElement_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.get_ForwardElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IPointableElement* (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::get_ForwardElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46bf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_ForwardElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.set_ForwardElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::Oculus::Interaction::IPointableElement*)>(&::Oculus::Interaction::PointableElement::set_ForwardElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46bf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"set_ForwardElement", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.get_TransferOnSecondSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::get_TransferOnSecondSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46bf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_TransferOnSecondSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.set_TransferOnSecondSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(bool)>(&::Oculus::Interaction::PointableElement::set_TransferOnSecondSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46bf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"set_TransferOnSecondSelection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.get_AddNewPointsToFront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::get_AddNewPointsToFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46bf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_AddNewPointsToFront", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.set_AddNewPointsToFront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(bool)>(&::Oculus::Interaction::PointableElement::set_AddNewPointsToFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46bf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"set_AddNewPointsToFront", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.add_WhenPointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::System::Action_1<::Oculus::Interaction::PointerEvent>*)>(&::Oculus::Interaction::PointableElement::add_WhenPointerEventRaised)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa462d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"add_WhenPointerEventRaised", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointerEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.remove_WhenPointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::System::Action_1<::Oculus::Interaction::PointerEvent>*)>(&::Oculus::Interaction::PointableElement::remove_WhenPointerEventRaised)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa462ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"remove_WhenPointerEventRaised", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointerEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.get_Points
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Pose>* (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::get_Points)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46bf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_Points", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.get_PointsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::get_PointsCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa46bfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_PointsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.get_SelectingPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Pose>* (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::get_SelectingPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46bfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_SelectingPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.get_SelectingPointsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::get_SelectingPointsCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa463868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_SelectingPointsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::Awake)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa46bff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa46c13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::OnEnable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa46c1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::OnDisable)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa46c2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.HandlePointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableElement::HandlePointerEventRaised)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa46c5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"HandlePointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.ProcessPointerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableElement::ProcessPointerEvent)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa46c634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.Hover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableElement::Hover)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa46c754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Hover", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableElement::Move)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa46ca2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Move", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.Unhover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableElement::Unhover)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa46c93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Unhover", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.Select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableElement::Select)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xa46cb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Select", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.Unselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableElement::Unselect)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa46ce1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Unselect", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableElement::Cancel)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa46c4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Cancel", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.PointableElementUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableElement::PointableElementUpdated)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa46cf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                    {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement.InjectOptionalForwardElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)(::Oculus::Interaction::IPointableElement*)>(&::Oculus::Interaction::PointableElement::InjectOptionalForwardElement)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa46d028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"InjectOptionalForwardElement", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement::*)()>(&::Oculus::Interaction::PointableElement::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa46d0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::PointableElement::__cordl_internal_get__transferOnSecondSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferOnSecondSelection;
}
constexpr bool const& Oculus::Interaction::PointableElement::__cordl_internal_get__transferOnSecondSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferOnSecondSelection;
}
constexpr void Oculus::Interaction::PointableElement::__cordl_internal_set__transferOnSecondSelection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transferOnSecondSelection = value;
}
constexpr bool& Oculus::Interaction::PointableElement::__cordl_internal_get__addNewPointsToFront()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addNewPointsToFront;
}
constexpr bool const& Oculus::Interaction::PointableElement::__cordl_internal_get__addNewPointsToFront() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addNewPointsToFront;
}
constexpr void Oculus::Interaction::PointableElement::__cordl_internal_set__addNewPointsToFront(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addNewPointsToFront = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PointableElement::__cordl_internal_get__forwardElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardElement;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PointableElement::__cordl_internal_get__forwardElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardElement;
}
constexpr void Oculus::Interaction::PointableElement::__cordl_internal_set__forwardElement(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwardElement = value;
}
constexpr ::Oculus::Interaction::IPointableElement*& Oculus::Interaction::PointableElement::__cordl_internal_get__ForwardElement_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForwardElement_k__BackingField;
}
constexpr ::Oculus::Interaction::IPointableElement* const& Oculus::Interaction::PointableElement::__cordl_internal_get__ForwardElement_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForwardElement_k__BackingField;
}
constexpr void Oculus::Interaction::PointableElement::__cordl_internal_set__ForwardElement_k__BackingField(::Oculus::Interaction::IPointableElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForwardElement_k__BackingField = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::PointerEvent>*& Oculus::Interaction::PointableElement::__cordl_internal_get_WhenPointerEventRaised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPointerEventRaised;
}
constexpr ::System::Action_1<::Oculus::Interaction::PointerEvent>* const& Oculus::Interaction::PointableElement::__cordl_internal_get_WhenPointerEventRaised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPointerEventRaised;
}
constexpr void Oculus::Interaction::PointableElement::__cordl_internal_set_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenPointerEventRaised = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Pose>*& Oculus::Interaction::PointableElement::__cordl_internal_get__points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Pose>* const& Oculus::Interaction::PointableElement::__cordl_internal_get__points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr void Oculus::Interaction::PointableElement::__cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____points = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Oculus::Interaction::PointableElement::__cordl_internal_get__pointIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Oculus::Interaction::PointableElement::__cordl_internal_get__pointIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointIds;
}
constexpr void Oculus::Interaction::PointableElement::__cordl_internal_set__pointIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointIds = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Pose>*& Oculus::Interaction::PointableElement::__cordl_internal_get__selectingPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectingPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Pose>* const& Oculus::Interaction::PointableElement::__cordl_internal_get__selectingPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectingPoints;
}
constexpr void Oculus::Interaction::PointableElement::__cordl_internal_set__selectingPoints(::System::Collections::Generic::List_1<::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectingPoints = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Oculus::Interaction::PointableElement::__cordl_internal_get__selectingPointIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectingPointIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Oculus::Interaction::PointableElement::__cordl_internal_get__selectingPointIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectingPointIds;
}
constexpr void Oculus::Interaction::PointableElement::__cordl_internal_set__selectingPointIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectingPointIds = value;
}
constexpr bool& Oculus::Interaction::PointableElement::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PointableElement::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PointableElement::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::IPointableElement* Oculus::Interaction::PointableElement::get_ForwardElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_ForwardElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IPointableElement*>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableElement::set_ForwardElement(::Oculus::Interaction::IPointableElement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"set_ForwardElement", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::PointableElement::get_TransferOnSecondSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_TransferOnSecondSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableElement::set_TransferOnSecondSelection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"set_TransferOnSecondSelection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::PointableElement::get_AddNewPointsToFront()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_AddNewPointsToFront", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableElement::set_AddNewPointsToFront(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"set_AddNewPointsToFront", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PointableElement::add_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"add_WhenPointerEventRaised", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointerEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PointableElement::remove_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"remove_WhenPointerEventRaised", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointerEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Pose>* Oculus::Interaction::PointableElement::get_Points()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_Points", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::PointableElement::get_PointsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_PointsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Pose>* Oculus::Interaction::PointableElement::get_SelectingPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_SelectingPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Pose>*>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::PointableElement::get_SelectingPointsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"get_SelectingPointsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableElement::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableElement::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableElement::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableElement::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableElement::HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"HandlePointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PointableElement::ProcessPointerEvent(::Oculus::Interaction::PointerEvent  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PointableElement::Hover(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Hover", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PointableElement::Move(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Move", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PointableElement::Unhover(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Unhover", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PointableElement::Select(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Select", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PointableElement::Unselect(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Unselect", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PointableElement::Cancel(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"Cancel", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PointableElement::PointableElementUpdated(::Oculus::Interaction::PointerEvent  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointableElement*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PointableElement::InjectOptionalForwardElement(::Oculus::Interaction::IPointableElement*  forwardElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {"InjectOptionalForwardElement", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forwardElement);
}
inline void Oculus::Interaction::PointableElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PointableElement* Oculus::Interaction::PointableElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointableElement*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IPointableElement"
constexpr  Oculus::Interaction::PointableElement::operator ::Oculus::Interaction::IPointableElement*() noexcept {
return static_cast<::Oculus::Interaction::IPointableElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IPointableElement"
constexpr ::Oculus::Interaction::IPointableElement* Oculus::Interaction::PointableElement::i___Oculus__Interaction__IPointableElement() noexcept {
return static_cast<::Oculus::Interaction::IPointableElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IPointable"
constexpr  Oculus::Interaction::PointableElement::operator ::Oculus::Interaction::IPointable*() noexcept {
return static_cast<::Oculus::Interaction::IPointable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IPointable"
constexpr ::Oculus::Interaction::IPointable* Oculus::Interaction::PointableElement::i___Oculus__Interaction__IPointable() noexcept {
return static_cast<::Oculus::Interaction::IPointable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointableElement::PointableElement()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PointableElement___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement___c::*)()>(&::Oculus::Interaction::PointableElement___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46d254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointableElement___c.__ctor_b__43_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointableElement___c::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PointableElement___c::__ctor_b__43_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46d25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement___c*>(),
                        {"<.ctor>b__43_0", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PointableElement___c::setStaticF___9(::Oculus::Interaction::PointableElement___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PointableElement___c*, "<>9", ::Oculus::Interaction::PointableElement___c*>(std::forward<::Oculus::Interaction::PointableElement___c*>(value));
}
inline ::Oculus::Interaction::PointableElement___c* Oculus::Interaction::PointableElement___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PointableElement___c*, "<>9", ::Oculus::Interaction::PointableElement___c*>();
}
inline void Oculus::Interaction::PointableElement___c::setStaticF___9__43_0(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::PointerEvent>*, "<>9__43_0", ::Oculus::Interaction::PointableElement___c*>(std::forward<::System::Action_1<::Oculus::Interaction::PointerEvent>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::PointerEvent>* Oculus::Interaction::PointableElement___c::getStaticF___9__43_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::PointerEvent>*, "<>9__43_0", ::Oculus::Interaction::PointableElement___c*>();
}
inline void Oculus::Interaction::PointableElement___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PointableElement___c::__ctor_b__43_0(::Oculus::Interaction::PointerEvent  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointableElement___c*>(),
                        {"<.ctor>b__43_0", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::PointableElement___c* Oculus::Interaction::PointableElement___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointableElement___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointableElement___c::PointableElement___c()   {
}
