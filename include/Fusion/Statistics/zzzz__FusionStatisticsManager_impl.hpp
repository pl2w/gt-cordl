#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatisticsManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsSnapshot_def.hpp"
#include "Fusion/Statistics/zzzz__NetworkObjectStatisticsManager_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsManager.get_CompleteSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Statistics::FusionStatisticsSnapshot* (::Fusion::Statistics::FusionStatisticsManager::*)()>(&::Fusion::Statistics::FusionStatisticsManager::get_CompleteSnapshot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsManager*>(),
                        {"get_CompleteSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsManager.get_PendingSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Statistics::FusionStatisticsSnapshot* (::Fusion::Statistics::FusionStatisticsManager::*)()>(&::Fusion::Statistics::FusionStatisticsManager::get_PendingSnapshot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsManager*>(),
                        {"get_PendingSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsManager.get_ObjectStatisticsManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Statistics::NetworkObjectStatisticsManager* (::Fusion::Statistics::FusionStatisticsManager::*)()>(&::Fusion::Statistics::FusionStatisticsManager::get_ObjectStatisticsManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601f1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsManager*>(),
                        {"get_ObjectStatisticsManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsManager::*)()>(&::Fusion::Statistics::FusionStatisticsManager::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x601f1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsManager.FinishPendingSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatisticsManager::*)()>(&::Fusion::Statistics::FusionStatisticsManager::FinishPendingSnapshot)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x601f3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsManager*>(),
                        {"FinishPendingSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Statistics::FusionStatisticsSnapshot*& Fusion::Statistics::FusionStatisticsManager::__cordl_internal_get__currentTickSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTickSnapshot;
}
constexpr ::Fusion::Statistics::FusionStatisticsSnapshot* const& Fusion::Statistics::FusionStatisticsManager::__cordl_internal_get__currentTickSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTickSnapshot;
}
constexpr void Fusion::Statistics::FusionStatisticsManager::__cordl_internal_set__currentTickSnapshot(::Fusion::Statistics::FusionStatisticsSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTickSnapshot = value;
}
constexpr ::Fusion::Statistics::FusionStatisticsSnapshot*& Fusion::Statistics::FusionStatisticsManager::__cordl_internal_get__previousTickSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousTickSnapshot;
}
constexpr ::Fusion::Statistics::FusionStatisticsSnapshot* const& Fusion::Statistics::FusionStatisticsManager::__cordl_internal_get__previousTickSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousTickSnapshot;
}
constexpr void Fusion::Statistics::FusionStatisticsManager::__cordl_internal_set__previousTickSnapshot(::Fusion::Statistics::FusionStatisticsSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousTickSnapshot = value;
}
constexpr ::Fusion::Statistics::NetworkObjectStatisticsManager*& Fusion::Statistics::FusionStatisticsManager::__cordl_internal_get__objectStatisticsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectStatisticsManager;
}
constexpr ::Fusion::Statistics::NetworkObjectStatisticsManager* const& Fusion::Statistics::FusionStatisticsManager::__cordl_internal_get__objectStatisticsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectStatisticsManager;
}
constexpr void Fusion::Statistics::FusionStatisticsManager::__cordl_internal_set__objectStatisticsManager(::Fusion::Statistics::NetworkObjectStatisticsManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectStatisticsManager = value;
}
inline ::Fusion::Statistics::FusionStatisticsSnapshot* Fusion::Statistics::FusionStatisticsManager::get_CompleteSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsManager*>(),
                        {"get_CompleteSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Statistics::FusionStatisticsSnapshot*>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionStatisticsSnapshot* Fusion::Statistics::FusionStatisticsManager::get_PendingSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsManager*>(),
                        {"get_PendingSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Statistics::FusionStatisticsSnapshot*>(this, ___internal_method);
}
inline ::Fusion::Statistics::NetworkObjectStatisticsManager* Fusion::Statistics::FusionStatisticsManager::get_ObjectStatisticsManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsManager*>(),
                        {"get_ObjectStatisticsManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Statistics::NetworkObjectStatisticsManager*>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatisticsManager::FinishPendingSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsManager*>(),
                        {"FinishPendingSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionStatisticsManager* Fusion::Statistics::FusionStatisticsManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionStatisticsManager*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionStatisticsManager::FusionStatisticsManager()   {
}
