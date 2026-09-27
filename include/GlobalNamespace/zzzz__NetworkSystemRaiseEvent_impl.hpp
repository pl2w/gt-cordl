#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemRaiseEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemRaiseEvent_def.hpp"
#include "GlobalNamespace/zzzz__NetEventOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemRaiseEvent.RaiseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, ::System::Object*)>(&::GlobalNamespace::NetworkSystemRaiseEvent::RaiseEvent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56eb800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemRaiseEvent*>(),
                        {"RaiseEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemRaiseEvent.RaiseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, ::System::Object*, ::GlobalNamespace::NetEventOptions*, bool)>(&::GlobalNamespace::NetworkSystemRaiseEvent::RaiseEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x56eb8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemRaiseEvent*>(),
                        {"RaiseEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NetEventOptions*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystemRaiseEvent::setStaticF_neoOthers(::GlobalNamespace::NetEventOptions*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::NetEventOptions*, "neoOthers", ::GlobalNamespace::NetworkSystemRaiseEvent*>(std::forward<::GlobalNamespace::NetEventOptions*>(value));
}
inline ::GlobalNamespace::NetEventOptions* GlobalNamespace::NetworkSystemRaiseEvent::getStaticF_neoOthers()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::NetEventOptions*, "neoOthers", ::GlobalNamespace::NetworkSystemRaiseEvent*>();
}
inline void GlobalNamespace::NetworkSystemRaiseEvent::setStaticF_neoMaster(::GlobalNamespace::NetEventOptions*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::NetEventOptions*, "neoMaster", ::GlobalNamespace::NetworkSystemRaiseEvent*>(std::forward<::GlobalNamespace::NetEventOptions*>(value));
}
inline ::GlobalNamespace::NetEventOptions* GlobalNamespace::NetworkSystemRaiseEvent::getStaticF_neoMaster()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::NetEventOptions*, "neoMaster", ::GlobalNamespace::NetworkSystemRaiseEvent*>();
}
inline void GlobalNamespace::NetworkSystemRaiseEvent::setStaticF_neoTarget(::GlobalNamespace::NetEventOptions*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::NetEventOptions*, "neoTarget", ::GlobalNamespace::NetworkSystemRaiseEvent*>(std::forward<::GlobalNamespace::NetEventOptions*>(value));
}
inline ::GlobalNamespace::NetEventOptions* GlobalNamespace::NetworkSystemRaiseEvent::getStaticF_neoTarget()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::NetEventOptions*, "neoTarget", ::GlobalNamespace::NetworkSystemRaiseEvent*>();
}
inline void GlobalNamespace::NetworkSystemRaiseEvent::RaiseEvent(uint8_t  code, ::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemRaiseEvent*>(),
                        {"RaiseEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, code, data);
}
inline void GlobalNamespace::NetworkSystemRaiseEvent::RaiseEvent(uint8_t  code, ::System::Object*  data, ::GlobalNamespace::NetEventOptions*  options, bool  reliable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemRaiseEvent*>(),
                        {"RaiseEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::NetEventOptions*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, code, data, options, reliable);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemRaiseEvent::NetworkSystemRaiseEvent()   {
}
