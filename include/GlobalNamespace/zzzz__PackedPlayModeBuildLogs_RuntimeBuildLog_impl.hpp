#pragma once
// IWYU pragma private; include "GlobalNamespace/PackedPlayModeBuildLogs_RuntimeBuildLog.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "GlobalNamespace/zzzz__PackedPlayModeBuildLogs_RuntimeBuildLog_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog::*)(::UnityEngine::LogType, ::StringW)>(&::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae4c318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog::_ctor(::UnityEngine::LogType  type, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, message);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog::PackedPlayModeBuildLogs_RuntimeBuildLog(::UnityEngine::LogType  Type, ::StringW  Message) noexcept  {
this->Type = Type;
this->Message = Message;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog::PackedPlayModeBuildLogs_RuntimeBuildLog()   {
}
