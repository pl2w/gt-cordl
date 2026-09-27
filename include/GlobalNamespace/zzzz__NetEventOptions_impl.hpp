#pragma once
// IWYU pragma private; include "GlobalNamespace/NetEventOptions.hpp"
#include "GlobalNamespace/zzzz__NetEventOptions_RecieverTarget_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetEventOptions_def.hpp"
#include "GlobalNamespace/zzzz__NetEventOptions_RecieverTarget_def.hpp"
#include "Photon/Realtime/zzzz__WebFlags_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetEventOptions.get_HasWebHooks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetEventOptions::*)()>(&::GlobalNamespace::NetEventOptions::get_HasWebHooks)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56ebb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetEventOptions*>(),
                        {"get_HasWebHooks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetEventOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetEventOptions::*)()>(&::GlobalNamespace::NetEventOptions::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56ebb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetEventOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetEventOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetEventOptions::*)(int32_t, ::ArrayW<int32_t>, uint8_t)>(&::GlobalNamespace::NetEventOptions::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x56ebbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetEventOptions*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetEventOptions_RecieverTarget& GlobalNamespace::NetEventOptions::__cordl_internal_get_Reciever()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reciever;
}
constexpr ::GlobalNamespace::NetEventOptions_RecieverTarget const& GlobalNamespace::NetEventOptions::__cordl_internal_get_Reciever() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reciever;
}
constexpr void GlobalNamespace::NetEventOptions::__cordl_internal_set_Reciever(::GlobalNamespace::NetEventOptions_RecieverTarget  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Reciever = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::NetEventOptions::__cordl_internal_get_TargetActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetActors;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::NetEventOptions::__cordl_internal_get_TargetActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetActors;
}
constexpr void GlobalNamespace::NetEventOptions::__cordl_internal_set_TargetActors(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetActors = value;
}
constexpr ::Photon::Realtime::WebFlags*& GlobalNamespace::NetEventOptions::__cordl_internal_get_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr ::Photon::Realtime::WebFlags* const& GlobalNamespace::NetEventOptions::__cordl_internal_get_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr void GlobalNamespace::NetEventOptions::__cordl_internal_set_Flags(::Photon::Realtime::WebFlags*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Flags = value;
}
inline bool GlobalNamespace::NetEventOptions::get_HasWebHooks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetEventOptions*>(),
                        {"get_HasWebHooks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NetEventOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetEventOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetEventOptions::_ctor(int32_t  reciever, ::ArrayW<int32_t>  actors, uint8_t  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetEventOptions*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reciever, actors, flags);
}
inline ::GlobalNamespace::NetEventOptions* GlobalNamespace::NetEventOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetEventOptions*>());
}
inline ::GlobalNamespace::NetEventOptions* GlobalNamespace::NetEventOptions::New_ctor(int32_t  reciever, ::ArrayW<int32_t>  actors, uint8_t  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetEventOptions*>(reciever, actors, flags));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetEventOptions::NetEventOptions()   {
}
