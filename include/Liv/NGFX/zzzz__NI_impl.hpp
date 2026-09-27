#pragma once
// IWYU pragma private; include "Liv/NGFX/NI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/NGFX/zzzz__NI_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Liv::NGFX::NI.GetPluginEventFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::NGFX::NI::GetPluginEventFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9cdb4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"GetPluginEventFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NI.AllocResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::Liv::NGFX::NI::AllocResource)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cdb55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"AllocResource", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NI.SetGlobalLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::NGFX::LogLevel, bool)>(&::Liv::NGFX::NI::SetGlobalLogLevel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9cdb5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"SetGlobalLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NI.ngfx_create_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::NGFX::NI::ngfx_create_context)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9cdb65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"ngfx_create_context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NI.ngfx_destroy_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::NGFX::NI::ngfx_destroy_context)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cdb6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"ngfx_destroy_context", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NI.ngfx_get_graphics_api
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Liv::NGFX::NI::ngfx_get_graphics_api)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9cdb73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"ngfx_get_graphics_api", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::NI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::NI::*)()>(&::Liv::NGFX::NI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdb7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Liv::NGFX::NI::GetPluginEventFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"GetPluginEventFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline uint32_t Liv::NGFX::NI::AllocResource(::System::IntPtr  resource_ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"AllocResource", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, resource_ctx);
}
inline void Liv::NGFX::NI::SetGlobalLogLevel(::Liv::NGFX::LogLevel  level, bool  enableGLMessages)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"SetGlobalLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level, enableGLMessages);
}
inline ::System::IntPtr Liv::NGFX::NI::ngfx_create_context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"ngfx_create_context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Liv::NGFX::NI::ngfx_destroy_context(::System::IntPtr  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"ngfx_destroy_context", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ctx);
}
inline int32_t Liv::NGFX::NI::ngfx_get_graphics_api()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {"ngfx_get_graphics_api", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Liv::NGFX::NI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::NI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::NGFX::NI* Liv::NGFX::NI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NGFX::NI*>());
}
// Ctor Parameters []
constexpr ::Liv::NGFX::NI::NI()   {
}
