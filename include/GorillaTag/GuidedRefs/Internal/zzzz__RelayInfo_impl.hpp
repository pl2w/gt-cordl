#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/Internal/RelayInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/GuidedRefs/Internal/zzzz__RelayInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefTargetMono_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__RegisteredReceiverFieldInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::Internal::RelayInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::Internal::RelayInfo::*)()>(&::GorillaTag::GuidedRefs::Internal::RelayInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d450ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::Internal::RelayInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*& GorillaTag::GuidedRefs::Internal::RelayInfo::__cordl_internal_get_targetMono()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMono;
}
constexpr ::GorillaTag::GuidedRefs::IGuidedRefTargetMono* const& GorillaTag::GuidedRefs::Internal::RelayInfo::__cordl_internal_get_targetMono() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMono;
}
constexpr void GorillaTag::GuidedRefs::Internal::RelayInfo::__cordl_internal_set_targetMono(::GorillaTag::GuidedRefs::IGuidedRefTargetMono*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetMono = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*& GorillaTag::GuidedRefs::Internal::RelayInfo::__cordl_internal_get_registeredFields()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registeredFields;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>* const& GorillaTag::GuidedRefs::Internal::RelayInfo::__cordl_internal_get_registeredFields() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registeredFields;
}
constexpr void GorillaTag::GuidedRefs::Internal::RelayInfo::__cordl_internal_set_registeredFields(::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registeredFields = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*& GorillaTag::GuidedRefs::Internal::RelayInfo::__cordl_internal_get_resolvedFields()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolvedFields;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>* const& GorillaTag::GuidedRefs::Internal::RelayInfo::__cordl_internal_get_resolvedFields() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolvedFields;
}
constexpr void GorillaTag::GuidedRefs::Internal::RelayInfo::__cordl_internal_set_resolvedFields(::System::Collections::Generic::List_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolvedFields = value;
}
inline void GorillaTag::GuidedRefs::Internal::RelayInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::Internal::RelayInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::GuidedRefs::Internal::RelayInfo* GorillaTag::GuidedRefs::Internal::RelayInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GuidedRefs::Internal::RelayInfo*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::GuidedRefs::Internal::RelayInfo::RelayInfo()   {
}
