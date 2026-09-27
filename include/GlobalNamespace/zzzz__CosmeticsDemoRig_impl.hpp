#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsDemoRig.hpp"
#include "GlobalNamespace/zzzz__CosmeticsDemoRig_EdSpawnedCosmetic_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsDemoRig_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsDemoRig_EdSpawnedCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSkin_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticsDemoRig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsDemoRig::*)()>(&::GlobalNamespace::CosmeticsDemoRig::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x565e5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsDemoRig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get__vrRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get__vrRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrRig;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set__vrRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vrRig = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get__vrRigBoneXforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrRigBoneXforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get__vrRigBoneXforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrRigBoneXforms;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set__vrRigBoneXforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vrRigBoneXforms = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get__vrRigSlotXforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrRigSlotXforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get__vrRigSlotXforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrRigSlotXforms;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set__vrRigSlotXforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vrRigSlotXforms = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_chestOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestOffset;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_chestOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestOffset;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_chestOffset(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chestOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_leftArmOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmOffset;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_leftArmOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmOffset;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_leftArmOffset(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_rightArmOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmOffset;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_rightArmOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmOffset;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_rightArmOffset(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_badgeDefaultPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeDefaultPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_badgeDefaultPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeDefaultPos;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_badgeDefaultPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badgeDefaultPos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_badgeDefaultRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeDefaultRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_badgeDefaultRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeDefaultRot;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_badgeDefaultRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badgeDefaultRot = value;
}
constexpr bool& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr bool const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInitialized = value;
}
constexpr ::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_emptyCosmetic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyCosmetic;
}
constexpr ::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_emptyCosmetic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyCosmetic;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_emptyCosmetic(::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyCosmetic = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_defaultFaceMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultFaceMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_defaultFaceMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultFaceMaterial;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_defaultFaceMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultFaceMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_myDefaultSkinMaterialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myDefaultSkinMaterialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_myDefaultSkinMaterialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myDefaultSkinMaterialInstance;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_myDefaultSkinMaterialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myDefaultSkinMaterialInstance = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_materialToChangeTo0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialToChangeTo0;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_materialToChangeTo0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialToChangeTo0;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_materialToChangeTo0(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialToChangeTo0 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_monkeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_monkeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeColor;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_monkeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkeColor = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_currentSkin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSkin;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_currentSkin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSkin;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_currentSkin(::UnityW<::GlobalNamespace::GorillaSkin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSkin = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_defaultSkin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSkin;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_defaultSkin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSkin;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_defaultSkin(::UnityW<::GlobalNamespace::GorillaSkin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultSkin = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_faceMaterialSwaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceMaterialSwaps;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_faceMaterialSwaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceMaterialSwaps;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_faceMaterialSwaps(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceMaterialSwaps = value;
}
constexpr int32_t& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_materialIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialIndex;
}
constexpr int32_t const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_materialIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialIndex;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_materialIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialIndex = value;
}
constexpr int32_t& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_selectedMouth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedMouth;
}
constexpr int32_t const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_selectedMouth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedMouth;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_selectedMouth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedMouth = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>*& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_OnColorChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnColorChange;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>* const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_OnColorChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnColorChange;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_OnColorChange(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnColorChange = value;
}
constexpr ::ArrayW<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic>& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_spawnedCosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedCosmetics;
}
constexpr ::ArrayW<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic> const& GlobalNamespace::CosmeticsDemoRig::__cordl_internal_get_spawnedCosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedCosmetics;
}
constexpr void GlobalNamespace::CosmeticsDemoRig::__cordl_internal_set_spawnedCosmetics(::ArrayW<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnedCosmetics = value;
}
inline void GlobalNamespace::CosmeticsDemoRig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsDemoRig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticsDemoRig* GlobalNamespace::CosmeticsDemoRig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticsDemoRig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsDemoRig::CosmeticsDemoRig()   {
}
