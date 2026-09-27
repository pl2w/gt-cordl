#pragma once
// IWYU pragma private; include "GlobalNamespace/LegacyWorldTargetItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LegacyWorldTargetItem_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LegacyWorldTargetItem.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LegacyWorldTargetItem::*)()>(&::GlobalNamespace::LegacyWorldTargetItem::IsValid)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5736914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegacyWorldTargetItem*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegacyWorldTargetItem.Invalidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegacyWorldTargetItem::*)()>(&::GlobalNamespace::LegacyWorldTargetItem::Invalidate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5736938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegacyWorldTargetItem*>(),
                        {"Invalidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegacyWorldTargetItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegacyWorldTargetItem::*)()>(&::GlobalNamespace::LegacyWorldTargetItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573694c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegacyWorldTargetItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::Player*& GlobalNamespace::LegacyWorldTargetItem::__cordl_internal_get_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr ::Photon::Realtime::Player* const& GlobalNamespace::LegacyWorldTargetItem::__cordl_internal_get_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr void GlobalNamespace::LegacyWorldTargetItem::__cordl_internal_set_owner(::Photon::Realtime::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owner = value;
}
constexpr int32_t& GlobalNamespace::LegacyWorldTargetItem::__cordl_internal_get_itemIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIdx;
}
constexpr int32_t const& GlobalNamespace::LegacyWorldTargetItem::__cordl_internal_get_itemIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIdx;
}
constexpr void GlobalNamespace::LegacyWorldTargetItem::__cordl_internal_set_itemIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemIdx = value;
}
inline bool GlobalNamespace::LegacyWorldTargetItem::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegacyWorldTargetItem*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LegacyWorldTargetItem::Invalidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegacyWorldTargetItem*>(),
                        {"Invalidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LegacyWorldTargetItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegacyWorldTargetItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LegacyWorldTargetItem* GlobalNamespace::LegacyWorldTargetItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LegacyWorldTargetItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegacyWorldTargetItem::LegacyWorldTargetItem()   {
}
