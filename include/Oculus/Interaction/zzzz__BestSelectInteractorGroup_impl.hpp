#pragma once
// IWYU pragma private; include "Oculus/Interaction/BestSelectInteractorGroup.hpp"
#include "Oculus/Interaction/zzzz__InteractorGroup_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__BestSelectInteractorGroup_def.hpp"
#include "Oculus/Interaction/zzzz__BestSelectInteractorGroup_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorGroup_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.get_ShouldHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::get_ShouldHover)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa40f8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.get_ShouldUnhover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::get_ShouldUnhover)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa40f91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.get_ShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::get_ShouldSelect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa40f9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.get_ShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::get_ShouldUnselect)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa40fa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.Hover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::Hover)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa40fb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.TryHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup::*)(::System::Action_1<::Oculus::Interaction::IInteractor*>*)>(&::Oculus::Interaction::BestSelectInteractorGroup::TryHover)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa40fb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                        {"TryHover", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.Unhover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::Unhover)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa40fd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.Select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::Select)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa40ff24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.Unselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::Unselect)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa410184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.Preprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::Preprocess)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa4102c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::Process)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xa4104e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::Enable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa410874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::Disable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa410924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.UnsuscribeBestInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::UnsuscribeBestInteractor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa41093c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                        {"UnsuscribeBestInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.HandleBestInteractorStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::BestSelectInteractorGroup::HandleBestInteractorStateChanged)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa410a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                        {"HandleBestInteractorStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.get_HasCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::get_HasCandidate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa410a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.get_HasInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::get_HasInteractable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa410b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.get_HasSelectedInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::get_HasSelectedInteractable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa410c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.get_CandidateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::get_CandidateProperties)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa410d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup.InjectAllInteractorGroupBestSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*)>(&::Oculus::Interaction::BestSelectInteractorGroup::InjectAllInteractorGroupBestSelect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa410f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                        {"InjectAllInteractorGroupBestSelect", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa410f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::IInteractor*& Oculus::Interaction::BestSelectInteractorGroup::__cordl_internal_get__bestInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestInteractor;
}
constexpr ::Oculus::Interaction::IInteractor* const& Oculus::Interaction::BestSelectInteractorGroup::__cordl_internal_get__bestInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestInteractor;
}
constexpr void Oculus::Interaction::BestSelectInteractorGroup::__cordl_internal_set__bestInteractor(::Oculus::Interaction::IInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bestInteractor = value;
}
inline void Oculus::Interaction::BestSelectInteractorGroup::setStaticF_IsNormalAndShouldHoverPredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsNormalAndShouldHoverPredicate", ::Oculus::Interaction::BestSelectInteractorGroup*>(std::forward<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(value));
}
inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* Oculus::Interaction::BestSelectInteractorGroup::getStaticF_IsNormalAndShouldHoverPredicate()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsNormalAndShouldHoverPredicate", ::Oculus::Interaction::BestSelectInteractorGroup*>();
}
inline void Oculus::Interaction::BestSelectInteractorGroup::setStaticF_IsHoverAndShouldUnhoverPredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsHoverAndShouldUnhoverPredicate", ::Oculus::Interaction::BestSelectInteractorGroup*>(std::forward<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(value));
}
inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* Oculus::Interaction::BestSelectInteractorGroup::getStaticF_IsHoverAndShouldUnhoverPredicate()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsHoverAndShouldUnhoverPredicate", ::Oculus::Interaction::BestSelectInteractorGroup*>();
}
inline void Oculus::Interaction::BestSelectInteractorGroup::setStaticF_IsHoverAndShouldSelectPredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsHoverAndShouldSelectPredicate", ::Oculus::Interaction::BestSelectInteractorGroup*>(std::forward<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(value));
}
inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* Oculus::Interaction::BestSelectInteractorGroup::getStaticF_IsHoverAndShouldSelectPredicate()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsHoverAndShouldSelectPredicate", ::Oculus::Interaction::BestSelectInteractorGroup*>();
}
inline void Oculus::Interaction::BestSelectInteractorGroup::setStaticF_IsHover(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsHover", ::Oculus::Interaction::BestSelectInteractorGroup*>(std::forward<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(value));
}
inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* Oculus::Interaction::BestSelectInteractorGroup::getStaticF_IsHover()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsHover", ::Oculus::Interaction::BestSelectInteractorGroup*>();
}
inline bool Oculus::Interaction::BestSelectInteractorGroup::get_ShouldHover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestSelectInteractorGroup::get_ShouldUnhover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestSelectInteractorGroup::get_ShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestSelectInteractorGroup::get_ShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::Hover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestSelectInteractorGroup::TryHover(::System::Action_1<::Oculus::Interaction::IInteractor*>*  whenHover)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                        {"TryHover", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, whenHover);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::Unhover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::Select()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::Unselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::Preprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::Process()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::UnsuscribeBestInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                        {"UnsuscribeBestInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::HandleBestInteractorStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                        {"HandleBestInteractorStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateChange);
}
inline bool Oculus::Interaction::BestSelectInteractorGroup::get_HasCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestSelectInteractorGroup::get_HasInteractable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestSelectInteractorGroup::get_HasSelectedInteractable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::BestSelectInteractorGroup::get_CandidateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::InjectAllInteractorGroupBestSelect(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                        {"InjectAllInteractorGroupBestSelect", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactors);
}
inline void Oculus::Interaction::BestSelectInteractorGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::BestSelectInteractorGroup* Oculus::Interaction::BestSelectInteractorGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::BestSelectInteractorGroup*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::BestSelectInteractorGroup::BestSelectInteractorGroup()   {
}
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup___c::*)()>(&::Oculus::Interaction::BestSelectInteractorGroup___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4111b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup___c._Preprocess_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup___c::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::BestSelectInteractorGroup___c::_Preprocess_b__18_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4111bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<Preprocess>b__18_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup___c._Process_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestSelectInteractorGroup___c::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::BestSelectInteractorGroup___c::_Process_b__19_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa41125c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<Process>b__19_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup___c.__cctor_b__34_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup___c::*)(::Oculus::Interaction::IInteractor*, int32_t)>(&::Oculus::Interaction::BestSelectInteractorGroup___c::__cctor_b__34_0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4112fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<.cctor>b__34_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup___c.__cctor_b__34_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup___c::*)(::Oculus::Interaction::IInteractor*, int32_t)>(&::Oculus::Interaction::BestSelectInteractorGroup___c::__cctor_b__34_1)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa411420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<.cctor>b__34_1", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup___c.__cctor_b__34_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup___c::*)(::Oculus::Interaction::IInteractor*, int32_t)>(&::Oculus::Interaction::BestSelectInteractorGroup___c::__cctor_b__34_2)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa411548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<.cctor>b__34_2", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestSelectInteractorGroup___c.__cctor_b__34_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestSelectInteractorGroup___c::*)(::Oculus::Interaction::IInteractor*, int32_t)>(&::Oculus::Interaction::BestSelectInteractorGroup___c::__cctor_b__34_3)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa411670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<.cctor>b__34_3", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::BestSelectInteractorGroup___c::setStaticF___9(::Oculus::Interaction::BestSelectInteractorGroup___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::BestSelectInteractorGroup___c*, "<>9", ::Oculus::Interaction::BestSelectInteractorGroup___c*>(std::forward<::Oculus::Interaction::BestSelectInteractorGroup___c*>(value));
}
inline ::Oculus::Interaction::BestSelectInteractorGroup___c* Oculus::Interaction::BestSelectInteractorGroup___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::BestSelectInteractorGroup___c*, "<>9", ::Oculus::Interaction::BestSelectInteractorGroup___c*>();
}
inline void Oculus::Interaction::BestSelectInteractorGroup___c::setStaticF___9__18_0(::System::Action_1<::Oculus::Interaction::IInteractor*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::IInteractor*>*, "<>9__18_0", ::Oculus::Interaction::BestSelectInteractorGroup___c*>(std::forward<::System::Action_1<::Oculus::Interaction::IInteractor*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::IInteractor*>* Oculus::Interaction::BestSelectInteractorGroup___c::getStaticF___9__18_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::IInteractor*>*, "<>9__18_0", ::Oculus::Interaction::BestSelectInteractorGroup___c*>();
}
inline void Oculus::Interaction::BestSelectInteractorGroup___c::setStaticF___9__19_0(::System::Action_1<::Oculus::Interaction::IInteractor*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::IInteractor*>*, "<>9__19_0", ::Oculus::Interaction::BestSelectInteractorGroup___c*>(std::forward<::System::Action_1<::Oculus::Interaction::IInteractor*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::IInteractor*>* Oculus::Interaction::BestSelectInteractorGroup___c::getStaticF___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::IInteractor*>*, "<>9__19_0", ::Oculus::Interaction::BestSelectInteractorGroup___c*>();
}
inline void Oculus::Interaction::BestSelectInteractorGroup___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestSelectInteractorGroup___c::_Preprocess_b__18_0(::Oculus::Interaction::IInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<Preprocess>b__18_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::BestSelectInteractorGroup___c::_Process_b__19_0(::Oculus::Interaction::IInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<Process>b__19_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline bool Oculus::Interaction::BestSelectInteractorGroup___c::__cctor_b__34_0(::Oculus::Interaction::IInteractor*  interactor, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<.cctor>b__34_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, index);
}
inline bool Oculus::Interaction::BestSelectInteractorGroup___c::__cctor_b__34_1(::Oculus::Interaction::IInteractor*  interactor, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<.cctor>b__34_1", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, index);
}
inline bool Oculus::Interaction::BestSelectInteractorGroup___c::__cctor_b__34_2(::Oculus::Interaction::IInteractor*  interactor, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<.cctor>b__34_2", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, index);
}
inline bool Oculus::Interaction::BestSelectInteractorGroup___c::__cctor_b__34_3(::Oculus::Interaction::IInteractor*  interactor, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestSelectInteractorGroup___c*>(),
                        {"<.cctor>b__34_3", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, index);
}
inline ::Oculus::Interaction::BestSelectInteractorGroup___c* Oculus::Interaction::BestSelectInteractorGroup___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::BestSelectInteractorGroup___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::BestSelectInteractorGroup___c::BestSelectInteractorGroup___c()   {
}
