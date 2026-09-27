#pragma once
// IWYU pragma private; include "Fusion/Statistics/LagCompensationStatisticsManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Statistics/zzzz__LagCompensationStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__LagCompensationStatisticsSnapshot_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsManager.get_CompletedSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Statistics::LagCompensationStatisticsSnapshot* (::Fusion::Statistics::LagCompensationStatisticsManager::*)()>(&::Fusion::Statistics::LagCompensationStatisticsManager::get_CompletedSnapshot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601faf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsManager*>(),
                        {"get_CompletedSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsManager.get_PendingSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Statistics::LagCompensationStatisticsSnapshot* (::Fusion::Statistics::LagCompensationStatisticsManager::*)()>(&::Fusion::Statistics::LagCompensationStatisticsManager::get_PendingSnapshot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsManager*>(),
                        {"get_PendingSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsManager::*)()>(&::Fusion::Statistics::LagCompensationStatisticsManager::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x601fb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsManager.FinishPendingSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsManager::*)()>(&::Fusion::Statistics::LagCompensationStatisticsManager::FinishPendingSnapshot)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x601fba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsManager*>(),
                        {"FinishPendingSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Statistics::LagCompensationStatisticsSnapshot*& Fusion::Statistics::LagCompensationStatisticsManager::__cordl_internal_get__previousUpdateSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousUpdateSnapshot;
}
constexpr ::Fusion::Statistics::LagCompensationStatisticsSnapshot* const& Fusion::Statistics::LagCompensationStatisticsManager::__cordl_internal_get__previousUpdateSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousUpdateSnapshot;
}
constexpr void Fusion::Statistics::LagCompensationStatisticsManager::__cordl_internal_set__previousUpdateSnapshot(::Fusion::Statistics::LagCompensationStatisticsSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousUpdateSnapshot = value;
}
constexpr ::Fusion::Statistics::LagCompensationStatisticsSnapshot*& Fusion::Statistics::LagCompensationStatisticsManager::__cordl_internal_get__currentUpdateSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentUpdateSnapshot;
}
constexpr ::Fusion::Statistics::LagCompensationStatisticsSnapshot* const& Fusion::Statistics::LagCompensationStatisticsManager::__cordl_internal_get__currentUpdateSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentUpdateSnapshot;
}
constexpr void Fusion::Statistics::LagCompensationStatisticsManager::__cordl_internal_set__currentUpdateSnapshot(::Fusion::Statistics::LagCompensationStatisticsSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentUpdateSnapshot = value;
}
inline ::Fusion::Statistics::LagCompensationStatisticsSnapshot* Fusion::Statistics::LagCompensationStatisticsManager::get_CompletedSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsManager*>(),
                        {"get_CompletedSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(this, ___internal_method);
}
inline ::Fusion::Statistics::LagCompensationStatisticsSnapshot* Fusion::Statistics::LagCompensationStatisticsManager::get_PendingSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsManager*>(),
                        {"get_PendingSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsManager::FinishPendingSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsManager*>(),
                        {"FinishPendingSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::LagCompensationStatisticsManager* Fusion::Statistics::LagCompensationStatisticsManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::LagCompensationStatisticsManager*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::LagCompensationStatisticsManager::LagCompensationStatisticsManager()   {
}
