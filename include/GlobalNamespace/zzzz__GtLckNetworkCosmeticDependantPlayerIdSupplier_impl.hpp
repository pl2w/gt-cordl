#pragma once
// IWYU pragma private; include "GlobalNamespace/GtLckNetworkCosmeticDependantPlayerIdSupplier.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GtLckNetworkCosmeticDependantPlayerIdSupplier_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__ILckCosmeticDependantPlayerIdSupplier_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__PlayerIdUpdatedEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier.add_PlayerIdUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::*)(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*)>(&::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::add_PlayerIdUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56c1e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*>(),
                        {"add_PlayerIdUpdated", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier.remove_PlayerIdUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::*)(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*)>(&::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::remove_PlayerIdUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56c1f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*>(),
                        {"remove_PlayerIdUpdated", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier.GetPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::*)()>(&::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::GetPlayerId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56c1fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*>(),
                        {"GetPlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier.UpdatePlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::*)()>(&::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::UpdatePlayerId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56c1fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*>(),
                        {"UpdatePlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::*)()>(&::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c1ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::__cordl_internal_get_vrrig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrrig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::__cordl_internal_get_vrrig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrrig;
}
constexpr void GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::__cordl_internal_set_vrrig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrrig = value;
}
constexpr ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*& GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::__cordl_internal_get_PlayerIdUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIdUpdated;
}
constexpr ::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent* const& GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::__cordl_internal_get_PlayerIdUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIdUpdated;
}
constexpr void GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::__cordl_internal_set_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerIdUpdated = value;
}
inline void GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::add_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*>(),
                        {"add_PlayerIdUpdated", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::remove_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*>(),
                        {"remove_PlayerIdUpdated", {}, {::i2c::type_of<::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::GetPlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*>(),
                        {"GetPlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::UpdatePlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*>(),
                        {"UpdatePlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier* GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier*>());
}
/// @brief Convert operator to "::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier"
constexpr  GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::operator ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*() noexcept {
return static_cast<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier"
constexpr ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier* GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::i___Liv__Lck__Cosmetics__ILckCosmeticDependantPlayerIdSupplier() noexcept {
return static_cast<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GtLckNetworkCosmeticDependantPlayerIdSupplier::GtLckNetworkCosmeticDependantPlayerIdSupplier()   {
}
