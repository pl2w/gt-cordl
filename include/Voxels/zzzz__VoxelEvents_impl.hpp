#pragma once
// IWYU pragma private; include "Voxels/VoxelEvents.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Voxels/zzzz__VoxelEvents_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Voxels/zzzz__VoxelEvents_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::Voxels::VoxelEvents.add_OnResourcesMinedAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*)>(&::Voxels::VoxelEvents::add_OnResourcesMinedAuthority)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5dc3874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"add_OnResourcesMinedAuthority", {}, {::i2c::type_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelEvents.remove_OnResourcesMinedAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*)>(&::Voxels::VoxelEvents::remove_OnResourcesMinedAuthority)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5dc392c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"remove_OnResourcesMinedAuthority", {}, {::i2c::type_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelEvents.add_OnResourcesMined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelEvents_ResourcesMinedDelegate*)>(&::Voxels::VoxelEvents::add_OnResourcesMined)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5dc39e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"add_OnResourcesMined", {}, {::i2c::type_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelEvents.remove_OnResourcesMined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelEvents_ResourcesMinedDelegate*)>(&::Voxels::VoxelEvents::remove_OnResourcesMined)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5dc3aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"remove_OnResourcesMined", {}, {::i2c::type_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelEvents.HandleResourceMinedAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, ::Voxels::VoxelWorld*, ::ArrayW<int32_t>)>(&::Voxels::VoxelEvents::HandleResourceMinedAuthority)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5dc3b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"HandleResourceMinedAuthority", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelEvents.HandleResourceMined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<int32_t>)>(&::Voxels::VoxelEvents::HandleResourceMined)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5dc3be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"HandleResourceMined", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::VoxelEvents::setStaticF_OnResourcesMinedAuthority(::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*  value)  {
::cordl_internals::setStaticField<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*, "OnResourcesMinedAuthority", ::Voxels::VoxelEvents*>(std::forward<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(value));
}
inline ::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate* Voxels::VoxelEvents::getStaticF_OnResourcesMinedAuthority()  {
return ::cordl_internals::getStaticField<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*, "OnResourcesMinedAuthority", ::Voxels::VoxelEvents*>();
}
inline void Voxels::VoxelEvents::setStaticF_OnResourcesMined(::Voxels::VoxelEvents_ResourcesMinedDelegate*  value)  {
::cordl_internals::setStaticField<::Voxels::VoxelEvents_ResourcesMinedDelegate*, "OnResourcesMined", ::Voxels::VoxelEvents*>(std::forward<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(value));
}
inline ::Voxels::VoxelEvents_ResourcesMinedDelegate* Voxels::VoxelEvents::getStaticF_OnResourcesMined()  {
return ::cordl_internals::getStaticField<::Voxels::VoxelEvents_ResourcesMinedDelegate*, "OnResourcesMined", ::Voxels::VoxelEvents*>();
}
inline void Voxels::VoxelEvents::add_OnResourcesMinedAuthority(::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"add_OnResourcesMinedAuthority", {}, {::i2c::type_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Voxels::VoxelEvents::remove_OnResourcesMinedAuthority(::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"remove_OnResourcesMinedAuthority", {}, {::i2c::type_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Voxels::VoxelEvents::add_OnResourcesMined(::Voxels::VoxelEvents_ResourcesMinedDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"add_OnResourcesMined", {}, {::i2c::type_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Voxels::VoxelEvents::remove_OnResourcesMined(::Voxels::VoxelEvents_ResourcesMinedDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"remove_OnResourcesMined", {}, {::i2c::type_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Voxels::VoxelEvents::HandleResourceMinedAuthority(::GlobalNamespace::NetPlayer*  player, ::Voxels::VoxelWorld*  world, ::ArrayW<int32_t>  amounts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"HandleResourceMinedAuthority", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, world, amounts);
}
inline void Voxels::VoxelEvents::HandleResourceMined(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::ArrayW<int32_t>  amounts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents*>(),
                        {"HandleResourceMined", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, hitPoint, hitNormal, amounts);
}
// Ctor Parameters []
constexpr ::Voxels::VoxelEvents::VoxelEvents()   {
}
//  Writing Method size for method: ::Voxels::VoxelEvents_ResourcesMinedDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelEvents_ResourcesMinedDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Voxels::VoxelEvents_ResourcesMinedDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5dc3fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelEvents_ResourcesMinedDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelEvents_ResourcesMinedDelegate::*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<int32_t>)>(&::Voxels::VoxelEvents_ResourcesMinedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dc40dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(),
                    {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelEvents_ResourcesMinedDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Voxels::VoxelEvents_ResourcesMinedDelegate::*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<int32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::Voxels::VoxelEvents_ResourcesMinedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5dc40f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(),
                    {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelEvents_ResourcesMinedDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelEvents_ResourcesMinedDelegate::*)(::System::IAsyncResult*)>(&::Voxels::VoxelEvents_ResourcesMinedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5dc41b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(),
                    {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Voxels::VoxelEvents_ResourcesMinedDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Voxels::VoxelEvents_ResourcesMinedDelegate::Invoke(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::ArrayW<int32_t>  amounts)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, world, hitPoint, hitNormal, amounts);
}
inline ::System::IAsyncResult* Voxels::VoxelEvents_ResourcesMinedDelegate::BeginInvoke(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::ArrayW<int32_t>  amounts, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, world, hitPoint, hitNormal, amounts, callback, object);
}
inline void Voxels::VoxelEvents_ResourcesMinedDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Voxels::VoxelEvents_ResourcesMinedDelegate* Voxels::VoxelEvents_ResourcesMinedDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelEvents_ResourcesMinedDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Voxels::VoxelEvents_ResourcesMinedDelegate::VoxelEvents_ResourcesMinedDelegate()   {
}
//  Writing Method size for method: ::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5dc3e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::*)(::GlobalNamespace::NetPlayer*, ::Voxels::VoxelWorld*, ::ArrayW<int32_t>)>(&::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dc3f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(),
                    {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::*)(::GlobalNamespace::NetPlayer*, ::Voxels::VoxelWorld*, ::ArrayW<int32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5dc3f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(),
                    {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::*)(::System::IAsyncResult*)>(&::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5dc3fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(),
                    {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::Invoke(::GlobalNamespace::NetPlayer*  player, ::Voxels::VoxelWorld*  world, ::ArrayW<int32_t>  amounts)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, world, amounts);
}
inline ::System::IAsyncResult* Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::BeginInvoke(::GlobalNamespace::NetPlayer*  player, ::Voxels::VoxelWorld*  world, ::ArrayW<int32_t>  amounts, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, player, world, amounts, callback, object);
}
inline void Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate* Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Voxels::VoxelEvents_ResourcesMinedAuthorityDelegate::VoxelEvents_ResourcesMinedAuthorityDelegate()   {
}
