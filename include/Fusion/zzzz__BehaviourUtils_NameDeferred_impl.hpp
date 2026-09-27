#pragma once
// IWYU pragma private; include "Fusion/BehaviourUtils_NameDeferred.hpp"
#include "Fusion/zzzz__BehaviourUtils_NameDeferred_def.hpp"
#include "Fusion/zzzz__Behaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BehaviourUtils_NameDeferred._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BehaviourUtils_NameDeferred::*)(::Fusion::Behaviour*)>(&::GlobalNamespace::BehaviourUtils_NameDeferred::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f97698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BehaviourUtils_NameDeferred>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BehaviourUtils_NameDeferred.op_Explicit___GlobalNamespace__BehaviourUtils_NameDeferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BehaviourUtils_NameDeferred (*)(::Fusion::Behaviour*)>(&::GlobalNamespace::BehaviourUtils_NameDeferred::op_Explicit___GlobalNamespace__BehaviourUtils_NameDeferred)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f97748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BehaviourUtils_NameDeferred>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BehaviourUtils_NameDeferred.op_Implicit___StringW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BehaviourUtils_NameDeferred)>(&::GlobalNamespace::BehaviourUtils_NameDeferred::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f97764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BehaviourUtils_NameDeferred>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::BehaviourUtils_NameDeferred>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BehaviourUtils_NameDeferred.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BehaviourUtils_NameDeferred::*)()>(&::GlobalNamespace::BehaviourUtils_NameDeferred::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f97778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BehaviourUtils_NameDeferred>(),
                    {::i2c::class_of<::GlobalNamespace::BehaviourUtils_NameDeferred>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BehaviourUtils_NameDeferred::_ctor(::Fusion::Behaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BehaviourUtils_NameDeferred>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, behaviour);
}
inline ::GlobalNamespace::BehaviourUtils_NameDeferred GlobalNamespace::BehaviourUtils_NameDeferred::op_Explicit___GlobalNamespace__BehaviourUtils_NameDeferred(::Fusion::Behaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BehaviourUtils_NameDeferred>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BehaviourUtils_NameDeferred>(nullptr, ___internal_method, behaviour);
}
inline ::StringW GlobalNamespace::BehaviourUtils_NameDeferred::op_Implicit___StringW(::GlobalNamespace::BehaviourUtils_NameDeferred  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BehaviourUtils_NameDeferred>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::BehaviourUtils_NameDeferred>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, wrapper);
}
inline ::StringW GlobalNamespace::BehaviourUtils_NameDeferred::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BehaviourUtils_NameDeferred>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_behaviour", ty: "::UnityW<::Fusion::Behaviour>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BehaviourUtils_NameDeferred::BehaviourUtils_NameDeferred(::UnityW<::Fusion::Behaviour>  _behaviour) noexcept  {
this->_behaviour = _behaviour;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BehaviourUtils_NameDeferred::BehaviourUtils_NameDeferred()   {
}
