#pragma once
// IWYU pragma private; include "Fusion/LogUtils_DumpDeferredClass.hpp"
#include "Fusion/zzzz__LogUtils_DumpDeferredClass_def.hpp"
#include "Fusion/zzzz__ILogDumpable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LogUtils_DumpDeferredClass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LogUtils_DumpDeferredClass::*)(::Fusion::ILogDumpable*)>(&::GlobalNamespace::LogUtils_DumpDeferredClass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f46b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogUtils_DumpDeferredClass>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::ILogDumpable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LogUtils_DumpDeferredClass.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LogUtils_DumpDeferredClass::*)()>(&::GlobalNamespace::LogUtils_DumpDeferredClass::ToString)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f46b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LogUtils_DumpDeferredClass>(),
                    {::i2c::class_of<::GlobalNamespace::LogUtils_DumpDeferredClass>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LogUtils_DumpDeferredClass::_ctor(::Fusion::ILogDumpable*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogUtils_DumpDeferredClass>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::ILogDumpable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj);
}
inline ::StringW GlobalNamespace::LogUtils_DumpDeferredClass::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LogUtils_DumpDeferredClass>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Obj", ty: "::Fusion::ILogDumpable*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LogUtils_DumpDeferredClass::LogUtils_DumpDeferredClass(::Fusion::ILogDumpable*  Obj) noexcept  {
this->Obj = Obj;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LogUtils_DumpDeferredClass::LogUtils_DumpDeferredClass()   {
}
