#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableGroupView.hpp"
#include "Oculus/Interaction/zzzz__InteractableState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractableGroupView_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractableView_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableGroupView_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa416188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Object*)>(&::Oculus::Interaction::InteractableGroupView::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa416190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"set_Data", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.get_InteractorsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::get_InteractorsCount)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa416198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_InteractorsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.get_SelectingInteractorsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::get_SelectingInteractorsCount)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa41636c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_SelectingInteractorsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.get_InteractorViews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::get_InteractorViews)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa416540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_InteractorViews", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.get_SelectingInteractorViews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::get_SelectingInteractorViews)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa416660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_SelectingInteractorViews", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.add_WhenInteractorViewAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Action_1<::Oculus::Interaction::IInteractorView*>*)>(&::Oculus::Interaction::InteractableGroupView::add_WhenInteractorViewAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa416780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"add_WhenInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.remove_WhenInteractorViewAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Action_1<::Oculus::Interaction::IInteractorView*>*)>(&::Oculus::Interaction::InteractableGroupView::remove_WhenInteractorViewAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa416830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"remove_WhenInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.add_WhenInteractorViewRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Action_1<::Oculus::Interaction::IInteractorView*>*)>(&::Oculus::Interaction::InteractableGroupView::add_WhenInteractorViewRemoved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4168e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"add_WhenInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.remove_WhenInteractorViewRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Action_1<::Oculus::Interaction::IInteractorView*>*)>(&::Oculus::Interaction::InteractableGroupView::remove_WhenInteractorViewRemoved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa416990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"remove_WhenInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.add_WhenSelectingInteractorViewAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Action_1<::Oculus::Interaction::IInteractorView*>*)>(&::Oculus::Interaction::InteractableGroupView::add_WhenSelectingInteractorViewAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa416a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"add_WhenSelectingInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.remove_WhenSelectingInteractorViewAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Action_1<::Oculus::Interaction::IInteractorView*>*)>(&::Oculus::Interaction::InteractableGroupView::remove_WhenSelectingInteractorViewAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa416af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"remove_WhenSelectingInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.add_WhenSelectingInteractorViewRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Action_1<::Oculus::Interaction::IInteractorView*>*)>(&::Oculus::Interaction::InteractableGroupView::add_WhenSelectingInteractorViewRemoved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa416ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"add_WhenSelectingInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.remove_WhenSelectingInteractorViewRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Action_1<::Oculus::Interaction::IInteractorView*>*)>(&::Oculus::Interaction::InteractableGroupView::remove_WhenSelectingInteractorViewRemoved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa416c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"remove_WhenSelectingInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.get_MaxInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::get_MaxInteractors)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa416d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_MaxInteractors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.get_MaxSelectingInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::get_MaxSelectingInteractors)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa416eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_MaxSelectingInteractors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.add_WhenStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*)>(&::Oculus::Interaction::InteractableGroupView::add_WhenStateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa417060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"add_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.remove_WhenStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*)>(&::Oculus::Interaction::InteractableGroupView::remove_WhenStateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa417110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"remove_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::InteractableState (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4171c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::Oculus::Interaction::InteractableState)>(&::Oculus::Interaction::InteractableGroupView::set_State)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4171c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"set_State", {}, {::i2c::type_of<::Oculus::Interaction::InteractableState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::UpdateState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa417200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"UpdateState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::Awake)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa417238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa417364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::OnEnable)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0xa4173bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::OnDisable)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0xa417840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.HandleStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::Oculus::Interaction::InteractableStateChangeArgs)>(&::Oculus::Interaction::InteractableGroupView::HandleStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa417cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"HandleStateChange", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.HandleInteractorViewAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroupView::HandleInteractorViewAdded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa417cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"HandleInteractorViewAdded", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.HandleInteractorViewRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroupView::HandleInteractorViewRemoved)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa417ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"HandleInteractorViewRemoved", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.HandleSelectingInteractorViewAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroupView::HandleSelectingInteractorViewAdded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa417d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"HandleSelectingInteractorViewAdded", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.HandleSelectingInteractorViewRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroupView::HandleSelectingInteractorViewRemoved)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa417d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"HandleSelectingInteractorViewRemoved", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.InjectAllInteractableGroupView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*)>(&::Oculus::Interaction::InteractableGroupView::InjectAllInteractableGroupView)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa417d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"InjectAllInteractableGroupView", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.InjectInteractables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*)>(&::Oculus::Interaction::InteractableGroupView::InjectInteractables)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa417d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"InjectInteractables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView.InjectOptionalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)(::System::Object*)>(&::Oculus::Interaction::InteractableGroupView::InjectOptionalData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa417e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"InjectOptionalData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView::*)()>(&::Oculus::Interaction::InteractableGroupView::_ctor)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xa417f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::InteractableGroupView::__cordl_internal_get__interactables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactables;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::InteractableGroupView::__cordl_internal_get__interactables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactables;
}
constexpr void Oculus::Interaction::InteractableGroupView::__cordl_internal_set__interactables(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactables = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_Interactables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactables;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>* const& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_Interactables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactables;
}
constexpr void Oculus::Interaction::InteractableGroupView::__cordl_internal_set_Interactables(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Interactables = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::InteractableGroupView::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::InteractableGroupView::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void Oculus::Interaction::InteractableGroupView::__cordl_internal_set__data(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr ::System::Object*& Oculus::Interaction::InteractableGroupView::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr ::System::Object* const& Oculus::Interaction::InteractableGroupView::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr void Oculus::Interaction::InteractableGroupView::__cordl_internal_set__Data_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data_k__BackingField = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_WhenInteractorViewAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenInteractorViewAdded;
}
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_WhenInteractorViewAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenInteractorViewAdded;
}
constexpr void Oculus::Interaction::InteractableGroupView::__cordl_internal_set_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenInteractorViewAdded = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_WhenInteractorViewRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenInteractorViewRemoved;
}
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_WhenInteractorViewRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenInteractorViewRemoved;
}
constexpr void Oculus::Interaction::InteractableGroupView::__cordl_internal_set_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenInteractorViewRemoved = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_WhenSelectingInteractorViewAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelectingInteractorViewAdded;
}
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_WhenSelectingInteractorViewAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelectingInteractorViewAdded;
}
constexpr void Oculus::Interaction::InteractableGroupView::__cordl_internal_set_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenSelectingInteractorViewAdded = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_WhenSelectingInteractorViewRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelectingInteractorViewRemoved;
}
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_WhenSelectingInteractorViewRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelectingInteractorViewRemoved;
}
constexpr void Oculus::Interaction::InteractableGroupView::__cordl_internal_set_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenSelectingInteractorViewRemoved = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_WhenStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
constexpr ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>* const& Oculus::Interaction::InteractableGroupView::__cordl_internal_get_WhenStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
constexpr void Oculus::Interaction::InteractableGroupView::__cordl_internal_set_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenStateChanged = value;
}
constexpr ::Oculus::Interaction::InteractableState& Oculus::Interaction::InteractableGroupView::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::Oculus::Interaction::InteractableState const& Oculus::Interaction::InteractableGroupView::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void Oculus::Interaction::InteractableGroupView::__cordl_internal_set__state(::Oculus::Interaction::InteractableState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr bool& Oculus::Interaction::InteractableGroupView::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::InteractableGroupView::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::InteractableGroupView::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::System::Object* Oculus::Interaction::InteractableGroupView::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroupView::set_Data(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"set_Data", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::InteractableGroupView::get_InteractorsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_InteractorsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::InteractableGroupView::get_SelectingInteractorsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_SelectingInteractorsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::InteractableGroupView::get_InteractorViews()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_InteractorViews", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::InteractableGroupView::get_SelectingInteractorViews()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_SelectingInteractorViews", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroupView::add_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"add_WhenInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractableGroupView::remove_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"remove_WhenInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractableGroupView::add_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"add_WhenInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractableGroupView::remove_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"remove_WhenInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractableGroupView::add_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"add_WhenSelectingInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractableGroupView::remove_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"remove_WhenSelectingInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractableGroupView::add_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"add_WhenSelectingInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractableGroupView::remove_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"remove_WhenSelectingInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::InteractableGroupView::get_MaxInteractors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_MaxInteractors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::InteractableGroupView::get_MaxSelectingInteractors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_MaxSelectingInteractors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroupView::add_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"add_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractableGroupView::remove_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"remove_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::InteractableState Oculus::Interaction::InteractableGroupView::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractableState>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroupView::set_State(::Oculus::Interaction::InteractableState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"set_State", {}, {::i2c::type_of<::Oculus::Interaction::InteractableState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractableGroupView::UpdateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"UpdateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroupView::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroupView::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroupView::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroupView::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableGroupView::HandleStateChange(::Oculus::Interaction::InteractableStateChangeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"HandleStateChange", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Oculus::Interaction::InteractableGroupView::HandleInteractorViewAdded(::Oculus::Interaction::IInteractorView*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"HandleInteractorViewAdded", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Oculus::Interaction::InteractableGroupView::HandleInteractorViewRemoved(::Oculus::Interaction::IInteractorView*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"HandleInteractorViewRemoved", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Oculus::Interaction::InteractableGroupView::HandleSelectingInteractorViewAdded(::Oculus::Interaction::IInteractorView*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"HandleSelectingInteractorViewAdded", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Oculus::Interaction::InteractableGroupView::HandleSelectingInteractorViewRemoved(::Oculus::Interaction::IInteractorView*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"HandleSelectingInteractorViewRemoved", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Oculus::Interaction::InteractableGroupView::InjectAllInteractableGroupView(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*  interactables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"InjectAllInteractableGroupView", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactables);
}
inline void Oculus::Interaction::InteractableGroupView::InjectInteractables(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*  interactables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"InjectInteractables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactables);
}
inline void Oculus::Interaction::InteractableGroupView::InjectOptionalData(::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {"InjectOptionalData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::InteractableGroupView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::InteractableGroupView* Oculus::Interaction::InteractableGroupView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractableGroupView*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IInteractableView"
constexpr  Oculus::Interaction::InteractableGroupView::operator ::Oculus::Interaction::IInteractableView*() noexcept {
return static_cast<::Oculus::Interaction::IInteractableView*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IInteractableView"
constexpr ::Oculus::Interaction::IInteractableView* Oculus::Interaction::InteractableGroupView::i___Oculus__Interaction__IInteractableView() noexcept {
return static_cast<::Oculus::Interaction::IInteractableView*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractableGroupView::InteractableGroupView()   {
}
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView___c::*)()>(&::Oculus::Interaction::InteractableGroupView___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa418304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView___c._get_InteractorViews_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* (::Oculus::Interaction::InteractableGroupView___c::*)(::Oculus::Interaction::IInteractableView*)>(&::Oculus::Interaction::InteractableGroupView___c::_get_InteractorViews_b__12_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa41830c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<get_InteractorViews>b__12_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView___c._get_SelectingInteractorViews_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* (::Oculus::Interaction::InteractableGroupView___c::*)(::Oculus::Interaction::IInteractableView*)>(&::Oculus::Interaction::InteractableGroupView___c::_get_SelectingInteractorViews_b__14_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4183ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<get_SelectingInteractorViews>b__14_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView___c._Awake_b__39_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractableView* (::Oculus::Interaction::InteractableGroupView___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::InteractableGroupView___c::_Awake_b__39_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa41844c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<Awake>b__39_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView___c._InjectInteractables_b__50_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Oculus::Interaction::InteractableGroupView___c::*)(::Oculus::Interaction::IInteractableView*)>(&::Oculus::Interaction::InteractableGroupView___c::_InjectInteractables_b__50_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa418494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<InjectInteractables>b__50_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView___c.__ctor_b__52_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView___c::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroupView___c::__ctor_b__52_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa41850c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<.ctor>b__52_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView___c.__ctor_b__52_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView___c::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroupView___c::__ctor_b__52_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa418510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<.ctor>b__52_1", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView___c.__ctor_b__52_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView___c::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroupView___c::__ctor_b__52_2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa418514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<.ctor>b__52_2", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView___c.__ctor_b__52_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView___c::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::InteractableGroupView___c::__ctor_b__52_3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa418518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<.ctor>b__52_3", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableGroupView___c.__ctor_b__52_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableGroupView___c::*)(::Oculus::Interaction::InteractableStateChangeArgs)>(&::Oculus::Interaction::InteractableGroupView___c::__ctor_b__52_4)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa41851c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<.ctor>b__52_4", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::InteractableGroupView___c::setStaticF___9(::Oculus::Interaction::InteractableGroupView___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractableGroupView___c*, "<>9", ::Oculus::Interaction::InteractableGroupView___c*>(std::forward<::Oculus::Interaction::InteractableGroupView___c*>(value));
}
inline ::Oculus::Interaction::InteractableGroupView___c* Oculus::Interaction::InteractableGroupView___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractableGroupView___c*, "<>9", ::Oculus::Interaction::InteractableGroupView___c*>();
}
inline void Oculus::Interaction::InteractableGroupView___c::setStaticF___9__12_0(::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*, "<>9__12_0", ::Oculus::Interaction::InteractableGroupView___c*>(std::forward<::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*>(value));
}
inline ::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>* Oculus::Interaction::InteractableGroupView___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*, "<>9__12_0", ::Oculus::Interaction::InteractableGroupView___c*>();
}
inline void Oculus::Interaction::InteractableGroupView___c::setStaticF___9__14_0(::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*, "<>9__14_0", ::Oculus::Interaction::InteractableGroupView___c*>(std::forward<::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*>(value));
}
inline ::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>* Oculus::Interaction::InteractableGroupView___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*, "<>9__14_0", ::Oculus::Interaction::InteractableGroupView___c*>();
}
inline void Oculus::Interaction::InteractableGroupView___c::setStaticF___9__39_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractableView*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractableView*>*, "<>9__39_0", ::Oculus::Interaction::InteractableGroupView___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractableView*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractableView*>* Oculus::Interaction::InteractableGroupView___c::getStaticF___9__39_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractableView*>*, "<>9__39_0", ::Oculus::Interaction::InteractableGroupView___c*>();
}
inline void Oculus::Interaction::InteractableGroupView___c::setStaticF___9__50_0(::System::Converter_2<::Oculus::Interaction::IInteractableView*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::Oculus::Interaction::IInteractableView*,::UnityW<::UnityEngine::Object>>*, "<>9__50_0", ::Oculus::Interaction::InteractableGroupView___c*>(std::forward<::System::Converter_2<::Oculus::Interaction::IInteractableView*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Converter_2<::Oculus::Interaction::IInteractableView*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::InteractableGroupView___c::getStaticF___9__50_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::Oculus::Interaction::IInteractableView*,::UnityW<::UnityEngine::Object>>*, "<>9__50_0", ::Oculus::Interaction::InteractableGroupView___c*>();
}
inline void Oculus::Interaction::InteractableGroupView___c::setStaticF___9__52_0(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__52_0", ::Oculus::Interaction::InteractableGroupView___c*>(std::forward<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::InteractableGroupView___c::getStaticF___9__52_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__52_0", ::Oculus::Interaction::InteractableGroupView___c*>();
}
inline void Oculus::Interaction::InteractableGroupView___c::setStaticF___9__52_1(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__52_1", ::Oculus::Interaction::InteractableGroupView___c*>(std::forward<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::InteractableGroupView___c::getStaticF___9__52_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__52_1", ::Oculus::Interaction::InteractableGroupView___c*>();
}
inline void Oculus::Interaction::InteractableGroupView___c::setStaticF___9__52_2(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__52_2", ::Oculus::Interaction::InteractableGroupView___c*>(std::forward<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::InteractableGroupView___c::getStaticF___9__52_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__52_2", ::Oculus::Interaction::InteractableGroupView___c*>();
}
inline void Oculus::Interaction::InteractableGroupView___c::setStaticF___9__52_3(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__52_3", ::Oculus::Interaction::InteractableGroupView___c*>(std::forward<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::InteractableGroupView___c::getStaticF___9__52_3()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__52_3", ::Oculus::Interaction::InteractableGroupView___c*>();
}
inline void Oculus::Interaction::InteractableGroupView___c::setStaticF___9__52_4(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*, "<>9__52_4", ::Oculus::Interaction::InteractableGroupView___c*>(std::forward<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>* Oculus::Interaction::InteractableGroupView___c::getStaticF___9__52_4()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*, "<>9__52_4", ::Oculus::Interaction::InteractableGroupView___c*>();
}
inline void Oculus::Interaction::InteractableGroupView___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::InteractableGroupView___c::_get_InteractorViews_b__12_0(::Oculus::Interaction::IInteractableView*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<get_InteractorViews>b__12_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>(this, ___internal_method, interactable);
}
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::InteractableGroupView___c::_get_SelectingInteractorViews_b__14_0(::Oculus::Interaction::IInteractableView*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<get_SelectingInteractorViews>b__14_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>(this, ___internal_method, interactable);
}
inline ::Oculus::Interaction::IInteractableView* Oculus::Interaction::InteractableGroupView___c::_Awake_b__39_0(::UnityEngine::Object*  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<Awake>b__39_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractableView*>(this, ___internal_method, mono);
}
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::InteractableGroupView___c::_InjectInteractables_b__50_0(::Oculus::Interaction::IInteractableView*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<InjectInteractables>b__50_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractableView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::InteractableGroupView___c::__ctor_b__52_0(::Oculus::Interaction::IInteractorView*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<.ctor>b__52_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void Oculus::Interaction::InteractableGroupView___c::__ctor_b__52_1(::Oculus::Interaction::IInteractorView*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<.ctor>b__52_1", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void Oculus::Interaction::InteractableGroupView___c::__ctor_b__52_2(::Oculus::Interaction::IInteractorView*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<.ctor>b__52_2", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void Oculus::Interaction::InteractableGroupView___c::__ctor_b__52_3(::Oculus::Interaction::IInteractorView*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<.ctor>b__52_3", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void Oculus::Interaction::InteractableGroupView___c::__ctor_b__52_4(::Oculus::Interaction::InteractableStateChangeArgs  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableGroupView___c*>(),
                        {"<.ctor>b__52_4", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::InteractableGroupView___c* Oculus::Interaction::InteractableGroupView___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractableGroupView___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractableGroupView___c::InteractableGroupView___c()   {
}
