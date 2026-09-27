#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonUtils.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonUtils_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_def.hpp"
#include "GlobalNamespace/zzzz__PhotonUtils_def.hpp"
#include "GlobalNamespace/zzzz__StaticArrayBag_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils.FetchScratchArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)(int32_t)>(&::GlobalNamespace::PhotonUtils::FetchScratchArray)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5abf454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                        {"FetchScratchArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils.GetNetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (*)(int32_t)>(&::GlobalNamespace::PhotonUtils::GetNetPlayer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5abf9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                        {"GetNetPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils.get_LocalActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::PhotonUtils::get_LocalActorNumber)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ac021c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                        {"get_LocalActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils.get_LocalNetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (*)()>(&::GlobalNamespace::PhotonUtils::get_LocalNetPlayer)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5abf5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                        {"get_LocalNetPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils.TryGetNetSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::NetworkSystem*>)>(&::GlobalNamespace::PhotonUtils::TryGetNetSystem)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5ac00ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                        {"TryGetNetSystem", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkSystem*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PhotonUtils::setStaticF_gNetSystem(::UnityW<::GlobalNamespace::NetworkSystem>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::NetworkSystem>, "gNetSystem", ::GlobalNamespace::PhotonUtils*>(std::forward<::UnityW<::GlobalNamespace::NetworkSystem>>(value));
}
inline ::UnityW<::GlobalNamespace::NetworkSystem> GlobalNamespace::PhotonUtils::getStaticF_gNetSystem()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::NetworkSystem>, "gNetSystem", ::GlobalNamespace::PhotonUtils*>();
}
inline void GlobalNamespace::PhotonUtils::setStaticF_gLocalNetPlayer(::GlobalNamespace::NetPlayer*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::NetPlayer*, "gLocalNetPlayer", ::GlobalNamespace::PhotonUtils*>(std::forward<::GlobalNamespace::NetPlayer*>(value));
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::PhotonUtils::getStaticF_gLocalNetPlayer()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::NetPlayer*, "gLocalNetPlayer", ::GlobalNamespace::PhotonUtils*>();
}
inline void GlobalNamespace::PhotonUtils::setStaticF_gLengthToArgsArray(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*, "gLengthToArgsArray", ::GlobalNamespace::PhotonUtils*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* GlobalNamespace::PhotonUtils::getStaticF_gLengthToArgsArray()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*, "gLengthToArgsArray", ::GlobalNamespace::PhotonUtils*>();
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10, ::by_ref<T11>  arg11, ::by_ref<T12>  arg12)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>(), ::i2c::type_of<::by_ref<T9>>(), ::i2c::type_of<::by_ref<T10>>(), ::i2c::type_of<::by_ref<T11>>(), ::i2c::type_of<::by_ref<T12>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10, ::by_ref<T11>  arg11)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>(), ::i2c::type_of<::by_ref<T9>>(), ::i2c::type_of<::by_ref<T10>>(), ::i2c::type_of<::by_ref<T11>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>(), ::i2c::type_of<::by_ref<T9>>(), ::i2c::type_of<::by_ref<T10>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>(), ::i2c::type_of<::by_ref<T9>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5);
}
template<typename T1,typename T2,typename T3,typename T4>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3);
}
template<typename T1,typename T2>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1, arg2);
}
template<typename T1>
inline void GlobalNamespace::PhotonUtils::ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"ParseArgs", {::i2c::class_of<T1>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args, startIndex, arg1);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10, ::by_ref<T11>  arg11, ::by_ref<T12>  arg12)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>(), ::i2c::type_of<::by_ref<T9>>(), ::i2c::type_of<::by_ref<T10>>(), ::i2c::type_of<::by_ref<T11>>(), ::i2c::type_of<::by_ref<T12>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10, ::by_ref<T11>  arg11)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>(), ::i2c::type_of<::by_ref<T9>>(), ::i2c::type_of<::by_ref<T10>>(), ::i2c::type_of<::by_ref<T11>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>(), ::i2c::type_of<::by_ref<T9>>(), ::i2c::type_of<::by_ref<T10>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>(), ::i2c::type_of<::by_ref<T9>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5, arg6);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4, arg5);
}
template<typename T1,typename T2,typename T3,typename T4>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3, arg4);
}
template<typename T1,typename T2,typename T3>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1, arg2, arg3);
}
template<typename T1,typename T2>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1, arg2);
}
template<typename T1>
inline bool GlobalNamespace::PhotonUtils::TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"TryParseArgs", {::i2c::class_of<T1>()}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T1>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, args, startIndex, arg1);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::MulticastDelegate*>)
inline ::by_ref<::ArrayW<T>> GlobalNamespace::PhotonUtils::FetchDelegatesNonAlloc(T  delegate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                    {"FetchDelegatesNonAlloc", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<T>>>(nullptr, ___internal_method, delegate);
}
inline ::ArrayW<::System::Object*> GlobalNamespace::PhotonUtils::FetchScratchArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                        {"FetchScratchArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method, size);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::PhotonUtils::GetNetPlayer(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                        {"GetNetPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(nullptr, ___internal_method, actorNumber);
}
inline int32_t GlobalNamespace::PhotonUtils::get_LocalActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                        {"get_LocalActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::PhotonUtils::get_LocalNetPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                        {"get_LocalNetPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::PhotonUtils::TryGetNetSystem(::by_ref<::GlobalNamespace::NetworkSystem*>  ns)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils*>(),
                        {"TryGetNetSystem", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkSystem*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ns);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonUtils::PhotonUtils()   {
}
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.InitOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PhotonUtils_CustomTypes::InitOnLoad)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x5ac038c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"InitOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.SerializeColor32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Object*)>(&::GlobalNamespace::PhotonUtils_CustomTypes::SerializeColor32)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ac08c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeColor32", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.DeserializeColor32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::PhotonUtils_CustomTypes::DeserializeColor32)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ac0970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeColor32", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.SerializeBoundsInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Object*)>(&::GlobalNamespace::PhotonUtils_CustomTypes::SerializeBoundsInt)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ac0a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeBoundsInt", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.DeserializeBoundsInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::PhotonUtils_CustomTypes::DeserializeBoundsInt)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ac0ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeBoundsInt", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.SerializeInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Object*)>(&::GlobalNamespace::PhotonUtils_CustomTypes::SerializeInt3)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ac0b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeInt3", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.DeserializeInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::PhotonUtils_CustomTypes::DeserializeInt3)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ac0c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeInt3", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.SerializeVoxelAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Object*)>(&::GlobalNamespace::PhotonUtils_CustomTypes::SerializeVoxelAction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ac0cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeVoxelAction", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.DeserializeVoxelAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::PhotonUtils_CustomTypes::DeserializeVoxelAction)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ac0da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeVoxelAction", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.SerializeVoxelOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Object*)>(&::GlobalNamespace::PhotonUtils_CustomTypes::SerializeVoxelOperation)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ac0e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeVoxelOperation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.DeserializeVoxelOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::PhotonUtils_CustomTypes::DeserializeVoxelOperation)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ac0f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeVoxelOperation", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.SerializeVoxelMineOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Object*)>(&::GlobalNamespace::PhotonUtils_CustomTypes::SerializeVoxelMineOperation)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ac0fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeVoxelMineOperation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.DeserializeVoxelMineOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::PhotonUtils_CustomTypes::DeserializeVoxelMineOperation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ac1094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeVoxelMineOperation", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.SerializeVoxel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::GlobalNamespace::PhotonUtils_CustomTypes::SerializeVoxel)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5ac1144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeVoxel", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonUtils_CustomTypes.DeserializeVoxel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t)>(&::GlobalNamespace::PhotonUtils_CustomTypes::DeserializeVoxel)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5ac130c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeVoxel", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PhotonUtils_CustomTypes::setStaticF__arrayBag(::GlobalNamespace::StaticArrayBag_1<uint8_t>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::StaticArrayBag_1<uint8_t>*, "_arrayBag", ::GlobalNamespace::PhotonUtils_CustomTypes*>(std::forward<::GlobalNamespace::StaticArrayBag_1<uint8_t>*>(value));
}
inline ::GlobalNamespace::StaticArrayBag_1<uint8_t>* GlobalNamespace::PhotonUtils_CustomTypes::getStaticF__arrayBag()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::StaticArrayBag_1<uint8_t>*, "_arrayBag", ::GlobalNamespace::PhotonUtils_CustomTypes*>();
}
inline void GlobalNamespace::PhotonUtils_CustomTypes::setStaticF_memVox(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "memVox", ::GlobalNamespace::PhotonUtils_CustomTypes*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> GlobalNamespace::PhotonUtils_CustomTypes::getStaticF_memVox()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "memVox", ::GlobalNamespace::PhotonUtils_CustomTypes*>();
}
inline void GlobalNamespace::PhotonUtils_CustomTypes::InitOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"InitOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> GlobalNamespace::PhotonUtils_CustomTypes::SerializeColor32(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeColor32", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::System::Object* GlobalNamespace::PhotonUtils_CustomTypes::DeserializeColor32(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeColor32", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, data);
}
inline ::ArrayW<uint8_t> GlobalNamespace::PhotonUtils_CustomTypes::SerializeBoundsInt(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeBoundsInt", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::System::Object* GlobalNamespace::PhotonUtils_CustomTypes::DeserializeBoundsInt(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeBoundsInt", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, data);
}
inline ::ArrayW<uint8_t> GlobalNamespace::PhotonUtils_CustomTypes::SerializeInt3(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeInt3", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::System::Object* GlobalNamespace::PhotonUtils_CustomTypes::DeserializeInt3(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeInt3", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, data);
}
inline ::ArrayW<uint8_t> GlobalNamespace::PhotonUtils_CustomTypes::SerializeVoxelAction(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeVoxelAction", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::System::Object* GlobalNamespace::PhotonUtils_CustomTypes::DeserializeVoxelAction(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeVoxelAction", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, data);
}
inline ::ArrayW<uint8_t> GlobalNamespace::PhotonUtils_CustomTypes::SerializeVoxelOperation(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeVoxelOperation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::System::Object* GlobalNamespace::PhotonUtils_CustomTypes::DeserializeVoxelOperation(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeVoxelOperation", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, data);
}
inline ::ArrayW<uint8_t> GlobalNamespace::PhotonUtils_CustomTypes::SerializeVoxelMineOperation(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeVoxelMineOperation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::System::Object* GlobalNamespace::PhotonUtils_CustomTypes::DeserializeVoxelMineOperation(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeVoxelMineOperation", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, data);
}
inline int16_t GlobalNamespace::PhotonUtils_CustomTypes::SerializeVoxel(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"SerializeVoxel", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, stream, value);
}
inline ::System::Object* GlobalNamespace::PhotonUtils_CustomTypes::DeserializeVoxel(::ExitGames::Client::Photon::StreamBuffer*  stream, int16_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                        {"DeserializeVoxel", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, stream, length);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T GlobalNamespace::PhotonUtils_CustomTypes::CastToStruct(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                    {"CastToStruct", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, bytes);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::ArrayW<uint8_t> GlobalNamespace::PhotonUtils_CustomTypes::CastToBytes(T  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonUtils_CustomTypes*>(),
                    {"CastToBytes", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonUtils_CustomTypes::PhotonUtils_CustomTypes()   {
}
template<typename T>
inline void GlobalNamespace::PhotonUtils_EmptyArray_1<T>::setStaticF_gEmpty(::ArrayW<T>  value)  {
::cordl_internals::setStaticField<::ArrayW<T>, "gEmpty", ::GlobalNamespace::PhotonUtils_EmptyArray_1<T>*>(std::forward<::ArrayW<T>>(value));
}
template<typename T>
inline ::ArrayW<T> GlobalNamespace::PhotonUtils_EmptyArray_1<T>::getStaticF_gEmpty()  {
return ::cordl_internals::getStaticField<::ArrayW<T>, "gEmpty", ::GlobalNamespace::PhotonUtils_EmptyArray_1<T>*>();
}
template<typename T>
inline ::by_ref<::ArrayW<T>> GlobalNamespace::PhotonUtils_EmptyArray_1<T>::Ref()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonUtils_EmptyArray_1<T>*>(),
                        {"Ref", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<T>>>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::PhotonUtils_EmptyArray_1<T>::PhotonUtils_EmptyArray_1()   {
}
