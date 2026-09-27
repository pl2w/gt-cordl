#pragma once
// IWYU pragma private; include "Voxels/AssembleVertexDataJob_Key.hpp"
#include "Unity/Mathematics/zzzz__int4_impl.hpp"
#include "Voxels/zzzz__AssembleVertexDataJob_Key_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AssembleVertexDataJob_Key.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AssembleVertexDataJob_Key::*)(::GlobalNamespace::AssembleVertexDataJob_Key)>(&::GlobalNamespace::AssembleVertexDataJob_Key::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5db67ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssembleVertexDataJob_Key>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::AssembleVertexDataJob_Key>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AssembleVertexDataJob_Key.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AssembleVertexDataJob_Key::*)()>(&::GlobalNamespace::AssembleVertexDataJob_Key::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5db6808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AssembleVertexDataJob_Key>(),
                    {::i2c::class_of<::GlobalNamespace::AssembleVertexDataJob_Key>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::AssembleVertexDataJob_Key::Equals(::GlobalNamespace::AssembleVertexDataJob_Key  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssembleVertexDataJob_Key>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::AssembleVertexDataJob_Key>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t GlobalNamespace::AssembleVertexDataJob_Key::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AssembleVertexDataJob_Key>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::AssembleVertexDataJob_Key>"
constexpr  GlobalNamespace::AssembleVertexDataJob_Key::operator ::System::IEquatable_1<::GlobalNamespace::AssembleVertexDataJob_Key>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::AssembleVertexDataJob_Key>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::AssembleVertexDataJob_Key>"
constexpr ::System::IEquatable_1<::GlobalNamespace::AssembleVertexDataJob_Key>* GlobalNamespace::AssembleVertexDataJob_Key::i___System__IEquatable_1___GlobalNamespace__AssembleVertexDataJob_Key_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::AssembleVertexDataJob_Key>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "srcIdx", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mats", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AssembleVertexDataJob_Key::AssembleVertexDataJob_Key(int32_t  srcIdx, ::Unity::Mathematics::int4  mats) noexcept  {
this->srcIdx = srcIdx;
this->mats = mats;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AssembleVertexDataJob_Key::AssembleVertexDataJob_Key()   {
}
