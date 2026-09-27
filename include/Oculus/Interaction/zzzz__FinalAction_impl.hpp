#pragma once
// IWYU pragma private; include "Oculus/Interaction/FinalAction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__FinalAction_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::FinalAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FinalAction::*)(::System::Action*)>(&::Oculus::Interaction::FinalAction::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa48ba00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FinalAction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FinalAction.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FinalAction::*)()>(&::Oculus::Interaction::FinalAction::Cancel)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa48ba30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FinalAction*>(),
                        {"Cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FinalAction.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FinalAction::*)()>(&::Oculus::Interaction::FinalAction::Finalize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa48ba3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::FinalAction*>(),
                    {::i2c::class_of<::Oculus::Interaction::FinalAction*>(), 1}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Oculus::Interaction::FinalAction::__cordl_internal_get__action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____action;
}
constexpr ::System::Action* const& Oculus::Interaction::FinalAction::__cordl_internal_get__action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____action;
}
constexpr void Oculus::Interaction::FinalAction::__cordl_internal_set__action(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____action = value;
}
constexpr bool& Oculus::Interaction::FinalAction::__cordl_internal_get__cancelled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelled;
}
constexpr bool const& Oculus::Interaction::FinalAction::__cordl_internal_get__cancelled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelled;
}
constexpr void Oculus::Interaction::FinalAction::__cordl_internal_set__cancelled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancelled = value;
}
inline void Oculus::Interaction::FinalAction::_ctor(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FinalAction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void Oculus::Interaction::FinalAction::Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FinalAction*>(),
                        {"Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::FinalAction::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::FinalAction*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::FinalAction* Oculus::Interaction::FinalAction::New_ctor(::System::Action*  action)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::FinalAction*>(action));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::FinalAction::FinalAction()   {
}
