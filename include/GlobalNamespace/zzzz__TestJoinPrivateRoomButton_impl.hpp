#pragma once
// IWYU pragma private; include "GlobalNamespace/TestJoinPrivateRoomButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TestJoinPrivateRoomButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestJoinPrivateRoomButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestJoinPrivateRoomButton::*)()>(&::GlobalNamespace::TestJoinPrivateRoomButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae0044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestJoinPrivateRoomButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TestJoinPrivateRoomButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestJoinPrivateRoomButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TestJoinPrivateRoomButton* GlobalNamespace::TestJoinPrivateRoomButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestJoinPrivateRoomButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestJoinPrivateRoomButton::TestJoinPrivateRoomButton()   {
}
