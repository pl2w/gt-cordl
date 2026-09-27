#pragma once
// IWYU pragma private; include "Drawing/DrawingData_Hasher.hpp"
#include "Drawing/zzzz__DrawingData_Hasher_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DrawingData_Hasher.get_NotSupplied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DrawingData_Hasher (*)()>(&::GlobalNamespace::DrawingData_Hasher::get_NotSupplied)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55cbf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_Hasher>(),
                        {"get_NotSupplied", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_Hasher.get_Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::DrawingData_Hasher::*)()>(&::GlobalNamespace::DrawingData_Hasher::get_Hash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ce9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_Hasher>(),
                        {"get_Hash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_Hasher.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DrawingData_Hasher::*)()>(&::GlobalNamespace::DrawingData_Hasher::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ce9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DrawingData_Hasher>(),
                    {::i2c::class_of<::GlobalNamespace::DrawingData_Hasher>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_Hasher.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DrawingData_Hasher::*)(::GlobalNamespace::DrawingData_Hasher)>(&::GlobalNamespace::DrawingData_Hasher::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55cc1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_Hasher>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::DrawingData_Hasher GlobalNamespace::DrawingData_Hasher::get_NotSupplied()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_Hasher>(),
                        {"get_NotSupplied", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DrawingData_Hasher>(nullptr, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::DrawingData_Hasher GlobalNamespace::DrawingData_Hasher::Create(T  init)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DrawingData_Hasher>(),
                    {"Create", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DrawingData_Hasher>(nullptr, ___internal_method, init);
}
template<typename T>
inline void GlobalNamespace::DrawingData_Hasher::Add(T  hash)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DrawingData_Hasher>(),
                    {"Add", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hash);
}
inline uint64_t GlobalNamespace::DrawingData_Hasher::get_Hash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_Hasher>(),
                        {"get_Hash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::DrawingData_Hasher::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DrawingData_Hasher>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::DrawingData_Hasher::Equals(::GlobalNamespace::DrawingData_Hasher  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_Hasher>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::DrawingData_Hasher>"
constexpr  GlobalNamespace::DrawingData_Hasher::operator ::System::IEquatable_1<::GlobalNamespace::DrawingData_Hasher>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::DrawingData_Hasher>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::DrawingData_Hasher>"
constexpr ::System::IEquatable_1<::GlobalNamespace::DrawingData_Hasher>* GlobalNamespace::DrawingData_Hasher::i___System__IEquatable_1___GlobalNamespace__DrawingData_Hasher_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::DrawingData_Hasher>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "hash", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DrawingData_Hasher::DrawingData_Hasher(uint64_t  hash) noexcept  {
this->hash = hash;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawingData_Hasher::DrawingData_Hasher()   {
}
