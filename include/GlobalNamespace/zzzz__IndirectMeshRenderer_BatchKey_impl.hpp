#pragma once
// IWYU pragma private; include "GlobalNamespace/IndirectMeshRenderer_BatchKey.hpp"
#include "GlobalNamespace/zzzz__IndirectMeshRenderer_BatchKey_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer_BatchKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IndirectMeshRenderer_BatchKey::*)(::GlobalNamespace::IndirectMeshRenderer_BatchKey)>(&::GlobalNamespace::IndirectMeshRenderer_BatchKey::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5697094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_BatchKey>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::IndirectMeshRenderer_BatchKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer_BatchKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IndirectMeshRenderer_BatchKey::*)()>(&::GlobalNamespace::IndirectMeshRenderer_BatchKey::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56970c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_BatchKey>(),
                    {::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_BatchKey>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer_BatchKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IndirectMeshRenderer_BatchKey::*)(::System::Object*)>(&::GlobalNamespace::IndirectMeshRenderer_BatchKey::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x56970e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_BatchKey>(),
                    {::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_BatchKey>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IndirectMeshRenderer_BatchKey::Equals(::GlobalNamespace::IndirectMeshRenderer_BatchKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_BatchKey>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::IndirectMeshRenderer_BatchKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t GlobalNamespace::IndirectMeshRenderer_BatchKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_BatchKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::IndirectMeshRenderer_BatchKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_BatchKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::IndirectMeshRenderer_BatchKey>"
constexpr  GlobalNamespace::IndirectMeshRenderer_BatchKey::operator ::System::IEquatable_1<::GlobalNamespace::IndirectMeshRenderer_BatchKey>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::IndirectMeshRenderer_BatchKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::IndirectMeshRenderer_BatchKey>"
constexpr ::System::IEquatable_1<::GlobalNamespace::IndirectMeshRenderer_BatchKey>* GlobalNamespace::IndirectMeshRenderer_BatchKey::i___System__IEquatable_1___GlobalNamespace__IndirectMeshRenderer_BatchKey_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::IndirectMeshRenderer_BatchKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "meshId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textureId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shaderId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::IndirectMeshRenderer_BatchKey::IndirectMeshRenderer_BatchKey(int32_t  meshId, int32_t  textureId, int32_t  shaderId) noexcept  {
this->meshId = meshId;
this->textureId = textureId;
this->shaderId = shaderId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndirectMeshRenderer_BatchKey::IndirectMeshRenderer_BatchKey()   {
}
