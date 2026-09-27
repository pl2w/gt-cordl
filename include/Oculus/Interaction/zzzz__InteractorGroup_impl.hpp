#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorGroup.hpp"
#include "Oculus/Interaction/zzzz__InteractorState_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractorGroup_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__ICandidateComparer_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IUpdateDriver_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorGroup_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorState_def.hpp"
#include "Oculus/Interaction/zzzz__UniqueIdentifier_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_MaxIterationsPerFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_MaxIterationsPerFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40b214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"get_MaxIterationsPerFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.set_MaxIterationsPerFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(int32_t)>(&::Oculus::Interaction::InteractorGroup::set_MaxIterationsPerFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40b21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"set_MaxIterationsPerFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40b224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_IsRootDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_IsRootDriver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40b22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"get_IsRootDriver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.set_IsRootDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(bool)>(&::Oculus::Interaction::InteractorGroup::set_IsRootDriver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40b234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"set_IsRootDriver", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_ShouldHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_ShouldHover)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_ShouldUnhover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_ShouldUnhover)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_ShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_ShouldSelect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_ShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_ShouldUnselect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Hover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Hover)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Unhover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Unhover)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Select)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Unselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Unselect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_HasCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_HasCandidate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_HasInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_HasInteractable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_HasSelectedInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_HasSelectedInteractable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_CandidateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_CandidateProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.add_WhenStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*)>(&::Oculus::Interaction::InteractorGroup::add_WhenStateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa40b23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"add_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.remove_WhenStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*)>(&::Oculus::Interaction::InteractorGroup::remove_WhenStateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa40b2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"remove_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.add_WhenPreprocessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::System::Action*)>(&::Oculus::Interaction::InteractorGroup::add_WhenPreprocessed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa40b39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"add_WhenPreprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.remove_WhenPreprocessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::System::Action*)>(&::Oculus::Interaction::InteractorGroup::remove_WhenPreprocessed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa40b438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"remove_WhenPreprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.add_WhenProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::System::Action*)>(&::Oculus::Interaction::InteractorGroup::add_WhenProcessed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa40b4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"add_WhenProcessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.remove_WhenProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::System::Action*)>(&::Oculus::Interaction::InteractorGroup::remove_WhenProcessed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa40b570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"remove_WhenProcessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.add_WhenPostprocessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::System::Action*)>(&::Oculus::Interaction::InteractorGroup::add_WhenPostprocessed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa40b60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"add_WhenPostprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.remove_WhenPostprocessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::System::Action*)>(&::Oculus::Interaction::InteractorGroup::remove_WhenPostprocessed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa40b6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"remove_WhenPostprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::InteractorState (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40b744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::Oculus::Interaction::InteractorState)>(&::Oculus::Interaction::InteractorGroup::set_State)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa40b74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"set_State", {}, {::i2c::type_of<::Oculus::Interaction::InteractorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::get_Identifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa40b78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Awake)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xa40b7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Start)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa40bac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40bc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa40bc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa40bcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.CompareStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Oculus::Interaction::InteractorState, ::Oculus::Interaction::InteractorState)>(&::Oculus::Interaction::InteractorGroup::CompareStates)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa40bd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"CompareStates", {}, {::i2c::type_of<::Oculus::Interaction::InteractorState>(), ::i2c::type_of<::Oculus::Interaction::InteractorState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.TryGetBestCandidateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup::*)(::Oculus::Interaction::InteractorGroup_InteractorPredicate*, ::by_ref<int32_t>, int32_t, int32_t)>(&::Oculus::Interaction::InteractorGroup::TryGetBestCandidateIndex)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa40bd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"TryGetBestCandidateIndex", {}, {::i2c::type_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.AnyInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup::*)(::Oculus::Interaction::InteractorGroup_InteractorPredicate*)>(&::Oculus::Interaction::InteractorGroup::AnyInteractor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa40c3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"AnyInteractor", {}, {::i2c::type_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.CompareCandidates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::InteractorGroup::*)(int32_t, int32_t)>(&::Oculus::Interaction::InteractorGroup::CompareCandidates)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0xa40bf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"CompareCandidates", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Preprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Preprocess)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa40c544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Process)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa40c800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Postprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Postprocess)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa40c9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.ProcessCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::ProcessCandidate)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa40cba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Enable)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa40ce40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Disable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa40d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.DisableAllExcept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::InteractorGroup::DisableAllExcept)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa40d1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"DisableAllExcept", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.EnableAllExcept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::InteractorGroup::EnableAllExcept)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa40d3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"EnableAllExcept", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.UpdateActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::UpdateActiveState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa40c730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"UpdateActiveState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa40d584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.Drive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::Drive)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa40d5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.InjectAllInteractorGroupBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*)>(&::Oculus::Interaction::InteractorGroup::InjectAllInteractorGroupBase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40d734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"InjectAllInteractorGroupBase", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.InjectInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*)>(&::Oculus::Interaction::InteractorGroup::InjectInteractors)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa40d738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"InjectInteractors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.InjectOptionalActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::InteractorGroup::InjectOptionalActiveState)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa40d85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"InjectOptionalActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup.InjectOptionalCandidateComparer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)(::Oculus::Interaction::ICandidateComparer*)>(&::Oculus::Interaction::InteractorGroup::InjectOptionalCandidateComparer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa40d928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"InjectOptionalCandidateComparer", {}, {::i2c::type_of<::Oculus::Interaction::ICandidateComparer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup::*)()>(&::Oculus::Interaction::InteractorGroup::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xa40d9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::InteractorGroup::__cordl_internal_get__interactors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::InteractorGroup::__cordl_internal_get__interactors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactors;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set__interactors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactors = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::IInteractor*>*& Oculus::Interaction::InteractorGroup::__cordl_internal_get_Interactors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactors;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::IInteractor*>* const& Oculus::Interaction::InteractorGroup::__cordl_internal_get_Interactors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactors;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set_Interactors(::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::IInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Interactors = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::InteractorGroup::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::InteractorGroup::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::InteractorGroup::__cordl_internal_get_ActiveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::InteractorGroup::__cordl_internal_get_ActiveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveState = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::InteractorGroup::__cordl_internal_get__candidateComparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____candidateComparer;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::InteractorGroup::__cordl_internal_get__candidateComparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____candidateComparer;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set__candidateComparer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____candidateComparer = value;
}
constexpr ::Oculus::Interaction::ICandidateComparer*& Oculus::Interaction::InteractorGroup::__cordl_internal_get_CandidateComparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CandidateComparer;
}
constexpr ::Oculus::Interaction::ICandidateComparer* const& Oculus::Interaction::InteractorGroup::__cordl_internal_get_CandidateComparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CandidateComparer;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set_CandidateComparer(::Oculus::Interaction::ICandidateComparer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CandidateComparer = value;
}
constexpr int32_t& Oculus::Interaction::InteractorGroup::__cordl_internal_get__maxIterationsPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxIterationsPerFrame;
}
constexpr int32_t const& Oculus::Interaction::InteractorGroup::__cordl_internal_get__maxIterationsPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxIterationsPerFrame;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set__maxIterationsPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxIterationsPerFrame = value;
}
constexpr bool& Oculus::Interaction::InteractorGroup::__cordl_internal_get__IsRootDriver_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRootDriver_k__BackingField;
}
constexpr bool const& Oculus::Interaction::InteractorGroup::__cordl_internal_get__IsRootDriver_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRootDriver_k__BackingField;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set__IsRootDriver_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsRootDriver_k__BackingField = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*& Oculus::Interaction::InteractorGroup::__cordl_internal_get_WhenStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
constexpr ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>* const& Oculus::Interaction::InteractorGroup::__cordl_internal_get_WhenStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenStateChanged = value;
}
constexpr ::System::Action*& Oculus::Interaction::InteractorGroup::__cordl_internal_get_WhenPreprocessed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPreprocessed;
}
constexpr ::System::Action* const& Oculus::Interaction::InteractorGroup::__cordl_internal_get_WhenPreprocessed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPreprocessed;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set_WhenPreprocessed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenPreprocessed = value;
}
constexpr ::System::Action*& Oculus::Interaction::InteractorGroup::__cordl_internal_get_WhenProcessed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenProcessed;
}
constexpr ::System::Action* const& Oculus::Interaction::InteractorGroup::__cordl_internal_get_WhenProcessed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenProcessed;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set_WhenProcessed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenProcessed = value;
}
constexpr ::System::Action*& Oculus::Interaction::InteractorGroup::__cordl_internal_get_WhenPostprocessed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPostprocessed;
}
constexpr ::System::Action* const& Oculus::Interaction::InteractorGroup::__cordl_internal_get_WhenPostprocessed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPostprocessed;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set_WhenPostprocessed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenPostprocessed = value;
}
constexpr ::Oculus::Interaction::InteractorState& Oculus::Interaction::InteractorGroup::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::Oculus::Interaction::InteractorState const& Oculus::Interaction::InteractorGroup::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set__state(::Oculus::Interaction::InteractorState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::Oculus::Interaction::UniqueIdentifier*& Oculus::Interaction::InteractorGroup::__cordl_internal_get__identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr ::Oculus::Interaction::UniqueIdentifier* const& Oculus::Interaction::InteractorGroup::__cordl_internal_get__identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____identifier = value;
}
constexpr bool& Oculus::Interaction::InteractorGroup::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::InteractorGroup::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::InteractorGroup::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::InteractorGroup::setStaticF_TruePredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "TruePredicate", ::Oculus::Interaction::InteractorGroup*>(std::forward<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(value));
}
inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* Oculus::Interaction::InteractorGroup::getStaticF_TruePredicate()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "TruePredicate", ::Oculus::Interaction::InteractorGroup*>();
}
inline void Oculus::Interaction::InteractorGroup::setStaticF_HasCandidatePredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "HasCandidatePredicate", ::Oculus::Interaction::InteractorGroup*>(std::forward<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(value));
}
inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* Oculus::Interaction::InteractorGroup::getStaticF_HasCandidatePredicate()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "HasCandidatePredicate", ::Oculus::Interaction::InteractorGroup*>();
}
inline void Oculus::Interaction::InteractorGroup::setStaticF_HasInteractablePredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "HasInteractablePredicate", ::Oculus::Interaction::InteractorGroup*>(std::forward<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(value));
}
inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* Oculus::Interaction::InteractorGroup::getStaticF_HasInteractablePredicate()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "HasInteractablePredicate", ::Oculus::Interaction::InteractorGroup*>();
}
inline int32_t Oculus::Interaction::InteractorGroup::get_MaxIterationsPerFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"get_MaxIterationsPerFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::set_MaxIterationsPerFrame(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"set_MaxIterationsPerFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Oculus::Interaction::InteractorGroup::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool Oculus::Interaction::InteractorGroup::get_IsRootDriver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"get_IsRootDriver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::set_IsRootDriver(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"set_IsRootDriver", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::InteractorGroup::get_ShouldHover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::InteractorGroup::get_ShouldUnhover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::InteractorGroup::get_ShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::InteractorGroup::get_ShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Hover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Unhover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Select()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Unselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::InteractorGroup::get_HasCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::InteractorGroup::get_HasInteractable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::InteractorGroup::get_HasSelectedInteractable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::InteractorGroup::get_CandidateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::add_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"add_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractorGroup::remove_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"remove_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractorGroup::add_WhenPreprocessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"add_WhenPreprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractorGroup::remove_WhenPreprocessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"remove_WhenPreprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractorGroup::add_WhenProcessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"add_WhenProcessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractorGroup::remove_WhenProcessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"remove_WhenProcessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractorGroup::add_WhenPostprocessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"add_WhenPostprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InteractorGroup::remove_WhenPostprocessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"remove_WhenPostprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::InteractorState Oculus::Interaction::InteractorGroup::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractorState>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::set_State(::Oculus::Interaction::InteractorState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"set_State", {}, {::i2c::type_of<::Oculus::Interaction::InteractorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::InteractorGroup::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::InteractorGroup::CompareStates(::Oculus::Interaction::InteractorState  a, ::Oculus::Interaction::InteractorState  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"CompareStates", {}, {::i2c::type_of<::Oculus::Interaction::InteractorState>(), ::i2c::type_of<::Oculus::Interaction::InteractorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline bool Oculus::Interaction::InteractorGroup::TryGetBestCandidateIndex(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  predicate, ::by_ref<int32_t>  bestCandidateIndex, int32_t  betterThan, int32_t  skipIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"TryGetBestCandidateIndex", {}, {::i2c::type_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, predicate, bestCandidateIndex, betterThan, skipIndex);
}
inline bool Oculus::Interaction::InteractorGroup::AnyInteractor(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"AnyInteractor", {}, {::i2c::type_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, predicate);
}
inline int32_t Oculus::Interaction::InteractorGroup::CompareCandidates(int32_t  indexA, int32_t  indexB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"CompareCandidates", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, indexA, indexB);
}
inline void Oculus::Interaction::InteractorGroup::Preprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Process()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Postprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::ProcessCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::DisableAllExcept(::Oculus::Interaction::IInteractor*  mainInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"DisableAllExcept", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainInteractor);
}
inline void Oculus::Interaction::InteractorGroup::EnableAllExcept(::Oculus::Interaction::IInteractor*  mainInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"EnableAllExcept", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainInteractor);
}
inline bool Oculus::Interaction::InteractorGroup::UpdateActiveState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"UpdateActiveState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::Drive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup::InjectAllInteractorGroupBase(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"InjectAllInteractorGroupBase", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactors);
}
inline void Oculus::Interaction::InteractorGroup::InjectInteractors(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"InjectInteractors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactors);
}
inline void Oculus::Interaction::InteractorGroup::InjectOptionalActiveState(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"InjectOptionalActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::InteractorGroup::InjectOptionalCandidateComparer(::Oculus::Interaction::ICandidateComparer*  candidateComparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {"InjectOptionalCandidateComparer", {}, {::i2c::type_of<::Oculus::Interaction::ICandidateComparer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, candidateComparer);
}
inline void Oculus::Interaction::InteractorGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::InteractorGroup* Oculus::Interaction::InteractorGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractorGroup*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IInteractor"
constexpr  Oculus::Interaction::InteractorGroup::operator ::Oculus::Interaction::IInteractor*() noexcept {
return static_cast<::Oculus::Interaction::IInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IInteractor"
constexpr ::Oculus::Interaction::IInteractor* Oculus::Interaction::InteractorGroup::i___Oculus__Interaction__IInteractor() noexcept {
return static_cast<::Oculus::Interaction::IInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IInteractorView"
constexpr  Oculus::Interaction::InteractorGroup::operator ::Oculus::Interaction::IInteractorView*() noexcept {
return static_cast<::Oculus::Interaction::IInteractorView*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IInteractorView"
constexpr ::Oculus::Interaction::IInteractorView* Oculus::Interaction::InteractorGroup::i___Oculus__Interaction__IInteractorView() noexcept {
return static_cast<::Oculus::Interaction::IInteractorView*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IUpdateDriver"
constexpr  Oculus::Interaction::InteractorGroup::operator ::Oculus::Interaction::IUpdateDriver*() noexcept {
return static_cast<::Oculus::Interaction::IUpdateDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IUpdateDriver"
constexpr ::Oculus::Interaction::IUpdateDriver* Oculus::Interaction::InteractorGroup::i___Oculus__Interaction__IUpdateDriver() noexcept {
return static_cast<::Oculus::Interaction::IUpdateDriver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractorGroup::InteractorGroup()   {
}
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup___c::*)()>(&::Oculus::Interaction::InteractorGroup___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40e040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup___c._Awake_b__60_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::InteractorGroup___c::_Awake_b__60_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa40e048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<Awake>b__60_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup___c._Awake_b__60_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractor* (::Oculus::Interaction::InteractorGroup___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::InteractorGroup___c::_Awake_b__60_1)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa40e0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<Awake>b__60_1", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup___c._InjectInteractors_b__81_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Oculus::Interaction::InteractorGroup___c::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::InteractorGroup___c::_InjectInteractors_b__81_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa40e0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<InjectInteractors>b__81_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup___c.__ctor_b__84_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup___c::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::InteractorGroup___c::__ctor_b__84_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40e164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.ctor>b__84_0", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup___c.__ctor_b__84_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup___c::*)()>(&::Oculus::Interaction::InteractorGroup___c::__ctor_b__84_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40e168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.ctor>b__84_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup___c.__ctor_b__84_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup___c::*)()>(&::Oculus::Interaction::InteractorGroup___c::__ctor_b__84_2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40e16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.ctor>b__84_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup___c.__ctor_b__84_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup___c::*)()>(&::Oculus::Interaction::InteractorGroup___c::__ctor_b__84_3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40e170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.ctor>b__84_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup___c.__cctor_b__85_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup___c::*)(::Oculus::Interaction::IInteractor*, int32_t)>(&::Oculus::Interaction::InteractorGroup___c::__cctor_b__85_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40e174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.cctor>b__85_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup___c.__cctor_b__85_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup___c::*)(::Oculus::Interaction::IInteractor*, int32_t)>(&::Oculus::Interaction::InteractorGroup___c::__cctor_b__85_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa40e17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.cctor>b__85_1", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup___c.__cctor_b__85_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup___c::*)(::Oculus::Interaction::IInteractor*, int32_t)>(&::Oculus::Interaction::InteractorGroup___c::__cctor_b__85_2)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa40e21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.cctor>b__85_2", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::InteractorGroup___c::setStaticF___9(::Oculus::Interaction::InteractorGroup___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractorGroup___c*, "<>9", ::Oculus::Interaction::InteractorGroup___c*>(std::forward<::Oculus::Interaction::InteractorGroup___c*>(value));
}
inline ::Oculus::Interaction::InteractorGroup___c* Oculus::Interaction::InteractorGroup___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractorGroup___c*, "<>9", ::Oculus::Interaction::InteractorGroup___c*>();
}
inline void Oculus::Interaction::InteractorGroup___c::setStaticF___9__60_0(::System::Predicate_1<::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Object>>*, "<>9__60_0", ::Oculus::Interaction::InteractorGroup___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Object>>* Oculus::Interaction::InteractorGroup___c::getStaticF___9__60_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Object>>*, "<>9__60_0", ::Oculus::Interaction::InteractorGroup___c*>();
}
inline void Oculus::Interaction::InteractorGroup___c::setStaticF___9__60_1(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*, "<>9__60_1", ::Oculus::Interaction::InteractorGroup___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>* Oculus::Interaction::InteractorGroup___c::getStaticF___9__60_1()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*, "<>9__60_1", ::Oculus::Interaction::InteractorGroup___c*>();
}
inline void Oculus::Interaction::InteractorGroup___c::setStaticF___9__81_0(::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*, "<>9__81_0", ::Oculus::Interaction::InteractorGroup___c*>(std::forward<::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::InteractorGroup___c::getStaticF___9__81_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*, "<>9__81_0", ::Oculus::Interaction::InteractorGroup___c*>();
}
inline void Oculus::Interaction::InteractorGroup___c::setStaticF___9__84_0(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*, "<>9__84_0", ::Oculus::Interaction::InteractorGroup___c*>(std::forward<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>* Oculus::Interaction::InteractorGroup___c::getStaticF___9__84_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*, "<>9__84_0", ::Oculus::Interaction::InteractorGroup___c*>();
}
inline void Oculus::Interaction::InteractorGroup___c::setStaticF___9__84_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__84_1", ::Oculus::Interaction::InteractorGroup___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::InteractorGroup___c::getStaticF___9__84_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__84_1", ::Oculus::Interaction::InteractorGroup___c*>();
}
inline void Oculus::Interaction::InteractorGroup___c::setStaticF___9__84_2(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__84_2", ::Oculus::Interaction::InteractorGroup___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::InteractorGroup___c::getStaticF___9__84_2()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__84_2", ::Oculus::Interaction::InteractorGroup___c*>();
}
inline void Oculus::Interaction::InteractorGroup___c::setStaticF___9__84_3(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__84_3", ::Oculus::Interaction::InteractorGroup___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::InteractorGroup___c::getStaticF___9__84_3()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__84_3", ::Oculus::Interaction::InteractorGroup___c*>();
}
inline void Oculus::Interaction::InteractorGroup___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::InteractorGroup___c::_Awake_b__60_0(::UnityEngine::Object*  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<Awake>b__60_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mono);
}
inline ::Oculus::Interaction::IInteractor* Oculus::Interaction::InteractorGroup___c::_Awake_b__60_1(::UnityEngine::Object*  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<Awake>b__60_1", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractor*>(this, ___internal_method, mono);
}
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::InteractorGroup___c::_InjectInteractors_b__81_0(::Oculus::Interaction::IInteractor*  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<InjectInteractors>b__81_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, i);
}
inline void Oculus::Interaction::InteractorGroup___c::__ctor_b__84_0(::Oculus::Interaction::InteractorStateChangeArgs  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.ctor>b__84_0", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void Oculus::Interaction::InteractorGroup___c::__ctor_b__84_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.ctor>b__84_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup___c::__ctor_b__84_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.ctor>b__84_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorGroup___c::__ctor_b__84_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.ctor>b__84_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::InteractorGroup___c::__cctor_b__85_0(::Oculus::Interaction::IInteractor*  interactor, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.cctor>b__85_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, index);
}
inline bool Oculus::Interaction::InteractorGroup___c::__cctor_b__85_1(::Oculus::Interaction::IInteractor*  interactor, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.cctor>b__85_1", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, index);
}
inline bool Oculus::Interaction::InteractorGroup___c::__cctor_b__85_2(::Oculus::Interaction::IInteractor*  interactor, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup___c*>(),
                        {"<.cctor>b__85_2", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, index);
}
inline ::Oculus::Interaction::InteractorGroup___c* Oculus::Interaction::InteractorGroup___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractorGroup___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractorGroup___c::InteractorGroup___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup_InteractorPredicate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorGroup_InteractorPredicate::*)(::System::Object*, ::System::IntPtr)>(&::Oculus::Interaction::InteractorGroup_InteractorPredicate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa40de30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup_InteractorPredicate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup_InteractorPredicate::*)(::Oculus::Interaction::IInteractor*, int32_t)>(&::Oculus::Interaction::InteractorGroup_InteractorPredicate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa40df3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup_InteractorPredicate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Oculus::Interaction::InteractorGroup_InteractorPredicate::*)(::Oculus::Interaction::IInteractor*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Interaction::InteractorGroup_InteractorPredicate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa40df50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorGroup_InteractorPredicate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::InteractorGroup_InteractorPredicate::*)(::System::IAsyncResult*)>(&::Oculus::Interaction::InteractorGroup_InteractorPredicate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa40dfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::InteractorGroup_InteractorPredicate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Oculus::Interaction::InteractorGroup_InteractorPredicate::Invoke(::Oculus::Interaction::IInteractor*  interactor, int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, index);
}
inline ::System::IAsyncResult* Oculus::Interaction::InteractorGroup_InteractorPredicate::BeginInvoke(::Oculus::Interaction::IInteractor*  interactor, int32_t  index, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, interactor, index, callback, object);
}
inline bool Oculus::Interaction::InteractorGroup_InteractorPredicate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* Oculus::Interaction::InteractorGroup_InteractorPredicate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractorGroup_InteractorPredicate::InteractorGroup_InteractorPredicate()   {
}
