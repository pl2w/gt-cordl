#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreementTextAsset.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_PostAcceptAction_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_PostAcceptAction_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LegalAgreementTextAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreementTextAsset::*)()>(&::GlobalNamespace::LegalAgreementTextAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a63634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementTextAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title;
}
constexpr ::StringW const& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title;
}
constexpr void GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_set_title(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___title = value;
}
constexpr ::StringW& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_playFabKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabKey;
}
constexpr ::StringW const& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_playFabKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabKey;
}
constexpr void GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_set_playFabKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabKey = value;
}
constexpr ::StringW& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_latestVersionKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestVersionKey;
}
constexpr ::StringW const& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_latestVersionKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestVersionKey;
}
constexpr void GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_set_latestVersionKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latestVersionKey = value;
}
constexpr ::StringW& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_errorMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorMessage;
}
constexpr ::StringW const& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_errorMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorMessage;
}
constexpr void GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_set_errorMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorMessage = value;
}
constexpr bool& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_optional()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optional;
}
constexpr bool const& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_optional() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optional;
}
constexpr void GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_set_optional(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optional = value;
}
constexpr ::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_optInAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optInAction;
}
constexpr ::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction const& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_optInAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optInAction;
}
constexpr void GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_set_optInAction(::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optInAction = value;
}
constexpr ::StringW& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_confirmString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmString;
}
constexpr ::StringW const& GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_get_confirmString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confirmString;
}
constexpr void GlobalNamespace::LegalAgreementTextAsset::__cordl_internal_set_confirmString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confirmString = value;
}
inline void GlobalNamespace::LegalAgreementTextAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementTextAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LegalAgreementTextAsset* GlobalNamespace::LegalAgreementTextAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LegalAgreementTextAsset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegalAgreementTextAsset::LegalAgreementTextAsset()   {
}
