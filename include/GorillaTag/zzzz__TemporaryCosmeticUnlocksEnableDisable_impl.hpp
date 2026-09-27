#pragma once
// IWYU pragma private; include "GorillaTag/TemporaryCosmeticUnlocksEnableDisable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/zzzz__TemporaryCosmeticUnlocksEnableDisable_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticWardrobe_def.hpp"
#include "GorillaTag/zzzz__TickSystemTimer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTag::TemporaryCosmeticUnlocksEnableDisable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TemporaryCosmeticUnlocksEnableDisable::*)()>(&::GorillaTag::TemporaryCosmeticUnlocksEnableDisable::Awake)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5d295c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TemporaryCosmeticUnlocksEnableDisable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TemporaryCosmeticUnlocksEnableDisable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TemporaryCosmeticUnlocksEnableDisable::*)()>(&::GorillaTag::TemporaryCosmeticUnlocksEnableDisable::OnEnable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d297d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TemporaryCosmeticUnlocksEnableDisable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TemporaryCosmeticUnlocksEnableDisable.CheckWardrobeRady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TemporaryCosmeticUnlocksEnableDisable::*)()>(&::GorillaTag::TemporaryCosmeticUnlocksEnableDisable::CheckWardrobeRady)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5d29890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TemporaryCosmeticUnlocksEnableDisable*>(),
                        {"CheckWardrobeRady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TemporaryCosmeticUnlocksEnableDisable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TemporaryCosmeticUnlocksEnableDisable::*)()>(&::GorillaTag::TemporaryCosmeticUnlocksEnableDisable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d2998c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TemporaryCosmeticUnlocksEnableDisable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CosmeticWardrobe>& GorillaTag::TemporaryCosmeticUnlocksEnableDisable::__cordl_internal_get_m_wardrobe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_wardrobe;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticWardrobe> const& GorillaTag::TemporaryCosmeticUnlocksEnableDisable::__cordl_internal_get_m_wardrobe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_wardrobe;
}
constexpr void GorillaTag::TemporaryCosmeticUnlocksEnableDisable::__cordl_internal_set_m_wardrobe(::UnityW<::GlobalNamespace::CosmeticWardrobe>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_wardrobe = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::TemporaryCosmeticUnlocksEnableDisable::__cordl_internal_get_m_cosmeticAreaTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cosmeticAreaTrigger;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::TemporaryCosmeticUnlocksEnableDisable::__cordl_internal_get_m_cosmeticAreaTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cosmeticAreaTrigger;
}
constexpr void GorillaTag::TemporaryCosmeticUnlocksEnableDisable::__cordl_internal_set_m_cosmeticAreaTrigger(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cosmeticAreaTrigger = value;
}
constexpr ::GorillaTag::TickSystemTimer*& GorillaTag::TemporaryCosmeticUnlocksEnableDisable::__cordl_internal_get_m_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_timer;
}
constexpr ::GorillaTag::TickSystemTimer* const& GorillaTag::TemporaryCosmeticUnlocksEnableDisable::__cordl_internal_get_m_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_timer;
}
constexpr void GorillaTag::TemporaryCosmeticUnlocksEnableDisable::__cordl_internal_set_m_timer(::GorillaTag::TickSystemTimer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_timer = value;
}
inline void GorillaTag::TemporaryCosmeticUnlocksEnableDisable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TemporaryCosmeticUnlocksEnableDisable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TemporaryCosmeticUnlocksEnableDisable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TemporaryCosmeticUnlocksEnableDisable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TemporaryCosmeticUnlocksEnableDisable::CheckWardrobeRady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TemporaryCosmeticUnlocksEnableDisable*>(),
                        {"CheckWardrobeRady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TemporaryCosmeticUnlocksEnableDisable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TemporaryCosmeticUnlocksEnableDisable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::TemporaryCosmeticUnlocksEnableDisable* GorillaTag::TemporaryCosmeticUnlocksEnableDisable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::TemporaryCosmeticUnlocksEnableDisable*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::TemporaryCosmeticUnlocksEnableDisable::TemporaryCosmeticUnlocksEnableDisable()   {
}
