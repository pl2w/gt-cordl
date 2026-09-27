#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolScannable.hpp"
#include "GlobalNamespace/zzzz__GRScannable_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolScannable_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradePiece_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolScannable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolScannable::*)()>(&::GlobalNamespace::GRToolScannable::Start)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58c6cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRToolScannable*>(),
                    {::i2c::class_of<::GlobalNamespace::GRToolScannable*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolScannable.FetchMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolScannable::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRToolScannable::FetchMetadata)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58c6da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolScannable*>(),
                        {"FetchMetadata", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolScannable.GetTitleText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRToolScannable::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRToolScannable::GetTitleText)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58c6eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRToolScannable*>(),
                    {::i2c::class_of<::GlobalNamespace::GRToolScannable*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolScannable.GetBodyText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRToolScannable::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRToolScannable::GetBodyText)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58c6f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRToolScannable*>(),
                    {::i2c::class_of<::GlobalNamespace::GRToolScannable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolScannable.GetAnnotationText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRToolScannable::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRToolScannable::GetAnnotationText)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58c6f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRToolScannable*>(),
                    {::i2c::class_of<::GlobalNamespace::GRToolScannable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolScannable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolScannable::*)()>(&::GlobalNamespace::GRToolScannable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c6ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolScannable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRToolScannable::__cordl_internal_get_tool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRToolScannable::__cordl_internal_get_tool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr void GlobalNamespace::GRToolScannable::__cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tool = value;
}
constexpr ::UnityW<::GlobalNamespace::GRToolUpgradePiece>& GlobalNamespace::GRToolScannable::__cordl_internal_get_upgradePiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradePiece;
}
constexpr ::UnityW<::GlobalNamespace::GRToolUpgradePiece> const& GlobalNamespace::GRToolScannable::__cordl_internal_get_upgradePiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradePiece;
}
constexpr void GlobalNamespace::GRToolScannable::__cordl_internal_set_upgradePiece(::UnityW<::GlobalNamespace::GRToolUpgradePiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradePiece = value;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*& GlobalNamespace::GRToolScannable::__cordl_internal_get_metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metadata;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* const& GlobalNamespace::GRToolScannable::__cordl_internal_get_metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metadata;
}
constexpr void GlobalNamespace::GRToolScannable::__cordl_internal_set_metadata(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___metadata = value;
}
inline void GlobalNamespace::GRToolScannable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRToolScannable*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolScannable::FetchMetadata(::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolScannable*>(),
                        {"FetchMetadata", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline ::StringW GlobalNamespace::GRToolScannable::GetTitleText(::GlobalNamespace::GhostReactor*  reactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRToolScannable*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, reactor);
}
inline ::StringW GlobalNamespace::GRToolScannable::GetBodyText(::GlobalNamespace::GhostReactor*  reactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRToolScannable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, reactor);
}
inline ::StringW GlobalNamespace::GRToolScannable::GetAnnotationText(::GlobalNamespace::GhostReactor*  reactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRToolScannable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, reactor);
}
inline void GlobalNamespace::GRToolScannable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolScannable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolScannable* GlobalNamespace::GRToolScannable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolScannable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolScannable::GRToolScannable()   {
}
