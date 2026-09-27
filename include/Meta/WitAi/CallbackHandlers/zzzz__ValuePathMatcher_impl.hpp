#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/ValuePathMatcher.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ComparisonMethod_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ConfidenceRange_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__MatchMethod_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__ValuePathMatcher_def.hpp"
#include "Meta/WitAi/Data/zzzz__WitValue_def.hpp"
#include "Meta/WitAi/zzzz__WitResponseReference_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::ValuePathMatcher.get_ConfidenceReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::WitResponseReference* (::Meta::WitAi::CallbackHandlers::ValuePathMatcher::*)()>(&::Meta::WitAi::CallbackHandlers::ValuePathMatcher::get_ConfidenceReference)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e9e020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>(),
                        {"get_ConfidenceReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::ValuePathMatcher.get_Reference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::WitResponseReference* (::Meta::WitAi::CallbackHandlers::ValuePathMatcher::*)()>(&::Meta::WitAi::CallbackHandlers::ValuePathMatcher::get_Reference)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e9df60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>(),
                        {"get_Reference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::ValuePathMatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::ValuePathMatcher::*)()>(&::Meta::WitAi::CallbackHandlers::ValuePathMatcher::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e9e864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::UnityW<::Meta::WitAi::Data::WitValue>& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_witValueReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witValueReference;
}
constexpr ::UnityW<::Meta::WitAi::Data::WitValue> const& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_witValueReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witValueReference;
}
constexpr void Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_set_witValueReference(::UnityW<::Meta::WitAi::Data::WitValue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___witValueReference = value;
}
constexpr bool& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_contentRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentRequired;
}
constexpr bool const& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_contentRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentRequired;
}
constexpr void Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_set_contentRequired(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contentRequired = value;
}
constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_matchMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchMethod;
}
constexpr ::Meta::WitAi::CallbackHandlers::MatchMethod const& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_matchMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchMethod;
}
constexpr void Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_set_matchMethod(::Meta::WitAi::CallbackHandlers::MatchMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchMethod = value;
}
constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_comparisonMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparisonMethod;
}
constexpr ::Meta::WitAi::CallbackHandlers::ComparisonMethod const& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_comparisonMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparisonMethod;
}
constexpr void Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_set_comparisonMethod(::Meta::WitAi::CallbackHandlers::ComparisonMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparisonMethod = value;
}
constexpr ::StringW& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_matchValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchValue;
}
constexpr ::StringW const& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_matchValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchValue;
}
constexpr void Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_set_matchValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchValue = value;
}
constexpr double_t& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_floatingPointComparisonTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointComparisonTolerance;
}
constexpr double_t const& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_floatingPointComparisonTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointComparisonTolerance;
}
constexpr void Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_set_floatingPointComparisonTolerance(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatingPointComparisonTolerance = value;
}
constexpr bool& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_allowConfidenceOverlap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowConfidenceOverlap;
}
constexpr bool const& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_allowConfidenceOverlap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowConfidenceOverlap;
}
constexpr void Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_set_allowConfidenceOverlap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowConfidenceOverlap = value;
}
constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_confidenceRanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidenceRanges;
}
constexpr ::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*> const& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_confidenceRanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidenceRanges;
}
constexpr void Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_set_confidenceRanges(::ArrayW<::Meta::WitAi::CallbackHandlers::ConfidenceRange*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confidenceRanges = value;
}
constexpr ::Meta::WitAi::WitResponseReference*& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_pathReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathReference;
}
constexpr ::Meta::WitAi::WitResponseReference* const& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_pathReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathReference;
}
constexpr void Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_set_pathReference(::Meta::WitAi::WitResponseReference*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathReference = value;
}
constexpr ::Meta::WitAi::WitResponseReference*& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_confidencePathReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidencePathReference;
}
constexpr ::Meta::WitAi::WitResponseReference* const& Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_get_confidencePathReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidencePathReference;
}
constexpr void Meta::WitAi::CallbackHandlers::ValuePathMatcher::__cordl_internal_set_confidencePathReference(::Meta::WitAi::WitResponseReference*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confidencePathReference = value;
}
inline ::Meta::WitAi::WitResponseReference* Meta::WitAi::CallbackHandlers::ValuePathMatcher::get_ConfidenceReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>(),
                        {"get_ConfidenceReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::WitResponseReference*>(this, ___internal_method);
}
inline ::Meta::WitAi::WitResponseReference* Meta::WitAi::CallbackHandlers::ValuePathMatcher::get_Reference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>(),
                        {"get_Reference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::WitResponseReference*>(this, ___internal_method);
}
inline void Meta::WitAi::CallbackHandlers::ValuePathMatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::ValuePathMatcher* Meta::WitAi::CallbackHandlers::ValuePathMatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::ValuePathMatcher*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::ValuePathMatcher::ValuePathMatcher()   {
}
