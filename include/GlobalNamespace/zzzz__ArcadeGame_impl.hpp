#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeGame.hpp"
#include "GlobalNamespace/zzzz__ArcadeButtons_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__ArcadeGame_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeButtons_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeMachine_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)()>(&::GlobalNamespace::ArcadeGame::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d201c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.InitializeMemoryStreams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)()>(&::GlobalNamespace::ArcadeGame::InitializeMemoryStreams)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x56d2020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"InitializeMemoryStreams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.SetMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)(::GlobalNamespace::ArcadeMachine*)>(&::GlobalNamespace::ArcadeGame::SetMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d20d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"SetMachine", {}, {::i2c::type_of<::GlobalNamespace::ArcadeMachine*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.getButtonState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcadeGame::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::GlobalNamespace::ArcadeGame::getButtonState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56d20e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"getButtonState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.OnInputStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::GlobalNamespace::ArcadeGame::OnInputStateChange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x56d2118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"OnInputStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.GetNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::ArcadeGame::*)()>(&::GlobalNamespace::ArcadeGame::GetNetworkState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.SetNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::ArcadeGame::SetNetworkState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.WrapNetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::IO::MemoryStream*)>(&::GlobalNamespace::ArcadeGame::WrapNetState)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x56d21f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"WrapNetState", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IO::MemoryStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.UnwrapNetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::ArcadeGame::UnwrapNetState)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x56d22e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"UnwrapNetState", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.SwapNetStateBuffersAndStreams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)()>(&::GlobalNamespace::ArcadeGame::SwapNetStateBuffersAndStreams)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x56d2400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"SwapNetStateBuffersAndStreams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.PlaySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)(int32_t, int32_t)>(&::GlobalNamespace::ArcadeGame::PlaySound)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56d245c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"PlaySound", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.IsPlayerLocallyControlled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcadeGame::*)(int32_t)>(&::GlobalNamespace::ArcadeGame::IsPlayerLocallyControlled)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56d25f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"IsPlayerLocallyControlled", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.ButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::GlobalNamespace::ArcadeGame::ButtonUp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.ButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::GlobalNamespace::ArcadeGame::ButtonDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.OnTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)()>(&::GlobalNamespace::ArcadeGame::OnTimeout)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.ReadPlayerDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)(int32_t, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArcadeGame::ReadPlayerDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d2644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame.WritePlayerDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)(int32_t, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArcadeGame::WritePlayerDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d2648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeGame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeGame::*)()>(&::GlobalNamespace::ArcadeGame::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56d264c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& GlobalNamespace::ArcadeGame::__cordl_internal_get_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::ArcadeGame::__cordl_internal_get_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr void GlobalNamespace::ArcadeGame::__cordl_internal_set_Scale(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scale = value;
}
constexpr ::ArrayW<::GlobalNamespace::ArcadeButtons>& GlobalNamespace::ArcadeGame::__cordl_internal_get_playerInputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInputs;
}
constexpr ::ArrayW<::GlobalNamespace::ArcadeButtons> const& GlobalNamespace::ArcadeGame::__cordl_internal_get_playerInputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInputs;
}
constexpr void GlobalNamespace::ArcadeGame::__cordl_internal_set_playerInputs(::ArrayW<::GlobalNamespace::ArcadeButtons>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerInputs = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::ArcadeGame::__cordl_internal_get_audioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::ArcadeGame::__cordl_internal_get_audioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr void GlobalNamespace::ArcadeGame::__cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClips = value;
}
constexpr ::UnityW<::GlobalNamespace::ArcadeMachine>& GlobalNamespace::ArcadeGame::__cordl_internal_get_machine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___machine;
}
constexpr ::UnityW<::GlobalNamespace::ArcadeMachine> const& GlobalNamespace::ArcadeGame::__cordl_internal_get_machine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___machine;
}
constexpr void GlobalNamespace::ArcadeGame::__cordl_internal_set_machine(::UnityW<::GlobalNamespace::ArcadeMachine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___machine = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::ArcadeGame::__cordl_internal_get_netStateBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateBuffer;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::ArcadeGame::__cordl_internal_get_netStateBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateBuffer;
}
constexpr void GlobalNamespace::ArcadeGame::__cordl_internal_set_netStateBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netStateBuffer = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::ArcadeGame::__cordl_internal_get_netStateBufferAlt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateBufferAlt;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::ArcadeGame::__cordl_internal_get_netStateBufferAlt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateBufferAlt;
}
constexpr void GlobalNamespace::ArcadeGame::__cordl_internal_set_netStateBufferAlt(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netStateBufferAlt = value;
}
constexpr ::System::IO::MemoryStream*& GlobalNamespace::ArcadeGame::__cordl_internal_get_netStateMemStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateMemStream;
}
constexpr ::System::IO::MemoryStream* const& GlobalNamespace::ArcadeGame::__cordl_internal_get_netStateMemStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateMemStream;
}
constexpr void GlobalNamespace::ArcadeGame::__cordl_internal_set_netStateMemStream(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netStateMemStream = value;
}
constexpr ::System::IO::MemoryStream*& GlobalNamespace::ArcadeGame::__cordl_internal_get_netStateMemStreamAlt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateMemStreamAlt;
}
constexpr ::System::IO::MemoryStream* const& GlobalNamespace::ArcadeGame::__cordl_internal_get_netStateMemStreamAlt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateMemStreamAlt;
}
constexpr void GlobalNamespace::ArcadeGame::__cordl_internal_set_netStateMemStreamAlt(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netStateMemStreamAlt = value;
}
constexpr bool& GlobalNamespace::ArcadeGame::__cordl_internal_get_memoryStreamsInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memoryStreamsInitialized;
}
constexpr bool const& GlobalNamespace::ArcadeGame::__cordl_internal_get_memoryStreamsInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memoryStreamsInitialized;
}
constexpr void GlobalNamespace::ArcadeGame::__cordl_internal_set_memoryStreamsInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memoryStreamsInitialized = value;
}
inline void GlobalNamespace::ArcadeGame::setStaticF_NetStateBufferSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "NetStateBufferSize", ::GlobalNamespace::ArcadeGame*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ArcadeGame::getStaticF_NetStateBufferSize()  {
return ::cordl_internals::getStaticField<int32_t, "NetStateBufferSize", ::GlobalNamespace::ArcadeGame*>();
}
inline void GlobalNamespace::ArcadeGame::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeGame::InitializeMemoryStreams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"InitializeMemoryStreams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeGame::SetMachine(::GlobalNamespace::ArcadeMachine*  machine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"SetMachine", {}, {::i2c::type_of<::GlobalNamespace::ArcadeMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, machine);
}
inline bool GlobalNamespace::ArcadeGame::getButtonState(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"getButtonState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, button);
}
inline void GlobalNamespace::ArcadeGame::OnInputStateChange(int32_t  player, ::GlobalNamespace::ArcadeButtons  buttons)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"OnInputStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, buttons);
}
inline ::ArrayW<uint8_t> GlobalNamespace::ArcadeGame::GetNetworkState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeGame::SetNetworkState(::ArrayW<uint8_t>  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::ArcadeGame::WrapNetState(::System::Object*  ns, ::System::IO::MemoryStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"WrapNetState", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IO::MemoryStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ns, stream);
}
inline ::System::Object* GlobalNamespace::ArcadeGame::UnwrapNetState(::ArrayW<uint8_t>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"UnwrapNetState", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, b);
}
inline void GlobalNamespace::ArcadeGame::SwapNetStateBuffersAndStreams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"SwapNetStateBuffersAndStreams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeGame::PlaySound(int32_t  clipId, int32_t  prio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"PlaySound", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipId, prio);
}
inline bool GlobalNamespace::ArcadeGame::IsPlayerLocallyControlled(int32_t  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {"IsPlayerLocallyControlled", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::ArcadeGame::ButtonUp(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, button);
}
inline void GlobalNamespace::ArcadeGame::ButtonDown(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, button);
}
inline void GlobalNamespace::ArcadeGame::OnTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeGame::ReadPlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, stream, info);
}
inline void GlobalNamespace::ArcadeGame::WritePlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeGame*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, stream, info);
}
inline void GlobalNamespace::ArcadeGame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeGame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcadeGame* GlobalNamespace::ArcadeGame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArcadeGame*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcadeGame::ArcadeGame()   {
}
