#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeDataBindingsUpdater_VersionInfo.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeDataBindingsUpdater_VersionInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo::*)(::System::Object*, int64_t)>(&::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb72ef38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo::_ctor(::System::Object*  source, int64_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, version);
}
// Ctor Parameters [CppParam { name: "source", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo::VisualTreeDataBindingsUpdater_VersionInfo(::System::Object*  source, int64_t  version) noexcept  {
this->source = source;
this->version = version;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo::VisualTreeDataBindingsUpdater_VersionInfo()   {
}
