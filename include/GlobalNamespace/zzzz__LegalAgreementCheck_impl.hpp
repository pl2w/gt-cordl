#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreementCheck.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementCheck_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LegalAgreementCheck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreementCheck::*)()>(&::GlobalNamespace::LegalAgreementCheck::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5fa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementCheck*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>& GlobalNamespace::LegalAgreementCheck::__cordl_internal_get_agreements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agreements;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>> const& GlobalNamespace::LegalAgreementCheck::__cordl_internal_get_agreements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agreements;
}
constexpr void GlobalNamespace::LegalAgreementCheck::__cordl_internal_set_agreements(::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agreements = value;
}
constexpr bool& GlobalNamespace::LegalAgreementCheck::__cordl_internal_get_testAgreement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testAgreement;
}
constexpr bool const& GlobalNamespace::LegalAgreementCheck::__cordl_internal_get_testAgreement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testAgreement;
}
constexpr void GlobalNamespace::LegalAgreementCheck::__cordl_internal_set_testAgreement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testAgreement = value;
}
constexpr ::UnityW<::GlobalNamespace::LegalAgreements>& GlobalNamespace::LegalAgreementCheck::__cordl_internal_get_legalAgreements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legalAgreements;
}
constexpr ::UnityW<::GlobalNamespace::LegalAgreements> const& GlobalNamespace::LegalAgreementCheck::__cordl_internal_get_legalAgreements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legalAgreements;
}
constexpr void GlobalNamespace::LegalAgreementCheck::__cordl_internal_set_legalAgreements(::UnityW<::GlobalNamespace::LegalAgreements>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legalAgreements = value;
}
inline void GlobalNamespace::LegalAgreementCheck::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementCheck*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LegalAgreementCheck* GlobalNamespace::LegalAgreementCheck::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LegalAgreementCheck*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegalAgreementCheck::LegalAgreementCheck()   {
}
