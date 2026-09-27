#pragma once
// IWYU pragma private; include "com/AnotherAxiom/MonkeArcade/Joust/JoustGame.hpp"
#include "GlobalNamespace/zzzz__ArcadeGame_impl.hpp"
#include "com/AnotherAxiom/MonkeArcade/Joust/zzzz__JoustPlayer_impl.hpp"
#include "com/AnotherAxiom/MonkeArcade/Joust/zzzz__JoustGame_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeButtons_def.hpp"
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustGame.GetNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::*)()>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::GetNetworkState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cd5470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(),
                    {::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustGame.SetNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::*)(::ArrayW<uint8_t>)>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::SetNetworkState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd54b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(),
                    {::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustGame.ButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::ButtonDown)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cd54b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(),
                    {::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustGame.ButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::ButtonUp)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cd554c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(),
                    {::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustGame.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::*)()>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cd55a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustGame.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::*)()>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::Update)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5cd5614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustGame.OnTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::*)()>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::OnTimeout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd572c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(),
                    {::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustGame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::*)()>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cd5730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer>>& com::AnotherAxiom::MonkeArcade::Joust::JoustGame::__cordl_internal_get_joustPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joustPlayers;
}
constexpr ::ArrayW<::UnityW<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer>> const& com::AnotherAxiom::MonkeArcade::Joust::JoustGame::__cordl_internal_get_joustPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joustPlayers;
}
constexpr void com::AnotherAxiom::MonkeArcade::Joust::JoustGame::__cordl_internal_set_joustPlayers(::ArrayW<::UnityW<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joustPlayers = value;
}
inline ::ArrayW<uint8_t> com::AnotherAxiom::MonkeArcade::Joust::JoustGame::GetNetworkState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void com::AnotherAxiom::MonkeArcade::Joust::JoustGame::SetNetworkState(::ArrayW<uint8_t>  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void com::AnotherAxiom::MonkeArcade::Joust::JoustGame::ButtonDown(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, button);
}
inline void com::AnotherAxiom::MonkeArcade::Joust::JoustGame::ButtonUp(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, button);
}
inline void com::AnotherAxiom::MonkeArcade::Joust::JoustGame::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void com::AnotherAxiom::MonkeArcade::Joust::JoustGame::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void com::AnotherAxiom::MonkeArcade::Joust::JoustGame::OnTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void com::AnotherAxiom::MonkeArcade::Joust::JoustGame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::com::AnotherAxiom::MonkeArcade::Joust::JoustGame* com::AnotherAxiom::MonkeArcade::Joust::JoustGame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*>());
}
// Ctor Parameters []
constexpr ::com::AnotherAxiom::MonkeArcade::Joust::JoustGame::JoustGame()   {
}
