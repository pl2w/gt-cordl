#pragma once
// IWYU pragma private; include "GlobalNamespace/LegacyWorldShareableItem.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "GlobalNamespace/zzzz__LegacyWorldShareableItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LegacyWorldShareableItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegacyWorldShareableItem::*)()>(&::GlobalNamespace::LegacyWorldShareableItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5736954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegacyWorldShareableItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LegacyWorldShareableItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegacyWorldShareableItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LegacyWorldShareableItem* GlobalNamespace::LegacyWorldShareableItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LegacyWorldShareableItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegacyWorldShareableItem::LegacyWorldShareableItem()   {
}
