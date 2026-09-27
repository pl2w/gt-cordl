#pragma once
// IWYU pragma private; include "GlobalNamespace/SIScannableHand.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIScannableHand_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIScannableHand.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIScannableHand::*)()>(&::GlobalNamespace::SIScannableHand::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5aed264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScannableHand*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIScannableHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIScannableHand::*)()>(&::GlobalNamespace::SIScannableHand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScannableHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIPlayer>& GlobalNamespace::SIScannableHand::__cordl_internal_get_parentPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SIPlayer> const& GlobalNamespace::SIScannableHand::__cordl_internal_get_parentPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentPlayer;
}
constexpr void GlobalNamespace::SIScannableHand::__cordl_internal_set_parentPlayer(::UnityW<::GlobalNamespace::SIPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentPlayer = value;
}
inline void GlobalNamespace::SIScannableHand::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScannableHand*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIScannableHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIScannableHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIScannableHand* GlobalNamespace::SIScannableHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIScannableHand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIScannableHand::SIScannableHand()   {
}
