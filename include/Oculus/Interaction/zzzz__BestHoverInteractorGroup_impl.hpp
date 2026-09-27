#pragma once
// IWYU pragma private; include "Oculus/Interaction/BestHoverInteractorGroup.hpp"
#include "Oculus/Interaction/zzzz__InteractorGroup_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__BestHoverInteractorGroup_def.hpp"
#include "Oculus/Interaction/zzzz__BestHoverInteractorGroup_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorGroup_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.get_ShouldHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::get_ShouldHover)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa40e2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.get_ShouldUnhover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::get_ShouldUnhover)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa40e334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.get_ShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::get_ShouldSelect)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa40e3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.get_ShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::get_ShouldUnselect)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa40e4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.Hover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::Hover)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa40e568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.TryHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestHoverInteractorGroup::*)(int32_t)>(&::Oculus::Interaction::BestHoverInteractorGroup::TryHover)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa40e594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"TryHover", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.TryReplaceHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::TryReplaceHover)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa40e8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"TryReplaceHover", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.HoverAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)(int32_t)>(&::Oculus::Interaction::BestHoverInteractorGroup::HoverAtIndex)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa40e6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"HoverAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.Unhover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::Unhover)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa40ea50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.Select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::Select)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa40eb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.Unselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::Unselect)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa40ec5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.Preprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::Preprocess)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa40eda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::Process)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa40ef98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.HandleBestInteractorStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::BestHoverInteractorGroup::HandleBestInteractorStateChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa40f070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"HandleBestInteractorStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::Enable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa40f0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::Disable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa40f154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.UnsuscribeBestInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::UnsuscribeBestInteractor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa40e940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"UnsuscribeBestInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.get_HasCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::get_HasCandidate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa40f16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.get_HasInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::get_HasInteractable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa40f258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.get_HasSelectedInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::get_HasSelectedInteractable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa40f308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.get_CandidateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::get_CandidateProperties)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa40f3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                    {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup.InjectAllInteractorGroupBestHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*)>(&::Oculus::Interaction::BestHoverInteractorGroup::InjectAllInteractorGroupBestHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40f5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"InjectAllInteractorGroupBestHover", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa40f5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::IInteractor*& Oculus::Interaction::BestHoverInteractorGroup::__cordl_internal_get__bestInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestInteractor;
}
constexpr ::Oculus::Interaction::IInteractor* const& Oculus::Interaction::BestHoverInteractorGroup::__cordl_internal_get__bestInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestInteractor;
}
constexpr void Oculus::Interaction::BestHoverInteractorGroup::__cordl_internal_set__bestInteractor(::Oculus::Interaction::IInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bestInteractor = value;
}
constexpr int32_t& Oculus::Interaction::BestHoverInteractorGroup::__cordl_internal_get__bestInteractorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestInteractorIndex;
}
constexpr int32_t const& Oculus::Interaction::BestHoverInteractorGroup::__cordl_internal_get__bestInteractorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bestInteractorIndex;
}
constexpr void Oculus::Interaction::BestHoverInteractorGroup::__cordl_internal_set__bestInteractorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bestInteractorIndex = value;
}
inline void Oculus::Interaction::BestHoverInteractorGroup::setStaticF_IsNormalAndShouldHoverPredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsNormalAndShouldHoverPredicate", ::Oculus::Interaction::BestHoverInteractorGroup*>(std::forward<::Oculus::Interaction::InteractorGroup_InteractorPredicate*>(value));
}
inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* Oculus::Interaction::BestHoverInteractorGroup::getStaticF_IsNormalAndShouldHoverPredicate()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "IsNormalAndShouldHoverPredicate", ::Oculus::Interaction::BestHoverInteractorGroup*>();
}
inline bool Oculus::Interaction::BestHoverInteractorGroup::get_ShouldHover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestHoverInteractorGroup::get_ShouldUnhover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestHoverInteractorGroup::get_ShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestHoverInteractorGroup::get_ShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::Hover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestHoverInteractorGroup::TryHover(int32_t  betterThan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"TryHover", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, betterThan);
}
inline bool Oculus::Interaction::BestHoverInteractorGroup::TryReplaceHover()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"TryReplaceHover", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::HoverAtIndex(int32_t  interactorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"HoverAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorIndex);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::Unhover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::Select()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::Unselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::Preprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::Process()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::HandleBestInteractorStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"HandleBestInteractorStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateChange);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::UnsuscribeBestInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"UnsuscribeBestInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestHoverInteractorGroup::get_HasCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestHoverInteractorGroup::get_HasInteractable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestHoverInteractorGroup::get_HasSelectedInteractable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::BestHoverInteractorGroup::get_CandidateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::InjectAllInteractorGroupBestHover(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {"InjectAllInteractorGroupBestHover", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactors);
}
inline void Oculus::Interaction::BestHoverInteractorGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::BestHoverInteractorGroup* Oculus::Interaction::BestHoverInteractorGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::BestHoverInteractorGroup*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::BestHoverInteractorGroup::BestHoverInteractorGroup()   {
}
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BestHoverInteractorGroup___c::*)()>(&::Oculus::Interaction::BestHoverInteractorGroup___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40f778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BestHoverInteractorGroup___c.__cctor_b__34_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::BestHoverInteractorGroup___c::*)(::Oculus::Interaction::IInteractor*, int32_t)>(&::Oculus::Interaction::BestHoverInteractorGroup___c::__cctor_b__34_0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa40f780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup___c*>(),
                        {"<.cctor>b__34_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::BestHoverInteractorGroup___c::setStaticF___9(::Oculus::Interaction::BestHoverInteractorGroup___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::BestHoverInteractorGroup___c*, "<>9", ::Oculus::Interaction::BestHoverInteractorGroup___c*>(std::forward<::Oculus::Interaction::BestHoverInteractorGroup___c*>(value));
}
inline ::Oculus::Interaction::BestHoverInteractorGroup___c* Oculus::Interaction::BestHoverInteractorGroup___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::BestHoverInteractorGroup___c*, "<>9", ::Oculus::Interaction::BestHoverInteractorGroup___c*>();
}
inline void Oculus::Interaction::BestHoverInteractorGroup___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::BestHoverInteractorGroup___c::__cctor_b__34_0(::Oculus::Interaction::IInteractor*  interactor, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BestHoverInteractorGroup___c*>(),
                        {"<.cctor>b__34_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, index);
}
inline ::Oculus::Interaction::BestHoverInteractorGroup___c* Oculus::Interaction::BestHoverInteractorGroup___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::BestHoverInteractorGroup___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::BestHoverInteractorGroup___c::BestHoverInteractorGroup___c()   {
}
