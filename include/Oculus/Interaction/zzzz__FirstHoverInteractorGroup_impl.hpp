#pragma once
// IWYU pragma private; include "Oculus/Interaction/FirstHoverInteractorGroup.hpp"
#include "Oculus/Interaction/zzzz__InteractorGroup_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__FirstHoverInteractorGroup_def.hpp"
#include "Oculus/Interaction/zzzz__FirstHoverInteractorGroup_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorGroup_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.get_ShouldHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::get_ShouldHover)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa412240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.get_ShouldUnhover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::get_ShouldUnhover)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4122b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.get_ShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::get_ShouldSelect)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa412374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.get_ShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::get_ShouldUnselect)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa412430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.Hover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::Hover)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4124ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.TryHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FirstHoverInteractorGroup::*)(int32_t)>(&::Oculus::Interaction::FirstHoverInteractorGroup::TryHover)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa412518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {"TryHover", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.HoverAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)(int32_t)>(&::Oculus::Interaction::FirstHoverInteractorGroup::HoverAtIndex)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa4125b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {"HoverAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.Unhover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::Unhover)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa4128d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.Select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::Select)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa412a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.Unselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::Unselect)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa412b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.Preprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::Preprocess)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa412c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.HandleBestInteractorStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::FirstHoverInteractorGroup::HandleBestInteractorStateChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa412e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {"HandleBestInteractorStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::Enable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa412e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::Disable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa412f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.UnsuscribeBestInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::UnsuscribeBestInteractor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4127c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {"UnsuscribeBestInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.get_HasCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::get_HasCandidate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa412f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.get_HasInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::get_HasInteractable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa41302c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.get_HasSelectedInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::get_HasSelectedInteractable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4130dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.get_CandidateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::get_CandidateProperties)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa41318c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup.InjectAllInteractorGroupFirstHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*)>(&::Oculus::Interaction::FirstHoverInteractorGroup::InjectAllInteractorGroupFirstHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4133b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {"InjectAllInteractorGroupFirstHover", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4133bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::IInteractor*& Oculus::Interaction::FirstHoverInteractorGroup::__cordl_internal_get__bestInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestInteractor;
}
constexpr ::Oculus::Interaction::IInteractor* const& Oculus::Interaction::FirstHoverInteractorGroup::__cordl_internal_get__bestInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestInteractor;
}
constexpr void Oculus::Interaction::FirstHoverInteractorGroup::__cordl_internal_set__bestInteractor(::Oculus::Interaction::IInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bestInteractor = value;
}
constexpr int32_t& Oculus::Interaction::FirstHoverInteractorGroup::__cordl_internal_get__bestInteractorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestInteractorIndex;
}
constexpr int32_t const& Oculus::Interaction::FirstHoverInteractorGroup::__cordl_internal_get__bestInteractorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestInteractorIndex;
}
constexpr void Oculus::Interaction::FirstHoverInteractorGroup::__cordl_internal_set__bestInteractorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bestInteractorIndex = value;
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::setStaticF_IsNormalAndShouldHoverPredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsNormalAndShouldHoverPredicate", ::Oculus::Interaction::FirstHoverInteractorGroup*>(std::forward<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(value));
}
inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* Oculus::Interaction::FirstHoverInteractorGroup::getStaticF_IsNormalAndShouldHoverPredicate()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsNormalAndShouldHoverPredicate", ::Oculus::Interaction::FirstHoverInteractorGroup*>();
}
inline bool Oculus::Interaction::FirstHoverInteractorGroup::get_ShouldHover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::FirstHoverInteractorGroup::get_ShouldUnhover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::FirstHoverInteractorGroup::get_ShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::FirstHoverInteractorGroup::get_ShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::Hover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::FirstHoverInteractorGroup::TryHover(int32_t  skipIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {"TryHover", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, skipIndex);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::HoverAtIndex(int32_t  interactorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {"HoverAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorIndex);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::Unhover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::Select()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::Unselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::Preprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::HandleBestInteractorStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {"HandleBestInteractorStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateChange);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::UnsuscribeBestInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {"UnsuscribeBestInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::FirstHoverInteractorGroup::get_HasCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::FirstHoverInteractorGroup::get_HasInteractable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::FirstHoverInteractorGroup::get_HasSelectedInteractable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::FirstHoverInteractorGroup::get_CandidateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::InjectAllInteractorGroupFirstHover(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {"InjectAllInteractorGroupFirstHover", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactors);
}
inline void Oculus::Interaction::FirstHoverInteractorGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::FirstHoverInteractorGroup* Oculus::Interaction::FirstHoverInteractorGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::FirstHoverInteractorGroup*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::FirstHoverInteractorGroup::FirstHoverInteractorGroup()   {
}
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FirstHoverInteractorGroup___c::*)()>(&::Oculus::Interaction::FirstHoverInteractorGroup___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41354c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FirstHoverInteractorGroup___c.__cctor_b__32_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FirstHoverInteractorGroup___c::*)(::Oculus::Interaction::IInteractor*, int32_t)>(&::Oculus::Interaction::FirstHoverInteractorGroup___c::__cctor_b__32_0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa413554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup___c*>(),
                        {"<.cctor>b__32_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::FirstHoverInteractorGroup___c::setStaticF___9(::Oculus::Interaction::FirstHoverInteractorGroup___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::FirstHoverInteractorGroup___c*, "<>9", ::Oculus::Interaction::FirstHoverInteractorGroup___c*>(std::forward<::Oculus::Interaction::FirstHoverInteractorGroup___c*>(value));
}
inline ::Oculus::Interaction::FirstHoverInteractorGroup___c* Oculus::Interaction::FirstHoverInteractorGroup___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::FirstHoverInteractorGroup___c*, "<>9", ::Oculus::Interaction::FirstHoverInteractorGroup___c*>();
}
inline void Oculus::Interaction::FirstHoverInteractorGroup___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::FirstHoverInteractorGroup___c::__cctor_b__32_0(::Oculus::Interaction::IInteractor*  interactor, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FirstHoverInteractorGroup___c*>(),
                        {"<.cctor>b__32_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, index);
}
inline ::Oculus::Interaction::FirstHoverInteractorGroup___c* Oculus::Interaction::FirstHoverInteractorGroup___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::FirstHoverInteractorGroup___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::FirstHoverInteractorGroup___c::FirstHoverInteractorGroup___c()   {
}
