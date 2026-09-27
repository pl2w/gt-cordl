#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeader_PlayerUniqueDataChanges.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueDataChanges__Changes_e__FixedBuffer_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueDataChanges_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueDataChanges__Changes_e__FixedBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges.get_MaxTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges::*)()>(&::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges::get_MaxTick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fabdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges>(),
                        {"get_MaxTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer& GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges::__cordl_internal_get_Changes()  {
return this->___Changes;
}
constexpr ::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer const& GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges::__cordl_internal_get_Changes() const {
return this->___Changes;
}
constexpr void GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges::__cordl_internal_set_Changes(::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer  value)  {
this->___Changes = value;
}
inline int32_t GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges::get_MaxTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges>(),
                        {"get_MaxTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Changes", ty: "::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges::NetworkObjectHeader_PlayerUniqueDataChanges(::GlobalNamespace::PlayerUniqueDataChanges_NetworkObjectHeader__Changes_e__FixedBuffer  Changes) noexcept  {
this->Changes = Changes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges::NetworkObjectHeader_PlayerUniqueDataChanges()   {
}
