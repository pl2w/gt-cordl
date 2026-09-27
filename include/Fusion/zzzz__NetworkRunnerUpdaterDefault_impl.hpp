#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerUpdaterDefault.hpp"
#include "Fusion/zzzz__NetworkRunnerUpdaterDefaultInvokeSettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkRunnerUpdaterDefault_def.hpp"
#include "Fusion/zzzz__INetworkRunnerUpdater_def.hpp"
#include "Fusion/zzzz__NetworkRunnerUpdaterDefaultInvokeSettings_def.hpp"
#include "Fusion/zzzz__NetworkRunnerUpdaterDefault_NetworkRunnerRender_def.hpp"
#include "Fusion/zzzz__NetworkRunnerUpdaterDefault_NetworkRunnerUpdate_def.hpp"
#include "Fusion/zzzz__NetworkRunnerUpdaterDefault_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault.ClearStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkRunnerUpdaterDefault::ClearStatics)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fda950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"ClearStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault.RegisterInPlayerLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings)>(&::Fusion::NetworkRunnerUpdaterDefault::RegisterInPlayerLoop)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5fda9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"RegisterInPlayerLoop", {}, {::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), ::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault.UnregisterFromPlayerLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Fusion::NetworkRunnerUpdaterDefault::UnregisterFromPlayerLoop)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5fdb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"UnregisterFromPlayerLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault.Fusion_INetworkRunnerUpdater_Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerUpdaterDefault::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunnerUpdaterDefault::Fusion_INetworkRunnerUpdater_Initialize)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5fdb2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"Fusion.INetworkRunnerUpdater.Initialize", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault.Fusion_INetworkRunnerUpdater_Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerUpdaterDefault::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunnerUpdaterDefault::Fusion_INetworkRunnerUpdater_Shutdown)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5fdb424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"Fusion.INetworkRunnerUpdater.Shutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault.InvokeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkRunnerUpdaterDefault::InvokeUpdate)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5fdb660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault.InvokeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkRunnerUpdaterDefault::InvokeRender)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5fdb858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"InvokeRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerUpdaterDefault::*)()>(&::Fusion::NetworkRunnerUpdaterDefault::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5fdbad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings& Fusion::NetworkRunnerUpdaterDefault::__cordl_internal_get_UpdateSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateSettings;
}
constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings const& Fusion::NetworkRunnerUpdaterDefault::__cordl_internal_get_UpdateSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateSettings;
}
constexpr void Fusion::NetworkRunnerUpdaterDefault::__cordl_internal_set_UpdateSettings(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateSettings = value;
}
constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings& Fusion::NetworkRunnerUpdaterDefault::__cordl_internal_get_RenderSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderSettings;
}
constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings const& Fusion::NetworkRunnerUpdaterDefault::__cordl_internal_get_RenderSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderSettings;
}
constexpr void Fusion::NetworkRunnerUpdaterDefault::__cordl_internal_set_RenderSettings(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RenderSettings = value;
}
inline void Fusion::NetworkRunnerUpdaterDefault::setStaticF__instances(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*, "_instances", ::Fusion::NetworkRunnerUpdaterDefault*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>* Fusion::NetworkRunnerUpdaterDefault::getStaticF__instances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*, "_instances", ::Fusion::NetworkRunnerUpdaterDefault*>();
}
inline void Fusion::NetworkRunnerUpdaterDefault::setStaticF__instanceCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_instanceCount", ::Fusion::NetworkRunnerUpdaterDefault*>(std::forward<int32_t>(value));
}
inline int32_t Fusion::NetworkRunnerUpdaterDefault::getStaticF__instanceCount()  {
return ::cordl_internals::getStaticField<int32_t, "_instanceCount", ::Fusion::NetworkRunnerUpdaterDefault*>();
}
inline void Fusion::NetworkRunnerUpdaterDefault::setStaticF__registration(::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*, "_registration", ::Fusion::NetworkRunnerUpdaterDefault*>(std::forward<::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*>(value));
}
inline ::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration* Fusion::NetworkRunnerUpdaterDefault::getStaticF__registration()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*, "_registration", ::Fusion::NetworkRunnerUpdaterDefault*>();
}
inline void Fusion::NetworkRunnerUpdaterDefault::ClearStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"ClearStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Fusion::NetworkRunnerUpdaterDefault::RegisterInPlayerLoop(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  updateSettings, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  renderSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"RegisterInPlayerLoop", {}, {::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), ::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateSettings, renderSettings);
}
inline bool Fusion::NetworkRunnerUpdaterDefault::UnregisterFromPlayerLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"UnregisterFromPlayerLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Fusion::NetworkRunnerUpdaterDefault::Fusion_INetworkRunnerUpdater_Initialize(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"Fusion.INetworkRunnerUpdater.Initialize", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkRunnerUpdaterDefault::Fusion_INetworkRunnerUpdater_Shutdown(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"Fusion.INetworkRunnerUpdater.Shutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkRunnerUpdaterDefault::InvokeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::NetworkRunnerUpdaterDefault::InvokeRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {"InvokeRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::NetworkRunnerUpdaterDefault::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkRunnerUpdaterDefault* Fusion::NetworkRunnerUpdaterDefault::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunnerUpdaterDefault*>());
}
/// @brief Convert operator to "::Fusion::INetworkRunnerUpdater"
constexpr  Fusion::NetworkRunnerUpdaterDefault::operator ::Fusion::INetworkRunnerUpdater*() noexcept {
return static_cast<::Fusion::INetworkRunnerUpdater*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkRunnerUpdater"
constexpr ::Fusion::INetworkRunnerUpdater* Fusion::NetworkRunnerUpdaterDefault::i___Fusion__INetworkRunnerUpdater() noexcept {
return static_cast<::Fusion::INetworkRunnerUpdater*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunnerUpdaterDefault::NetworkRunnerUpdaterDefault()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerUpdaterDefault___c::*)()>(&::Fusion::NetworkRunnerUpdaterDefault___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdbcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault___c._InvokeRender_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunnerUpdaterDefault___c::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunnerUpdaterDefault___c::_InvokeRender_b__11_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fdbcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault___c*>(),
                        {"<InvokeRender>b__11_0", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkRunnerUpdaterDefault___c::setStaticF___9(::Fusion::NetworkRunnerUpdaterDefault___c*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkRunnerUpdaterDefault___c*, "<>9", ::Fusion::NetworkRunnerUpdaterDefault___c*>(std::forward<::Fusion::NetworkRunnerUpdaterDefault___c*>(value));
}
inline ::Fusion::NetworkRunnerUpdaterDefault___c* Fusion::NetworkRunnerUpdaterDefault___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkRunnerUpdaterDefault___c*, "<>9", ::Fusion::NetworkRunnerUpdaterDefault___c*>();
}
inline void Fusion::NetworkRunnerUpdaterDefault___c::setStaticF___9__11_0(::System::Predicate_1<::UnityW<::Fusion::NetworkRunner>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::Fusion::NetworkRunner>>*, "<>9__11_0", ::Fusion::NetworkRunnerUpdaterDefault___c*>(std::forward<::System::Predicate_1<::UnityW<::Fusion::NetworkRunner>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::Fusion::NetworkRunner>>* Fusion::NetworkRunnerUpdaterDefault___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::Fusion::NetworkRunner>>*, "<>9__11_0", ::Fusion::NetworkRunnerUpdaterDefault___c*>();
}
inline void Fusion::NetworkRunnerUpdaterDefault___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkRunnerUpdaterDefault___c::_InvokeRender_b__11_0(::Fusion::NetworkRunner*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault___c*>(),
                        {"<InvokeRender>b__11_0", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Fusion::NetworkRunnerUpdaterDefault___c* Fusion::NetworkRunnerUpdaterDefault___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunnerUpdaterDefault___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunnerUpdaterDefault___c::NetworkRunnerUpdaterDefault___c()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::*)(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings)>(&::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::_ctor)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x5fdacd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), ::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::*)()>(&::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::Dispose)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5fdb17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings& Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::__cordl_internal_get_UpdateSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateSettings;
}
constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings const& Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::__cordl_internal_get_UpdateSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateSettings;
}
constexpr void Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::__cordl_internal_set_UpdateSettings(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateSettings = value;
}
constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings& Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::__cordl_internal_get_RenderSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderSettings;
}
constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings const& Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::__cordl_internal_get_RenderSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderSettings;
}
constexpr void Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::__cordl_internal_set_RenderSettings(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RenderSettings = value;
}
inline void Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::_ctor(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  updateSettings, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  renderSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), ::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateSettings, renderSettings);
}
inline void Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration* Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::New_ctor(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  updateSettings, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  renderSettings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*>(updateSettings, renderSettings));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration()   {
}
inline void Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O::setStaticF__0___InvokeUpdate(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  value)  {
::cordl_internals::setStaticField<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*, "<0>__InvokeUpdate", ::Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O*>(std::forward<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(value));
}
inline ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O::getStaticF__0___InvokeUpdate()  {
return ::cordl_internals::getStaticField<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*, "<0>__InvokeUpdate", ::Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O*>();
}
inline void Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O::setStaticF__1___InvokeRender(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  value)  {
::cordl_internals::setStaticField<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*, "<1>__InvokeRender", ::Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O*>(std::forward<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(value));
}
inline ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O::getStaticF__1___InvokeRender()  {
return ::cordl_internals::getStaticField<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*, "<1>__InvokeRender", ::Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O*>();
}
// Ctor Parameters []
constexpr ::Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O()   {
}
