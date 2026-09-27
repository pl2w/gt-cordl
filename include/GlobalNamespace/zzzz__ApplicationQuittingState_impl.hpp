#pragma once
// IWYU pragma private; include "GlobalNamespace/ApplicationQuittingState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ApplicationQuittingState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ApplicationQuittingState.get_IsQuitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::ApplicationQuittingState::get_IsQuitting)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x564578c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuittingState*>(),
                        {"get_IsQuitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplicationQuittingState.set_IsQuitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::ApplicationQuittingState::set_IsQuitting)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56457d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuittingState*>(),
                        {"set_IsQuitting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplicationQuittingState.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ApplicationQuittingState::Init)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5645824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuittingState*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ApplicationQuittingState.HandleApplicationQuitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ApplicationQuittingState::HandleApplicationQuitting)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56458c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuittingState*>(),
                        {"HandleApplicationQuitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ApplicationQuittingState::setStaticF__IsQuitting_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<IsQuitting>k__BackingField", ::GlobalNamespace::ApplicationQuittingState*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ApplicationQuittingState::getStaticF__IsQuitting_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<IsQuitting>k__BackingField", ::GlobalNamespace::ApplicationQuittingState*>();
}
inline bool GlobalNamespace::ApplicationQuittingState::get_IsQuitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuittingState*>(),
                        {"get_IsQuitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ApplicationQuittingState::set_IsQuitting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuittingState*>(),
                        {"set_IsQuitting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::ApplicationQuittingState::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuittingState*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ApplicationQuittingState::HandleApplicationQuitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ApplicationQuittingState*>(),
                        {"HandleApplicationQuitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ApplicationQuittingState::ApplicationQuittingState()   {
}
