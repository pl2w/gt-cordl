#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/LastKnownGoodHand.hpp"
#include "Oculus/Interaction/Input/zzzz__Hand_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__LastKnownGoodHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::LastKnownGoodHand.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::LastKnownGoodHand::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&::Oculus::Interaction::Input::LastKnownGoodHand::Apply)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa508668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::LastKnownGoodHand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::LastKnownGoodHand*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::LastKnownGoodHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::LastKnownGoodHand::*)()>(&::Oculus::Interaction::Input::LastKnownGoodHand::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa50886c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::LastKnownGoodHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandDataAsset*& Oculus::Interaction::Input::LastKnownGoodHand::__cordl_internal_get__lastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastState;
}
constexpr ::Oculus::Interaction::Input::HandDataAsset* const& Oculus::Interaction::Input::LastKnownGoodHand::__cordl_internal_get__lastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastState;
}
constexpr void Oculus::Interaction::Input::LastKnownGoodHand::__cordl_internal_set__lastState(::Oculus::Interaction::Input::HandDataAsset*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastState = value;
}
inline void Oculus::Interaction::Input::LastKnownGoodHand::Apply(::Oculus::Interaction::Input::HandDataAsset*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::LastKnownGoodHand*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Input::LastKnownGoodHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::LastKnownGoodHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::LastKnownGoodHand* Oculus::Interaction::Input::LastKnownGoodHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::LastKnownGoodHand*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::LastKnownGoodHand::LastKnownGoodHand()   {
}
