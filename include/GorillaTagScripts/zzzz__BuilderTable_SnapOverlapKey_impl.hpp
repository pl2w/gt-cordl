#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_SnapOverlapKey.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_SnapOverlapKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderTable_SnapOverlapKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderTable_SnapOverlapKey::*)()>(&::GlobalNamespace::BuilderTable_SnapOverlapKey::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ba95e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderTable_SnapOverlapKey>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderTable_SnapOverlapKey>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderTable_SnapOverlapKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderTable_SnapOverlapKey::*)(::GlobalNamespace::BuilderTable_SnapOverlapKey)>(&::GlobalNamespace::BuilderTable_SnapOverlapKey::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ba9684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTable_SnapOverlapKey>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_SnapOverlapKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderTable_SnapOverlapKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderTable_SnapOverlapKey::*)(::System::Object*)>(&::GlobalNamespace::BuilderTable_SnapOverlapKey::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ba96a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderTable_SnapOverlapKey>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderTable_SnapOverlapKey>(), 0}
                ));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::BuilderTable_SnapOverlapKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderTable_SnapOverlapKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::BuilderTable_SnapOverlapKey::Equals(::GlobalNamespace::BuilderTable_SnapOverlapKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTable_SnapOverlapKey>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::BuilderTable_SnapOverlapKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::BuilderTable_SnapOverlapKey::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderTable_SnapOverlapKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
// Ctor Parameters [CppParam { name: "piece", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "otherPiece", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderTable_SnapOverlapKey::BuilderTable_SnapOverlapKey(int64_t  piece, int64_t  otherPiece) noexcept  {
this->piece = piece;
this->otherPiece = otherPiece;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTable_SnapOverlapKey::BuilderTable_SnapOverlapKey()   {
}
