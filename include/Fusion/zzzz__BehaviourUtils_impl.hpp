#pragma once
// IWYU pragma private; include "Fusion/BehaviourUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__BehaviourUtils_def.hpp"
#include "Fusion/zzzz__BehaviourUtils_DeferredJoin_def.hpp"
#include "Fusion/zzzz__BehaviourUtils_NameDeferred_def.hpp"
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::Fusion::BehaviourUtils.IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Behaviour*)>(&::Fusion::BehaviourUtils::IsNull)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f97534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsNull", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BehaviourUtils.IsNotNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Behaviour*)>(&::Fusion::BehaviourUtils::IsNotNull)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f97540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsNotNull", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BehaviourUtils.IsAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkRunner*)>(&::Fusion::BehaviourUtils::IsAlive)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f9754c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsAlive", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BehaviourUtils.IsNotAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkRunner*)>(&::Fusion::BehaviourUtils::IsNotAlive)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f975a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsNotAlive", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BehaviourUtils.IsAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::SimulationBehaviour*)>(&::Fusion::BehaviourUtils::IsAlive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f97608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsAlive", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BehaviourUtils.IsNotAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::SimulationBehaviour*)>(&::Fusion::BehaviourUtils::IsNotAlive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f9761c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsNotAlive", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BehaviourUtils.IsAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObject*)>(&::Fusion::BehaviourUtils::IsAlive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f97634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsAlive", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BehaviourUtils.IsNotAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObject*)>(&::Fusion::BehaviourUtils::IsNotAlive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f97648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsNotAlive", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BehaviourUtils.IsSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Behaviour*, ::Fusion::Behaviour*)>(&::Fusion::BehaviourUtils::IsSame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f97660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsSame", {}, {::i2c::type_of<::Fusion::Behaviour*>(), ::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BehaviourUtils.IsSameNotNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Behaviour*, ::Fusion::Behaviour*)>(&::Fusion::BehaviourUtils::IsSameNotNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9766c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsSameNotNull", {}, {::i2c::type_of<::Fusion::Behaviour*>(), ::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BehaviourUtils.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BehaviourUtils_NameDeferred (*)(::Fusion::Behaviour*)>(&::Fusion::BehaviourUtils::GetName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f9767c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"GetName", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BehaviourUtils.Join
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BehaviourUtils_DeferredJoin (*)(::System::Collections::IEnumerable*)>(&::Fusion::BehaviourUtils::Join)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f976a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"Join", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::BehaviourUtils::IsNull(::Fusion::Behaviour*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsNull", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool Fusion::BehaviourUtils::IsNotNull(::Fusion::Behaviour*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsNotNull", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool Fusion::BehaviourUtils::IsAlive(::Fusion::NetworkRunner*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsAlive", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool Fusion::BehaviourUtils::IsNotAlive(::Fusion::NetworkRunner*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsNotAlive", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool Fusion::BehaviourUtils::IsAlive(::Fusion::SimulationBehaviour*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsAlive", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool Fusion::BehaviourUtils::IsNotAlive(::Fusion::SimulationBehaviour*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsNotAlive", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool Fusion::BehaviourUtils::IsAlive(::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsAlive", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool Fusion::BehaviourUtils::IsNotAlive(::Fusion::NetworkObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsNotAlive", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool Fusion::BehaviourUtils::IsSame(::Fusion::Behaviour*  a, ::Fusion::Behaviour*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsSame", {}, {::i2c::type_of<::Fusion::Behaviour*>(), ::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::BehaviourUtils::IsSameNotNull(::Fusion::Behaviour*  a, ::Fusion::Behaviour*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"IsSameNotNull", {}, {::i2c::type_of<::Fusion::Behaviour*>(), ::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::BehaviourUtils_NameDeferred Fusion::BehaviourUtils::GetName(::Fusion::Behaviour*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"GetName", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BehaviourUtils_NameDeferred>(nullptr, ___internal_method, obj);
}
inline ::GlobalNamespace::BehaviourUtils_DeferredJoin Fusion::BehaviourUtils::Join(::System::Collections::IEnumerable*  objects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BehaviourUtils*>(),
                        {"Join", {}, {::i2c::type_of<::System::Collections::IEnumerable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BehaviourUtils_DeferredJoin>(nullptr, ___internal_method, objects);
}
// Ctor Parameters []
constexpr ::Fusion::BehaviourUtils::BehaviourUtils()   {
}
