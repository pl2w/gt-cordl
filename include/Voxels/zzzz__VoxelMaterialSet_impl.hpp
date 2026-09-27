#pragma once
// IWYU pragma private; include "Voxels/VoxelMaterialSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Voxels/zzzz__VoxelMaterial_impl.hpp"
#include "Voxels/zzzz__VoxelMaterialSet_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Voxels/zzzz__VoxelMaterialSet_def.hpp"
#include "Voxels/zzzz__VoxelMaterial_def.hpp"
//  Writing Method size for method: ::Voxels::VoxelMaterialSet.get_TextureArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2DArray> (::Voxels::VoxelMaterialSet::*)()>(&::Voxels::VoxelMaterialSet::get_TextureArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dcdea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"get_TextureArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelMaterialSet.set_TextureArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelMaterialSet::*)(::UnityEngine::Texture2DArray*)>(&::Voxels::VoxelMaterialSet::set_TextureArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dcdea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"set_TextureArray", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelMaterialSet.get_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::Voxels::VoxelMaterialSet::*)()>(&::Voxels::VoxelMaterialSet::get_Material)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dcdeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"get_Material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelMaterialSet.set_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelMaterialSet::*)(::UnityEngine::Material*)>(&::Voxels::VoxelMaterialSet::set_Material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dce188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelMaterialSet.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelMaterialSet::*)()>(&::Voxels::VoxelMaterialSet::Init)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5dcdec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelMaterialSet.GetHardness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Voxels::VoxelMaterialSet::*)(uint8_t)>(&::Voxels::VoxelMaterialSet::GetHardness)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5dce190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"GetHardness", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelMaterialSet.PlayDigFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelMaterialSet::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<int32_t>)>(&::Voxels::VoxelMaterialSet::PlayDigFX)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5dc3cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"PlayDigFX", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelMaterialSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelMaterialSet::*)()>(&::Voxels::VoxelMaterialSet::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dce1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Voxels::VoxelMaterial>& Voxels::VoxelMaterialSet::__cordl_internal_get_Materials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Materials;
}
constexpr ::ArrayW<::Voxels::VoxelMaterial> const& Voxels::VoxelMaterialSet::__cordl_internal_get_Materials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Materials;
}
constexpr void Voxels::VoxelMaterialSet::__cordl_internal_set_Materials(::ArrayW<::Voxels::VoxelMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Materials = value;
}
constexpr float_t& Voxels::VoxelMaterialSet::__cordl_internal_get_tile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tile;
}
constexpr float_t const& Voxels::VoxelMaterialSet::__cordl_internal_get_tile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tile;
}
constexpr void Voxels::VoxelMaterialSet::__cordl_internal_set_tile(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tile = value;
}
constexpr float_t& Voxels::VoxelMaterialSet::__cordl_internal_get_backlightPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backlightPower;
}
constexpr float_t const& Voxels::VoxelMaterialSet::__cordl_internal_get_backlightPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backlightPower;
}
constexpr void Voxels::VoxelMaterialSet::__cordl_internal_set_backlightPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backlightPower = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& Voxels::VoxelMaterialSet::__cordl_internal_get__TextureArray_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureArray_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& Voxels::VoxelMaterialSet::__cordl_internal_get__TextureArray_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureArray_k__BackingField;
}
constexpr void Voxels::VoxelMaterialSet::__cordl_internal_set__TextureArray_k__BackingField(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TextureArray_k__BackingField = value;
}
constexpr bool& Voxels::VoxelMaterialSet::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& Voxels::VoxelMaterialSet::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void Voxels::VoxelMaterialSet::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Voxels::VoxelMaterialSet::__cordl_internal_get__material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Voxels::VoxelMaterialSet::__cordl_internal_get__material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr void Voxels::VoxelMaterialSet::__cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____material = value;
}
constexpr int32_t& Voxels::VoxelMaterialSet::__cordl_internal_get__lastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrame;
}
constexpr int32_t const& Voxels::VoxelMaterialSet::__cordl_internal_get__lastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrame;
}
constexpr void Voxels::VoxelMaterialSet::__cordl_internal_set__lastFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFrame = value;
}
constexpr int32_t& Voxels::VoxelMaterialSet::__cordl_internal_get__callCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callCount;
}
constexpr int32_t const& Voxels::VoxelMaterialSet::__cordl_internal_get__callCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callCount;
}
constexpr void Voxels::VoxelMaterialSet::__cordl_internal_set__callCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callCount = value;
}
inline ::UnityW<::UnityEngine::Texture2DArray> Voxels::VoxelMaterialSet::get_TextureArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"get_TextureArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2DArray>>(this, ___internal_method);
}
inline void Voxels::VoxelMaterialSet::set_TextureArray(::UnityEngine::Texture2DArray*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"set_TextureArray", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> Voxels::VoxelMaterialSet::get_Material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"get_Material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void Voxels::VoxelMaterialSet::set_Material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Voxels::VoxelMaterialSet::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Voxels::VoxelMaterialSet::GetHardness(uint8_t  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"GetHardness", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material);
}
inline void Voxels::VoxelMaterialSet::PlayDigFX(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal, ::ArrayW<int32_t>  amounts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {"PlayDigFX", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, normal, amounts);
}
inline void Voxels::VoxelMaterialSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::VoxelMaterialSet* Voxels::VoxelMaterialSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelMaterialSet*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelMaterialSet::VoxelMaterialSet()   {
}
//  Writing Method size for method: ::Voxels::VoxelMaterialSet___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelMaterialSet___c::*)()>(&::Voxels::VoxelMaterialSet___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dce244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelMaterialSet___c._Init_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::Voxels::VoxelMaterialSet___c::*)(::Voxels::VoxelMaterial)>(&::Voxels::VoxelMaterialSet___c::_Init_b__14_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dce24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet___c*>(),
                        {"<Init>b__14_0", {}, {::i2c::type_of<::Voxels::VoxelMaterial>()}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::VoxelMaterialSet___c::setStaticF___9(::Voxels::VoxelMaterialSet___c*  value)  {
::cordl_internals::setStaticField<::Voxels::VoxelMaterialSet___c*, "<>9", ::Voxels::VoxelMaterialSet___c*>(std::forward<::Voxels::VoxelMaterialSet___c*>(value));
}
inline ::Voxels::VoxelMaterialSet___c* Voxels::VoxelMaterialSet___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Voxels::VoxelMaterialSet___c*, "<>9", ::Voxels::VoxelMaterialSet___c*>();
}
inline void Voxels::VoxelMaterialSet___c::setStaticF___9__14_0(::System::Func_2<::Voxels::VoxelMaterial,::UnityW<::UnityEngine::Texture2D>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Voxels::VoxelMaterial,::UnityW<::UnityEngine::Texture2D>>*, "<>9__14_0", ::Voxels::VoxelMaterialSet___c*>(std::forward<::System::Func_2<::Voxels::VoxelMaterial,::UnityW<::UnityEngine::Texture2D>>*>(value));
}
inline ::System::Func_2<::Voxels::VoxelMaterial,::UnityW<::UnityEngine::Texture2D>>* Voxels::VoxelMaterialSet___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Voxels::VoxelMaterial,::UnityW<::UnityEngine::Texture2D>>*, "<>9__14_0", ::Voxels::VoxelMaterialSet___c*>();
}
inline void Voxels::VoxelMaterialSet___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> Voxels::VoxelMaterialSet___c::_Init_b__14_0(::Voxels::VoxelMaterial  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelMaterialSet___c*>(),
                        {"<Init>b__14_0", {}, {::i2c::type_of<::Voxels::VoxelMaterial>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, m);
}
inline ::Voxels::VoxelMaterialSet___c* Voxels::VoxelMaterialSet___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelMaterialSet___c*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelMaterialSet___c::VoxelMaterialSet___c()   {
}
