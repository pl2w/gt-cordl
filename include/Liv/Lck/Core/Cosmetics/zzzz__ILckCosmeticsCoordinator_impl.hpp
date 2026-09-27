#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/ILckCosmeticsCoordinator.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__ILckCosmeticsCoordinator_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckAvailableCosmeticInfo_def.hpp"
#include "Liv/Lck/Core/zzzz__Result_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator.add_OnCosmeticAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::*)(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*)>(&::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::add_OnCosmeticAvailable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(),
                    {::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator.remove_OnCosmeticAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::*)(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*)>(&::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::remove_OnCosmeticAvailable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(),
                    {::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator.InitializeLocalCosmeticsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::*)()>(&::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::InitializeLocalCosmeticsAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(),
                    {::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator.GetUserCosmeticsForSessionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, ::StringW)>(&::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::GetUserCosmeticsForSessionAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(),
                    {::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator.AnnouncePlayerPresenceForSessionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::*)(::StringW, ::StringW)>(&::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::AnnouncePlayerPresenceForSessionAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(),
                    {::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::add_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::remove_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::InitializeLocalCosmeticsAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::GetUserCosmeticsForSessionAsync(::System::Collections::Generic::IEnumerable_1<::StringW>*  playerIds, ::StringW  sessionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method, playerIds, sessionId);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator::AnnouncePlayerPresenceForSessionAsync(::StringW  playerId, ::StringW  sessionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(this, ___internal_method, playerId, sessionId);
}
