#pragma once
// IWYU pragma private; include "Liv/Lck/Core/FFI/GameInfo.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Liv/Lck/Core/FFI/zzzz__GameInfo_def.hpp"
#include "Liv/Lck/Core/zzzz__GameInfo_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::FFI::GameInfo.AllocateFromGameInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::FFI::GameInfo (*)(::Liv::Lck::Core::GameInfo)>(&::Liv::Lck::Core::FFI::GameInfo::AllocateFromGameInfo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9cfe4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::GameInfo>(),
                        {"AllocateFromGameInfo", {}, {::i2c::type_of<::Liv::Lck::Core::GameInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::GameInfo.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::FFI::GameInfo::*)()>(&::Liv::Lck::Core::FFI::GameInfo::Free)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d02054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::GameInfo>(),
                        {"Free", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::GameInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::FFI::GameInfo::*)(::Liv::Lck::Core::GameInfo)>(&::Liv::Lck::Core::FFI::GameInfo::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d01fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::GameInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::GameInfo>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::Core::FFI::GameInfo Liv::Lck::Core::FFI::GameInfo::AllocateFromGameInfo(::Liv::Lck::Core::GameInfo  gameInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::GameInfo>(),
                        {"AllocateFromGameInfo", {}, {::i2c::type_of<::Liv::Lck::Core::GameInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::FFI::GameInfo>(nullptr, ___internal_method, gameInfo);
}
inline void Liv::Lck::Core::FFI::GameInfo::Free()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::GameInfo>(),
                        {"Free", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Liv::Lck::Core::FFI::GameInfo::_ctor(::Liv::Lck::Core::GameInfo  gameInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::GameInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::GameInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gameInfo);
}
// Ctor Parameters [CppParam { name: "GameName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameVersion", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ProjectName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CompanyName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EngineVersion", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RenderPipeline", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GraphicsAPI", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Platform", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PersistentDataPath", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InteractionSystems", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::FFI::GameInfo::GameInfo(::System::IntPtr  GameName, ::System::IntPtr  GameVersion, ::System::IntPtr  ProjectName, ::System::IntPtr  CompanyName, ::System::IntPtr  EngineVersion, ::System::IntPtr  RenderPipeline, ::System::IntPtr  GraphicsAPI, ::System::IntPtr  Platform, ::System::IntPtr  PersistentDataPath, ::System::IntPtr  InteractionSystems) noexcept  {
this->GameName = GameName;
this->GameVersion = GameVersion;
this->ProjectName = ProjectName;
this->CompanyName = CompanyName;
this->EngineVersion = EngineVersion;
this->RenderPipeline = RenderPipeline;
this->GraphicsAPI = GraphicsAPI;
this->Platform = Platform;
this->PersistentDataPath = PersistentDataPath;
this->InteractionSystems = InteractionSystems;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::FFI::GameInfo::GameInfo()   {
}
