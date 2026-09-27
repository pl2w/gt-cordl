#pragma once
// IWYU pragma private; include "Oculus/Interaction/IPointable.hpp"
#include "Oculus/Interaction/zzzz__IPointable_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IPointable.add_WhenPointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IPointable::*)(::System::Action_1<::Oculus::Interaction::PointerEvent>*)>(&::Oculus::Interaction::IPointable::add_WhenPointerEventRaised)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IPointable*>(),
                    {::i2c::class_of<::Oculus::Interaction::IPointable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IPointable.remove_WhenPointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IPointable::*)(::System::Action_1<::Oculus::Interaction::PointerEvent>*)>(&::Oculus::Interaction::IPointable::remove_WhenPointerEventRaised)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IPointable*>(),
                    {::i2c::class_of<::Oculus::Interaction::IPointable*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::IPointable::add_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IPointable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::IPointable::remove_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IPointable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
