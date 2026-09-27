#pragma once
// IWYU pragma private; include "Fusion/Statistics/BehaviourStatisticsManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Statistics/zzzz__BehaviourStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__BehaviourStatisticsSnapshot_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::BehaviourStatisticsManager.get_CompletedSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Statistics::BehaviourStatisticsSnapshot* (::Fusion::Statistics::BehaviourStatisticsManager::*)()>(&::Fusion::Statistics::BehaviourStatisticsManager::get_CompletedSnapshot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::BehaviourStatisticsManager*>(),
                        {"get_CompletedSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::BehaviourStatisticsManager.get_PendingSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Statistics::BehaviourStatisticsSnapshot* (::Fusion::Statistics::BehaviourStatisticsManager::*)()>(&::Fusion::Statistics::BehaviourStatisticsManager::get_PendingSnapshot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::BehaviourStatisticsManager*>(),
                        {"get_PendingSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::BehaviourStatisticsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::BehaviourStatisticsManager::*)()>(&::Fusion::Statistics::BehaviourStatisticsManager::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x601f024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::BehaviourStatisticsManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::BehaviourStatisticsManager.FinishPendingSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::BehaviourStatisticsManager::*)()>(&::Fusion::Statistics::BehaviourStatisticsManager::FinishPendingSnapshot)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x601f0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::BehaviourStatisticsManager*>(),
                        {"FinishPendingSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Statistics::BehaviourStatisticsSnapshot*& Fusion::Statistics::BehaviourStatisticsManager::__cordl_internal_get__previousUpdateSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousUpdateSnapshot;
}
constexpr ::Fusion::Statistics::BehaviourStatisticsSnapshot* const& Fusion::Statistics::BehaviourStatisticsManager::__cordl_internal_get__previousUpdateSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousUpdateSnapshot;
}
constexpr void Fusion::Statistics::BehaviourStatisticsManager::__cordl_internal_set__previousUpdateSnapshot(::Fusion::Statistics::BehaviourStatisticsSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousUpdateSnapshot = value;
}
constexpr ::Fusion::Statistics::BehaviourStatisticsSnapshot*& Fusion::Statistics::BehaviourStatisticsManager::__cordl_internal_get__currentUpdateSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentUpdateSnapshot;
}
constexpr ::Fusion::Statistics::BehaviourStatisticsSnapshot* const& Fusion::Statistics::BehaviourStatisticsManager::__cordl_internal_get__currentUpdateSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentUpdateSnapshot;
}
constexpr void Fusion::Statistics::BehaviourStatisticsManager::__cordl_internal_set__currentUpdateSnapshot(::Fusion::Statistics::BehaviourStatisticsSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentUpdateSnapshot = value;
}
inline ::Fusion::Statistics::BehaviourStatisticsSnapshot* Fusion::Statistics::BehaviourStatisticsManager::get_CompletedSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::BehaviourStatisticsManager*>(),
                        {"get_CompletedSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Statistics::BehaviourStatisticsSnapshot*>(this, ___internal_method);
}
inline ::Fusion::Statistics::BehaviourStatisticsSnapshot* Fusion::Statistics::BehaviourStatisticsManager::get_PendingSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::BehaviourStatisticsManager*>(),
                        {"get_PendingSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Statistics::BehaviourStatisticsSnapshot*>(this, ___internal_method);
}
inline void Fusion::Statistics::BehaviourStatisticsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::BehaviourStatisticsManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::BehaviourStatisticsManager::FinishPendingSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::BehaviourStatisticsManager*>(),
                        {"FinishPendingSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::BehaviourStatisticsManager* Fusion::Statistics::BehaviourStatisticsManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::BehaviourStatisticsManager*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::BehaviourStatisticsManager::BehaviourStatisticsManager()   {
}
