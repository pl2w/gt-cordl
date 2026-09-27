#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderTableSerializationConfig.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderTableSerializationConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderTableSerializationConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderTableSerializationConfig::*)()>(&::GlobalNamespace::BuilderTableSerializationConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b46ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTableSerializationConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_tableConfigurationKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableConfigurationKey;
}
constexpr ::StringW const& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_tableConfigurationKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableConfigurationKey;
}
constexpr void GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_set_tableConfigurationKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableConfigurationKey = value;
}
constexpr ::StringW& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_titleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr ::StringW const& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_titleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr void GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_set_titleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleDataKey = value;
}
constexpr ::StringW& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_startingMapConfigKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMapConfigKey;
}
constexpr ::StringW const& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_startingMapConfigKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMapConfigKey;
}
constexpr void GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_set_startingMapConfigKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingMapConfigKey = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_scanSlotMothershipKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanSlotMothershipKeys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_scanSlotMothershipKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanSlotMothershipKeys;
}
constexpr void GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_set_scanSlotMothershipKeys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanSlotMothershipKeys = value;
}
constexpr ::StringW& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_scanSlotDevKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanSlotDevKey;
}
constexpr ::StringW const& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_scanSlotDevKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanSlotDevKey;
}
constexpr void GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_set_scanSlotDevKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanSlotDevKey = value;
}
constexpr ::StringW& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_publishedScanMothershipKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publishedScanMothershipKey;
}
constexpr ::StringW const& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_publishedScanMothershipKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publishedScanMothershipKey;
}
constexpr void GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_set_publishedScanMothershipKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___publishedScanMothershipKey = value;
}
constexpr ::StringW& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_timeAppend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAppend;
}
constexpr ::StringW const& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_timeAppend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAppend;
}
constexpr void GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_set_timeAppend(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAppend = value;
}
constexpr ::StringW& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_playfabScanKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabScanKey;
}
constexpr ::StringW const& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_playfabScanKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabScanKey;
}
constexpr void GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_set_playfabScanKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playfabScanKey = value;
}
constexpr ::StringW& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_sharedBlocksApiBaseURL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedBlocksApiBaseURL;
}
constexpr ::StringW const& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_sharedBlocksApiBaseURL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedBlocksApiBaseURL;
}
constexpr void GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_set_sharedBlocksApiBaseURL(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedBlocksApiBaseURL = value;
}
constexpr ::StringW& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_recentVotesPrefsKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recentVotesPrefsKey;
}
constexpr ::StringW const& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_recentVotesPrefsKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recentVotesPrefsKey;
}
constexpr void GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_set_recentVotesPrefsKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recentVotesPrefsKey = value;
}
constexpr ::StringW& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_localMapsPrefsKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localMapsPrefsKey;
}
constexpr ::StringW const& GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_get_localMapsPrefsKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localMapsPrefsKey;
}
constexpr void GlobalNamespace::BuilderTableSerializationConfig::__cordl_internal_set_localMapsPrefsKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localMapsPrefsKey = value;
}
inline void GlobalNamespace::BuilderTableSerializationConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTableSerializationConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderTableSerializationConfig* GlobalNamespace::BuilderTableSerializationConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderTableSerializationConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTableSerializationConfig::BuilderTableSerializationConfig()   {
}
