#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/NullLckCosmeticsCoordinator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__NullLckCosmeticsCoordinator_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__ILckCosmeticsCoordinator_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckAvailableCosmeticInfo_def.hpp"
#include "Liv/Lck/Core/zzzz__Result_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator.add_OnCosmeticAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::*)(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*)>(&::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::add_OnCosmeticAvailable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9d05774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {"add_OnCosmeticAvailable", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator.remove_OnCosmeticAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::*)(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*)>(&::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::remove_OnCosmeticAvailable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9d05824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {"remove_OnCosmeticAvailable", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::*)()>(&::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d058d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator.InitializeLocalCosmeticsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::*)()>(&::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::InitializeLocalCosmeticsAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d058dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {"InitializeLocalCosmeticsAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator.GetUserCosmeticsForSessionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, ::StringW)>(&::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::GetUserCosmeticsForSessionAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d05964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {"GetUserCosmeticsForSessionAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator.AnnouncePlayerPresenceForSessionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::*)(::StringW, ::StringW)>(&::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::AnnouncePlayerPresenceForSessionAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d059f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {"AnnouncePlayerPresenceForSessionAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*& Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::__cordl_internal_get_OnCosmeticAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCosmeticAvailable;
}
constexpr ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>* const& Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::__cordl_internal_get_OnCosmeticAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCosmeticAvailable;
}
constexpr void Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::__cordl_internal_set_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCosmeticAvailable = value;
}
inline void Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::add_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {"add_OnCosmeticAvailable", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::remove_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {"remove_OnCosmeticAvailable", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::InitializeLocalCosmeticsAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {"InitializeLocalCosmeticsAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::GetUserCosmeticsForSessionAsync(::System::Collections::Generic::IEnumerable_1<::StringW>*  playerIds, ::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {"GetUserCosmeticsForSessionAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method, playerIds, sessionId);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::AnnouncePlayerPresenceForSessionAsync(::StringW  playerId, ::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>(),
                        {"AnnouncePlayerPresenceForSessionAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method, playerId, sessionId);
}
/// @brief [Preserve]
inline ::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator* Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*>());
}
/// @brief Convert operator to "::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator"
constexpr  Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::operator ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*() noexcept {
return static_cast<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator"
constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::i___Liv__Lck__Core__Cosmetics__ILckCosmeticsCoordinator() noexcept {
return static_cast<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator::NullLckCosmeticsCoordinator()   {
}
