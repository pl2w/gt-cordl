#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/EventSystemInstantiator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Utilities/zzzz__EventSystemInstantiator_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Utilities::EventSystemInstantiator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::EventSystemInstantiator::*)()>(&::Meta::WitAi::Utilities::EventSystemInstantiator::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e84b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::EventSystemInstantiator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Utilities::EventSystemInstantiator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::EventSystemInstantiator::*)()>(&::Meta::WitAi::Utilities::EventSystemInstantiator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e84bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::EventSystemInstantiator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Utilities::EventSystemInstantiator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::EventSystemInstantiator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Utilities::EventSystemInstantiator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::EventSystemInstantiator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Utilities::EventSystemInstantiator* Meta::WitAi::Utilities::EventSystemInstantiator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Utilities::EventSystemInstantiator*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Utilities::EventSystemInstantiator::EventSystemInstantiator()   {
}
