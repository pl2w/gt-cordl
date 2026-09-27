#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshRenderer_MeshRendererData.hpp"
#include "GlobalNamespace/zzzz__OVRMeshRenderer_MeshRendererData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMeshRenderer_MeshRendererData.get_IsDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMeshRenderer_MeshRendererData::*)()>(&::GlobalNamespace::OVRMeshRenderer_MeshRendererData::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa668a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"get_IsDataValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMeshRenderer_MeshRendererData.set_IsDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMeshRenderer_MeshRendererData::*)(bool)>(&::GlobalNamespace::OVRMeshRenderer_MeshRendererData::set_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa668a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"set_IsDataValid", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMeshRenderer_MeshRendererData.get_IsDataHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMeshRenderer_MeshRendererData::*)()>(&::GlobalNamespace::OVRMeshRenderer_MeshRendererData::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa668a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"get_IsDataHighConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMeshRenderer_MeshRendererData.set_IsDataHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMeshRenderer_MeshRendererData::*)(bool)>(&::GlobalNamespace::OVRMeshRenderer_MeshRendererData::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa668a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"set_IsDataHighConfidence", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMeshRenderer_MeshRendererData.get_ShouldUseSystemGestureMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMeshRenderer_MeshRendererData::*)()>(&::GlobalNamespace::OVRMeshRenderer_MeshRendererData::get_ShouldUseSystemGestureMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa668a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"get_ShouldUseSystemGestureMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMeshRenderer_MeshRendererData.set_ShouldUseSystemGestureMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMeshRenderer_MeshRendererData::*)(bool)>(&::GlobalNamespace::OVRMeshRenderer_MeshRendererData::set_ShouldUseSystemGestureMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa668a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"set_ShouldUseSystemGestureMaterial", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRMeshRenderer_MeshRendererData::get_IsDataValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"get_IsDataValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRMeshRenderer_MeshRendererData::set_IsDataValid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"set_IsDataValid", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRMeshRenderer_MeshRendererData::get_IsDataHighConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"get_IsDataHighConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRMeshRenderer_MeshRendererData::set_IsDataHighConfidence(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"set_IsDataHighConfidence", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRMeshRenderer_MeshRendererData::get_ShouldUseSystemGestureMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"get_ShouldUseSystemGestureMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRMeshRenderer_MeshRendererData::set_ShouldUseSystemGestureMaterial(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshRenderer_MeshRendererData>(),
                        {"set_ShouldUseSystemGestureMaterial", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ShouldUseSystemGestureMaterial_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRMeshRenderer_MeshRendererData::OVRMeshRenderer_MeshRendererData(bool  _IsDataValid_k__BackingField, bool  _IsDataHighConfidence_k__BackingField, bool  _ShouldUseSystemGestureMaterial_k__BackingField) noexcept  {
this->_IsDataValid_k__BackingField = _IsDataValid_k__BackingField;
this->_IsDataHighConfidence_k__BackingField = _IsDataHighConfidence_k__BackingField;
this->_ShouldUseSystemGestureMaterial_k__BackingField = _ShouldUseSystemGestureMaterial_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshRenderer_MeshRendererData::OVRMeshRenderer_MeshRendererData()   {
}
