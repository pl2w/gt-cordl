#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_SwitchBakedObjectsTexture.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB_SwitchBakedObjectsTexture_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBaker_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_SwitchBakedObjectsTexture.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_SwitchBakedObjectsTexture::*)()>(&::GlobalNamespace::MB_SwitchBakedObjectsTexture::OnGUI)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9dfea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwitchBakedObjectsTexture*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_SwitchBakedObjectsTexture.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_SwitchBakedObjectsTexture::*)()>(&::GlobalNamespace::MB_SwitchBakedObjectsTexture::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9dfeb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwitchBakedObjectsTexture*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_SwitchBakedObjectsTexture.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_SwitchBakedObjectsTexture::*)()>(&::GlobalNamespace::MB_SwitchBakedObjectsTexture::Update)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x9dfec04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwitchBakedObjectsTexture*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_SwitchBakedObjectsTexture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_SwitchBakedObjectsTexture::*)()>(&::GlobalNamespace::MB_SwitchBakedObjectsTexture::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dfee70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwitchBakedObjectsTexture*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::MB_SwitchBakedObjectsTexture::__cordl_internal_get_targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::MB_SwitchBakedObjectsTexture::__cordl_internal_get_targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr void GlobalNamespace::MB_SwitchBakedObjectsTexture::__cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRenderer = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::MB_SwitchBakedObjectsTexture::__cordl_internal_get_materials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::MB_SwitchBakedObjectsTexture::__cordl_internal_get_materials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr void GlobalNamespace::MB_SwitchBakedObjectsTexture::__cordl_internal_set_materials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materials = value;
}
constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker>& GlobalNamespace::MB_SwitchBakedObjectsTexture::__cordl_internal_get_meshBaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBaker;
}
constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker> const& GlobalNamespace::MB_SwitchBakedObjectsTexture::__cordl_internal_get_meshBaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBaker;
}
constexpr void GlobalNamespace::MB_SwitchBakedObjectsTexture::__cordl_internal_set_meshBaker(::UnityW<::GlobalNamespace::MB3_MeshBaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshBaker = value;
}
inline void GlobalNamespace::MB_SwitchBakedObjectsTexture::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwitchBakedObjectsTexture*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_SwitchBakedObjectsTexture::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwitchBakedObjectsTexture*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_SwitchBakedObjectsTexture::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwitchBakedObjectsTexture*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_SwitchBakedObjectsTexture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SwitchBakedObjectsTexture*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_SwitchBakedObjectsTexture* GlobalNamespace::MB_SwitchBakedObjectsTexture::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_SwitchBakedObjectsTexture*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_SwitchBakedObjectsTexture::MB_SwitchBakedObjectsTexture()   {
}
