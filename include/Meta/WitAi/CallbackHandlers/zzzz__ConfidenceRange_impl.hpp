#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/ConfidenceRange.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ConfidenceRange_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::ConfidenceRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::ConfidenceRange::*)()>(&::Meta::WitAi::CallbackHandlers::ConfidenceRange::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e9c820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_get_minConfidence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minConfidence;
}
constexpr float_t const& Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_get_minConfidence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minConfidence;
}
constexpr void Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_set_minConfidence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minConfidence = value;
}
constexpr float_t& Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_get_maxConfidence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConfidence;
}
constexpr float_t const& Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_get_maxConfidence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConfidence;
}
constexpr void Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_set_maxConfidence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxConfidence = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_get_onWithinConfidenceRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onWithinConfidenceRange;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_get_onWithinConfidenceRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onWithinConfidenceRange;
}
constexpr void Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_set_onWithinConfidenceRange(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onWithinConfidenceRange = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_get_onOutsideConfidenceRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOutsideConfidenceRange;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_get_onOutsideConfidenceRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOutsideConfidenceRange;
}
constexpr void Meta::WitAi::CallbackHandlers::ConfidenceRange::__cordl_internal_set_onOutsideConfidenceRange(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onOutsideConfidenceRange = value;
}
inline void Meta::WitAi::CallbackHandlers::ConfidenceRange::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::ConfidenceRange* Meta::WitAi::CallbackHandlers::ConfidenceRange::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::ConfidenceRange::ConfidenceRange()   {
}
