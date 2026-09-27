#pragma once
// IWYU pragma private; include "Fusion/FusionUnityLoggerBase_LogContext.hpp"
#include "Fusion/zzzz__LogFlags_impl.hpp"
#include "Fusion/zzzz__FusionUnityLoggerBase_LogContext_def.hpp"
#include "Fusion/zzzz__ILogSource_def.hpp"
#include "Fusion/zzzz__LogFlags_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FusionUnityLoggerBase_LogContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionUnityLoggerBase_LogContext::*)(::StringW, ::StringW, ::Fusion::ILogSource*, ::Fusion::LogFlags)>(&::GlobalNamespace::FusionUnityLoggerBase_LogContext::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f461b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionUnityLoggerBase_LogContext>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::Fusion::LogFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FusionUnityLoggerBase_LogContext::_ctor(::StringW  message, ::StringW  prefix, ::Fusion::ILogSource*  source, ::Fusion::LogFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionUnityLoggerBase_LogContext>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::Fusion::LogFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, message, prefix, source, flags);
}
// Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Source", ty: "::Fusion::ILogSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Prefix", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Flags", ty: "::Fusion::LogFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FusionUnityLoggerBase_LogContext::FusionUnityLoggerBase_LogContext(::StringW  Message, ::Fusion::ILogSource*  Source, ::StringW  Prefix, ::Fusion::LogFlags  Flags) noexcept  {
this->Message = Message;
this->Source = Source;
this->Prefix = Prefix;
this->Flags = Flags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionUnityLoggerBase_LogContext::FusionUnityLoggerBase_LogContext()   {
}
