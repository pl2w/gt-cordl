#pragma once
// IWYU pragma private; include "GlobalNamespace/LckCosmeticsFeatureFlagManagerPlayFab.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LckCosmeticsFeatureFlagManagerPlayFab_def.hpp"
#include "GlobalNamespace/zzzz__LckCosmeticsFeatureFlagManagerPlayFab__GetEnabledStateWithRetryAsync_d__7_def.hpp"
#include "GlobalNamespace/zzzz__LckCosmeticsFeatureFlagManagerPlayFab_def.hpp"
#include "Liv/Lck/zzzz__ILckCosmeticsFeatureFlagManager_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::*)()>(&::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56c8dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab.IsEnabledAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::*)()>(&::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::IsEnabledAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56c8e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab*>(),
                        {"IsEnabledAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab.GetEnabledStateWithRetryAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::*)()>(&::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::GetEnabledStateWithRetryAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x56c8f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab*>(),
                        {"GetEnabledStateWithRetryAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task_1<bool>*& GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::__cordl_internal_get__initializationTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationTask;
}
constexpr ::System::Threading::Tasks::Task_1<bool>* const& GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::__cordl_internal_get__initializationTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializationTask;
}
constexpr void GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initializationTask = value;
}
constexpr ::System::Object*& GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::__cordl_internal_get__lock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr ::System::Object* const& GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::__cordl_internal_get__lock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr void GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::__cordl_internal_set__lock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lock = value;
}
inline void GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::IsEnabledAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab*>(),
                        {"IsEnabledAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::GetEnabledStateWithRetryAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab*>(),
                        {"GetEnabledStateWithRetryAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab* GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab*>());
}
/// @brief Convert operator to "::Liv::Lck::ILckCosmeticsFeatureFlagManager"
constexpr  GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::operator ::Liv::Lck::ILckCosmeticsFeatureFlagManager*() noexcept {
return static_cast<::Liv::Lck::ILckCosmeticsFeatureFlagManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckCosmeticsFeatureFlagManager"
constexpr ::Liv::Lck::ILckCosmeticsFeatureFlagManager* GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::i___Liv__Lck__ILckCosmeticsFeatureFlagManager() noexcept {
return static_cast<::Liv::Lck::ILckCosmeticsFeatureFlagManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab::LckCosmeticsFeatureFlagManagerPlayFab()   {
}
//  Writing Method size for method: ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::*)()>(&::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c9020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0._GetEnabledStateWithRetryAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::*)(::StringW)>(&::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::_GetEnabledStateWithRetryAsync_b__0)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x56c9028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0*>(),
                        {"<GetEnabledStateWithRetryAsync>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0._GetEnabledStateWithRetryAsync_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::_GetEnabledStateWithRetryAsync_b__1)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x56c91c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0*>(),
                        {"<GetEnabledStateWithRetryAsync>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
inline void GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::_GetEnabledStateWithRetryAsync_b__0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0*>(),
                        {"<GetEnabledStateWithRetryAsync>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::_GetEnabledStateWithRetryAsync_b__1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0*>(),
                        {"<GetEnabledStateWithRetryAsync>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0* GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0::LckCosmeticsFeatureFlagManagerPlayFab___c__DisplayClass7_0()   {
}
