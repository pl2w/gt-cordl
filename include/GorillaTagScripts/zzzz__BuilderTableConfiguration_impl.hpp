#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTableConfiguration.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTableConfiguration_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableConfiguration::*)()>(&::GorillaTagScripts::BuilderTableConfiguration::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ba940c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::ArrayW<int32_t>& GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_get_TableResourceLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TableResourceLimits;
}
constexpr ::ArrayW<int32_t> const& GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_get_TableResourceLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TableResourceLimits;
}
constexpr void GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_set_TableResourceLimits(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TableResourceLimits = value;
}
constexpr ::ArrayW<int32_t>& GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_get_PlotResourceLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlotResourceLimits;
}
constexpr ::ArrayW<int32_t> const& GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_get_PlotResourceLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlotResourceLimits;
}
constexpr void GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_set_PlotResourceLimits(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlotResourceLimits = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_get_DroppedPieceLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DroppedPieceLimit;
}
constexpr int32_t const& GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_get_DroppedPieceLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DroppedPieceLimit;
}
constexpr void GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_set_DroppedPieceLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DroppedPieceLimit = value;
}
constexpr ::StringW& GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_get_updateCountdownDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateCountdownDate;
}
constexpr ::StringW const& GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_get_updateCountdownDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateCountdownDate;
}
constexpr void GorillaTagScripts::BuilderTableConfiguration::__cordl_internal_set_updateCountdownDate(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateCountdownDate = value;
}
inline void GorillaTagScripts::BuilderTableConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderTableConfiguration* GorillaTagScripts::BuilderTableConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderTableConfiguration*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderTableConfiguration::BuilderTableConfiguration()   {
}
