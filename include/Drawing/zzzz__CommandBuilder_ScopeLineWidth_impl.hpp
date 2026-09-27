#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_ScopeLineWidth.hpp"
#include "Drawing/zzzz__CommandBuilder_impl.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopeLineWidth_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CommandBuilder_ScopeLineWidth.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandBuilder_ScopeLineWidth::*)()>(&::GlobalNamespace::CommandBuilder_ScopeLineWidth::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x55bc56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CommandBuilder_ScopeLineWidth>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CommandBuilder_ScopeLineWidth::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CommandBuilder_ScopeLineWidth>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CommandBuilder_ScopeLineWidth::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CommandBuilder_ScopeLineWidth::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "builder", ty: "::Drawing::CommandBuilder", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandBuilder_ScopeLineWidth::CommandBuilder_ScopeLineWidth(::Drawing::CommandBuilder  builder) noexcept  {
this->builder = builder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBuilder_ScopeLineWidth::CommandBuilder_ScopeLineWidth()   {
}
