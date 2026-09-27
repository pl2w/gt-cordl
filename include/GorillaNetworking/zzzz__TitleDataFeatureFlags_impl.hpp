#pragma once
// IWYU pragma private; include "GorillaNetworking/TitleDataFeatureFlags.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__TitleDataFeatureFlags_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::TitleDataFeatureFlags.get_ready
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::TitleDataFeatureFlags::*)()>(&::GorillaNetworking::TitleDataFeatureFlags::get_ready)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"get_ready", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::TitleDataFeatureFlags.set_ready
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::TitleDataFeatureFlags::*)(bool)>(&::GorillaNetworking::TitleDataFeatureFlags::set_ready)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"set_ready", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::TitleDataFeatureFlags.FetchFeatureFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::TitleDataFeatureFlags::*)()>(&::GorillaNetworking::TitleDataFeatureFlags::FetchFeatureFlags)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c8c368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"FetchFeatureFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::TitleDataFeatureFlags.IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::TitleDataFeatureFlags::*)(::StringW)>(&::GorillaNetworking::TitleDataFeatureFlags::IsEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c8e754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"IsEnabled", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::TitleDataFeatureFlags.IsEnabledForUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::TitleDataFeatureFlags::*)(::StringW, ::StringW)>(&::GorillaNetworking::TitleDataFeatureFlags::IsEnabledForUser)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5c8eb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"IsEnabledForUser", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::TitleDataFeatureFlags.IsEnabledForAnyone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::TitleDataFeatureFlags::*)(::StringW)>(&::GorillaNetworking::TitleDataFeatureFlags::IsEnabledForAnyone)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c8ed5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"IsEnabledForAnyone", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::TitleDataFeatureFlags._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::TitleDataFeatureFlags::*)()>(&::GorillaNetworking::TitleDataFeatureFlags::_ctor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5c8f050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::TitleDataFeatureFlags._FetchFeatureFlags_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::TitleDataFeatureFlags::*)(::StringW)>(&::GorillaNetworking::TitleDataFeatureFlags::_FetchFeatureFlags_b__8_0)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5c906b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"<FetchFeatureFlags>b__8_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::TitleDataFeatureFlags._FetchFeatureFlags_b__8_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::TitleDataFeatureFlags::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::TitleDataFeatureFlags::_FetchFeatureFlags_b__8_1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c909a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"<FetchFeatureFlags>b__8_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get_TitleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleDataKey;
}
constexpr ::StringW const& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get_TitleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleDataKey;
}
constexpr void GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_set_TitleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleDataKey = value;
}
constexpr bool& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get__ready_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ready_k__BackingField;
}
constexpr bool const& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get__ready_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ready_k__BackingField;
}
constexpr void GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_set__ready_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ready_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>*& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get_defaults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaults;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* const& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get_defaults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaults;
}
constexpr void GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_set_defaults(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaults = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get_flagValueByName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagValueByName;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get_flagValueByName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagValueByName;
}
constexpr void GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_set_flagValueByName(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flagValueByName = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get_flagValueByUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagValueByUser;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>* const& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get_flagValueByUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagValueByUser;
}
constexpr void GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_set_flagValueByUser(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flagValueByUser = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::StringW,::StringW>>*& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get_logSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logSent;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::StringW,::StringW>>* const& GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_get_logSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logSent;
}
constexpr void GorillaNetworking::TitleDataFeatureFlags::__cordl_internal_set_logSent(::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::StringW,::StringW>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logSent = value;
}
inline bool GorillaNetworking::TitleDataFeatureFlags::get_ready()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"get_ready", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::TitleDataFeatureFlags::set_ready(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"set_ready", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::TitleDataFeatureFlags::FetchFeatureFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"FetchFeatureFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::TitleDataFeatureFlags::IsEnabled(::StringW  flagName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"IsEnabled", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flagName);
}
inline bool GorillaNetworking::TitleDataFeatureFlags::IsEnabledForUser(::StringW  flagName, ::StringW  playFabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"IsEnabledForUser", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flagName, playFabId);
}
inline bool GorillaNetworking::TitleDataFeatureFlags::IsEnabledForAnyone(::StringW  flagName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"IsEnabledForAnyone", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flagName);
}
inline void GorillaNetworking::TitleDataFeatureFlags::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::TitleDataFeatureFlags::_FetchFeatureFlags_b__8_0(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"<FetchFeatureFlags>b__8_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void GorillaNetworking::TitleDataFeatureFlags::_FetchFeatureFlags_b__8_1(::PlayFab::PlayFabError*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::TitleDataFeatureFlags*>(),
                        {"<FetchFeatureFlags>b__8_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::GorillaNetworking::TitleDataFeatureFlags* GorillaNetworking::TitleDataFeatureFlags::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::TitleDataFeatureFlags*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::TitleDataFeatureFlags::TitleDataFeatureFlags()   {
}
