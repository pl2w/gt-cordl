#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/LckCoreCosmeticsCoordinator.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCoreCosmeticsCoordinator_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__ILckCosmeticsCoordinator_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckAvailableCosmeticInfo_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCoreCosmeticsCoordinator__AnnouncePlayerPresenceForSessionAsync_d__19_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCoreCosmeticsCoordinator__GetLocalUserCosmeticsAsync_d__17_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCoreCosmeticsCoordinator__RequestLocalUserCosmeticsAsyncDelayed_d__16_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCoreCosmeticsCoordinator_def.hpp"
#include "Liv/Lck/Core/Serialization/zzzz__ILckSerializer_def.hpp"
#include "Liv/Lck/Core/zzzz__Result_1_def.hpp"
#include "Liv/Lck/Core/zzzz__SerializationType_def.hpp"
#include "Liv/Lck/zzzz__ILckCosmeticsFeatureFlagManager_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator* (*)()>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d02330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d02378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.add_OnCosmeticAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::*)(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::add_OnCosmeticAvailable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9d023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"add_OnCosmeticAvailable", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.remove_OnCosmeticAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::*)(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::remove_OnCosmeticAvailable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9d02480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"remove_OnCosmeticAvailable", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::*)(::Liv::Lck::Core::Serialization::ILckSerializer*, ::Liv::Lck::ILckCosmeticsFeatureFlagManager*)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d02530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::Serialization::ILckSerializer*>(), ::i2c::type_of<::Liv::Lck::ILckCosmeticsFeatureFlagManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.InitializeLocalCosmeticsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::*)()>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::InitializeLocalCosmeticsAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9d02618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"InitializeLocalCosmeticsAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.RequestLocalUserCosmeticsAsyncDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::*)()>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::RequestLocalUserCosmeticsAsyncDelayed)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d02710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"RequestLocalUserCosmeticsAsyncDelayed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.GetLocalUserCosmeticsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::*)()>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::GetLocalUserCosmeticsAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d027e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"GetLocalUserCosmeticsAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.GetUserCosmeticsForSessionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, ::StringW)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::GetUserCosmeticsForSessionAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9d028f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"GetUserCosmeticsForSessionAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.AnnouncePlayerPresenceForSessionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::*)(::StringW, ::StringW)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::AnnouncePlayerPresenceForSessionAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9d02a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"AnnouncePlayerPresenceForSessionAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.OnCosmeticAvailableStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::UIntPtr, ::Liv::Lck::Core::SerializationType)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::OnCosmeticAvailableStatic)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9d021ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"OnCosmeticAvailableStatic", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::Liv::Lck::Core::SerializationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.HandleOnCosmeticAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::*)(::System::IntPtr, ::System::UIntPtr, ::Liv::Lck::Core::SerializationType)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::HandleOnCosmeticAvailable)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x9d02b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"HandleOnCosmeticAvailable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::Liv::Lck::Core::SerializationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.OnPresenceAnnouncementExpiryReceivedStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::OnPresenceAnnouncementExpiryReceivedStatic)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d0227c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"OnPresenceAnnouncementExpiryReceivedStatic", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.HandlePresenceAnnouncement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::*)(uint64_t)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::HandlePresenceAnnouncement)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d02fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"HandlePresenceAnnouncement", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator.ReannouncePresenceAfterDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::*)(::System::TimeSpan, ::System::Threading::CancellationToken)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::ReannouncePresenceAfterDelay)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9d03088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"ReannouncePresenceAfterDelay", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get_OnCosmeticAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCosmeticAvailable;
}
constexpr ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>* const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get_OnCosmeticAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCosmeticAvailable;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_set_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCosmeticAvailable = value;
}
constexpr ::Liv::Lck::Core::Serialization::ILckSerializer*& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializer;
}
constexpr ::Liv::Lck::Core::Serialization::ILckSerializer* const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializer;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_set__serializer(::Liv::Lck::Core::Serialization::ILckSerializer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serializer = value;
}
constexpr ::Liv::Lck::ILckCosmeticsFeatureFlagManager*& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__featureFlagManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureFlagManager;
}
constexpr ::Liv::Lck::ILckCosmeticsFeatureFlagManager* const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__featureFlagManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureFlagManager;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_set__featureFlagManager(::Liv::Lck::ILckCosmeticsFeatureFlagManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureFlagManager = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__reannounceCancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reannounceCancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__reannounceCancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reannounceCancellationTokenSource;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_set__reannounceCancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reannounceCancellationTokenSource = value;
}
constexpr ::System::Threading::Tasks::Task*& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__requestLocalUserCosmeticsTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestLocalUserCosmeticsTask;
}
constexpr ::System::Threading::Tasks::Task* const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__requestLocalUserCosmeticsTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestLocalUserCosmeticsTask;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_set__requestLocalUserCosmeticsTask(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestLocalUserCosmeticsTask = value;
}
constexpr ::System::Object*& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__lock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr ::System::Object* const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__lock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_set__lock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lock = value;
}
constexpr ::StringW& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__playerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId;
}
constexpr ::StringW const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__playerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_set__playerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerId = value;
}
constexpr ::StringW& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionId;
}
constexpr ::StringW const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_get__sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionId;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::__cordl_internal_set__sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sessionId = value;
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::setStaticF__Instance_k__BackingField(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*, "<Instance>k__BackingField", ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(std::forward<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(value));
}
inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*, "<Instance>k__BackingField", ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>();
}
inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(nullptr, ___internal_method);
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::set_Instance(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::add_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"add_OnCosmeticAvailable", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::remove_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"remove_OnCosmeticAvailable", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::_ctor(::Liv::Lck::Core::Serialization::ILckSerializer*  serializer, ::Liv::Lck::ILckCosmeticsFeatureFlagManager*  featureFlagManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::Serialization::ILckSerializer*>(), ::i2c::type_of<::Liv::Lck::ILckCosmeticsFeatureFlagManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer, featureFlagManager);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::InitializeLocalCosmeticsAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"InitializeLocalCosmeticsAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::RequestLocalUserCosmeticsAsyncDelayed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"RequestLocalUserCosmeticsAsyncDelayed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::GetLocalUserCosmeticsAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"GetLocalUserCosmeticsAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::GetUserCosmeticsForSessionAsync(::System::Collections::Generic::IEnumerable_1<::StringW>*  playerIds, ::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"GetUserCosmeticsForSessionAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method, playerIds, sessionId);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::AnnouncePlayerPresenceForSessionAsync(::StringW  playerId, ::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"AnnouncePlayerPresenceForSessionAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method, playerId, sessionId);
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::OnCosmeticAvailableStatic(::System::IntPtr  serializedCosmeticDataPtr, ::System::UIntPtr  serializedDataLength, ::Liv::Lck::Core::SerializationType  serializationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"OnCosmeticAvailableStatic", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::Liv::Lck::Core::SerializationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, serializedCosmeticDataPtr, serializedDataLength, serializationType);
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::HandleOnCosmeticAvailable(::System::IntPtr  serializedCosmeticDataPtr, ::System::UIntPtr  serializedDataLength, ::Liv::Lck::Core::SerializationType  serializationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"HandleOnCosmeticAvailable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::Liv::Lck::Core::SerializationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializedCosmeticDataPtr, serializedDataLength, serializationType);
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::OnPresenceAnnouncementExpiryReceivedStatic(uint64_t  timeUntilExpirationSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"OnPresenceAnnouncementExpiryReceivedStatic", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, timeUntilExpirationSeconds);
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::HandlePresenceAnnouncement(uint64_t  expirationTimeSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"HandlePresenceAnnouncement", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expirationTimeSeconds);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::ReannouncePresenceAfterDelay(::System::TimeSpan  reannounceDelay, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(),
                        {"ReannouncePresenceAfterDelay", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, reannounceDelay, cancellationToken);
}
/// @brief [Preserve]
inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::New_ctor(::Liv::Lck::Core::Serialization::ILckSerializer*  serializer, ::Liv::Lck::ILckCosmeticsFeatureFlagManager*  featureFlagManager)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*>(serializer, featureFlagManager));
}
/// @brief Convert operator to "::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator"
constexpr  Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::operator ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*() noexcept {
return static_cast<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator"
constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::i___Liv__Lck__Core__Cosmetics__ILckCosmeticsCoordinator() noexcept {
return static_cast<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator::LckCoreCosmeticsCoordinator()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::*)()>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d03810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0._AnnouncePlayerPresenceForSessionAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::Result_1<bool>* (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::*)()>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::_AnnouncePlayerPresenceForSessionAsync_b__0)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x9d03818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0*>(),
                        {"<AnnouncePlayerPresenceForSessionAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::__cordl_internal_get_playerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr ::StringW const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::__cordl_internal_get_playerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::__cordl_internal_set_playerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerId = value;
}
constexpr ::StringW& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionId = value;
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Core::Result_1<bool>* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::_AnnouncePlayerPresenceForSessionAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0*>(),
                        {"<AnnouncePlayerPresenceForSessionAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::Result_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass19_0::LckCoreCosmeticsCoordinator___c__DisplayClass19_0()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::*)()>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d033f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0._GetUserCosmeticsForSessionAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::Result_1<bool>* (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::*)()>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::_GetUserCosmeticsForSessionAsync_b__0)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x9d03400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0*>(),
                        {"<GetUserCosmeticsForSessionAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionId = value;
}
constexpr ::System::IntPtr& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::__cordl_internal_get_playerIdsArrayPointer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIdsArrayPointer;
}
constexpr ::System::IntPtr const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::__cordl_internal_get_playerIdsArrayPointer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIdsArrayPointer;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::__cordl_internal_set_playerIdsArrayPointer(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerIdsArrayPointer = value;
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::__cordl_internal_get_playerIdUtf8StringPtrs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIdUtf8StringPtrs;
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>* const& Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::__cordl_internal_get_playerIdUtf8StringPtrs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIdUtf8StringPtrs;
}
constexpr void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::__cordl_internal_set_playerIdUtf8StringPtrs(::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerIdUtf8StringPtrs = value;
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Core::Result_1<bool>* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::_GetUserCosmeticsForSessionAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0*>(),
                        {"<GetUserCosmeticsForSessionAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::Result_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0::LckCoreCosmeticsCoordinator___c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::*)()>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d031ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c._GetLocalUserCosmeticsAsync_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::Result_1<bool>* (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::*)()>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::_GetLocalUserCosmeticsAsync_b__17_0)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9d031f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>(),
                        {"<GetLocalUserCosmeticsAsync>b__17_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c._HandleOnCosmeticAvailable_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::*)(::StringW, ::StringW)>(&::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::_HandleOnCosmeticAvailable_b__21_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d0339c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>(),
                        {"<HandleOnCosmeticAvailable>b__21_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::setStaticF___9(::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*, "<>9", ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>(std::forward<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>(value));
}
inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*, "<>9", ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>();
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::setStaticF___9__17_0(::System::Func_1<::Liv::Lck::Core::Result_1<bool>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::Liv::Lck::Core::Result_1<bool>*>*, "<>9__17_0", ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>(std::forward<::System::Func_1<::Liv::Lck::Core::Result_1<bool>*>*>(value));
}
inline ::System::Func_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::getStaticF___9__17_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::Liv::Lck::Core::Result_1<bool>*>*, "<>9__17_0", ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>();
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::setStaticF___9__21_0(::System::Func_3<::StringW,::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::StringW,::StringW,::StringW>*, "<>9__21_0", ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>(std::forward<::System::Func_3<::StringW,::StringW,::StringW>*>(value));
}
inline ::System::Func_3<::StringW,::StringW,::StringW>* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::getStaticF___9__21_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<::StringW,::StringW,::StringW>*, "<>9__21_0", ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>();
}
inline void Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Core::Result_1<bool>* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::_GetLocalUserCosmeticsAsync_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>(),
                        {"<GetLocalUserCosmeticsAsync>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::Result_1<bool>*>(this, ___internal_method);
}
inline ::StringW Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::_HandleOnCosmeticAvailable_b__21_0(::StringW  current, ::StringW  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>(),
                        {"<HandleOnCosmeticAvailable>b__21_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, current, playerId);
}
inline ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c* Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c::LckCoreCosmeticsCoordinator___c()   {
}
