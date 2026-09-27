#pragma once
// IWYU pragma private; include "Fusion/Behaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "Fusion/zzzz__ILogDumpable_def.hpp"
#include "Fusion/zzzz__ILogSource_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Fusion::Behaviour.DestroyBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Behaviour*)>(&::Fusion::Behaviour::DestroyBehaviour)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f97334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Behaviour*>(),
                        {"DestroyBehaviour", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Behaviour.Fusion_ILogDumpable_Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Behaviour::*)(::System::Text::StringBuilder*)>(&::Fusion::Behaviour::Fusion_ILogDumpable_Dump)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9738c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Behaviour*>(),
                        {"Fusion.ILogDumpable.Dump", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Behaviour.GetDumpString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Behaviour::*)(::System::Text::StringBuilder*)>(&::Fusion::Behaviour::GetDumpString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f97398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Behaviour*>(),
                    {::i2c::class_of<::Fusion::Behaviour*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Behaviour.get_DebugNameThreadSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Behaviour::*)()>(&::Fusion::Behaviour::get_DebugNameThreadSafe)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f9742c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Behaviour*>(),
                        {"get_DebugNameThreadSafe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Behaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Behaviour::*)()>(&::Fusion::Behaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f92034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Behaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline T Fusion::Behaviour::AddBehaviour()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Behaviour*>(),
                    {"AddBehaviour", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool Fusion::Behaviour::TryGetBehaviour(::by_ref<T>  behaviour)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Behaviour*>(),
                    {"TryGetBehaviour", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, behaviour);
}
template<typename T>
inline T Fusion::Behaviour::GetBehaviour()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Behaviour*>(),
                    {"GetBehaviour", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline void Fusion::Behaviour::DestroyBehaviour(::Fusion::Behaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Behaviour*>(),
                        {"DestroyBehaviour", {}, {::i2c::type_of<::Fusion::Behaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour);
}
inline void Fusion::Behaviour::Fusion_ILogDumpable_Dump(::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Behaviour*>(),
                        {"Fusion.ILogDumpable.Dump", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline void Fusion::Behaviour::GetDumpString(::System::Text::StringBuilder*  builder)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Behaviour*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline ::StringW Fusion::Behaviour::get_DebugNameThreadSafe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Behaviour*>(),
                        {"get_DebugNameThreadSafe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Behaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Behaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Behaviour* Fusion::Behaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Behaviour*>());
}
/// @brief Convert operator to "::Fusion::ILogSource"
constexpr  Fusion::Behaviour::operator ::Fusion::ILogSource*() noexcept {
return static_cast<::Fusion::ILogSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::ILogSource"
constexpr ::Fusion::ILogSource* Fusion::Behaviour::i___Fusion__ILogSource() noexcept {
return static_cast<::Fusion::ILogSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::ILogDumpable"
constexpr  Fusion::Behaviour::operator ::Fusion::ILogDumpable*() noexcept {
return static_cast<::Fusion::ILogDumpable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::ILogDumpable"
constexpr ::Fusion::ILogDumpable* Fusion::Behaviour::i___Fusion__ILogDumpable() noexcept {
return static_cast<::Fusion::ILogDumpable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Behaviour::Behaviour()   {
}
