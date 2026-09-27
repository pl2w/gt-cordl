#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioRoomAcousticProperties.hpp"
#include "GlobalNamespace/zzzz__MetaXRAudioRoomAcousticProperties_MaterialPreset_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAudioRoomAcousticProperties_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAudioRoomAcousticProperties_MaterialPreset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioRoomAcousticProperties.CheckSceneHasRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MetaXRAudioRoomAcousticProperties::CheckSceneHasRoom)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9ebd1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties*>(),
                        {"CheckSceneHasRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioRoomAcousticProperties.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioRoomAcousticProperties::*)()>(&::GlobalNamespace::MetaXRAudioRoomAcousticProperties::Update)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x9ebd370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioRoomAcousticProperties.SetWallMaterialPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioRoomAcousticProperties::*)(int32_t, ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset)>(&::GlobalNamespace::MetaXRAudioRoomAcousticProperties::SetWallMaterialPreset)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x9ebd594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties*>(),
                        {"SetWallMaterialPreset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioRoomAcousticProperties.SetWallMaterialProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioRoomAcousticProperties::*)(int32_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAudioRoomAcousticProperties::SetWallMaterialProperties)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9ebda8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties*>(),
                        {"SetWallMaterialProperties", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioRoomAcousticProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioRoomAcousticProperties::*)()>(&::GlobalNamespace::MetaXRAudioRoomAcousticProperties::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9ebdb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_lockPositionToListener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockPositionToListener;
}
constexpr bool const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_lockPositionToListener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockPositionToListener;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_lockPositionToListener(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockPositionToListener = value;
}
constexpr float_t& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr float_t const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr float_t& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr float_t const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr float_t& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr float_t const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_depth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depth = value;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_leftMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftMaterial;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_leftMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftMaterial;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_leftMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftMaterial = value;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_rightMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightMaterial;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_rightMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightMaterial;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_rightMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightMaterial = value;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_ceilingMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ceilingMaterial;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_ceilingMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ceilingMaterial;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_ceilingMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ceilingMaterial = value;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_floorMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorMaterial;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_floorMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floorMaterial;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_floorMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floorMaterial = value;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_frontMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontMaterial;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_frontMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontMaterial;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_frontMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontMaterial = value;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_backMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backMaterial;
}
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_backMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backMaterial;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_backMaterial(::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backMaterial = value;
}
constexpr float_t& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_clutterFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clutterFactor;
}
constexpr float_t const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_clutterFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clutterFactor;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_clutterFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clutterFactor = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_clutterFactorBands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clutterFactorBands;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_clutterFactorBands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clutterFactorBands;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_clutterFactorBands(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clutterFactorBands = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_wallMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallMaterials;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_get_wallMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallMaterials;
}
constexpr void GlobalNamespace::MetaXRAudioRoomAcousticProperties::__cordl_internal_set_wallMaterials(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallMaterials = value;
}
inline void GlobalNamespace::MetaXRAudioRoomAcousticProperties::CheckSceneHasRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties*>(),
                        {"CheckSceneHasRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MetaXRAudioRoomAcousticProperties::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAudioRoomAcousticProperties::SetWallMaterialPreset(int32_t  wallIndex, ::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset  materialPreset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties*>(),
                        {"SetWallMaterialPreset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties_MaterialPreset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wallIndex, materialPreset);
}
inline void GlobalNamespace::MetaXRAudioRoomAcousticProperties::SetWallMaterialProperties(int32_t  wallIndex, float_t  band0, float_t  band1, float_t  band2, float_t  band3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties*>(),
                        {"SetWallMaterialProperties", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wallIndex, band0, band1, band2, band3);
}
inline void GlobalNamespace::MetaXRAudioRoomAcousticProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioRoomAcousticProperties*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAudioRoomAcousticProperties* GlobalNamespace::MetaXRAudioRoomAcousticProperties::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAudioRoomAcousticProperties*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAudioRoomAcousticProperties::MetaXRAudioRoomAcousticProperties()   {
}
