#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderFactory.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderFactory_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__BuilderUIResource_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderOptionButton_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)()>(&::GorillaTagScripts::BuilderFactory::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b84300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.InitIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)()>(&::GorillaTagScripts::BuilderFactory::InitIfNeeded)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5b84304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)(::GorillaTagScripts::BuilderTable*)>(&::GorillaTagScripts::BuilderFactory::Setup)> {
  constexpr static std::size_t size = 0x964;
  constexpr static std::size_t addrs = 0x5b845e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"Setup", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)()>(&::GorillaTagScripts::BuilderFactory::Show)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b84f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"Show", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.GetPiecePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPiece> (::GorillaTagScripts::BuilderFactory::*)(int32_t)>(&::GorillaTagScripts::BuilderFactory::GetPiecePrefab)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b8525c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"GetPiecePrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.OnBuildItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)(::GorillaTagScripts::BuilderOptionButton*, bool)>(&::GorillaTagScripts::BuilderFactory::OnBuildItem)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5b853c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnBuildItem", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.OnPrevItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)(::GorillaTagScripts::BuilderOptionButton*, bool)>(&::GorillaTagScripts::BuilderFactory::OnPrevItem)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b856b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnPrevItem", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.OnNextItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)(::GorillaTagScripts::BuilderOptionButton*, bool)>(&::GorillaTagScripts::BuilderFactory::OnNextItem)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b85814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnNextItem", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.OnPrevMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)(::GorillaTagScripts::BuilderOptionButton*, bool)>(&::GorillaTagScripts::BuilderFactory::OnPrevMaterial)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5b858d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnPrevMaterial", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.OnNextMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)(::GorillaTagScripts::BuilderOptionButton*, bool)>(&::GorillaTagScripts::BuilderFactory::OnNextMaterial)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5b85a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnNextMaterial", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.GetSelectedMaterialType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderFactory::*)()>(&::GorillaTagScripts::BuilderFactory::GetSelectedMaterialType)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5b85578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"GetSelectedMaterialType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.GetSelectedMaterialName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::BuilderFactory::*)()>(&::GorillaTagScripts::BuilderFactory::GetSelectedMaterialName)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b85bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"GetSelectedMaterialName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.CanBuildPieceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderFactory::*)(int32_t)>(&::GorillaTagScripts::BuilderFactory::CanBuildPieceType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b85774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"CanBuildPieceType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.CanUseMaterialType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderFactory::*)(int32_t)>(&::GorillaTagScripts::BuilderFactory::CanUseMaterialType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"CanUseMaterialType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.RefreshUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)()>(&::GorillaTagScripts::BuilderFactory::RefreshUI)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5b84f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"RefreshUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.RefreshCostUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)()>(&::GorillaTagScripts::BuilderFactory::RefreshCostUI)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b8636c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"RefreshCostUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.OnAvailableResourcesChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)()>(&::GorillaTagScripts::BuilderFactory::OnAvailableResourcesChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b86554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnAvailableResourcesChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory.CreateRandomPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)()>(&::GorillaTagScripts::BuilderFactory::CreateRandomPiece)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b86558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"CreateRandomPiece", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFactory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFactory::*)()>(&::GorillaTagScripts::BuilderFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b865c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_spawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_spawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_spawnLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnLocation = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderFactory::__cordl_internal_get_pieceTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceTypes;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_pieceTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceTypes;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_pieceTypes(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceTypes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::BuilderFactory::__cordl_internal_get_itemList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_itemList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemList;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_itemList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& GorillaTagScripts::BuilderFactory::__cordl_internal_get_pieceList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_pieceList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceList;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_pieceList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceList = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_buildItemButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildItemButton;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_buildItemButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildItemButton;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_buildItemButton(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buildItemButton = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_itemLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_itemLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemLabel;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_itemLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemLabel = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_prevItemButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevItemButton;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_prevItemButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevItemButton;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_prevItemButton(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevItemButton = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_nextItemButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextItemButton;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_nextItemButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextItemButton;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_nextItemButton(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextItemButton = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_materialLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_materialLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialLabel;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_materialLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialLabel = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_prevMaterialButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevMaterialButton;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_prevMaterialButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevMaterialButton;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_prevMaterialButton(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevMaterialButton = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_nextMaterialButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextMaterialButton;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_nextMaterialButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextMaterialButton;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_nextMaterialButton(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextMaterialButton = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_buildPieceSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildPieceSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_buildPieceSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildPieceSound;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_buildPieceSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buildPieceSound = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_previewMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_previewMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewMarker;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_previewMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previewMarker = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderUIResource>>*& GorillaTagScripts::BuilderFactory::__cordl_internal_get_resourceCostUIs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceCostUIs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderUIResource>>* const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_resourceCostUIs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceCostUIs;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_resourceCostUIs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderUIResource>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceCostUIs = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_previewPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_previewPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewPiece;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_previewPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previewPiece = value;
}
constexpr int32_t& GorillaTagScripts::BuilderFactory::__cordl_internal_get_currPieceTypeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currPieceTypeIndex;
}
constexpr int32_t const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_currPieceTypeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currPieceTypeIndex;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_currPieceTypeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currPieceTypeIndex = value;
}
constexpr int32_t& GorillaTagScripts::BuilderFactory::__cordl_internal_get_currPieceMaterialIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currPieceMaterialIndex;
}
constexpr int32_t const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_currPieceMaterialIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currPieceMaterialIndex;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_currPieceMaterialIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currPieceMaterialIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GorillaTagScripts::BuilderFactory::__cordl_internal_get_pieceTypeToIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceTypeToIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_pieceTypeToIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceTypeToIndex;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_pieceTypeToIndex(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceTypeToIndex = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GorillaTagScripts::BuilderFactory::__cordl_internal_get_table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___table = value;
}
constexpr bool& GorillaTagScripts::BuilderFactory::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GorillaTagScripts::BuilderFactory::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GorillaTagScripts::BuilderFactory::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
inline void GorillaTagScripts::BuilderFactory::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderFactory::InitIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderFactory::Setup(::GorillaTagScripts::BuilderTable*  tableOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"Setup", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableOwner);
}
inline void GorillaTagScripts::BuilderFactory::Show()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"Show", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::BuilderPiece> GorillaTagScripts::BuilderFactory::GetPiecePrefab(int32_t  pieceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"GetPiecePrefab", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPiece>>(this, ___internal_method, pieceType);
}
inline void GorillaTagScripts::BuilderFactory::OnBuildItem(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnBuildItem", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeftHand);
}
inline void GorillaTagScripts::BuilderFactory::OnPrevItem(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnPrevItem", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeftHand);
}
inline void GorillaTagScripts::BuilderFactory::OnNextItem(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnNextItem", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeftHand);
}
inline void GorillaTagScripts::BuilderFactory::OnPrevMaterial(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnPrevMaterial", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeftHand);
}
inline void GorillaTagScripts::BuilderFactory::OnNextMaterial(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnNextMaterial", {}, {::i2c::type_of<::GorillaTagScripts::BuilderOptionButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeftHand);
}
inline int32_t GorillaTagScripts::BuilderFactory::GetSelectedMaterialType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"GetSelectedMaterialType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::BuilderFactory::GetSelectedMaterialName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"GetSelectedMaterialName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderFactory::CanBuildPieceType(int32_t  pieceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"CanBuildPieceType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pieceType);
}
inline bool GorillaTagScripts::BuilderFactory::CanUseMaterialType(int32_t  materalType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"CanUseMaterialType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, materalType);
}
inline void GorillaTagScripts::BuilderFactory::RefreshUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"RefreshUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderFactory::RefreshCostUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"RefreshCostUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderFactory::OnAvailableResourcesChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"OnAvailableResourcesChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderFactory::CreateRandomPiece()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {"CreateRandomPiece", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFactory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderFactory* GorillaTagScripts::BuilderFactory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderFactory*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderFactory::BuilderFactory()   {
}
