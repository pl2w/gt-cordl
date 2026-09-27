#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntGameModeRPCs.hpp"
#include "GlobalNamespace/zzzz__RPCNetworkBase_impl.hpp"
#include "GlobalNamespace/zzzz__PropHuntGameModeRPCs_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSerializer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPropHuntGameManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaWrappedSerializer_def.hpp"
#include "GlobalNamespace/zzzz__IWrappedSerializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHuntGameModeRPCs.SetClassTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntGameModeRPCs::*)(::GlobalNamespace::IWrappedSerializable*, ::GlobalNamespace::GorillaWrappedSerializer*)>(&::GlobalNamespace::PropHuntGameModeRPCs::SetClassTarget)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5637dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PropHuntGameModeRPCs*>(),
                    {::i2c::class_of<::GlobalNamespace::PropHuntGameModeRPCs*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntGameModeRPCs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntGameModeRPCs::*)()>(&::GlobalNamespace::PropHuntGameModeRPCs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5637ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntGameModeRPCs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& GlobalNamespace::PropHuntGameModeRPCs::__cordl_internal_get_serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& GlobalNamespace::PropHuntGameModeRPCs::__cordl_internal_get_serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr void GlobalNamespace::PropHuntGameModeRPCs::__cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializer = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>& GlobalNamespace::PropHuntGameModeRPCs::__cordl_internal_get_propHuntManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHuntManager;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager> const& GlobalNamespace::PropHuntGameModeRPCs::__cordl_internal_get_propHuntManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHuntManager;
}
constexpr void GlobalNamespace::PropHuntGameModeRPCs::__cordl_internal_set_propHuntManager(::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHuntManager = value;
}
inline void GlobalNamespace::PropHuntGameModeRPCs::SetClassTarget(::GlobalNamespace::IWrappedSerializable*  target, ::GlobalNamespace::GorillaWrappedSerializer*  netHandler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PropHuntGameModeRPCs*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, netHandler);
}
inline void GlobalNamespace::PropHuntGameModeRPCs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntGameModeRPCs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropHuntGameModeRPCs* GlobalNamespace::PropHuntGameModeRPCs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHuntGameModeRPCs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntGameModeRPCs::PropHuntGameModeRPCs()   {
}
