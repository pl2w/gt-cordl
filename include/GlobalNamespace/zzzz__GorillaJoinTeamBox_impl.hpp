#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaJoinTeamBox.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaJoinTeamBox_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaJoinTeamBox.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaJoinTeamBox::*)()>(&::GlobalNamespace::GorillaJoinTeamBox::OnBoxTriggered)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5919a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaJoinTeamBox*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaJoinTeamBox*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaJoinTeamBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaJoinTeamBox::*)()>(&::GlobalNamespace::GorillaJoinTeamBox::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5919b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaJoinTeamBox*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaJoinTeamBox::__cordl_internal_get_joinRedTeam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinRedTeam;
}
constexpr bool const& GlobalNamespace::GorillaJoinTeamBox::__cordl_internal_get_joinRedTeam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinRedTeam;
}
constexpr void GlobalNamespace::GorillaJoinTeamBox::__cordl_internal_set_joinRedTeam(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinRedTeam = value;
}
inline void GlobalNamespace::GorillaJoinTeamBox::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaJoinTeamBox*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaJoinTeamBox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaJoinTeamBox*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaJoinTeamBox* GlobalNamespace::GorillaJoinTeamBox::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaJoinTeamBox*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaJoinTeamBox::GorillaJoinTeamBox()   {
}
