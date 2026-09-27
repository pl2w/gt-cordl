#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_ScopeMatrix.hpp"
#include "Drawing/zzzz__CommandBuilder_impl.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopeMatrix_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CommandBuilder_ScopeMatrix.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CommandBuilder_ScopeMatrix::*)()>(&::GlobalNamespace::CommandBuilder_ScopeMatrix::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x55bc454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CommandBuilder_ScopeMatrix>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CommandBuilder_ScopeMatrix::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CommandBuilder_ScopeMatrix>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CommandBuilder_ScopeMatrix::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CommandBuilder_ScopeMatrix::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "builder", ty: "::Drawing::CommandBuilder", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandBuilder_ScopeMatrix::CommandBuilder_ScopeMatrix(::Drawing::CommandBuilder  builder) noexcept  {
this->builder = builder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBuilder_ScopeMatrix::CommandBuilder_ScopeMatrix()   {
}
