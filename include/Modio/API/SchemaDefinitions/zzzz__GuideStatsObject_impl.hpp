#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GuideStatsObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GuideStatsObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GuideStatsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GuideStatsObject::*)(int64_t, int64_t, int64_t, int64_t)>(&::Modio::API::SchemaDefinitions::GuideStatsObject::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fecf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GuideStatsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GuideStatsObject::_ctor(int64_t  guide_id, int64_t  visits_today, int64_t  visits_total, int64_t  comments_total)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GuideStatsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, guide_id, visits_today, visits_total, comments_total);
}
// Ctor Parameters [CppParam { name: "GuideId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VisitsToday", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VisitsTotal", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CommentsTotal", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GuideStatsObject::GuideStatsObject(int64_t  GuideId, int64_t  VisitsToday, int64_t  VisitsTotal, int64_t  CommentsTotal) noexcept  {
this->GuideId = GuideId;
this->VisitsToday = VisitsToday;
this->VisitsTotal = VisitsTotal;
this->CommentsTotal = CommentsTotal;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GuideStatsObject::GuideStatsObject()   {
}
