#pragma once
// IWYU pragma private; include "GlobalNamespace/OwnershipGaurd.hpp"
#include "Photon/Pun/zzzz__PhotonView_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OwnershipGaurd_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OwnershipGaurd.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OwnershipGaurd::*)()>(&::GlobalNamespace::OwnershipGaurd::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ab1ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGaurd*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OwnershipGaurd.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OwnershipGaurd::*)()>(&::GlobalNamespace::OwnershipGaurd::OnDestroy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ab1b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGaurd*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OwnershipGaurd._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OwnershipGaurd::*)()>(&::GlobalNamespace::OwnershipGaurd::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5ab1bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGaurd*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::Photon::Pun::PhotonView>>& GlobalNamespace::OwnershipGaurd::__cordl_internal_get_NetViews()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetViews;
}
constexpr ::ArrayW<::UnityW<::Photon::Pun::PhotonView>> const& GlobalNamespace::OwnershipGaurd::__cordl_internal_get_NetViews() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetViews;
}
constexpr void GlobalNamespace::OwnershipGaurd::__cordl_internal_set_NetViews(::ArrayW<::UnityW<::Photon::Pun::PhotonView>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetViews = value;
}
constexpr bool& GlobalNamespace::OwnershipGaurd::__cordl_internal_get_autoRegisterAll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRegisterAll;
}
constexpr bool const& GlobalNamespace::OwnershipGaurd::__cordl_internal_get_autoRegisterAll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRegisterAll;
}
constexpr void GlobalNamespace::OwnershipGaurd::__cordl_internal_set_autoRegisterAll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoRegisterAll = value;
}
inline void GlobalNamespace::OwnershipGaurd::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGaurd*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OwnershipGaurd::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGaurd*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OwnershipGaurd::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGaurd*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OwnershipGaurd* GlobalNamespace::OwnershipGaurd::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OwnershipGaurd*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OwnershipGaurd::OwnershipGaurd()   {
}
