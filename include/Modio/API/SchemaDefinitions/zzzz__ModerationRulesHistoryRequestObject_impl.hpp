#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModerationRulesHistoryRequestObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModerationRulesHistoryRequestObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModerationRulesHistoryRequestObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ModerationRulesHistoryRequestObject::*)(::StringW)>(&::Modio::API::SchemaDefinitions::ModerationRulesHistoryRequestObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fed4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModerationRulesHistoryRequestObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ModerationRulesHistoryRequestObject::_ctor(::StringW  timeframe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModerationRulesHistoryRequestObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, timeframe);
}
// Ctor Parameters [CppParam { name: "Timeframe", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ModerationRulesHistoryRequestObject::ModerationRulesHistoryRequestObject(::StringW  Timeframe) noexcept  {
this->Timeframe = Timeframe;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ModerationRulesHistoryRequestObject::ModerationRulesHistoryRequestObject()   {
}
