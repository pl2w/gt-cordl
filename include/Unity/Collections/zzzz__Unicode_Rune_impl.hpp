#pragma once
// IWYU pragma private; include "Unity/Collections/Unicode_Rune.hpp"
#include "Unity/Collections/zzzz__Unicode_Rune_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Unicode_Rune.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Unicode_Rune::*)(::System::Object*)>(&::GlobalNamespace::Unicode_Rune::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaf075c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Unicode_Rune>(),
                    {::i2c::class_of<::GlobalNamespace::Unicode_Rune>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Unicode_Rune.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Unicode_Rune::*)()>(&::GlobalNamespace::Unicode_Rune::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf07638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Unicode_Rune>(),
                    {::i2c::class_of<::GlobalNamespace::Unicode_Rune>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::Unicode_Rune::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Unicode_Rune>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::Unicode_Rune::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Unicode_Rune>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Unicode_Rune::Unicode_Rune(int32_t  value) noexcept  {
this->value = value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Unicode_Rune::Unicode_Rune()   {
}
