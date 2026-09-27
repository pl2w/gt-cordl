#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/SimulatedResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Data/zzzz__SimulatedResponse_def.hpp"
#include "Meta/WitAi/Data/zzzz__SimulatedResponseMessage_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::SimulatedResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::SimulatedResponse::*)()>(&::Meta::WitAi::Data::SimulatedResponse::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e47960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::SimulatedResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Data::SimulatedResponse::__cordl_internal_get_code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr int32_t const& Meta::WitAi::Data::SimulatedResponse::__cordl_internal_get_code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr void Meta::WitAi::Data::SimulatedResponse::__cordl_internal_set_code(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___code = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::SimulatedResponseMessage*>*& Meta::WitAi::Data::SimulatedResponse::__cordl_internal_get_messages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messages;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::SimulatedResponseMessage*>* const& Meta::WitAi::Data::SimulatedResponse::__cordl_internal_get_messages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messages;
}
constexpr void Meta::WitAi::Data::SimulatedResponse::__cordl_internal_set_messages(::System::Collections::Generic::List_1<::Meta::WitAi::Data::SimulatedResponseMessage*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___messages = value;
}
constexpr ::StringW& Meta::WitAi::Data::SimulatedResponse::__cordl_internal_get_responseDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseDescription;
}
constexpr ::StringW const& Meta::WitAi::Data::SimulatedResponse::__cordl_internal_get_responseDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseDescription;
}
constexpr void Meta::WitAi::Data::SimulatedResponse::__cordl_internal_set_responseDescription(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseDescription = value;
}
inline void Meta::WitAi::Data::SimulatedResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::SimulatedResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::SimulatedResponse* Meta::WitAi::Data::SimulatedResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::SimulatedResponse*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::SimulatedResponse::SimulatedResponse()   {
}
