#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/EventRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Events/zzzz__EventRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::EventRegistry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::EventRegistry::*)()>(&::Meta::WitAi::Events::EventRegistry::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e94ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::EventRegistry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Meta::WitAi::Events::EventRegistry::__cordl_internal_get__overriddenCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overriddenCallbacks;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& Meta::WitAi::Events::EventRegistry::__cordl_internal_get__overriddenCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overriddenCallbacks;
}
constexpr void Meta::WitAi::Events::EventRegistry::__cordl_internal_set__overriddenCallbacks(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overriddenCallbacks = value;
}
inline void Meta::WitAi::Events::EventRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::EventRegistry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::EventRegistry* Meta::WitAi::Events::EventRegistry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::EventRegistry*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::EventRegistry::EventRegistry()   {
}
