#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradePurchaseStationShelf.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradePurchaseStationShelf_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradePurchaseStationShelf_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationShelf.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationShelf::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationShelf::Awake)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x58cf1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationShelf.SetMaterialOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationShelf::*)(int32_t, ::UnityEngine::Material*)>(&::GlobalNamespace::GRToolUpgradePurchaseStationShelf::SetMaterialOverride)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x58cd564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>(),
                        {"SetMaterialOverride", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationShelf.SetBacklightStateAndMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationShelf::*)(int32_t, bool, ::UnityEngine::Material*)>(&::GlobalNamespace::GRToolUpgradePurchaseStationShelf::SetBacklightStateAndMaterial)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x58cd834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>(),
                        {"SetBacklightStateAndMaterial", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationShelf._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationShelf::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationShelf::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58cf44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_get_ShelfName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShelfName;
}
constexpr ::StringW const& GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_get_ShelfName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShelfName;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_set_ShelfName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShelfName = value;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>>*& GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_get_slotOriginalMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotOriginalMaterials;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>>* const& GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_get_slotOriginalMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotOriginalMaterials;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_set_slotOriginalMaterials(::System::Collections::Generic::List_1<::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slotOriginalMaterials = value;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityW<::UnityEngine::Renderer>>>*& GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_get_slotRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotRenderers;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityW<::UnityEngine::Renderer>>>* const& GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_get_slotRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotRenderers;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_set_slotRenderers(::System::Collections::Generic::List_1<::ArrayW<::UnityW<::UnityEngine::Renderer>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slotRenderers = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>*& GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_get_gRPurchaseSlots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gRPurchaseSlots;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>* const& GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_get_gRPurchaseSlots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gRPurchaseSlots;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf::__cordl_internal_set_gRPurchaseSlots(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gRPurchaseSlots = value;
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationShelf::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationShelf::SetMaterialOverride(int32_t  slotID, ::UnityEngine::Material*  overrideMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>(),
                        {"SetMaterialOverride", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slotID, overrideMaterial);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationShelf::SetBacklightStateAndMaterial(int32_t  slotID, bool  isEnabled, ::UnityEngine::Material*  materialOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>(),
                        {"SetBacklightStateAndMaterial", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slotID, isEnabled, materialOverride);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationShelf::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolUpgradePurchaseStationShelf* GlobalNamespace::GRToolUpgradePurchaseStationShelf::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolUpgradePurchaseStationShelf*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationShelf::GRToolUpgradePurchaseStationShelf()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58cf528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_set_Name(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_Price()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Price;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_Price() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Price;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_set_Price(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Price = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_SlotPivot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SlotPivot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_SlotPivot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SlotPivot;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_set_SlotPivot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SlotPivot = value;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_PurchaseID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseID;
}
constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts const& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_PurchaseID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseID;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_set_PurchaseID(::GlobalNamespace::GRToolProgressionManager_ToolParts  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseID = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_ToolEntityPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToolEntityPrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_ToolEntityPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToolEntityPrefab;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_set_ToolEntityPrefab(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ToolEntityPrefab = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_RopeYaw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RopeYaw;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_RopeYaw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RopeYaw;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_set_RopeYaw(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RopeYaw = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_RopePitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RopePitch;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_RopePitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RopePitch;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_set_RopePitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RopePitch = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_BacklightRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BacklightRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_BacklightRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BacklightRenderer;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_set_BacklightRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BacklightRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_overrideMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_overrideMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideMaterial;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_set_overrideMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideMaterial = value;
}
constexpr bool& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_canAfford()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canAfford;
}
constexpr bool const& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_canAfford() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canAfford;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_set_canAfford(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canAfford = value;
}
constexpr ::StringW& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_purchaseText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseText;
}
constexpr ::StringW const& GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_get_purchaseText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseText;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::__cordl_internal_set_purchaseText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseText = value;
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot* GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot()   {
}
