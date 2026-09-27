#pragma once
// IWYU pragma private; include "GlobalNamespace/IBuilderPieceFunctional.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBuilderPieceFunctional.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBuilderPieceFunctional::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::IBuilderPieceFunctional::OnStateChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(),
                    {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBuilderPieceFunctional.OnStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBuilderPieceFunctional::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::IBuilderPieceFunctional::OnStateRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(),
                    {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBuilderPieceFunctional.IsStateValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IBuilderPieceFunctional::*)(uint8_t)>(&::GlobalNamespace::IBuilderPieceFunctional::IsStateValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(),
                    {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBuilderPieceFunctional.FunctionalPieceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBuilderPieceFunctional::*)()>(&::GlobalNamespace::IBuilderPieceFunctional::FunctionalPieceUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(),
                    {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBuilderPieceFunctional.FunctionalPieceFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBuilderPieceFunctional::*)()>(&::GlobalNamespace::IBuilderPieceFunctional::FunctionalPieceFixedUpdate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57bed00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(),
                    {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBuilderPieceFunctional.GetInteractionDistace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IBuilderPieceFunctional::*)()>(&::GlobalNamespace::IBuilderPieceFunctional::GetInteractionDistace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57bed38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(),
                    {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IBuilderPieceFunctional::OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline void GlobalNamespace::IBuilderPieceFunctional::OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline bool GlobalNamespace::IBuilderPieceFunctional::IsStateValid(uint8_t  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GlobalNamespace::IBuilderPieceFunctional::FunctionalPieceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IBuilderPieceFunctional::FunctionalPieceFixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::IBuilderPieceFunctional::GetInteractionDistace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IBuilderPieceFunctional*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
