#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/WitIntentMatcher.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitResponseHandler_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__WitIntentMatcher_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitIntentMatcher.OnValidateResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::CallbackHandlers::WitIntentMatcher::*)(::Meta::WitAi::Json::WitResponseNode*, bool)>(&::Meta::WitAi::CallbackHandlers::WitIntentMatcher::OnValidateResponse)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x9e9cde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitIntentMatcher.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitIntentMatcher::*)()>(&::Meta::WitAi::CallbackHandlers::WitIntentMatcher::OnEnable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9e9d128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitIntentMatcher.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitIntentMatcher::*)()>(&::Meta::WitAi::CallbackHandlers::WitIntentMatcher::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e9d514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>(),
                    {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::WitIntentMatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::WitIntentMatcher::*)()>(&::Meta::WitAi::CallbackHandlers::WitIntentMatcher::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e9cd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::CallbackHandlers::WitIntentMatcher::__cordl_internal_get_intent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intent;
}
constexpr ::StringW const& Meta::WitAi::CallbackHandlers::WitIntentMatcher::__cordl_internal_get_intent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intent;
}
constexpr void Meta::WitAi::CallbackHandlers::WitIntentMatcher::__cordl_internal_set_intent(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intent = value;
}
constexpr float_t& Meta::WitAi::CallbackHandlers::WitIntentMatcher::__cordl_internal_get_confidenceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidenceThreshold;
}
constexpr float_t const& Meta::WitAi::CallbackHandlers::WitIntentMatcher::__cordl_internal_get_confidenceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidenceThreshold;
}
constexpr void Meta::WitAi::CallbackHandlers::WitIntentMatcher::__cordl_internal_set_confidenceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confidenceThreshold = value;
}
inline ::StringW Meta::WitAi::CallbackHandlers::WitIntentMatcher::OnValidateResponse(::Meta::WitAi::Json::WitResponseNode*  response, bool  isEarlyResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, response, isEarlyResponse);
}
inline void Meta::WitAi::CallbackHandlers::WitIntentMatcher::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::CallbackHandlers::WitIntentMatcher::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::CallbackHandlers::WitIntentMatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::WitIntentMatcher* Meta::WitAi::CallbackHandlers::WitIntentMatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::WitIntentMatcher*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::WitIntentMatcher::WitIntentMatcher()   {
}
