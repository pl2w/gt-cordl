#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimStateHash.hpp"
#include "GlobalNamespace/zzzz__AnimStateHash_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimStateHash.op_Implicit___GlobalNamespace__AnimStateHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AnimStateHash (*)(::StringW)>(&::GlobalNamespace::AnimStateHash::op_Implicit___GlobalNamespace__AnimStateHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a19b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimStateHash>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimStateHash.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::AnimStateHash)>(&::GlobalNamespace::AnimStateHash::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a19b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimStateHash>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::AnimStateHash>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::AnimStateHash GlobalNamespace::AnimStateHash::op_Implicit___GlobalNamespace__AnimStateHash(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimStateHash>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AnimStateHash>(nullptr, ___internal_method, s);
}
inline int32_t GlobalNamespace::AnimStateHash::op_Implicit_int32_t(::GlobalNamespace::AnimStateHash  ash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimStateHash>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::AnimStateHash>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ash);
}
// Ctor Parameters [CppParam { name: "_hash", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AnimStateHash::AnimStateHash(int32_t  _hash) noexcept  {
this->_hash = _hash;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimStateHash::AnimStateHash()   {
}
