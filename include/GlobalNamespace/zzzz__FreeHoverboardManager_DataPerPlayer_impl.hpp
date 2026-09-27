#pragma once
// IWYU pragma private; include "GlobalNamespace/FreeHoverboardManager_DataPerPlayer.hpp"
#include "GlobalNamespace/zzzz__FreeHoverboardManager_DataPerPlayer_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiterWithCooldown_def.hpp"
#include "GlobalNamespace/zzzz__FreeHoverboardInstance_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager_DataPerPlayer::*)(int32_t, ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*)>(&::GlobalNamespace::FreeHoverboardManager_DataPerPlayer::Init)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59544a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>(),
                        {"Init", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer.ReturnBoards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager_DataPerPlayer::*)(::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*)>(&::GlobalNamespace::FreeHoverboardManager_DataPerPlayer::ReturnBoards)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59548d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>(),
                        {"ReturnBoards", {}, {::i2c::type_of<::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer.GetBoard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FreeHoverboardInstance> (::GlobalNamespace::FreeHoverboardManager_DataPerPlayer::*)(int32_t)>(&::GlobalNamespace::FreeHoverboardManager_DataPerPlayer::GetBoard)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5955780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>(),
                        {"GetBoard", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FreeHoverboardManager_DataPerPlayer::Init(int32_t  actorNumber, ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*  freeBoardPool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>(),
                        {"Init", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, actorNumber, freeBoardPool);
}
inline void GlobalNamespace::FreeHoverboardManager_DataPerPlayer::ReturnBoards(::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*  freeBoardPool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>(),
                        {"ReturnBoards", {}, {::i2c::type_of<::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, freeBoardPool);
}
inline ::UnityW<::GlobalNamespace::FreeHoverboardInstance> GlobalNamespace::FreeHoverboardManager_DataPerPlayer::GetBoard(int32_t  boardIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>(),
                        {"GetBoard", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>(*this, ___internal_method, boardIndex);
}
// Ctor Parameters [CppParam { name: "board0", ty: "::UnityW<::GlobalNamespace::FreeHoverboardInstance>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "board1", ty: "::UnityW<::GlobalNamespace::FreeHoverboardInstance>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spamCheck", ty: "::GlobalNamespace::CallLimiterWithCooldown*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer::FreeHoverboardManager_DataPerPlayer(::UnityW<::GlobalNamespace::FreeHoverboardInstance>  board0, ::UnityW<::GlobalNamespace::FreeHoverboardInstance>  board1, ::GlobalNamespace::CallLimiterWithCooldown*  spamCheck) noexcept  {
this->board0 = board0;
this->board1 = board1;
this->spamCheck = spamCheck;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer::FreeHoverboardManager_DataPerPlayer()   {
}
