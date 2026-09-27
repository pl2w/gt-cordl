#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MeshBakerMaterialTexture.hpp"
#include "DigitalOpus/MB/Core/zzzz__DRect_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MeshBakerMaterialTexture_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__DRect_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.set_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)(::UnityEngine::Texture2D*)>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_t)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dcde60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"set_t", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.get_matTilingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DRect (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_matTilingRect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9dcde68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"get_matTilingRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.set_matTilingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)(::DigitalOpus::MB::Core::DRect)>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_matTilingRect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9dcde74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"set_matTilingRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.get_isImportedAsNormalMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_isImportedAsNormalMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dcde80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"get_isImportedAsNormalMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.set_isImportedAsNormalMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)(int32_t)>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_isImportedAsNormalMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dcde88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"set_isImportedAsNormalMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)(::UnityEngine::Texture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t)>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x9dcde90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.GetEncapsulatingSamplingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::DRect (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetEncapsulatingSamplingRect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9dce044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"GetEncapsulatingSamplingRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.SetEncapsulatingSamplingRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)(::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::DRect)>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::SetEncapsulatingSamplingRect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9dce050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"SetEncapsulatingSamplingRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.GetTexture2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetTexture2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9dce05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"GetTexture2D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.get_isNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_isNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9dce11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"get_isNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.get_width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_width)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9dce17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"get_width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.get_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_height)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9dce208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"get_height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.GetTexName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetTexName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9dce294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"GetTexName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerMaterialTexture.AreTexturesEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*)>(&::DigitalOpus::MB::Core::MeshBakerMaterialTexture::AreTexturesEqual)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9dce330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"AreTexturesEqual", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_get__t()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____t;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_get__t() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____t;
}
constexpr void DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_set__t(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____t = value;
}
constexpr float_t& DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_get_texelDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texelDensity;
}
constexpr float_t const& DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_get_texelDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texelDensity;
}
constexpr void DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_set_texelDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texelDensity = value;
}
constexpr ::DigitalOpus::MB::Core::DRect& DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_get_encapsulatingSamplingRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encapsulatingSamplingRect;
}
constexpr ::DigitalOpus::MB::Core::DRect const& DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_get_encapsulatingSamplingRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encapsulatingSamplingRect;
}
constexpr void DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_set_encapsulatingSamplingRect(::DigitalOpus::MB::Core::DRect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encapsulatingSamplingRect = value;
}
constexpr ::DigitalOpus::MB::Core::DRect& DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_get__matTilingRect_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matTilingRect_k__BackingField;
}
constexpr ::DigitalOpus::MB::Core::DRect const& DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_get__matTilingRect_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matTilingRect_k__BackingField;
}
constexpr void DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_set__matTilingRect_k__BackingField(::DigitalOpus::MB::Core::DRect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matTilingRect_k__BackingField = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_get__isImportedAsNormalMap_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isImportedAsNormalMap_k__BackingField;
}
constexpr int32_t const& DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_get__isImportedAsNormalMap_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isImportedAsNormalMap_k__BackingField;
}
constexpr void DigitalOpus::MB::Core::MeshBakerMaterialTexture::__cordl_internal_set__isImportedAsNormalMap_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isImportedAsNormalMap_k__BackingField = value;
}
inline void DigitalOpus::MB::Core::MeshBakerMaterialTexture::setStaticF_readyToBuildAtlases(bool  value)  {
::cordl_internals::setStaticField<bool, "readyToBuildAtlases", ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(std::forward<bool>(value));
}
inline bool DigitalOpus::MB::Core::MeshBakerMaterialTexture::getStaticF_readyToBuildAtlases()  {
return ::cordl_internals::getStaticField<bool, "readyToBuildAtlases", ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>();
}
inline void DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_t(::UnityEngine::Texture2D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"set_t", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::DRect DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_matTilingRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"get_matTilingRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DRect>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_matTilingRect(::DigitalOpus::MB::Core::DRect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"set_matTilingRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_isImportedAsNormalMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"get_isImportedAsNormalMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_isImportedAsNormalMap(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"set_isImportedAsNormalMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void DigitalOpus::MB::Core::MeshBakerMaterialTexture::_ctor(::UnityEngine::Texture*  tx, ::UnityEngine::Vector2  matTilingOffset, ::UnityEngine::Vector2  matTilingScale, float_t  texelDens, int32_t  isImportedAsNormalMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tx, matTilingOffset, matTilingScale, texelDens, isImportedAsNormalMap);
}
inline ::DigitalOpus::MB::Core::DRect DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetEncapsulatingSamplingRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"GetEncapsulatingSamplingRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::DRect>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MeshBakerMaterialTexture::SetEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TexSet*  ts, ::DigitalOpus::MB::Core::DRect  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"SetEncapsulatingSamplingRect", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::DRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ts, r);
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetTexture2D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"GetTexture2D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_isNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"get_isNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"get_width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"get_height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetTexName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"GetTexName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MeshBakerMaterialTexture::AreTexturesEqual(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(),
                        {"AreTexturesEqual", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, b);
}
inline ::DigitalOpus::MB::Core::MeshBakerMaterialTexture* DigitalOpus::MB::Core::MeshBakerMaterialTexture::New_ctor(::UnityEngine::Texture*  tx, ::UnityEngine::Vector2  matTilingOffset, ::UnityEngine::Vector2  matTilingScale, float_t  texelDens, int32_t  isImportedAsNormalMap)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>(tx, matTilingOffset, matTilingScale, texelDens, isImportedAsNormalMap));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MeshBakerMaterialTexture::MeshBakerMaterialTexture()   {
}
