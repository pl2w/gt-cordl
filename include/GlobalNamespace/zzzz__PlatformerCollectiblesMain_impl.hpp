#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformerCollectiblesMain.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformerCollectiblesMain_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformerCollectiblesMain.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformerCollectiblesMain::*)()>(&::GlobalNamespace::PlatformerCollectiblesMain::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55e8284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformerCollectiblesMain*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformerCollectiblesMain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformerCollectiblesMain::*)()>(&::GlobalNamespace::PlatformerCollectiblesMain::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55e83d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformerCollectiblesMain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlatformerCollectiblesMain::__cordl_internal_get_Coin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Coin;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlatformerCollectiblesMain::__cordl_internal_get_Coin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Coin;
}
constexpr void GlobalNamespace::PlatformerCollectiblesMain::__cordl_internal_set_Coin(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Coin = value;
}
constexpr float_t& GlobalNamespace::PlatformerCollectiblesMain::__cordl_internal_get_CoinGridCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoinGridCount;
}
constexpr float_t const& GlobalNamespace::PlatformerCollectiblesMain::__cordl_internal_get_CoinGridCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoinGridCount;
}
constexpr void GlobalNamespace::PlatformerCollectiblesMain::__cordl_internal_set_CoinGridCount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CoinGridCount = value;
}
constexpr float_t& GlobalNamespace::PlatformerCollectiblesMain::__cordl_internal_get_CoinGridSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoinGridSize;
}
constexpr float_t const& GlobalNamespace::PlatformerCollectiblesMain::__cordl_internal_get_CoinGridSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoinGridSize;
}
constexpr void GlobalNamespace::PlatformerCollectiblesMain::__cordl_internal_set_CoinGridSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CoinGridSize = value;
}
inline void GlobalNamespace::PlatformerCollectiblesMain::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformerCollectiblesMain*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformerCollectiblesMain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformerCollectiblesMain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformerCollectiblesMain* GlobalNamespace::PlatformerCollectiblesMain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformerCollectiblesMain*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformerCollectiblesMain::PlatformerCollectiblesMain()   {
}
