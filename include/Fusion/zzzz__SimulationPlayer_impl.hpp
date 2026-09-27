#pragma once
// IWYU pragma private; include "Fusion/SimulationPlayer.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SimulationPlayer_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationPlayer::*)()>(&::Fusion::SimulationPlayer::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6006680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::PlayerRef& Fusion::SimulationPlayer::__cordl_internal_get_Ref()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ref;
}
constexpr ::Fusion::PlayerRef const& Fusion::SimulationPlayer::__cordl_internal_get_Ref() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ref;
}
constexpr void Fusion::SimulationPlayer::__cordl_internal_set_Ref(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ref = value;
}
inline void Fusion::SimulationPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationPlayer* Fusion::SimulationPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationPlayer*>());
}
// Ctor Parameters []
constexpr ::Fusion::SimulationPlayer::SimulationPlayer()   {
}
