#pragma once
// IWYU pragma private; include "Photon/Pun/ServerSettings.hpp"
#include "Photon/Pun/zzzz__PunLogLevel_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Photon/Pun/zzzz__ServerSettings_def.hpp"
#include "Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Photon::Pun::ServerSettings.UseCloud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::ServerSettings::*)(::StringW, ::StringW)>(&::Photon::Pun::ServerSettings::UseCloud)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa72cc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::ServerSettings*>(),
                        {"UseCloud", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::ServerSettings.IsAppId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Photon::Pun::ServerSettings::IsAppId)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa72cca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::ServerSettings*>(),
                        {"IsAppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::ServerSettings.get_BestRegionSummaryInPreferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Pun::ServerSettings::get_BestRegionSummaryInPreferences)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa72cd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::ServerSettings*>(),
                        {"get_BestRegionSummaryInPreferences", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::ServerSettings.ResetBestRegionCodeInPreferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::ServerSettings::ResetBestRegionCodeInPreferences)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa72cdbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::ServerSettings*>(),
                        {"ResetBestRegionCodeInPreferences", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::ServerSettings.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Pun::ServerSettings::*)()>(&::Photon::Pun::ServerSettings::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa72ce0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::ServerSettings*>(),
                    {::i2c::class_of<::Photon::Pun::ServerSettings*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::ServerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::ServerSettings::*)()>(&::Photon::Pun::ServerSettings::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa72ce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::ServerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::AppSettings*& Photon::Pun::ServerSettings::__cordl_internal_get_AppSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppSettings;
}
constexpr ::Photon::Realtime::AppSettings* const& Photon::Pun::ServerSettings::__cordl_internal_get_AppSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppSettings;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_AppSettings(::Photon::Realtime::AppSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppSettings = value;
}
constexpr ::StringW& Photon::Pun::ServerSettings::__cordl_internal_get_DevRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DevRegion;
}
constexpr ::StringW const& Photon::Pun::ServerSettings::__cordl_internal_get_DevRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DevRegion;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_DevRegion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DevRegion = value;
}
constexpr ::Photon::Pun::PunLogLevel& Photon::Pun::ServerSettings::__cordl_internal_get_PunLogging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PunLogging;
}
constexpr ::Photon::Pun::PunLogLevel const& Photon::Pun::ServerSettings::__cordl_internal_get_PunLogging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PunLogging;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_PunLogging(::Photon::Pun::PunLogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PunLogging = value;
}
constexpr bool& Photon::Pun::ServerSettings::__cordl_internal_get_EnableSupportLogger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableSupportLogger;
}
constexpr bool const& Photon::Pun::ServerSettings::__cordl_internal_get_EnableSupportLogger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableSupportLogger;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_EnableSupportLogger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableSupportLogger = value;
}
constexpr bool& Photon::Pun::ServerSettings::__cordl_internal_get_RunInBackground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunInBackground;
}
constexpr bool const& Photon::Pun::ServerSettings::__cordl_internal_get_RunInBackground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunInBackground;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_RunInBackground(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RunInBackground = value;
}
constexpr bool& Photon::Pun::ServerSettings::__cordl_internal_get_StartInOfflineMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartInOfflineMode;
}
constexpr bool const& Photon::Pun::ServerSettings::__cordl_internal_get_StartInOfflineMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartInOfflineMode;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_StartInOfflineMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartInOfflineMode = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Photon::Pun::ServerSettings::__cordl_internal_get_RpcList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RpcList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Photon::Pun::ServerSettings::__cordl_internal_get_RpcList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RpcList;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_RpcList(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RpcList = value;
}
inline void Photon::Pun::ServerSettings::UseCloud(::StringW  cloudAppid, ::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::ServerSettings*>(),
                        {"UseCloud", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cloudAppid, code);
}
inline bool Photon::Pun::ServerSettings::IsAppId(::StringW  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::ServerSettings*>(),
                        {"IsAppId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, val);
}
inline ::StringW Photon::Pun::ServerSettings::get_BestRegionSummaryInPreferences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::ServerSettings*>(),
                        {"get_BestRegionSummaryInPreferences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Photon::Pun::ServerSettings::ResetBestRegionCodeInPreferences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::ServerSettings*>(),
                        {"ResetBestRegionCodeInPreferences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::ServerSettings::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::ServerSettings*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Pun::ServerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::ServerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::ServerSettings* Photon::Pun::ServerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::ServerSettings*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::ServerSettings::ServerSettings()   {
}
