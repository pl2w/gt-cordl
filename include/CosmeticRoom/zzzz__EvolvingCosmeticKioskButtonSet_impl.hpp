#pragma once
// IWYU pragma private; include "CosmeticRoom/EvolvingCosmeticKioskButtonSet.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "CosmeticRoom/zzzz__EvolvingCosmeticKioskButtonSet_def.hpp"
#include "CosmeticRoom/zzzz__EvolvingCosmeticKiosk_def.hpp"
#include "GlobalNamespace/zzzz__EvolvingCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GorillaNetworking/Store/zzzz__DynamicCosmeticStand_def.hpp"
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKioskButtonSet.RegisterKiosk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKioskButtonSet::*)(::CosmeticRoom::EvolvingCosmeticKiosk*)>(&::CosmeticRoom::EvolvingCosmeticKioskButtonSet::RegisterKiosk)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c4beb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"RegisterKiosk", {}, {::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKioskButtonSet.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKioskButtonSet::*)()>(&::CosmeticRoom::EvolvingCosmeticKioskButtonSet::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c4c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKioskButtonSet.SetCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKioskButtonSet::*)(::StringW, ::GlobalNamespace::EvolvingCosmetic*)>(&::CosmeticRoom::EvolvingCosmeticKioskButtonSet::SetCosmetic)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c4c1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"SetCosmetic", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::EvolvingCosmetic*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKioskButtonSet.GoForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKioskButtonSet::*)()>(&::CosmeticRoom::EvolvingCosmeticKioskButtonSet::GoForward)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c4d884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"GoForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKioskButtonSet.GoBackward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKioskButtonSet::*)()>(&::CosmeticRoom::EvolvingCosmeticKioskButtonSet::GoBackward)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c4dc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"GoBackward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKioskButtonSet.RefreshOnPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKioskButtonSet::*)()>(&::CosmeticRoom::EvolvingCosmeticKioskButtonSet::RefreshOnPlayer)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5c4d924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"RefreshOnPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::EvolvingCosmeticKioskButtonSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::EvolvingCosmeticKioskButtonSet::*)()>(&::CosmeticRoom::EvolvingCosmeticKioskButtonSet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4dd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__cosmeticStand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticStand;
}
constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand> const& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__cosmeticStand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticStand;
}
constexpr void CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_set__cosmeticStand(::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosmeticStand = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__plusButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plusButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__plusButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plusButton;
}
constexpr void CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_set__plusButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____plusButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__minusButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minusButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__minusButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minusButton;
}
constexpr void CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_set__minusButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minusButton = value;
}
constexpr ::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk>& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__kiosk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kiosk;
}
constexpr ::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk> const& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__kiosk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kiosk;
}
constexpr void CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_set__kiosk(::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____kiosk = value;
}
constexpr ::UnityW<::GlobalNamespace::EvolvingCosmetic>& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__cosmetic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmetic;
}
constexpr ::UnityW<::GlobalNamespace::EvolvingCosmetic> const& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__cosmetic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmetic;
}
constexpr void CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_set__cosmetic(::UnityW<::GlobalNamespace::EvolvingCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosmetic = value;
}
constexpr ::StringW& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__playfabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playfabId;
}
constexpr ::StringW const& CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_get__playfabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playfabId;
}
constexpr void CosmeticRoom::EvolvingCosmeticKioskButtonSet::__cordl_internal_set__playfabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playfabId = value;
}
inline void CosmeticRoom::EvolvingCosmeticKioskButtonSet::RegisterKiosk(::CosmeticRoom::EvolvingCosmeticKiosk*  kiosk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"RegisterKiosk", {}, {::i2c::type_of<::CosmeticRoom::EvolvingCosmeticKiosk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kiosk);
}
inline void CosmeticRoom::EvolvingCosmeticKioskButtonSet::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKioskButtonSet::SetCosmetic(::StringW  playfabId, ::GlobalNamespace::EvolvingCosmetic*  evolvingCosmetic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"SetCosmetic", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::EvolvingCosmetic*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playfabId, evolvingCosmetic);
}
inline void CosmeticRoom::EvolvingCosmeticKioskButtonSet::GoForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"GoForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKioskButtonSet::GoBackward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"GoBackward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKioskButtonSet::RefreshOnPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {"RefreshOnPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::EvolvingCosmeticKioskButtonSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CosmeticRoom::EvolvingCosmeticKioskButtonSet* CosmeticRoom::EvolvingCosmeticKioskButtonSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CosmeticRoom::EvolvingCosmeticKioskButtonSet*>());
}
// Ctor Parameters []
constexpr ::CosmeticRoom::EvolvingCosmeticKioskButtonSet::EvolvingCosmeticKioskButtonSet()   {
}
