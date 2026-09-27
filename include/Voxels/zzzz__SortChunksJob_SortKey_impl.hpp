#pragma once
// IWYU pragma private; include "Voxels/SortChunksJob_SortKey.hpp"
#include "Voxels/zzzz__SortChunksJob_SortKey_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SortChunksJob_SortKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SortChunksJob_SortKey::*)(uint64_t)>(&::GlobalNamespace::SortChunksJob_SortKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db19e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortChunksJob_SortKey>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SortChunksJob_SortKey.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SortChunksJob_SortKey::*)(::GlobalNamespace::SortChunksJob_SortKey)>(&::GlobalNamespace::SortChunksJob_SortKey::CompareTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db19e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortChunksJob_SortKey>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::SortChunksJob_SortKey>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SortChunksJob_SortKey::_ctor(uint64_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortChunksJob_SortKey>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, val);
}
inline int32_t GlobalNamespace::SortChunksJob_SortKey::CompareTo(::GlobalNamespace::SortChunksJob_SortKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortChunksJob_SortKey>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::SortChunksJob_SortKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::SortChunksJob_SortKey>"
constexpr  GlobalNamespace::SortChunksJob_SortKey::operator ::System::IComparable_1<::GlobalNamespace::SortChunksJob_SortKey>*()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::SortChunksJob_SortKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::SortChunksJob_SortKey>"
constexpr ::System::IComparable_1<::GlobalNamespace::SortChunksJob_SortKey>* GlobalNamespace::SortChunksJob_SortKey::i___System__IComparable_1___GlobalNamespace__SortChunksJob_SortKey_()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::SortChunksJob_SortKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SortChunksJob_SortKey::SortChunksJob_SortKey(uint64_t  value) noexcept  {
this->value = value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SortChunksJob_SortKey::SortChunksJob_SortKey()   {
}
