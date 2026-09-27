#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneManagerDefault_LoadingScope.hpp"
#include "Fusion/zzzz__NetworkSceneManagerDefault_LoadingScope_def.hpp"
#include "Fusion/zzzz__NetworkSceneManagerDefault_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope::*)(::Fusion::NetworkSceneManagerDefault*)>(&::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60f0cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkSceneManagerDefault*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope::*)()>(&::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60f179c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSceneManagerDefault_LoadingScope::_ctor(::Fusion::NetworkSceneManagerDefault*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkSceneManagerDefault*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, manager);
}
inline void GlobalNamespace::NetworkSceneManagerDefault_LoadingScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::NetworkSceneManagerDefault_LoadingScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::NetworkSceneManagerDefault_LoadingScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_manager", ty: "::UnityW<::Fusion::NetworkSceneManagerDefault>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope::NetworkSceneManagerDefault_LoadingScope(::UnityW<::Fusion::NetworkSceneManagerDefault>  _manager) noexcept  {
this->_manager = _manager;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope::NetworkSceneManagerDefault_LoadingScope()   {
}
