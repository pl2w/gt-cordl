#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelMaterialManager.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VoxelMaterialManager_def.hpp"
#include "GlobalNamespace/zzzz__VoxelMaterialManager_LightingProfile_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoxelMaterialManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelMaterialManager::*)()>(&::GlobalNamespace::VoxelMaterialManager::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dfb238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelMaterialManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelMaterialManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelMaterialManager::*)()>(&::GlobalNamespace::VoxelMaterialManager::Update)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5dfb3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelMaterialManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelMaterialManager.UpdateMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelMaterialManager::*)()>(&::GlobalNamespace::VoxelMaterialManager::UpdateMaterial)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5dfb444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelMaterialManager*>(),
                        {"UpdateMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelMaterialManager.SetLightingProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelMaterialManager::*)(int32_t)>(&::GlobalNamespace::VoxelMaterialManager::SetLightingProfile)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5dfb240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelMaterialManager*>(),
                        {"SetLightingProfile", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelMaterialManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelMaterialManager::*)()>(&::GlobalNamespace::VoxelMaterialManager::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5dfb544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelMaterialManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_voxelMats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelMats;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_voxelMats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelMats;
}
constexpr void GlobalNamespace::VoxelMaterialManager::__cordl_internal_set_voxelMats(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voxelMats = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_lightmapNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_lightmapNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightmapNames;
}
constexpr void GlobalNamespace::VoxelMaterialManager::__cordl_internal_set_lightmapNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightmapNames = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelMaterialManager_LightingProfile>*& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_lightingProfiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingProfiles;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelMaterialManager_LightingProfile>* const& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_lightingProfiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingProfiles;
}
constexpr void GlobalNamespace::VoxelMaterialManager::__cordl_internal_set_lightingProfiles(::System::Collections::Generic::List_1<::GlobalNamespace::VoxelMaterialManager_LightingProfile>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightingProfiles = value;
}
constexpr float_t& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_shadowBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowBrightness;
}
constexpr float_t const& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_shadowBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowBrightness;
}
constexpr void GlobalNamespace::VoxelMaterialManager::__cordl_internal_set_shadowBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowBrightness = value;
}
constexpr float_t& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_backlightBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backlightBrightness;
}
constexpr float_t const& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_backlightBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backlightBrightness;
}
constexpr void GlobalNamespace::VoxelMaterialManager::__cordl_internal_set_backlightBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backlightBrightness = value;
}
constexpr int32_t& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_startingIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingIndex;
}
constexpr int32_t const& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get_startingIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingIndex;
}
constexpr void GlobalNamespace::VoxelMaterialManager::__cordl_internal_set_startingIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingIndex = value;
}
constexpr int32_t& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get__timeOfDayIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOfDayIndex;
}
constexpr int32_t const& GlobalNamespace::VoxelMaterialManager::__cordl_internal_get__timeOfDayIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOfDayIndex;
}
constexpr void GlobalNamespace::VoxelMaterialManager::__cordl_internal_set__timeOfDayIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeOfDayIndex = value;
}
inline void GlobalNamespace::VoxelMaterialManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelMaterialManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoxelMaterialManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelMaterialManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoxelMaterialManager::UpdateMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelMaterialManager*>(),
                        {"UpdateMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoxelMaterialManager::SetLightingProfile(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelMaterialManager*>(),
                        {"SetLightingProfile", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::VoxelMaterialManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelMaterialManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoxelMaterialManager* GlobalNamespace::VoxelMaterialManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoxelMaterialManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelMaterialManager::VoxelMaterialManager()   {
}
