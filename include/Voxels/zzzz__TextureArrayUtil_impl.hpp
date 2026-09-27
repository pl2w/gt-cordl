#pragma once
// IWYU pragma private; include "Voxels/TextureArrayUtil.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Voxels/zzzz__TextureEntry_impl.hpp"
#include "Voxels/zzzz__TextureArrayUtil_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Voxels::TextureArrayUtil.get_UnreadableTextureFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::TextureArrayUtil::*)()>(&::Voxels::TextureArrayUtil::get_UnreadableTextureFound)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5db6a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::TextureArrayUtil*>(),
                        {"get_UnreadableTextureFound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::TextureArrayUtil.get_TexturesReadable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::TextureArrayUtil::*)()>(&::Voxels::TextureArrayUtil::get_TexturesReadable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5db6a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::TextureArrayUtil*>(),
                        {"get_TexturesReadable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::TextureArrayUtil.CreateTextureArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2DArray> (*)(::ArrayW<::UnityEngine::Texture2D*>)>(&::Voxels::TextureArrayUtil::CreateTextureArray)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5db6b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::TextureArrayUtil*>(),
                        {"CreateTextureArray", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::TextureArrayUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::TextureArrayUtil::*)()>(&::Voxels::TextureArrayUtil::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5db6ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::TextureArrayUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Voxels::TextureEntry>& Voxels::TextureArrayUtil::__cordl_internal_get_textureEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEntries;
}
constexpr ::ArrayW<::Voxels::TextureEntry> const& Voxels::TextureArrayUtil::__cordl_internal_get_textureEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureEntries;
}
constexpr void Voxels::TextureArrayUtil::__cordl_internal_set_textureEntries(::ArrayW<::Voxels::TextureEntry>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureEntries = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& Voxels::TextureArrayUtil::__cordl_internal_get_diffuseArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& Voxels::TextureArrayUtil::__cordl_internal_get_diffuseArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseArray;
}
constexpr void Voxels::TextureArrayUtil::__cordl_internal_set_diffuseArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diffuseArray = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& Voxels::TextureArrayUtil::__cordl_internal_get_normalArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& Voxels::TextureArrayUtil::__cordl_internal_get_normalArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalArray;
}
constexpr void Voxels::TextureArrayUtil::__cordl_internal_set_normalArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalArray = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Voxels::TextureArrayUtil::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Voxels::TextureArrayUtil::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void Voxels::TextureArrayUtil::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr bool& Voxels::TextureArrayUtil::__cordl_internal_get_linearNormalMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearNormalMaps;
}
constexpr bool const& Voxels::TextureArrayUtil::__cordl_internal_get_linearNormalMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearNormalMaps;
}
constexpr void Voxels::TextureArrayUtil::__cordl_internal_set_linearNormalMaps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linearNormalMaps = value;
}
constexpr ::StringW& Voxels::TextureArrayUtil::__cordl_internal_get_diffuseName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseName;
}
constexpr ::StringW const& Voxels::TextureArrayUtil::__cordl_internal_get_diffuseName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseName;
}
constexpr void Voxels::TextureArrayUtil::__cordl_internal_set_diffuseName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diffuseName = value;
}
constexpr ::StringW& Voxels::TextureArrayUtil::__cordl_internal_get_normalName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalName;
}
constexpr ::StringW const& Voxels::TextureArrayUtil::__cordl_internal_get_normalName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalName;
}
constexpr void Voxels::TextureArrayUtil::__cordl_internal_set_normalName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalName = value;
}
inline bool Voxels::TextureArrayUtil::get_UnreadableTextureFound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::TextureArrayUtil*>(),
                        {"get_UnreadableTextureFound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Voxels::TextureArrayUtil::get_TexturesReadable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::TextureArrayUtil*>(),
                        {"get_TexturesReadable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2DArray> Voxels::TextureArrayUtil::CreateTextureArray(::ArrayW<::UnityEngine::Texture2D*>  textures)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::TextureArrayUtil*>(),
                        {"CreateTextureArray", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2DArray>>(nullptr, ___internal_method, textures);
}
inline void Voxels::TextureArrayUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::TextureArrayUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::TextureArrayUtil* Voxels::TextureArrayUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::TextureArrayUtil*>());
}
// Ctor Parameters []
constexpr ::Voxels::TextureArrayUtil::TextureArrayUtil()   {
}
