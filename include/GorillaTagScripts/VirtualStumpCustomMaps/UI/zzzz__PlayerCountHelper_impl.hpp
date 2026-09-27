#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/UI/PlayerCountHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__PlayerCountHelper_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__PlayerCountHelper_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper.GetPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::Mod*, ::System::Action_1<::StringW>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::GetPlayerCount)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5bf163c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"GetPlayerCount", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper.GetPlayerCountBatched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::GetPlayerCountBatched)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5bf199c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"GetPlayerCountBatched", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper.GetPlayerCountInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Action_1<uint64_t>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::GetPlayerCountInternal)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5bf1740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"GetPlayerCountInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<uint64_t>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper.UnpackSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*, ::StringW, ::System::Action_1<uint64_t>*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::UnpackSuccess)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5bf1cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"UnpackSuccess", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<uint64_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper.UnpackSuccessBatched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*, ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::UnpackSuccessBatched)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x5bf1e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"UnpackSuccessBatched", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper.DefaultErrorCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::PlayFabError*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::DefaultErrorCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5bf26fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"DefaultErrorCallback", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper.FormatPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::FormatPlayerCount)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5bf2540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"FormatPlayerCount", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::GetPlayerCount(::Modio::Mods::Mod*  mod, ::System::Action_1<::StringW>*  successCallback, /* [Nullable(new[] { 2, 1 })] */ ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"GetPlayerCount", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mod, successCallback, errorCallback);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::GetPlayerCountBatched(::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  modsAndCallbacks, /* [Nullable(new[] { 2, 1 })] */ ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"GetPlayerCountBatched", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, modsAndCallbacks, errorCallback);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::GetPlayerCountInternal(::StringW  modId, ::System::Action_1<uint64_t>*  successCallback, /* [Nullable(new[] { 2, 1 })] */ ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"GetPlayerCountInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<uint64_t>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, modId, successCallback, errorCallback);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::UnpackSuccess(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result, ::StringW  modId, ::System::Action_1<uint64_t>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"UnpackSuccess", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<uint64_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, modId, callback);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::UnpackSuccessBatched(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result, ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  modsAndCallbacks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"UnpackSuccessBatched", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, modsAndCallbacks);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::DefaultErrorCallback(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"DefaultErrorCallback", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline ::StringW GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::FormatPlayerCount(uint64_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper*>(),
                        {"FormatPlayerCount", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, count);
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper::PlayerCountHelper()   {
}
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf1cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0._GetPlayerCountInternal_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::_GetPlayerCountInternal_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bf2860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0*>(),
                        {"<GetPlayerCountInternal>b__0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::__cordl_internal_get_modId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modId;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::__cordl_internal_get_modId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modId;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::__cordl_internal_set_modId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modId = value;
}
constexpr ::System::Action_1<uint64_t>*& GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action_1<uint64_t>* const& GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::__cordl_internal_set_successCallback(::System::Action_1<uint64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::_GetPlayerCountInternal_b__0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  executeFunctionResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0*>(),
                        {"<GetPlayerCountInternal>b__0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, executeFunctionResult);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0* GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass4_0::PlayerCountHelper___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf1cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0._GetPlayerCountBatched_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0::_GetPlayerCountBatched_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bf2850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0*>(),
                        {"<GetPlayerCountBatched>b__0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*& GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0::__cordl_internal_get_modsAndCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modsAndCallbacks;
}
constexpr ::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>* const& GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0::__cordl_internal_get_modsAndCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modsAndCallbacks;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0::__cordl_internal_set_modsAndCallbacks(::System::Collections::Generic::IDictionary_2<::Modio::Mods::Mod*,::System::Action_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modsAndCallbacks = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0::_GetPlayerCountBatched_b__0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  executeFunctionResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0*>(),
                        {"<GetPlayerCountBatched>b__0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, executeFunctionResult);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0* GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass3_0::PlayerCountHelper___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf1738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0._GetPlayerCount_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0::*)(uint64_t)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0::_GetPlayerCount_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5bf2820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0*>(),
                        {"<GetPlayerCount>b__0", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action_1<::StringW>* const& GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0::__cordl_internal_set_successCallback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0::_GetPlayerCount_b__0(uint64_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0*>(),
                        {"<GetPlayerCount>b__0", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0* GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c__DisplayClass2_0::PlayerCountHelper___c__DisplayClass2_0()   {
}
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf27f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c._GetPlayerCountBatched_b__3_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::*)(::Modio::Mods::Mod*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::_GetPlayerCountBatched_b__3_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bf27f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*>(),
                        {"<GetPlayerCountBatched>b__3_1", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::setStaticF___9(::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*  value)  {
::cordl_internals::setStaticField<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*, "<>9", ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*>(std::forward<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*>(value));
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c* GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*, "<>9", ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::setStaticF___9__3_1(::System::Func_2<::Modio::Mods::Mod*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::Mod*,::StringW>*, "<>9__3_1", ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*>(std::forward<::System::Func_2<::Modio::Mods::Mod*,::StringW>*>(value));
}
inline ::System::Func_2<::Modio::Mods::Mod*,::StringW>* GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::getStaticF___9__3_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::Mod*,::StringW>*, "<>9__3_1", ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*>();
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::_GetPlayerCountBatched_b__3_1(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*>(),
                        {"<GetPlayerCountBatched>b__3_1", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, mod);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c* GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::UI::PlayerCountHelper___c::PlayerCountHelper___c()   {
}
