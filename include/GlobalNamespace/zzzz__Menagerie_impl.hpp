#pragma once
// IWYU pragma private; include "GlobalNamespace/Menagerie.hpp"
#include "GlobalNamespace/zzzz__CritterAppearance_impl.hpp"
#include "GlobalNamespace/zzzz__MenagerieSlot_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Menagerie_def.hpp"
#include "GlobalNamespace/zzzz__CritterAppearance_def.hpp"
#include "GlobalNamespace/zzzz__CritterConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__CritterIndex_def.hpp"
#include "GlobalNamespace/zzzz__CritterVisuals_def.hpp"
#include "GlobalNamespace/zzzz__MenagerieCritter_def.hpp"
#include "GlobalNamespace/zzzz__MenagerieDepositBox_def.hpp"
#include "GlobalNamespace/zzzz__MenagerieSlot_def.hpp"
#include "GlobalNamespace/zzzz__Menagerie_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Menagerie.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::Start)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x56f94dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.CritterDepositedInDonationBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::GlobalNamespace::MenagerieCritter*)>(&::GlobalNamespace::Menagerie::CritterDepositedInDonationBox)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56f98a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"CritterDepositedInDonationBox", {}, {::i2c::type_of<::GlobalNamespace::MenagerieCritter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.CritterDepositedInFavoriteBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::GlobalNamespace::MenagerieCritter*)>(&::GlobalNamespace::Menagerie::CritterDepositedInFavoriteBox)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56f9c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"CritterDepositedInFavoriteBox", {}, {::i2c::type_of<::GlobalNamespace::MenagerieCritter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.CritterDepositedInCollectionBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::GlobalNamespace::MenagerieCritter*)>(&::GlobalNamespace::Menagerie::CritterDepositedInCollectionBox)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x56f9dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"CritterDepositedInCollectionBox", {}, {::i2c::type_of<::GlobalNamespace::MenagerieCritter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.OnDepositCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::GlobalNamespace::Menagerie_CritterData*, int32_t)>(&::GlobalNamespace::Menagerie::OnDepositCritter)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x56f9fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"OnDepositCritter", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.AddCritterToNewCritterPen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::GlobalNamespace::Menagerie_CritterData*)>(&::GlobalNamespace::Menagerie::AddCritterToNewCritterPen)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x56fa0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"AddCritterToNewCritterPen", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.AddCritterToCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::GlobalNamespace::Menagerie_CritterData*)>(&::GlobalNamespace::Menagerie::AddCritterToCollection)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56f9ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"AddCritterToCollection", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.DonateCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::GlobalNamespace::Menagerie_CritterData*)>(&::GlobalNamespace::Menagerie::DonateCritter)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56f99a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"DonateCritter", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.SpawnCritterInSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::GlobalNamespace::MenagerieSlot*, ::GlobalNamespace::Menagerie_CritterData*)>(&::GlobalNamespace::Menagerie::SpawnCritterInSlot)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x56fa28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"SpawnCritterInSlot", {}, {::i2c::type_of<::GlobalNamespace::MenagerieSlot*>(), ::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.SpawnCollectionCritterIfShowing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::GlobalNamespace::Menagerie_CritterData*)>(&::GlobalNamespace::Menagerie::SpawnCollectionCritterIfShowing)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x56fa44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"SpawnCollectionCritterIfShowing", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.UpdateMenagerie
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::UpdateMenagerie)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56fa6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"UpdateMenagerie", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.UpdateNewCritterPen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::UpdateNewCritterPen)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56fa72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"UpdateNewCritterPen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.UpdateCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::UpdateCollection)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x56fa810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"UpdateCollection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.UpdateFavoriteCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::UpdateFavoriteCritter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56f9d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"UpdateFavoriteCritter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.NextGroupCollectedCritters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::NextGroupCollectedCritters)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56faa18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"NextGroupCollectedCritters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.PrevGroupCollectedCritters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::PrevGroupCollectedCritters)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56faa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"PrevGroupCollectedCritters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.GenerateNewCritters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::GenerateNewCritters)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x56faa54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"GenerateNewCritters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.GenerateLegalNewCritters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::GenerateLegalNewCritters)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x56fab94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"GenerateLegalNewCritters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.GenerateNewCritterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(int32_t)>(&::GlobalNamespace::Menagerie::GenerateNewCritterCount)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56faa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"GenerateNewCritterCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.GenerateCollectedCritters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(float_t)>(&::GlobalNamespace::Menagerie::GenerateCollectedCritters)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x56fada0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"GenerateCollectedCritters", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.MoveNewCrittersToCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::MoveNewCrittersToCollection)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56faf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"MoveNewCrittersToCollection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.DonateNewCritters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::DonateNewCritters)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56fb010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"DonateNewCritters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.ClearSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::GlobalNamespace::MenagerieSlot*)>(&::GlobalNamespace::Menagerie::ClearSlot)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56fa964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ClearSlot", {}, {::i2c::type_of<::GlobalNamespace::MenagerieSlot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.DespawnCritterFromSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::GlobalNamespace::MenagerieSlot*)>(&::GlobalNamespace::Menagerie::DespawnCritterFromSlot)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x56f9a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"DespawnCritterFromSlot", {}, {::i2c::type_of<::GlobalNamespace::MenagerieSlot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.ClearNewCritterPen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::ClearNewCritterPen)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x56face4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ClearNewCritterPen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.ClearCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::ClearCollection)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56faee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ClearCollection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.ClearAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::ClearAll)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56fb0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ClearAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.ResetSavedCreatures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::ResetSavedCreatures)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56fb18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ResetSavedCreatures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::Load)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x56f982c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"Load", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::Save)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x56f9b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.LoadCrittersFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)(::StringW)>(&::GlobalNamespace::Menagerie::LoadCrittersFromJson)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x56fb1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"LoadCrittersFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.SaveCrittersToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::SaveCrittersToJson)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56fb314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"SaveCrittersToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.ValidateSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::ValidateSaveData)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x56fb3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ValidateSaveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56fb54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie::*)()>(&::GlobalNamespace::Menagerie::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x56fb670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CritterIndex>& GlobalNamespace::Menagerie::__cordl_internal_get_critterIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterIndex;
}
constexpr ::UnityW<::GlobalNamespace::CritterIndex> const& GlobalNamespace::Menagerie::__cordl_internal_get_critterIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterIndex;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set_critterIndex(::UnityW<::GlobalNamespace::CritterIndex>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___critterIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieCritter>& GlobalNamespace::Menagerie::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieCritter> const& GlobalNamespace::Menagerie::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set_prefab(::UnityW<::GlobalNamespace::MenagerieCritter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*& GlobalNamespace::Menagerie::__cordl_internal_get__critters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____critters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MenagerieCritter>>* const& GlobalNamespace::Menagerie::__cordl_internal_get__critters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____critters;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set__critters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____critters = value;
}
constexpr ::GlobalNamespace::Menagerie_CritterSaveData*& GlobalNamespace::Menagerie::__cordl_internal_get__savedCritters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedCritters;
}
constexpr ::GlobalNamespace::Menagerie_CritterSaveData* const& GlobalNamespace::Menagerie::__cordl_internal_get__savedCritters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedCritters;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set__savedCritters(::GlobalNamespace::Menagerie_CritterSaveData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____savedCritters = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>& GlobalNamespace::Menagerie::__cordl_internal_get_collection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collection;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>> const& GlobalNamespace::Menagerie::__cordl_internal_get_collection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collection;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set_collection(::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collection = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>& GlobalNamespace::Menagerie::__cordl_internal_get_newCritterPen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newCritterPen;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>> const& GlobalNamespace::Menagerie::__cordl_internal_get_newCritterPen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newCritterPen;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set_newCritterPen(::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newCritterPen = value;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieSlot>& GlobalNamespace::Menagerie::__cordl_internal_get_favoriteCritterSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteCritterSlot;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieSlot> const& GlobalNamespace::Menagerie::__cordl_internal_get_favoriteCritterSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteCritterSlot;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set_favoriteCritterSlot(::UnityW<::GlobalNamespace::MenagerieSlot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___favoriteCritterSlot = value;
}
constexpr int32_t& GlobalNamespace::Menagerie::__cordl_internal_get__collectionPageIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectionPageIndex;
}
constexpr int32_t const& GlobalNamespace::Menagerie::__cordl_internal_get__collectionPageIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectionPageIndex;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set__collectionPageIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collectionPageIndex = value;
}
constexpr int32_t& GlobalNamespace::Menagerie::__cordl_internal_get__totalPages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalPages;
}
constexpr int32_t const& GlobalNamespace::Menagerie::__cordl_internal_get__totalPages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalPages;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set__totalPages(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalPages = value;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox>& GlobalNamespace::Menagerie::__cordl_internal_get_DonationBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DonationBox;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox> const& GlobalNamespace::Menagerie::__cordl_internal_get_DonationBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DonationBox;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set_DonationBox(::UnityW<::GlobalNamespace::MenagerieDepositBox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DonationBox = value;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox>& GlobalNamespace::Menagerie::__cordl_internal_get_FavoriteBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FavoriteBox;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox> const& GlobalNamespace::Menagerie::__cordl_internal_get_FavoriteBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FavoriteBox;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set_FavoriteBox(::UnityW<::GlobalNamespace::MenagerieDepositBox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FavoriteBox = value;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox>& GlobalNamespace::Menagerie::__cordl_internal_get_CollectionBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollectionBox;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox> const& GlobalNamespace::Menagerie::__cordl_internal_get_CollectionBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollectionBox;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set_CollectionBox(::UnityW<::GlobalNamespace::MenagerieDepositBox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CollectionBox = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::Menagerie::__cordl_internal_get_donationCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___donationCounter;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::Menagerie::__cordl_internal_get_donationCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___donationCounter;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set_donationCounter(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___donationCounter = value;
}
constexpr ::StringW& GlobalNamespace::Menagerie::__cordl_internal_get_DonationText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DonationText;
}
constexpr ::StringW const& GlobalNamespace::Menagerie::__cordl_internal_get_DonationText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DonationText;
}
constexpr void GlobalNamespace::Menagerie::__cordl_internal_set_DonationText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DonationText = value;
}
inline void GlobalNamespace::Menagerie::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::CritterDepositedInDonationBox(::GlobalNamespace::MenagerieCritter*  critter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"CritterDepositedInDonationBox", {}, {::i2c::type_of<::GlobalNamespace::MenagerieCritter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter);
}
inline void GlobalNamespace::Menagerie::CritterDepositedInFavoriteBox(::GlobalNamespace::MenagerieCritter*  critter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"CritterDepositedInFavoriteBox", {}, {::i2c::type_of<::GlobalNamespace::MenagerieCritter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter);
}
inline void GlobalNamespace::Menagerie::CritterDepositedInCollectionBox(::GlobalNamespace::MenagerieCritter*  critter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"CritterDepositedInCollectionBox", {}, {::i2c::type_of<::GlobalNamespace::MenagerieCritter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter);
}
inline void GlobalNamespace::Menagerie::OnDepositCritter(::GlobalNamespace::Menagerie_CritterData*  depositedCritter, int32_t  playerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"OnDepositCritter", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depositedCritter, playerID);
}
inline void GlobalNamespace::Menagerie::AddCritterToNewCritterPen(::GlobalNamespace::Menagerie_CritterData*  critterData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"AddCritterToNewCritterPen", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critterData);
}
inline void GlobalNamespace::Menagerie::AddCritterToCollection(::GlobalNamespace::Menagerie_CritterData*  critterData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"AddCritterToCollection", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critterData);
}
inline void GlobalNamespace::Menagerie::DonateCritter(::GlobalNamespace::Menagerie_CritterData*  critterData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"DonateCritter", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critterData);
}
inline void GlobalNamespace::Menagerie::SpawnCritterInSlot(::GlobalNamespace::MenagerieSlot*  slot, ::GlobalNamespace::Menagerie_CritterData*  critterData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"SpawnCritterInSlot", {}, {::i2c::type_of<::GlobalNamespace::MenagerieSlot*>(), ::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot, critterData);
}
inline void GlobalNamespace::Menagerie::SpawnCollectionCritterIfShowing(::GlobalNamespace::Menagerie_CritterData*  critter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"SpawnCollectionCritterIfShowing", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter);
}
inline void GlobalNamespace::Menagerie::UpdateMenagerie()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"UpdateMenagerie", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::UpdateNewCritterPen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"UpdateNewCritterPen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::UpdateCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"UpdateCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::UpdateFavoriteCritter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"UpdateFavoriteCritter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::NextGroupCollectedCritters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"NextGroupCollectedCritters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::PrevGroupCollectedCritters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"PrevGroupCollectedCritters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::GenerateNewCritters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"GenerateNewCritters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::GenerateLegalNewCritters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"GenerateLegalNewCritters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::GenerateNewCritterCount(int32_t  critterCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"GenerateNewCritterCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critterCount);
}
inline void GlobalNamespace::Menagerie::GenerateCollectedCritters(float_t  spawnChance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"GenerateCollectedCritters", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spawnChance);
}
inline void GlobalNamespace::Menagerie::MoveNewCrittersToCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"MoveNewCrittersToCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::DonateNewCritters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"DonateNewCritters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::ClearSlot(::GlobalNamespace::MenagerieSlot*  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ClearSlot", {}, {::i2c::type_of<::GlobalNamespace::MenagerieSlot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot);
}
inline void GlobalNamespace::Menagerie::DespawnCritterFromSlot(::GlobalNamespace::MenagerieSlot*  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"DespawnCritterFromSlot", {}, {::i2c::type_of<::GlobalNamespace::MenagerieSlot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot);
}
inline void GlobalNamespace::Menagerie::ClearNewCritterPen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ClearNewCritterPen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::ClearCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ClearCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::ClearAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ClearAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::ResetSavedCreatures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ResetSavedCreatures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::Load()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"Load", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::LoadCrittersFromJson(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"LoadCrittersFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString);
}
inline ::StringW GlobalNamespace::Menagerie::SaveCrittersToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"SaveCrittersToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::ValidateSaveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"ValidateSaveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Menagerie* GlobalNamespace::Menagerie::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Menagerie*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Menagerie::Menagerie()   {
}
//  Writing Method size for method: ::GlobalNamespace::Menagerie_CritterSaveData.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie_CritterSaveData::*)()>(&::GlobalNamespace::Menagerie_CritterSaveData::Clear)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56fb0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterSaveData*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie_CritterSaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie_CritterSaveData::*)()>(&::GlobalNamespace::Menagerie_CritterSaveData::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56fb758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterSaveData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Menagerie_CritterData*>*& GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_get_newCritters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newCritters;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Menagerie_CritterData*>* const& GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_get_newCritters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newCritters;
}
constexpr void GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_set_newCritters(::System::Collections::Generic::List_1<::GlobalNamespace::Menagerie_CritterData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newCritters = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::Menagerie_CritterData*>*& GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_get_collectedCritters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectedCritters;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::Menagerie_CritterData*>* const& GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_get_collectedCritters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectedCritters;
}
constexpr void GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_set_collectedCritters(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::Menagerie_CritterData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectedCritters = value;
}
constexpr int32_t& GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_get_donatedCritterCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___donatedCritterCount;
}
constexpr int32_t const& GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_get_donatedCritterCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___donatedCritterCount;
}
constexpr void GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_set_donatedCritterCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___donatedCritterCount = value;
}
constexpr int32_t& GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_get_favoriteCritter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteCritter;
}
constexpr int32_t const& GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_get_favoriteCritter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteCritter;
}
constexpr void GlobalNamespace::Menagerie_CritterSaveData::__cordl_internal_set_favoriteCritter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___favoriteCritter = value;
}
inline void GlobalNamespace::Menagerie_CritterSaveData::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterSaveData*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie_CritterSaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterSaveData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Menagerie_CritterSaveData* GlobalNamespace::Menagerie_CritterSaveData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Menagerie_CritterSaveData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Menagerie_CritterSaveData::Menagerie_CritterSaveData()   {
}
//  Writing Method size for method: ::GlobalNamespace::Menagerie_CritterData.GetConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CritterConfiguration* (::GlobalNamespace::Menagerie_CritterData::*)()>(&::GlobalNamespace::Menagerie_CritterData::GetConfiguration)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56fb83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {"GetConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie_CritterData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie_CritterData::*)()>(&::GlobalNamespace::Menagerie_CritterData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fb8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie_CritterData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie_CritterData::*)(::GlobalNamespace::CritterConfiguration*, ::GlobalNamespace::CritterAppearance)>(&::GlobalNamespace::Menagerie_CritterData::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56fb8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CritterConfiguration*>(), ::i2c::type_of<::GlobalNamespace::CritterAppearance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie_CritterData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie_CritterData::*)(int32_t, ::GlobalNamespace::CritterAppearance)>(&::GlobalNamespace::Menagerie_CritterData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56fad58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::CritterAppearance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie_CritterData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie_CritterData::*)(::GlobalNamespace::CritterVisuals*)>(&::GlobalNamespace::Menagerie_CritterData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56fb974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CritterVisuals*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie_CritterData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Menagerie_CritterData::*)(::GlobalNamespace::Menagerie_CritterData*)>(&::GlobalNamespace::Menagerie_CritterData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56fb9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Menagerie_CritterData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Menagerie_CritterData::*)()>(&::GlobalNamespace::Menagerie_CritterData::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56fb9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                    {::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::Menagerie_CritterData::__cordl_internal_get_critterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterType;
}
constexpr int32_t const& GlobalNamespace::Menagerie_CritterData::__cordl_internal_get_critterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterType;
}
constexpr void GlobalNamespace::Menagerie_CritterData::__cordl_internal_set_critterType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___critterType = value;
}
constexpr ::GlobalNamespace::CritterAppearance& GlobalNamespace::Menagerie_CritterData::__cordl_internal_get_appearance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appearance;
}
constexpr ::GlobalNamespace::CritterAppearance const& GlobalNamespace::Menagerie_CritterData::__cordl_internal_get_appearance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appearance;
}
constexpr void GlobalNamespace::Menagerie_CritterData::__cordl_internal_set_appearance(::GlobalNamespace::CritterAppearance  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appearance = value;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieCritter>& GlobalNamespace::Menagerie_CritterData::__cordl_internal_get_instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
constexpr ::UnityW<::GlobalNamespace::MenagerieCritter> const& GlobalNamespace::Menagerie_CritterData::__cordl_internal_get_instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
constexpr void GlobalNamespace::Menagerie_CritterData::__cordl_internal_set_instance(::UnityW<::GlobalNamespace::MenagerieCritter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instance = value;
}
inline ::GlobalNamespace::CritterConfiguration* GlobalNamespace::Menagerie_CritterData::GetConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {"GetConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CritterConfiguration*>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie_CritterData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Menagerie_CritterData::_ctor(::GlobalNamespace::CritterConfiguration*  config, ::GlobalNamespace::CritterAppearance  appearance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CritterConfiguration*>(), ::i2c::type_of<::GlobalNamespace::CritterAppearance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config, appearance);
}
inline void GlobalNamespace::Menagerie_CritterData::_ctor(int32_t  critterType, ::GlobalNamespace::CritterAppearance  appearance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::CritterAppearance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critterType, appearance);
}
inline void GlobalNamespace::Menagerie_CritterData::_ctor(::GlobalNamespace::CritterVisuals*  visuals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CritterVisuals*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visuals);
}
inline void GlobalNamespace::Menagerie_CritterData::_ctor(::GlobalNamespace::Menagerie_CritterData*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Menagerie_CritterData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::StringW GlobalNamespace::Menagerie_CritterData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Menagerie_CritterData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::Menagerie_CritterData* GlobalNamespace::Menagerie_CritterData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Menagerie_CritterData*>());
}
inline ::GlobalNamespace::Menagerie_CritterData* GlobalNamespace::Menagerie_CritterData::New_ctor(::GlobalNamespace::CritterConfiguration*  config, ::GlobalNamespace::CritterAppearance  appearance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Menagerie_CritterData*>(config, appearance));
}
inline ::GlobalNamespace::Menagerie_CritterData* GlobalNamespace::Menagerie_CritterData::New_ctor(int32_t  critterType, ::GlobalNamespace::CritterAppearance  appearance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Menagerie_CritterData*>(critterType, appearance));
}
inline ::GlobalNamespace::Menagerie_CritterData* GlobalNamespace::Menagerie_CritterData::New_ctor(::GlobalNamespace::CritterVisuals*  visuals)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Menagerie_CritterData*>(visuals));
}
inline ::GlobalNamespace::Menagerie_CritterData* GlobalNamespace::Menagerie_CritterData::New_ctor(::GlobalNamespace::Menagerie_CritterData*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Menagerie_CritterData*>(source));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Menagerie_CritterData::Menagerie_CritterData()   {
}
