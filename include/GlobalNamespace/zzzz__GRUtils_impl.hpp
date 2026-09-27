#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRUtils_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRUtils.GetToolName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::GRTool_GRToolType)>(&::GlobalNamespace::GRUtils::GetToolName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58ef728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUtils*>(),
                        {"GetToolName", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUtils.GetToolPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRToolProgressionManager_ToolParts (*)(::GlobalNamespace::GRTool_GRToolType)>(&::GlobalNamespace::GRUtils::GetToolPart)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58ef7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUtils*>(),
                        {"GetToolPart", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUtils::*)()>(&::GlobalNamespace::GRUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ef818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::GRUtils::GetToolName(::GlobalNamespace::GRTool_GRToolType  toolType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUtils*>(),
                        {"GetToolName", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, toolType);
}
inline ::GlobalNamespace::GRToolProgressionManager_ToolParts GlobalNamespace::GRUtils::GetToolPart(::GlobalNamespace::GRTool_GRToolType  toolType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUtils*>(),
                        {"GetToolPart", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRToolProgressionManager_ToolParts>(nullptr, ___internal_method, toolType);
}
inline void GlobalNamespace::GRUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRUtils* GlobalNamespace::GRUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRUtils*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRUtils::GRUtils()   {
}
