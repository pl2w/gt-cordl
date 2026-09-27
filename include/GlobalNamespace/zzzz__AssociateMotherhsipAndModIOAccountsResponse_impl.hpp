#pragma once
// IWYU pragma private; include "GlobalNamespace/AssociateMotherhsipAndModIOAccountsResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AssociateMotherhsipAndModIOAccountsResponse_def.hpp"
#include "GlobalNamespace/zzzz__ModIOMothershipAssociation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse::*)()>(&::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59f1868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ModIOMothershipAssociation*>*& GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse::__cordl_internal_get_Results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Results;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ModIOMothershipAssociation*>* const& GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse::__cordl_internal_get_Results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Results;
}
constexpr void GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse::__cordl_internal_set_Results(::System::Collections::Generic::List_1<::GlobalNamespace::ModIOMothershipAssociation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Results = value;
}
inline void GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse* GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse::AssociateMotherhsipAndModIOAccountsResponse()   {
}
