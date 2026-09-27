#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionPlayerProperties.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__FusionPlayerProperties_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkDictionary_2_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__FusionPlayerProperties_PlayerInfo_def.hpp"
#include "GlobalNamespace/zzzz__FusionPlayerProperties_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.get_netPlayerAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkDictionary_2<::Fusion::PlayerRef,::GlobalNamespace::FusionPlayerProperties_PlayerInfo> (::GlobalNamespace::FusionPlayerProperties::*)()>(&::GlobalNamespace::FusionPlayerProperties::get_netPlayerAttributes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56d7714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"get_netPlayerAttributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.get_PlayerProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FusionPlayerProperties_PlayerInfo (::GlobalNamespace::FusionPlayerProperties::*)()>(&::GlobalNamespace::FusionPlayerProperties::get_PlayerProperties)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56d7724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"get_PlayerProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.OnAttributesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionPlayerProperties::*)()>(&::GlobalNamespace::FusionPlayerProperties::OnAttributesChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56d77ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"OnAttributesChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.RPC_UpdatePlayerAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionPlayerProperties::*)(::GlobalNamespace::FusionPlayerProperties_PlayerInfo, ::Fusion::RpcInfo)>(&::GlobalNamespace::FusionPlayerProperties::RPC_UpdatePlayerAttributes)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x56d7808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"RPC_UpdatePlayerAttributes", {}, {::i2c::type_of<::GlobalNamespace::FusionPlayerProperties_PlayerInfo>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionPlayerProperties::*)()>(&::GlobalNamespace::FusionPlayerProperties::Spawned)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56d7d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.GetDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FusionPlayerProperties::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::FusionPlayerProperties::GetDisplayName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x56d7dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"GetDisplayName", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.GetLocalDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FusionPlayerProperties::*)()>(&::GlobalNamespace::FusionPlayerProperties::GetLocalDisplayName)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x56d7ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"GetLocalDisplayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.GetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FusionPlayerProperties::*)(::Fusion::PlayerRef, ::StringW, ::by_ref<::StringW>)>(&::GlobalNamespace::FusionPlayerProperties::GetProperty)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x56d8008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"GetProperty", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.PlayerHasEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FusionPlayerProperties::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::FusionPlayerProperties::PlayerHasEntry)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56d8234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"PlayerHasEntry", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.RemovePlayerEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionPlayerProperties::*)(::Fusion::PlayerRef)>(&::GlobalNamespace::FusionPlayerProperties::RemovePlayerEntry)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x56d829c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"RemovePlayerEntry", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionPlayerProperties::*)()>(&::GlobalNamespace::FusionPlayerProperties::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d848c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionPlayerProperties::*)(bool)>(&::GlobalNamespace::FusionPlayerProperties::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionPlayerProperties::*)()>(&::GlobalNamespace::FusionPlayerProperties::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d8498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties.RPC_UpdatePlayerAttributes@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::FusionPlayerProperties::RPC_UpdatePlayerAttributes@Invoker)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x56d849c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"RPC_UpdatePlayerAttributes@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*& GlobalNamespace::FusionPlayerProperties::__cordl_internal_get_playerAttributeOnChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerAttributeOnChanged;
}
constexpr ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged* const& GlobalNamespace::FusionPlayerProperties::__cordl_internal_get_playerAttributeOnChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerAttributeOnChanged;
}
constexpr void GlobalNamespace::FusionPlayerProperties::__cordl_internal_set_playerAttributeOnChanged(::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerAttributeOnChanged = value;
}
inline ::Fusion::NetworkDictionary_2<::Fusion::PlayerRef,::GlobalNamespace::FusionPlayerProperties_PlayerInfo> GlobalNamespace::FusionPlayerProperties::get_netPlayerAttributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"get_netPlayerAttributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkDictionary_2<::Fusion::PlayerRef,::GlobalNamespace::FusionPlayerProperties_PlayerInfo>>(this, ___internal_method);
}
inline ::GlobalNamespace::FusionPlayerProperties_PlayerInfo GlobalNamespace::FusionPlayerProperties::get_PlayerProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"get_PlayerProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FusionPlayerProperties_PlayerInfo>(this, ___internal_method);
}
inline void GlobalNamespace::FusionPlayerProperties::OnAttributesChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"OnAttributesChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FusionPlayerProperties::RPC_UpdatePlayerAttributes(::GlobalNamespace::FusionPlayerProperties_PlayerInfo  newInfo, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"RPC_UpdatePlayerAttributes", {}, {::i2c::type_of<::GlobalNamespace::FusionPlayerProperties_PlayerInfo>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newInfo, info);
}
inline void GlobalNamespace::FusionPlayerProperties::Spawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FusionPlayerProperties::GetDisplayName(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"GetDisplayName", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, player);
}
inline ::StringW GlobalNamespace::FusionPlayerProperties::GetLocalDisplayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"GetLocalDisplayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::FusionPlayerProperties::GetProperty(::Fusion::PlayerRef  player, ::StringW  propertyName, ::by_ref<::StringW>  propertyValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"GetProperty", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, propertyName, propertyValue);
}
inline bool GlobalNamespace::FusionPlayerProperties::PlayerHasEntry(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"PlayerHasEntry", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::FusionPlayerProperties::RemovePlayerEntry(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"RemovePlayerEntry", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::FusionPlayerProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FusionPlayerProperties::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::FusionPlayerProperties::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FusionPlayerProperties::RPC_UpdatePlayerAttributes@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties*>(),
                        {"RPC_UpdatePlayerAttributes@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline ::GlobalNamespace::FusionPlayerProperties* GlobalNamespace::FusionPlayerProperties::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FusionPlayerProperties*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionPlayerProperties::FusionPlayerProperties()   {
}
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56d8614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::*)()>(&::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56d86b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56d86c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::*)(::System::IAsyncResult*)>(&::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56d86e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(),
                    {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged* GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged::FusionPlayerProperties_PlayerAttributeOnChanged()   {
}
